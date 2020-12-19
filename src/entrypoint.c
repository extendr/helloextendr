/*
// Take the address of the wrap__hello stub function to avoid
// the linker removing the static library.
//
// This will be removed in future versions with the module macro.
void wrap__hello();

void *x = (void*)&wrap__hello;
*/


#define R_NO_REMAP
#define STRICT_R_HEADERS
#include <Rinternals.h>

void R_init_helloextendr(DllInfo *dll);

void *p = (void*)&R_init_helloextendr;
