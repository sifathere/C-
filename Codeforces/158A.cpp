#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int threshold = a[k - 1];

    for (int i = 0; i < n; i++) {
        if (a[i] >= threshold && a[i] > 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
