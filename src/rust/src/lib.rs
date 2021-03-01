use extendr_api::*;

/// Call Rust function `hello()`
/// 
/// Call Rust function `hello()`.
/// @export
#[extendr]
fn hello() -> &'static str {
    "hello"
}

// Macro to generate exports.
// This ensures exported functions are registered with R.
// See corresponding C code in `entrypoint.c`.
extendr_module! {
    mod helloextendr;
    fn hello;
}
