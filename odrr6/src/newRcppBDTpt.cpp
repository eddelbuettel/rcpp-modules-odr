
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
    Rcpp::XPtr< bdtPt > xp(new bdtPt);
    return(xp);
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> newPtSexp(SEXP s) {
    Rcpp::XPtr< bdtPt > xp(new bdtPt(s));
    return(xp);
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> newPtValue(int yy, int mm, int dd, int hh, int min, int sec, int fracsecs) {
    Rcpp::XPtr< bdtPt > xp(new bdtPt(yy,mm,dd,hh,min,sec,fracsecs));
    return(xp);
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> setFromLocalTimeInSeconds(Rcpp::XPtr<bdtPt> p) {
    p.get()->setFromLocalTimeInSeconds();
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> setFromUTCInSeconds(Rcpp::XPtr<bdtPt> p) {
    p.get()->setFromUTCInSeconds();
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> setFromLocalTimeInMicroSeconds(Rcpp::XPtr<bdtPt> p) {
    p.get()->setFromLocalTimeInMicroSeconds();
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> setFromUTCInMicroSeconds(Rcpp::XPtr<bdtPt> p) {
    p.get()->setFromUTCInMicroSeconds();
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> setFromDatetime(Rcpp::XPtr<bdtPt> p, SEXP s) {
    p.get()->setFromDatetime(s);
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> setFromDouble(Rcpp::XPtr<bdtPt> p, double d) {
    p.get()->setFromDouble(d);
    return p;
}

Rcpp::Datetime getDatetime(Rcpp::XPtr<bdtPt> p) {
    return p.get()->getDatetime();
}

Rcpp::Date getDate(Rcpp::XPtr<bdtPt> p) {
    return p.get()->getDate();
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> addHours(Rcpp::XPtr<bdtPt> p, int h) {
    p.get()->addHours(h);
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> addMinutes(Rcpp::XPtr<bdtPt> p, int m) {
    p.get()->addMinutes(m);
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> addSeconds(Rcpp::XPtr<bdtPt> p, int s) {
    p.get()->addSeconds(s);
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtPt> addFractionalSeconds(Rcpp::XPtr<bdtPt> p, int s) {
    p.get()->addFractionalSeconds(s);
    return p;
}
