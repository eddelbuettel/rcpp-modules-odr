bdtDd <- R6Class("bdtDd",
                 public = list(
                     ## variation of https://stackoverflow.com/a/41368043/143305
                     initialize = function(...) {
                        arguments <- list(...)
                        n <- nargs()
                        if (n == 0) {
                            private$dd <- newDd()
                        } else if (n == 1) {
                            private$dd <- newDdLong(...)
                        } else {
                            stop("Wrong number of argument in constructor")
                        }
                     },
                     getDays = function() { getDays(private$dd) }
                 ),
                 private = list(
                     dd = NULL
                 )
                 )
