#include <iostream>
using namespace std;

int main() {
    int n, k = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int p, v, t;
        cin >> p >> v >> t;

        if (p + v + t >= 2) {
            ++k;
        }
    }

    cout << k << endl;
    return 0;
}
