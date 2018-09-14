#include <iostream>
#include "gcd.hpp"

using namespace std;

int main() {

    int a = 15, b = 20;
    printf("Greatest common denominators between %d and %d is %d", a, b, gcd(a, b));

    return 0;
}

int gcd ( const int a , const int b ) {
    if (a == b) {
        return a;
    }
    else if (a > b) {
        return gcd(a-b, b);
    }
    else {
        return gcd(a, b-a);
    }
}