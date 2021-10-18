#include <iostream>
#include "sstring.h"

int main() {
    SString S,T,V;

    create_string(&S,"acacacacacacacac");
    print_string(S);
    create_string(&T,"a");
    print_string(T);
    create_string(&V,"ac");
    print_string(V);
    replace(&S,T,V);

    print_string(S);
    return 0;
}
