#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long total_divisors = 0;
    for (long long i = 1; i <= n; i++) {
        total_divisors += n / i;
    }

    cout << total_divisors;
    return 0;
}
