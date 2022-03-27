library(odrr6)

z <- bdtDt$new()
print(z$getLocalDay())

x <- bdtDt$new(Sys.Date() + 7)
print(x$getDate())
x <- bdtDt$new(2022,2,1)
print(x$getDate())
print(x)
d <- newDt()
stopifnot("expect external pointer"=is(d, "externalptr"))

d <- setFromLocalClock(d)
print(getDate(d))

print(getEndOfMonth(d))
