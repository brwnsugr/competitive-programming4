#include <iostream>
#include <ostream>

#include "math/PrimeChecker.h"
using namespace std;

int main() {

    vll r;
    sieve(100000);
    r = primeFactors((1LL << 31) - 1);
    for (auto &pf : r) printf("> %lld\n", pf);
    return 0;
}