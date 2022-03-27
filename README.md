
Explorations around RcppBDT (or subsets) and One Definition Rule issues from LTO builds

## Observation

Having just one Module works.  Having one module works. I.e. this subset
compiles and loads:

```
├── DESCRIPTION
├── inst
│   └── include
│       ├── odrcheck.h
│       ├── RcppBDTdt.h
│       └── RcppBDTdu.h
├── man
│   └── odrcheck-package.Rd
├── NAMESPACE
├── R
│   └── RcppExports.R
├── README.md
└── src
    ├── Makevars
    ├── RcppBDTdt.cpp
    ├── RcppExports.cpp
    └── toPOSIXct.cpp
```

but once `RcppBDTpt.cpp` and its header get added _as in RcppBDT_ or here if
copied out of directory `HIDE` we have an issue.

*Update:* Turns out I overlooked _one_ missing header to ensure
consistency. But @enchufa2 came to the rescue [in this
comment](https://github.com/RcppCore/Rcpp/issues/1207#issuecomment-1080017037)
and all is well.  Package `odrr6` was still a fun exercise in _quickly_
throwing together an R6 package around an external pointer from Rcpp.
