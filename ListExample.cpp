#include <iostream>
#include <string>
#include <list>

using namespace std;

struct Parfum {
    string marka;
    string model;
    int fiyat;
};

int main() {
    list<Parfum> parfumler;

    int parfumSayisi;
    cout << "Kaç parfüm eklemek istiyorsunuz? ";
    cin >> parfumSayisi;

    for (int i = 0; i < parfumSayisi; i++) {
        Parfum parfum;
        cout << "Parfüm " << i+1 << endl;
        cout << "Marka: ";
        cin >> parfum.marka;
        cout << "Model: ";
        cin >> parfum.model;
        cout << "Fiyat: ";
        cin >> parfum.fiyat;
        cout << endl;

        parfumler.push_back(parfum);
    }

    cout << "Eklenen parfümler:" << endl;
    for (list<Parfum>::iterator it = parfumler.begin(); it != parfumler.end(); ++it) {
        cout << "Marka: " << it->marka << endl;
        cout << "Model: " << it->model << endl;
        cout << "Fiyat: " << it->fiyat << endl;
        cout << endl;
    }

    return 0;
}