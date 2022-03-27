
#include <Rcpp/Lightest>
#include <odrr6.h>

// define template specialisations for as and wrap
namespace Rcpp {
    template <> boost::gregorian::date as(SEXP dtsexp) {
        Rcpp::Date dt(dtsexp);
        return boost::gregorian::date(dt.getYear(), dt.getMonth(), dt.getDay());
    }

    template <> SEXP wrap(const boost::gregorian::date &d) {
        boost::gregorian::date::ymd_type ymd = d.year_month_day();     // convert to y/m/d struct
        return Rcpp::wrap(Rcpp::Date( ymd.year, ymd.month, ymd.day ));
    }
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> newDt() {
    Rcpp::XPtr<bdtDt> xp(new bdtDt);
    return xp;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> newDtSexp(SEXP s) {
    Rcpp::XPtr<bdtDt> xp(new bdtDt(s));
    return xp;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> newDtYMD(int y, int m, int d) {
    Rcpp::XPtr<bdtDt> xp(new bdtDt(y, m, d));
    return xp;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> newDtGregDate(boost::gregorian::date d) {
    Rcpp::XPtr<bdtDt> xp(new bdtDt(d));
    return xp;
}

// [[Rcpp::export]]
boost::gregorian::date getIMMDate(int mon, int year) {
    return boost::gregorian::nth_day_of_the_week_in_month(boost::gregorian::nth_day_of_the_week_in_month::third,
                                                          boost::gregorian::Wednesday, mon).get_date(year);
}

// [[Rcpp::export]]
boost::gregorian::date getNthDayOfWeek(int nthday, int dow, int mon, int year) {
    boost::gregorian::nth_day_of_the_week_in_month
        ans_generator(static_cast<boost::date_time::nth_kday_of_month<boost::gregorian::date>::week_num>(nthday), dow, mon);
    return ans_generator.get_date(year);
}

// [[Rcpp::export]]
boost::gregorian::date getLastDayOfWeekInMonth(int weekday, int mon, int year) {
    boost::gregorian::last_day_of_the_week_in_month lwdm(weekday, mon);
    return lwdm.get_date(year);
}

// [[Rcpp::export]]
boost::gregorian::date getFirstDayOfWeekInMonth(int weekday, int mon, int year) {
    boost::gregorian::first_day_of_the_week_in_month fwdm(weekday, mon);
    return fwdm.get_date(year);
}

// [[Rcpp::export]]
boost::gregorian::date getFirstDayOfWeekAfter(int weekday, SEXP date) {
    boost::gregorian::first_day_of_the_week_after fdaf(weekday);
    boost::gregorian::date dt = Rcpp::as<boost::gregorian::date>(date);
    return fdaf.get_date(dt);
}

// [[Rcpp::export]]
boost::gregorian::date getLastDayOfWeekBefore(int weekday, SEXP date) {
    boost::gregorian::first_day_of_the_week_before fdab(weekday);
    boost::gregorian::date dt = Rcpp::as<boost::gregorian::date>(date);
    return fdab.get_date(dt);
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> setFromLocalClock(Rcpp::XPtr<bdtDt> p) {
    p.get()->setFromLocalClock();
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> setFromUTCClock(Rcpp::XPtr<bdtDt> p) {
    p.get()->setFromUTCClock();
    return p;
}

// [[Rcpp::export]]
boost::gregorian::date getLocalDay(Rcpp::XPtr<bdtDt> p) {
    return p.get()->getLocalDay();
}

// [[Rcpp::export]]
boost::gregorian::date getUTCDay(Rcpp::XPtr<bdtDt> p) {
    return p.get()->getUTCDay();
}

// [[Rcpp::export]]
int getYear(Rcpp::XPtr<bdtDt> p) {
    return p.get()->getYear();
}

// [[Rcpp::export]]
int getMonth(Rcpp::XPtr<bdtDt> p) {
    return p.get()->getMonth();
}

// [[Rcpp::export]]
int getDay(Rcpp::XPtr<bdtDt> p) {
    return p.get()->getDay();
}

// [[Rcpp::export]]
int getDayOfWeek(Rcpp::XPtr<bdtDt> p) {
    return p.get()->getDayOfWeek();
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> setDate(Rcpp::XPtr<bdtDt> p, SEXP dt) {
    p.get()->setDate(dt);
    return p;
}

// [[Rcpp::export]]
boost::gregorian::date getDate(Rcpp::XPtr<bdtDt> p) {
    return p.get()->getDate();
}

// [[Rcpp::export]]
int getWeekNumber(Rcpp::XPtr<bdtDt> p) {
    return p.get()->getWeekNumber();
}

// [[Rcpp::export]]
double getJulianDay(Rcpp::XPtr<bdtDt> p) {
    return p.get()->getJulian();
}

// [[Rcpp::export]]
double getModJulianDay(Rcpp::XPtr<bdtDt> p) {
    return p.get()->getModJulian();
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> setEndOfMonth(Rcpp::XPtr<bdtDt> p) {
    p.get()->setEndOfMonth();
    return p;
}

// [[Rcpp::export]]
boost::gregorian::date getEndOfMonth(Rcpp::XPtr<bdtDt> p) {
    return p.get()->getEndOfMonth();
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> setFirstOfNextMonth(Rcpp::XPtr<bdtDt> p) {
    p.get()->setFirstOfNextMonth();
    return p;
}

// [[Rcpp::export]]
boost::gregorian::date getFirstOfNextMonth(Rcpp::XPtr<bdtDt> p) {
    return p.get()->getFirstOfNextMonth();
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> setEndOfBizWeek(Rcpp::XPtr<bdtDt> p) {
    p.get()->setEndOfBizWeek();
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> addDays(Rcpp::XPtr<bdtDt> p, double len) {
    p.get()->addDays(len);
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> subtractDays(Rcpp::XPtr<bdtDt> p, double len) {
    p.get()->subtractDays(len);
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> addMonths(Rcpp::XPtr<bdtDt> p, int m) {
    p.get()->addMonths(m);
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> addYears(Rcpp::XPtr<bdtDt> p, int y) {
    p.get()->addYears(y);
    return p;
}

// [[Rcpp::export]]
Rcpp::XPtr<bdtDt> setIMMDate(Rcpp::XPtr<bdtDt> p, int mon, int year) {
    p.get()->setIMMDate(mon, year);
    return p;
}

// [[Rcpp::export]]
void showDate(Rcpp::XPtr<bdtDt> p) {
    p.get()->show();
}
