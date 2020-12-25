// Date created : 25-12-2020
// Author : Ayush Gupta
// Ramanujan-Sato series (refer to README.md or series-image.png for the formula)

#include <iostream>
#include <cmath>

// function to return the factorial of a number
double factorial(double n) {
    if (n==0) {
        return 1.0;
    }
    else {
        return n*factorial(n-1.0);
    }
}

int main() {
    // pi = {n*sk}^{-1}
    double n = sqrt(8)/pow(99,2);
    double sk = 0;
    for (double k=0; k<=5; k++) {
        sk += ((factorial(4*k))/pow(factorial(k),4))*((26390*k+1103)/pow(396,(4*k)));
    }
    double pi = 1/(n*sk);
    std :: cout << "CPP pi = " << pi;
    return 0;
}
