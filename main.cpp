#include <iostream>
#include <ostream>

#include "test.cpp"
#include "math/PrimeNumber.h"
using namespace std;

int main() {
    PrimeNumber prime;
    int res = prime.solve(10);

    cout << res << endl;
    return 0;
}