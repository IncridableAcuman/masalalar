// #include <iostream>
// using namespace std;

// int main() {
//     long long n;
//     cin >> n;

//     long long total_divisors = 0;
//     for (long long i = 1; i <= n; i++) {
//         total_divisors += n / i;
//     }

//     cout << total_divisors;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef __int128 i128; // katta ko‘paytirish uchun

ull mulmod(ull a, ull b, ull m) {
    return (i128)a * b % m;
}

ull powmod(ull a, ull e, ull m) {
    ull r = 1;
    while (e) {
        if (e & 1) r = mulmod(r, a, m);
        a = mulmod(a, a, m);
        e >>= 1;
    }
    return r;
}

bool isPrime(ull n) {
    if (n < 2) return false;
    for (ull p : {2,3,5,7,11,13,17,19,23,29,31,37}) {
        if (n % p == 0) return n == p;
    }
    ull d = n - 1, s = 0;
    while ((d & 1) == 0) d >>= 1, s++;
    for (ull a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) {
        if (a % n == 0) continue;
        ull x = powmod(a, d, n);
        if (x == 1 || x == n-1) continue;
        bool ok = false;
        for (ull r = 1; r < s; r++) {
            x = mulmod(x, x, n);
            if (x == n-1) { ok = true; break; }
        }
        if (!ok) return false;
    }
    return true;
}

ull f(ull x, ull c, ull n) {
    return (mulmod(x, x, n) + c) % n;
}

ull pollard(ull n) {
    if (n % 2 == 0) return 2;
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    ull x, y, d, c;
    while (true) {
        x = y = rng() % (n - 2) + 2;
        c = rng() % (n - 1) + 1;
        d = 1;
        while (d == 1) {
            x = f(x, c, n);
            y = f(f(y, c, n), c, n);
            d = __gcd((ull)abs((long long)x - (long long)y), n);
            if (d == n) break;
        }
        if (d > 1 && d < n) return d;
    }
}

vector<ull> factorize(ull n) {
    if (n == 1) return {};
    if (isPrime(n)) return {n};
    ull d = pollard(n);
    auto left = factorize(d);
    auto right = factorize(n / d);
    left.insert(left.end(), right.begin(), right.end());
    return left;
}

ull divisorCount(ull n) {
    auto factors = factorize(n);
    sort(factors.begin(), factors.end());
    ull ans = 1;
    for (size_t i = 0; i < factors.size();) {
        size_t j = i;
        while (j < factors.size() && factors[j] == factors[i]) j++;
        ans *= (j - i + 1); // (a+1)
        i = j;
    }
    return ans;
}

int main() {
    ull n;
    cin >> n;
    cout << divisorCount(n) << endl;
}
