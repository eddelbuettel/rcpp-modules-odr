
#include <Rcpp/Lightest>
#include <odrr6.h>

// define template specialisations for as and wrap
namespace Rcpp {
    template <> boost::posix_time::ptime as(SEXP dtsexp) {
        Rcpp::Datetime dt(dtsexp);
        boost::posix_time::ptime pt(boost::gregorian::date(dt.getYear(), dt.getMonth(), dt.getDay()),
                                    boost::posix_time::time_duration(dt.getHours(),
                                                                     dt.getMinutes(),
                                                                     dt.getSeconds(),
                                                                     dt.getMicroSeconds()/1000.0));
        return pt;
    }

    template <> SEXP wrap(const boost::posix_time::ptime &dt) {
        boost::posix_time::ptime epoch(boost::gregorian::date(1970,1,1)); // TODO: cache this value...
        boost::posix_time::time_duration x = dt - epoch; 	// this needs a UTC to local correction, but we get the fractional seconds
        struct tm t = boost::posix_time::to_tm(dt);      	// this helps with UTC conversion
        return Rcpp::wrap(Rcpp::Datetime( mktime(&t) + 1.0 * x.fractional_seconds() / x.ticks_per_second()));
    }
}


// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> newPt() {
  auto ptr = new bdtPt;
  Rcpp::XPtr< bdtPt > xp(ptr);
  return(xp);
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> newPtSexp(SEXP s) {
  auto ptr = new bdtPt(s);
  Rcpp::XPtr< bdtPt > xp(ptr);
  return(xp);
}
