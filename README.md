# Minimal Example of Calling Rust from R

[![R build status](https://github.com/extendr/helloextendr/workflows/R-CMD-check/badge.svg)](https://github.com/extendr/helloextendr/actions)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

This is a template package to demonstrate how to call Rust from R using the [extendr-api](https://crates.io/crates/extendr-api) crate.


## Installation

Before you can install this package, you need to install a working Rust toolchain. We recommend using [rustup.](https://rustup.rs/)

On Windows, you'll also have to add the `i686-pc-windows-gnu` and `x86_64-pc-windows-gnu` targets:
```
rustup target add x86_64-pc-windows-gnu
rustup target add i686-pc-windows-gnu
```

Once Rust is working, you can install this package via:
```r
remotes::install_github("extendr/helloextendr")
```

After installation, the following should work:
```r
library(helloextendr)

hello()
#> [1] "hello"
```
