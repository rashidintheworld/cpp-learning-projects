#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Daxil edeceyiniz ededlerin sayini daxil edin: ";
    cin >> n;

    int arr[n];
    cout << "Ededleri daxil edin: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Sade ededler: ";
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Murekkeb ededler: ";
    for (int i = 0; i < n; i++) {
        if (!isPrime(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}