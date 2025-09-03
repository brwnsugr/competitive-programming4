#pragma once
#include <vector>
#include <bitset>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;

// 전역 변수 선언 (다른 파일에서 사용 가능)
extern ll _sieve_size;
extern bitset<10000010> bs;
extern vll p;

// 함수 선언
void sieve(ll upperbound);
bool isPrime(ll N);
vll primeFactors(ll N);
int numPrimeFactors(ll N); // number of prime factors
int numDiv(ll N); // number of divisors of Integer N