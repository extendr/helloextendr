# Minimal Example of the Rust extendr Crate

This repository contains the template for an R package that interfaces with Rust via the extendr crate.

# Installation

To run rust-bindgen, you'll need to install libclang/llvm. See for instructions here: https://github.com/rust-lang/rust-bindgen/blob/master/book/src/requirements.md

To build this package from within RStudio, you'll also have to make sure llvm is available in your path under R. To do so, add something like the following to your `.Renviron` file:
```
PATH=/usr/local/opt/llvm/bin:${PATH}
```