#include <iostream>
using namespace std;

void update_values(int& ilk, int& son, int artan1, int artan2, int*& arr) {
    ilk += artan1;
    son += artan2;
    int size = son - ilk + 1;
    int* new_arr = new int[size];
    for (int i = 0; i < size; i++) {
        new_arr[i] = ilk + i;
    }
    delete[] arr; 
    arr = new_arr; 
}

int main() {
    static int ilk,son;
    int artan1, artan2;
    int* arr;

    cout << "ilk ededi daxil edin: "<< endl;
    cin >> ilk;

    cout << "sonuncu ededi daxil edin: "<< endl;
    cin >> son;

    if (cin.fail()) {
        cout << "Daxil edilen deyer duzgun deyil. Zehmet olmasa, reqem daxil edin." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        return 0;
    }

    int size = son - ilk + 1;
    arr = new int[size];

    cout << "araliq ededler: ";
    for (int i = 0; i < size; i++) {
        arr[i] = ilk + i;
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "ilk ededi ne qeder artiraq?: ";
    cin >> artan1;

    cout << "ikinci ededi ne qeder artiraq?: ";
    cin >> artan2;

    update_values(ilk, son, artan1, artan2, arr);

    size = son - ilk + 1;
    cout << "araliq ededler: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; 

    return 0;
}