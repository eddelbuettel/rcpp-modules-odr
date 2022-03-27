// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/odrr6.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// newDt
Rcpp::XPtr<bdtDt> newDt();
RcppExport SEXP _odrr6_newDt() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(newDt());
    return rcpp_result_gen;
END_RCPP
}
// newDtSexp
Rcpp::XPtr<bdtDt> newDtSexp(SEXP s);
RcppExport SEXP _odrr6_newDtSexp(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(newDtSexp(s));
    return rcpp_result_gen;
END_RCPP
}
// newDtYMD
Rcpp::XPtr<bdtDt> newDtYMD(int y, int m, int d);
RcppExport SEXP _odrr6_newDtYMD(SEXP ySEXP, SEXP mSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(newDtYMD(y, m, d));
    return rcpp_result_gen;
END_RCPP
}
// newDtGregDate
Rcpp::XPtr<bdtDt> newDtGregDate(boost::gregorian::date d);
RcppExport SEXP _odrr6_newDtGregDate(SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< boost::gregorian::date >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(newDtGregDate(d));
    return rcpp_result_gen;
END_RCPP
}
// getIMMDate
boost::gregorian::date getIMMDate(int mon, int year);
RcppExport SEXP _odrr6_getIMMDate(SEXP monSEXP, SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type mon(monSEXP);
    Rcpp::traits::input_parameter< int >::type year(yearSEXP);
    rcpp_result_gen = Rcpp::wrap(getIMMDate(mon, year));
    return rcpp_result_gen;
END_RCPP
}
// getNthDayOfWeek
boost::gregorian::date getNthDayOfWeek(int nthday, int dow, int mon, int year);
RcppExport SEXP _odrr6_getNthDayOfWeek(SEXP nthdaySEXP, SEXP dowSEXP, SEXP monSEXP, SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nthday(nthdaySEXP);
    Rcpp::traits::input_parameter< int >::type dow(dowSEXP);
    Rcpp::traits::input_parameter< int >::type mon(monSEXP);
    Rcpp::traits::input_parameter< int >::type year(yearSEXP);
    rcpp_result_gen = Rcpp::wrap(getNthDayOfWeek(nthday, dow, mon, year));
    return rcpp_result_gen;
END_RCPP
}
// getLastDayOfWeekInMonth
boost::gregorian::date getLastDayOfWeekInMonth(int weekday, int mon, int year);
RcppExport SEXP _odrr6_getLastDayOfWeekInMonth(SEXP weekdaySEXP, SEXP monSEXP, SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type weekday(weekdaySEXP);
    Rcpp::traits::input_parameter< int >::type mon(monSEXP);
    Rcpp::traits::input_parameter< int >::type year(yearSEXP);
    rcpp_result_gen = Rcpp::wrap(getLastDayOfWeekInMonth(weekday, mon, year));
    return rcpp_result_gen;
END_RCPP
}
// getFirstDayOfWeekInMonth
boost::gregorian::date getFirstDayOfWeekInMonth(int weekday, int mon, int year);
RcppExport SEXP _odrr6_getFirstDayOfWeekInMonth(SEXP weekdaySEXP, SEXP monSEXP, SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type weekday(weekdaySEXP);
    Rcpp::traits::input_parameter< int >::type mon(monSEXP);
    Rcpp::traits::input_parameter< int >::type year(yearSEXP);
    rcpp_result_gen = Rcpp::wrap(getFirstDayOfWeekInMonth(weekday, mon, year));
    return rcpp_result_gen;
END_RCPP
}
// getFirstDayOfWeekAfter
boost::gregorian::date getFirstDayOfWeekAfter(int weekday, SEXP date);
RcppExport SEXP _odrr6_getFirstDayOfWeekAfter(SEXP weekdaySEXP, SEXP dateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type weekday(weekdaySEXP);
    Rcpp::traits::input_parameter< SEXP >::type date(dateSEXP);
    rcpp_result_gen = Rcpp::wrap(getFirstDayOfWeekAfter(weekday, date));
    return rcpp_result_gen;
END_RCPP
}
// getLastDayOfWeekBefore
boost::gregorian::date getLastDayOfWeekBefore(int weekday, SEXP date);
RcppExport SEXP _odrr6_getLastDayOfWeekBefore(SEXP weekdaySEXP, SEXP dateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type weekday(weekdaySEXP);
    Rcpp::traits::input_parameter< SEXP >::type date(dateSEXP);
    rcpp_result_gen = Rcpp::wrap(getLastDayOfWeekBefore(weekday, date));
    return rcpp_result_gen;
END_RCPP
}
// setFromLocalClock
Rcpp::XPtr<bdtDt> setFromLocalClock(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_setFromLocalClock(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(setFromLocalClock(p));
    return rcpp_result_gen;
END_RCPP
}
// setFromUTCClock
Rcpp::XPtr<bdtDt> setFromUTCClock(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_setFromUTCClock(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(setFromUTCClock(p));
    return rcpp_result_gen;
END_RCPP
}
// getLocalDay
boost::gregorian::date getLocalDay(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_getLocalDay(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(getLocalDay(p));
    return rcpp_result_gen;
END_RCPP
}
// getUTCDay
boost::gregorian::date getUTCDay(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_getUTCDay(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(getUTCDay(p));
    return rcpp_result_gen;
END_RCPP
}
// getYear
int getYear(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_getYear(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(getYear(p));
    return rcpp_result_gen;
END_RCPP
}
// getMonth
int getMonth(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_getMonth(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(getMonth(p));
    return rcpp_result_gen;
END_RCPP
}
// getDay
int getDay(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_getDay(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(getDay(p));
    return rcpp_result_gen;
END_RCPP
}
// getDayOfWeek
int getDayOfWeek(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_getDayOfWeek(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(getDayOfWeek(p));
    return rcpp_result_gen;
END_RCPP
}
// setDate
Rcpp::XPtr<bdtDt> setDate(Rcpp::XPtr<bdtDt> p, SEXP dt);
RcppExport SEXP _odrr6_setDate(SEXP pSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(setDate(p, dt));
    return rcpp_result_gen;
END_RCPP
}
// getDate
boost::gregorian::date getDate(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_getDate(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(getDate(p));
    return rcpp_result_gen;
END_RCPP
}
// getWeekNumber
int getWeekNumber(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_getWeekNumber(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(getWeekNumber(p));
    return rcpp_result_gen;
END_RCPP
}
// getJulianDay
double getJulianDay(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_getJulianDay(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(getJulianDay(p));
    return rcpp_result_gen;
END_RCPP
}
// getModJulianDay
double getModJulianDay(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_getModJulianDay(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(getModJulianDay(p));
    return rcpp_result_gen;
END_RCPP
}
// setEndOfMonth
Rcpp::XPtr<bdtDt> setEndOfMonth(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_setEndOfMonth(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(setEndOfMonth(p));
    return rcpp_result_gen;
END_RCPP
}
// getEndOfMonth
boost::gregorian::date getEndOfMonth(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_getEndOfMonth(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(getEndOfMonth(p));
    return rcpp_result_gen;
END_RCPP
}
// setFirstOfNextMonth
Rcpp::XPtr<bdtDt> setFirstOfNextMonth(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_setFirstOfNextMonth(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(setFirstOfNextMonth(p));
    return rcpp_result_gen;
END_RCPP
}
// getFirstOfNextMonth
boost::gregorian::date getFirstOfNextMonth(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_getFirstOfNextMonth(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(getFirstOfNextMonth(p));
    return rcpp_result_gen;
END_RCPP
}
// setEndOfBizWeek
Rcpp::XPtr<bdtDt> setEndOfBizWeek(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_setEndOfBizWeek(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(setEndOfBizWeek(p));
    return rcpp_result_gen;
END_RCPP
}
// addDays
Rcpp::XPtr<bdtDt> addDays(Rcpp::XPtr<bdtDt> p, double len);
RcppExport SEXP _odrr6_addDays(SEXP pSEXP, SEXP lenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type len(lenSEXP);
    rcpp_result_gen = Rcpp::wrap(addDays(p, len));
    return rcpp_result_gen;
END_RCPP
}
// subtractDays
Rcpp::XPtr<bdtDt> subtractDays(Rcpp::XPtr<bdtDt> p, double len);
RcppExport SEXP _odrr6_subtractDays(SEXP pSEXP, SEXP lenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type len(lenSEXP);
    rcpp_result_gen = Rcpp::wrap(subtractDays(p, len));
    return rcpp_result_gen;
END_RCPP
}
// addMonths
Rcpp::XPtr<bdtDt> addMonths(Rcpp::XPtr<bdtDt> p, int m);
RcppExport SEXP _odrr6_addMonths(SEXP pSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(addMonths(p, m));
    return rcpp_result_gen;
END_RCPP
}
// addYears
Rcpp::XPtr<bdtDt> addYears(Rcpp::XPtr<bdtDt> p, int y);
RcppExport SEXP _odrr6_addYears(SEXP pSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(addYears(p, y));
    return rcpp_result_gen;
END_RCPP
}
// setIMMDate
Rcpp::XPtr<bdtDt> setIMMDate(Rcpp::XPtr<bdtDt> p, int mon, int year);
RcppExport SEXP _odrr6_setIMMDate(SEXP pSEXP, SEXP monSEXP, SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type mon(monSEXP);
    Rcpp::traits::input_parameter< int >::type year(yearSEXP);
    rcpp_result_gen = Rcpp::wrap(setIMMDate(p, mon, year));
    return rcpp_result_gen;
END_RCPP
}
// showDate
void showDate(Rcpp::XPtr<bdtDt> p);
RcppExport SEXP _odrr6_showDate(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<bdtDt> >::type p(pSEXP);
    showDate(p);
    return R_NilValue;
END_RCPP
}
// newPt
Rcpp::XPtr<bdtPt> newPt();
RcppExport SEXP _odrr6_newPt() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(newPt());
    return rcpp_result_gen;
END_RCPP
}
// newPtSexp
Rcpp::XPtr<bdtPt> newPtSexp(SEXP s);
RcppExport SEXP _odrr6_newPtSexp(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(newPtSexp(s));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_odrr6_newDt", (DL_FUNC) &_odrr6_newDt, 0},
    {"_odrr6_newDtSexp", (DL_FUNC) &_odrr6_newDtSexp, 1},
    {"_odrr6_newDtYMD", (DL_FUNC) &_odrr6_newDtYMD, 3},
    {"_odrr6_newDtGregDate", (DL_FUNC) &_odrr6_newDtGregDate, 1},
    {"_odrr6_getIMMDate", (DL_FUNC) &_odrr6_getIMMDate, 2},
    {"_odrr6_getNthDayOfWeek", (DL_FUNC) &_odrr6_getNthDayOfWeek, 4},
    {"_odrr6_getLastDayOfWeekInMonth", (DL_FUNC) &_odrr6_getLastDayOfWeekInMonth, 3},
    {"_odrr6_getFirstDayOfWeekInMonth", (DL_FUNC) &_odrr6_getFirstDayOfWeekInMonth, 3},
    {"_odrr6_getFirstDayOfWeekAfter", (DL_FUNC) &_odrr6_getFirstDayOfWeekAfter, 2},
    {"_odrr6_getLastDayOfWeekBefore", (DL_FUNC) &_odrr6_getLastDayOfWeekBefore, 2},
    {"_odrr6_setFromLocalClock", (DL_FUNC) &_odrr6_setFromLocalClock, 1},
    {"_odrr6_setFromUTCClock", (DL_FUNC) &_odrr6_setFromUTCClock, 1},
    {"_odrr6_getLocalDay", (DL_FUNC) &_odrr6_getLocalDay, 1},
    {"_odrr6_getUTCDay", (DL_FUNC) &_odrr6_getUTCDay, 1},
    {"_odrr6_getYear", (DL_FUNC) &_odrr6_getYear, 1},
    {"_odrr6_getMonth", (DL_FUNC) &_odrr6_getMonth, 1},
    {"_odrr6_getDay", (DL_FUNC) &_odrr6_getDay, 1},
    {"_odrr6_getDayOfWeek", (DL_FUNC) &_odrr6_getDayOfWeek, 1},
    {"_odrr6_setDate", (DL_FUNC) &_odrr6_setDate, 2},
    {"_odrr6_getDate", (DL_FUNC) &_odrr6_getDate, 1},
    {"_odrr6_getWeekNumber", (DL_FUNC) &_odrr6_getWeekNumber, 1},
    {"_odrr6_getJulianDay", (DL_FUNC) &_odrr6_getJulianDay, 1},
    {"_odrr6_getModJulianDay", (DL_FUNC) &_odrr6_getModJulianDay, 1},
    {"_odrr6_setEndOfMonth", (DL_FUNC) &_odrr6_setEndOfMonth, 1},
    {"_odrr6_getEndOfMonth", (DL_FUNC) &_odrr6_getEndOfMonth, 1},
    {"_odrr6_setFirstOfNextMonth", (DL_FUNC) &_odrr6_setFirstOfNextMonth, 1},
    {"_odrr6_getFirstOfNextMonth", (DL_FUNC) &_odrr6_getFirstOfNextMonth, 1},
    {"_odrr6_setEndOfBizWeek", (DL_FUNC) &_odrr6_setEndOfBizWeek, 1},
    {"_odrr6_addDays", (DL_FUNC) &_odrr6_addDays, 2},
    {"_odrr6_subtractDays", (DL_FUNC) &_odrr6_subtractDays, 2},
    {"_odrr6_addMonths", (DL_FUNC) &_odrr6_addMonths, 2},
    {"_odrr6_addYears", (DL_FUNC) &_odrr6_addYears, 2},
    {"_odrr6_setIMMDate", (DL_FUNC) &_odrr6_setIMMDate, 3},
    {"_odrr6_showDate", (DL_FUNC) &_odrr6_showDate, 1},
    {"_odrr6_newPt", (DL_FUNC) &_odrr6_newPt, 0},
    {"_odrr6_newPtSexp", (DL_FUNC) &_odrr6_newPtSexp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_odrr6(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
