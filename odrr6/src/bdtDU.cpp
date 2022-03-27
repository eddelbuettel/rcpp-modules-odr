#include <Rcpp/Lightest>
#include <odrr6.h>

// [[Rcpp::export]]
Rcpp::XPtr<bdtDu> newDu(int h = 0, int m = 0, int s = 0, int fs = 0) {
    Rcpp::XPtr<bdtDu> xp(new bdtDu(h, m, s, fs));
    return(xp);
}

// [[Rcpp::export]]
long getHours(Rcpp::XPtr<bdtDu> p) {
    return p.get()->getHours();
}

// [[Rcpp::export]]
long getMinutes(Rcpp::XPtr<bdtDu> p) {
    return p.get()->getMinutes();
}

// [[Rcpp::export]]
long getSeconds(Rcpp::XPtr<bdtDu> p) {
    return p.get()->getSeconds();
}

// [[Rcpp::export]]
long getTotalSeconds(Rcpp::XPtr<bdtDu> p) {
    return p.get()->getTotalSeconds();
}

// [[Rcpp::export]]
long getTotalMilliSeconds(Rcpp::XPtr<bdtDu> p) {
    return p.get()->getTotalMilliSeconds();
}

// [[Rcpp::export]]
long getTotalMicroSeconds(Rcpp::XPtr<bdtDu> p) {
    return p.get()->getTotalMicroSeconds();
}

// [[Rcpp::export]]
long getTotalNanoSeconds(Rcpp::XPtr<bdtDu> p) {
    return p.get()->getTotalNanoSeconds();
}

// [[Rcpp::export]]
int getFractionalSeconds(Rcpp::XPtr<bdtDu> p) {
    return p.get()->getFractionalSeconds();
}

// [[Rcpp::export]]
long getTicksPerSecond(Rcpp::XPtr<bdtDu> p) {
    return p.get()->getTicksPerSecond();
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDu> addHoursDu(Rcpp::XPtr<bdtDu> p, int d) {
    p.get()->addHours(d);
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDu> addMinutesDu(Rcpp::XPtr<bdtDu> p, int d) {
    p.get()->addMinutes(d);
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDu> addSecondsDu(Rcpp::XPtr<bdtDu> p, int d) {
    p.get()->addSeconds(d);
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDu> addMilliSeconds(Rcpp::XPtr<bdtDu> p, int d) {
    p.get()->addMilliSeconds(d);
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDu> addMicroSeconds(Rcpp::XPtr<bdtDu> p, int d) {
    p.get()->addMicroSeconds(d);
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDu> addNanoSeconds(Rcpp::XPtr<bdtDu> p, int d) {
    p.get()->addNanoSeconds(d);
    return p;
}

// [[Rcpp::export]]
Rcpp::Datetime getAddedPosixtime(Rcpp::XPtr<bdtDu> p, SEXP ptsexp) {
    return p.get()->getAddedPosixtime(ptsexp);
}
