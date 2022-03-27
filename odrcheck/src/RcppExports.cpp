// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/odrcheck.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// toPOSIXct
Rcpp::NumericVector toPOSIXct(SEXP x, std::string tz);
RcppExport SEXP _odrcheck_toPOSIXct(SEXP xSEXP, SEXP tzSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type tz(tzSEXP);
    rcpp_result_gen = Rcpp::wrap(toPOSIXct(x, tz));
    return rcpp_result_gen;
END_RCPP
}
// charToPOSIXct
Rcpp::NumericVector charToPOSIXct(Rcpp::CharacterVector sv, std::string tz);
RcppExport SEXP _odrcheck_charToPOSIXct(SEXP svSEXP, SEXP tzSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type sv(svSEXP);
    Rcpp::traits::input_parameter< std::string >::type tz(tzSEXP);
    rcpp_result_gen = Rcpp::wrap(charToPOSIXct(sv, tz));
    return rcpp_result_gen;
END_RCPP
}
// cToPOSIXct
Rcpp::NumericVector cToPOSIXct(Rcpp::CharacterVector sv, std::string fmt, std::string tz);
RcppExport SEXP _odrcheck_cToPOSIXct(SEXP svSEXP, SEXP fmtSEXP, SEXP tzSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type sv(svSEXP);
    Rcpp::traits::input_parameter< std::string >::type fmt(fmtSEXP);
    Rcpp::traits::input_parameter< std::string >::type tz(tzSEXP);
    rcpp_result_gen = Rcpp::wrap(cToPOSIXct(sv, fmt, tz));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_bdtDtMod();

static const R_CallMethodDef CallEntries[] = {
    {"_odrcheck_toPOSIXct", (DL_FUNC) &_odrcheck_toPOSIXct, 2},
    {"_odrcheck_charToPOSIXct", (DL_FUNC) &_odrcheck_charToPOSIXct, 2},
    {"_odrcheck_cToPOSIXct", (DL_FUNC) &_odrcheck_cToPOSIXct, 3},
    {"_rcpp_module_boot_bdtDtMod", (DL_FUNC) &_rcpp_module_boot_bdtDtMod, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_odrcheck(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
