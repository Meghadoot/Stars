#ifndef STARS_HEADER_FILE
#define STARS_HEADER_FILE
 

/* Include files here */

#ifdef __cplusplus
     extern "C" {
 #endif
         //#include "../lib/Stars.h"
         void print_in_row(int);
#ifdef __cplusplus
     }
#endif


//extern "C" void print_in_row(int);
void print_in_column(int);
void print_in_diagnonal(int);
void print_in_V(int);

#endif