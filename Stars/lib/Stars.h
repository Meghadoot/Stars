#ifndef STARS_HEADER_FILE
#define STARS_HEADER_FILE


/* Include files here */

#ifdef __cplusplus
     extern "C" {
 #endif
         //#include "../lib/Stars.h"
         void print_in_row(int);
         void print_in_column(int);
         void print_in_diagnonal(int);
         void print_in_V(int);
         void print_in_square(int);
         void print_in_parallel(int);
         void print_in_triangle(int);
         void print_in_right_triangle(int);

         /***** Helper Functions *****/
         char check_odd_even(int);
         void lateral_offset_generator(int);
         void vertical_offset_generator(int);

#ifdef __cplusplus
     }
#endif

#endif
