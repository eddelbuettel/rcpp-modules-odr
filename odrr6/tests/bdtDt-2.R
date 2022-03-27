
library(odrr6)

xp <- newDtSexp(Sys.Date() - 7)
print(getLocalDay(xp))
showDt(xp)
print(getDate(xp))

xp2 <- newDtYMD(2022,2,1)
showDt(xp2)

print(getDate(xp2))
