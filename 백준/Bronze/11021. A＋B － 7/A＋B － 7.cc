#include <iostream>

int main() {
    int T;
    std::cin >> T;
    int s[T];
    for (int i = 1; i <= T; i++) {
        int A, B;
        std::cin >> A >> B;
        s[i-1] = A+B;
    }
    for (int i = 1; i <= T; i++) {
        std::cout << "Case #" << i << ": " << s[i-1] << "\n";
    }
}