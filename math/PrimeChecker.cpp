//
// Created by eunho on 3/9/25.
//

#include "PrimeChecker.h"

ll _sieve_size;
bitset<10000010> bs;
vll p;

void sieve(ll upperbound) {

    _sieve_size = upperbound + 1;
    bs.set();

    bs[0] = bs[1] = 0;

    for (ll i = 2; i < _sieve_size; i++) if (bs[i]) {
        // cross out multiples of i starting from i * i;
        for (ll j = i + i; j < _sieve_size; j += i) bs[j] = 0;
        p.push_back(i);
    }
}

bool isPrime(ll N) {
    if (N < _sieve_size) return bs[N];
    for (int i = 0; i < (int)p.size() && p[i] * p[i] <= N; i++) {
        if (N % p[i] == 0) {
            return false;
        }
    }
    return true;
}

vll primeFactors(ll N) {
    vll factors;
    for (int i = 0; i < (int)p.size() && p[i] * p[i] <= N; i++) {
        while (N % p[i] == 0) {
            N /= p[i];
            factors.push_back(p[i]);
        }
    }
    if (N != 1) factors.push_back(N);
    return factors;
}

int numPrimeFactors(ll N) {
    int ans = 0;
    for (int i = 0; i < (int)p.size() && p[i] * p[i] <= N; i++)
        while (N % p[i] == 0) { N /= p[i]; ans++;}
    return ans;
}

int numDiv(ll N) {
    int ans = 1;
    for (int i = 0; i < (int) p.size() && p[i] *p[i] <= N; i++) {
        int pow = 0;
        while (N % p[i] == 0) {
            N /= p[i];
            pow++;
        }
        ans *= pow + 1;
    }
    return N != 1 ? ans * 2 : ans; // if N != 1, last factor is N^1,
}

