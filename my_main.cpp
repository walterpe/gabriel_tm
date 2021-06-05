#include "my_function.h"
#include "myFunction.h"

// camelCaseStyle
// underline_style

#include "iostream"

using namespace std;

int main() {

    // variable assignement : var_name = value    
    int my_first = 15;
    int my_second = 3;
    
    // function calls
    int my_prod_a = my_funct_mult (my_first, my_second);
    int my_div_b  = myFunctDiv    (my_first, my_second);
    
    // show in console
    cout << "prod " << my_first << "*" << my_second << " = " << my_prod_a << "\n";
    cout << "div  " << my_first << "/" << my_second << " = " << my_div_b << "\n";
    
    // 0 : means all is ok.
    return 0;
}
