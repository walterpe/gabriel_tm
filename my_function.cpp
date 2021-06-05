#include "my_function.h"

int my_funct_mult(int my_p, int my_q) {
    // do the work
    int my_result = my_p * my_q;
    // return function result
    return my_result;    
}

int myFunctMult(int my_p, int my_q) {
    // function call;
    int my_result = my_funct_mult(my_p, my_q);
    return my_result;    
}
