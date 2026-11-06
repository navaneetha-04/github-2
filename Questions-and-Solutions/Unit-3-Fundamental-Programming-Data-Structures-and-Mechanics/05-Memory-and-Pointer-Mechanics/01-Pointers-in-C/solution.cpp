#include <iostream>
#include <cmath>

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = std::abs(*a - *b);
    *a = sum;
    *b = diff;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b;
    if (std::cin >> a >> b) {
        update(&a, &b);
        std::cout << a << "\n" << b << "\n";
    }

    return 0;
}
