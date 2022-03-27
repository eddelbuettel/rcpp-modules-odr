bdtPt <- R6Class("bdtPt",
                 public = list(
                     ## variation of https://stackoverflow.com/a/41368043/143305
                     initialize = function(...) {
                        arguments <- list(...)
                        n <- nargs()
                        if (n == 0) {
                            private$pt <- newPt()
                        } else if (n == 1) { # could call single arg wrapper which switches internally
                            private$pt <- newPtSexp(...)
                        } else if (n == 7) {
                            private$pt <- newDtValue(...);
                        } else {
                            stop("Wrong number of argument in bdtPt constructor")
                        }
                 	},
                    setFromLocalTimeInSeconds = function() { setFromLocalTimeInSeconds(private$pt) },
                    setFromUTCInSeconds      = function()  { setFromUTCInSeconds(private$pt) },
                    setFromLocalTimeInMicroSeconds = function() { setFromLocalTimeInMicroSeconds(private$pt) },
                    setFromUTCInMicroSeconds = function()  { setFromUTCInMicroSeconds(private$pt) },
                    setFromDatetime          = function(d) { setFromDatetime(private$pt, d) },
                    setFromDouble            = function(d) { setFromDouble(private$pt, d) },

                    getDatetime              = function()  { getDatetimePt(private$pt) },
                    getDate                  = function()  { getDatePt(private$pt) },

                    addHours                 = function(d) { addHours(private$pt, d) },
                    addMinutes               = function(d) { addMinutes(private$pt, d) },
                    addSeconds               = function(d) { addSeconds(private$pt, d) },
                    addFractionalSeconds     = function(d) { addFractionalSeconds(private$pt, d) }


                 ),
                 private = list(
                     pt = NULL
                 )
                 )
