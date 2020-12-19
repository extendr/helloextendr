struct DllInfo;

void R_init_helloextendr(struct DllInfo *dll);

// Ensure that the static library is retained by th elinker.
void *p = (void*)&R_init_helloextendr;
