#include "my_function.h"
#include "myFunction.h"

// camelCaseStyle
// underline_style

#include "iostream"

using namespace std;

int main() {
    // function call
    int my_prod_a = my_funct_mult(15,3);
    // function call
    int my_div_b = myFunctDiv(15,3);
    
    // show in console
    cout << "prod 15*3 = " << my_prod_a << "\n";
    cout << "div  15/3 = " << my_div_b << "\n";
    
    // 0 : means all is ok.
    return 0;
}
