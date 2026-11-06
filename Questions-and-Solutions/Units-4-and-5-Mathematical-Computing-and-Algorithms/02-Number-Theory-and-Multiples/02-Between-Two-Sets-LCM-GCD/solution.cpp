#include <iostream>
#include <vector>
#include <numeric>

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        std::swap(a, b);
    }
    return a;
}

long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    if (std::cin >> n >> m) {
        std::vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i) std::cin >> a[i];
        for (int i = 0; i < m; ++i) std::cin >> b[i];

        long long l = a[0];
        for (int i = 1; i < n; ++i) {
            l = lcm(l, a[i]);
            if (l > 100) break;
        }

        long long g = b[0];
        for (int i = 1; i < m; ++i) {
            g = gcd(g, b[i]);
        }

        int count = 0;
        if (l > 0 && g % l == 0) {
            for (long long val = l; val <= g; val += l) {
                if (g % val == 0) {
                    count++;
                }
            }
        }

        std::cout << count << "\n";
    }

    return 0;
}
