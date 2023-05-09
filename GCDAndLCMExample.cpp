#include <iostream>
using namespace std;

//ebob uchun
int greatestCommonDivisor(int a, int b) {
    int gcd = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

//ekob uchun
int leastCommonMultiple(int a, int b) {
    return (a*b) / greatestCommonDivisor(a, b);
}

void calculateGCDandLCM(int* numbers, int size) {
    int largest = numbers[0], smallest = numbers[0];
    int gcdResult = numbers[0], lcmResult = numbers[0];
    for (int i = 1; i < size; i++) {
        largest = max(largest, numbers[i]);
        smallest = min(smallest, numbers[i]);
        gcdResult = greatestCommonDivisor(gcdResult, numbers[i]);
        lcmResult = leastCommonMultiple(lcmResult, numbers[i]);
    }
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "GCD: " << gcdResult << endl;
    cout << "LCM: " << lcmResult << endl;
}

int main() {
    int size;
    cout << "How many numbers will you enter? ";
    cin >> size;

    int* numbers = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter a number: ";
        cin >> numbers[i];
    }

    calculateGCDandLCM(numbers, size);

    delete[] numbers;

    return 0;
}