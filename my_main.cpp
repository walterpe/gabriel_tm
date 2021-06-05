#include "my_function.h"
#include "iostream"

using namespace std;

int main() {
    // function call
    int my_prod_a = my_funct_mult(3,4);
    // function call
    int my_prod_b = myFunctMult(3,4);
    
    // show in console
    cout << "prod a = " << my_prod_a << "\n";
    cout << "prod b = " << my_prod_b << "\n";
    
    // 0 : means all is ok.
    return 0;
}
