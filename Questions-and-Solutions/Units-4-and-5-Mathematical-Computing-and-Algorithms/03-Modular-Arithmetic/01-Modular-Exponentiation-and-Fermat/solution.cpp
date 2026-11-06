#include <iostream>

const long long MOD = 1000000007;

// Binary exponentiation: (base^exp) % mod
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// Modular inverse via Fermat's Little Theorem: a^(MOD-2) % MOD
long long mod_inverse(long long n) {
    return power(n, MOD - 2);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long base, exp;
    if (std::cin >> base >> exp) {
        std::cout << "Power: " << power(base, exp) << "\n";
        std::cout << "Mod Inverse: " << mod_inverse(base) << "\n";
    }

    return 0;
}
