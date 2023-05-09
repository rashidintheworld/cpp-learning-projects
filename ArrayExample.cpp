#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int size = 10;

// Arrayi random nomrelerle doldurur
void setRandomNums(int arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

// Arrayin elementlerinin kicikden boyuye siralayir
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}



// Array elementlerinin cemini hesablayir
int sumArrayElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[size];

    setRandomNums(arr, size);

    sortArray(arr, size);

    int sum = sumArrayElements(arr, size);

    cout << endl << "Array : " ;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << "Elementleri cemi: " << sum << endl;

    return 0;
}