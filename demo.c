#include "printTitle.h"

int main(){
    // example #1
    char *test = "ABCD";
    printTitle(test, '#', 'u');
    
    // example #2
    test = "xyz";
    printTitle(test, '@', 0);
    
    // example #3
    test = "Success";
    printTitle(test, '$', 'u');

    return 0;
}
