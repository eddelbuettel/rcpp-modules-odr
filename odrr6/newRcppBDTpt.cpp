
#include <Rcpp/Lightest>
#include <odrcheck.h>

// [Rcpp::export]]
Rcpp::XPtr<bdtPt> newPt() {
  auto ptr = new bdtPt;
  Rcpp::XPtr< bdtPt > xp(ptr);
  return(xp);
}

// [Rcpp::export]]
Rcpp::XPtr<bdtPt> newPtSexp(SEXP s) {
  auto ptr = new bdtPt(s);
  Rcpp::XPtr< bdtPt > xp(ptr);
  return(xp);
}
