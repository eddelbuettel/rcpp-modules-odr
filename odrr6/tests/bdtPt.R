library(odrr6)

z <- bdtPt$new()
print(z$getDatetime())
invisible(z$addHours(4))
print(z$getDatetime())
