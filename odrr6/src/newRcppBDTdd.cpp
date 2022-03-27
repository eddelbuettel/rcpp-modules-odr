#include <Rcpp/Lightest>
#include <odrr6.h>

// [[Rcpp::export]]
Rcpp::XPtr<bdtDd> newDd() {
    Rcpp::XPtr<bdtDd> xp(new bdtDd);
    return(xp);
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDd> newDdLong(int l) {
    Rcpp::XPtr<bdtDd> xp(new bdtDd(l));
    return(xp);
}

// [[Rcpp::export]]
long getDays(Rcpp::XPtr<bdtDd> p) {
    return p.get()->getDays();
}
