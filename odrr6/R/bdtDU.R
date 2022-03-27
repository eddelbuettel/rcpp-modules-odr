bdtDu <- R6Class("arith_bdtDu_int",
                 public = list(
                     ## variation of https://stackoverflow.com/a/41368043/143305
                     initialize = function(...) {
                        arguments <- list(...)
                        n <- nargs()
                        if (n <= 4) {
                            private$du <- newDu(...)
                        } else {
                            stop("Wrong number of argument in constructor")
                        }
                     },
                     getHours             = function() { getHours(private$du) },
                     getMinutes           = function() { getMinutes(private$du) },
                     getSeconds           = function() { getSeconds(private$du) },
                     getTotalSeconds      = function() { getTotalSeconds(private$du) },
                     getTotalMilliSeconds = function() { getTotalMilliSeconds(private$du) },
                     getTotalMicroSeconds = function() { getTotalMicroSeconds(private$du) },
                     getTotalNanoSeconds  = function() { getTotalNanoSeconds(private$du) },
                     getFractionalSeconds = function() { getFractionalSeconds(private$du) },
                     getTicksPerSecond    = function() { getTicksPerSecond(private$du) },

                     addHours             = function(d) { addHoursDu(private$du, d) },
                     addMinutes           = function(d) { addMinutesDu(private$du, d) },
                     addSeconds           = function(d) { addSecondsDu(private$du, d) },
                     addMilliSeconds      = function(d) { addMilliSecondsDu(private$du, d) },
                     addMicroSeconds      = function(d) { addMicroSecondsDu(private$du, d) },
                     addNanoSeconds       = function(d) { addNanoSecondsDu(private$du, d) },

                     getAddedPosixtime    = function(pt) { getAddedPosixtime(private$du, pt) }

                 ),
                 private = list(
                     du = NULL
                 )
                 )
