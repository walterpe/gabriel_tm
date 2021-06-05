#include "my_function.h"
#include "myFunction.h"

// camelCaseStyle
// underline_style

#include "iostream"

using namespace std;

int main() {

    // arrays : collection of values 
    const int my_length = 3;
    int my_firsts[my_length]  = { 15, 12, 6 };
    int my_seconds[my_length] = {  3,  4, 2 };

    
    // iteration : until my_length
    for (int i=0; i < my_length ; i++ ) {
       // extract from array
       int my_first  = my_firsts[i];
       int my_second = my_seconds[i];
        
       // function calls
       int my_prod = my_funct_mult (my_first, my_second);
       int my_div  = myFunctDiv    (my_first, my_second);
       
       // show in console
       cout << "prod " << my_first << "*" << my_second << " = " << my_prod << "\n";
       cout << "div  " << my_first << "/" << my_second << " = " << my_div  << "\n";
       cout << "\n";
    }

    
    // 0 : means all is ok.
    return 0;
}
