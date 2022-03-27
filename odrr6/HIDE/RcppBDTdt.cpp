// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*-
//
// RcppBDTdt.cpp: Rcpp and Boost Date_Time glue for dates
//
// Copyright (C) 2010 - 2012  Dirk Eddelbuettel and Romain Francois
//
// This file is part of RcppBDT.
//
// RcppBDT is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//                           
// RcppBDT is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with RcppBDT.  If not, see <http://www.gnu.org/licenses/>.

#include <odrr6.h>

// define template specialisations for as and wrap
namespace Rcpp {
    template <> boost::gregorian::date as( SEXP dtsexp ) {
        Rcpp::Date dt(dtsexp);
        return boost::gregorian::date(dt.getYear(), dt.getMonth(), dt.getDay());
    }

    template <> SEXP wrap(const boost::gregorian::date &d) {
        boost::gregorian::date::ymd_type ymd = d.year_month_day();     // convert to y/m/d struct
        return Rcpp::wrap(Rcpp::Date( ymd.year, ymd.month, ymd.day ));
    }
}

boost::gregorian::date getIMMDate(bdtDt *d, int mon, int year) { 				// does not use bdtDt pointer, but need for RCPP_MODULE use
    return boost::gregorian::nth_day_of_the_week_in_month(boost::gregorian::nth_day_of_the_week_in_month::third, 
                                                          boost::gregorian::Wednesday, mon).get_date(year);
}

boost::gregorian::date getNthDayOfWeek(bdtDt *d, int nthday, int dow, int mon, int year) { 	// does not use bdtDt pointer, but need for RCPP_MODULE use
    boost::gregorian::nth_day_of_the_week_in_month 
        ans_generator(static_cast<boost::date_time::nth_kday_of_month<boost::gregorian::date>::week_num>(nthday), dow, mon);
    return ans_generator.get_date(year);
}

boost::gregorian::date getLastDayOfWeekInMonth(bdtDt *d, int weekday, int mon, int year) {	// does not use bdtDt pointer, but need for RCPP_MODULE use
    boost::gregorian::last_day_of_the_week_in_month lwdm(weekday, mon);
    return lwdm.get_date(year);
}

boost::gregorian::date getFirstDayOfWeekInMonth(bdtDt *d, int weekday, int mon, int year) {	// does not use bdtDt pointer, but need for RCPP_MODULE use
    boost::gregorian::first_day_of_the_week_in_month fwdm(weekday, mon);
    return fwdm.get_date(year);
}

boost::gregorian::date getFirstDayOfWeekAfter(bdtDt *d, int weekday, SEXP date) {		// does not use bdtDt pointer, but need for RCPP_MODULE use
    boost::gregorian::first_day_of_the_week_after fdaf(weekday);
    boost::gregorian::date dt = Rcpp::as<boost::gregorian::date>(date);
    return fdaf.get_date(dt);
}

boost::gregorian::date getLastDayOfWeekBefore(bdtDt *d, int weekday, SEXP date) {		// does not use bdtDt pointer, but need for RCPP_MODULE use
    boost::gregorian::first_day_of_the_week_before fdab(weekday);
    boost::gregorian::date dt = Rcpp::as<boost::gregorian::date>(date);
    return fdab.get_date(dt);
}


bdtDt* arith_bdtDt_int( const bdtDt& e1, const int& e2, std::string op ){
    if( ! op.compare("+") ){
        return new bdtDt( e1.m_dt + boost::gregorian::date_duration(e2) );   
    } else if( ! op.compare("-") ){
        return new bdtDt( e1.m_dt - boost::gregorian::date_duration(e2) );
    }
    Rf_error( "operator not implemented" );
    // not reached
    return new bdtDt(0,0,0);
}

bdtDt* arith_int_bdtDt(const int& e1, const bdtDt& e2, std::string op) {
    if( ! op.compare("+") ){
        return new bdtDt(e2.m_dt + boost::gregorian::date_duration(e1));   
        //} else if( ! op.compare("-") ){
        //return new bdtDt( e1.m_dt - boost::gregorian::date_duration(e2) );
    }
    Rf_error( "operator not implemented" );
    // not reached
    return new bdtDt(0,0,0);
}

bool compare_bdtDt_bdtDt( const bdtDt& e1, const bdtDt& e2, std::string op ){
    if( !op.compare( "==" ) ){
        return e1.m_dt == e2.m_dt ;   
    } else if( !op.compare( "!=" ) ){
        return e1.m_dt != e2.m_dt ;
    } else if( !op.compare( ">" ) ){
        return e1.m_dt > e2.m_dt ;
    } else if( !op.compare( "<" ) ){
        return e1.m_dt < e2.m_dt ;
    } else if( !op.compare( ">=" ) ){
        return e1.m_dt >= e2.m_dt ;
    } else if( !op.compare( "<=" ) ){
        return e1.m_dt <= e2.m_dt ;
    }
    Rf_error( "unknown operator" ) ;
    return R_NilValue ;
}

// bdtDt* arith_bdtDd_bdtDt(const bdtDd& e1, const bdtDt& e2, std::string op) {
//     if ( ! op.compare("+") ) {
//         return new bdtDt(e2.m_dt + e1.m_dd);
//     }
//     Rf_error( "operator not implemented" )  ;
//     // not reached
//     return new bdtDt(0);
// }

// bdtDt* arith_bdtDt_bdtDd(const bdtDt& e1, const bdtDd& e2, std::string op) {
//     if ( ! op.compare("+") ) {
//         return new bdtDt(e1.m_dt + e2.m_dd);
//     } else if( ! op.compare("-") ) {
//         return new bdtDt(e1.m_dt - e2.m_dd);
//     }
//     Rf_error( "operator not implemented" )  ;
//     // not reached
//     return new bdtDt(0);
// }
