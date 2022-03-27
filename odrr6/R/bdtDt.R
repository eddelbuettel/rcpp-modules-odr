
bdtDt <- R6Class("bdtDt",
                 public = list(
                     ## variation of https://stackoverflow.com/a/41368043/143305
                     initialize = function(...) {
                        arguments <- list(...)
                        n <- nargs()
                        if (n == 0) {
                            private$dt <- newDt()
                        } else if (n == 1) {
                            private$dt <- newDtSexp(...)
                        } else if (n == 3) {
                            private$dt <- newDtYMD(...);
                        } else {
                            stop("Wrong number of argument in bdtDt constructor")
                        }
                     },
                     getLocalDay         = function() { getLocalDay(private$dt) },
                     getUTCDay           = function() { getUTCDay(private$dt) },
                     getYear             = function() { getYear(private$dt) },
                     getMonth            = function() { getMonth(private$dt) },
                     getDay              = function() { getMonth(private$dt) },
                     getDayOfWeek        = function() { getDayOfWeek(private$dt) },
                     getDayOfYear        = function() { getDayOfYear(private$dt) },

                     setDate             = function(s) { setDate(private$dt, s) },
                     getDate             = function(s) { getDate(private$dt) },
                     getWeekNumber       = function()  { getWeekNumber(private$dt) },
                     getJulianDay        = function()  { getJulianDay(private$dt) },
                     getModJulianDay     = function()  { getModJulianDay(private$dt) },

                     setEndOfMonth       = function() { setEndOfMonth(private$dt) },
                     getEndOfMonth       = function() { getEndOfMonth(private$dt) },
                     setFirstOfNextMonth = function() { setFirstOfMonth(private$dt) },
                     getFirstOfNextMonth = function() { getFirstOfMonth(private$dt) },
                     setEndOfBizWeek     = function() { setEndOfBizWeek(private$dt) },

                     addDays             = function(d) { addDays(private$dt, d) },
                     subtractDays        = function(d) { subtractDays(private$dt, d) },
                     addMonths           = function(d) { addDays(private$dt, d) },
                     addYears            = function(d) { addDays(private$dt, d) },

                     setIMMDate          = function(m,y) { setIMMDate(private$dt, m, y) }
                 ),
                 private = list(
                     dt = NULL
                 )
                 )
