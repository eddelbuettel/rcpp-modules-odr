
#ifndef ODRR6__ODRR6_H
#define ODRR6__ODRR6_H

#include <RcppCommon.h>

// cf http://stackoverflow.com/a/15234757/143305
#define BOOST_NO_CXX11_EXPLICIT_CONVERSION_OPERATORS 1

// Setting this variable enables use of nanoseconds (as opposed to microseconds)
// for the maximum resolution; this comes at a cost of 96 bits as opposed to 64 bits
// We enable it to experiement with it knowing that R already has a 64 bit resolution
//
// Note that this fails on Windows (per R's win-builder.r-project.org) for lack of a
// long long int type, so we make this conditional on not being on Windows
#define BOOST_DATE_TIME_POSIX_TIME_STD_CONFIG 1

// Setting this variable governs whether we need to link against the
// Boost Date.Time library (eg -lboost_date_time on Debian/Ubuntu) or
// not The functions not involving string parsing or conversion are
// all available via the templated Boost header files and are thus
// compile-time only which make things a little easier.
// On Windows, set the BOOSTLIB variable to point to a suitable directory.
// On other systems, just have Boost in the include path
#define RcppBDT_UseWithStrings 0

#if RcppBDT_UseWithString
  #include <boost/date_time/gregorian/gregorian.hpp> 		// Gregorian calendar types, with I/O
#else
  #include <boost/date_time/gregorian/gregorian_types.hpp> 	// Gregorian calendar types, no I/O
#endif

#include <boost/date_time/local_time/local_time.hpp>

namespace Rcpp {

    // First the 'date' class boost::gregorian::date
    //
    // non-intrusive extension via template specialisation
    template <> boost::gregorian::date as(SEXP dt);
    //
    // non-intrusive extension via template specialisation
    template <> SEXP wrap(const boost::gregorian::date &d);


    // Second the 'datetime' class boost::posix_time::ptime
    //
    // non-intrusive extension via template specialisation
    template <> boost::posix_time::ptime as(SEXP dt);
    //
    // non-intrusive extension via template specialisation
    template <> SEXP wrap(const boost::posix_time::ptime &dt);

}

#include <Rcpp.h>
#include <RcppBDTdt.h>
#include <RcppBDTpt.h>
#include <RcppBDTdd.h>
#include <RcppBDTdu.h>

#endif
