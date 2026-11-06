#include <iostream>
#include <string>

long long super_digit(long long val) {
    if (val < 10) return val;
    long long sum = 0;
    while (val > 0) {
        sum += val % 10;
        val /= 10;
    }
    return super_digit(sum);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string n;
    long long k;
    if (std::cin >> n >> k) {
        long long initial_sum = 0;
        for (char ch : n) {
            initial_sum += (ch - '0');
        }
        initial_sum *= k;
        std::cout << super_digit(initial_sum) << "\n";
    }

    return 0;
}
