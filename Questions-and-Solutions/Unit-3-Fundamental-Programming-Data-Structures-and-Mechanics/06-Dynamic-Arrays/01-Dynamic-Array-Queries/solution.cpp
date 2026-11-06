#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, q;
    if (std::cin >> n >> q) {
        std::vector<std::vector<int>> arr(n);
        int lastAnswer = 0;

        for (int i = 0; i < q; ++i) {
            int type, x, y;
            std::cin >> type >> x >> y;
            int idx = (x ^ lastAnswer) % n;

            if (type == 1) {
                arr[idx].push_back(y);
            } else if (type == 2) {
                lastAnswer = arr[idx][y % arr[idx].size()];
                std::cout << lastAnswer << "\n";
            }
        }
    }

    return 0;
}
