//
// Created by igorc on 8/15/2023.
//

#include <iostream>
using namespace std;

void swap(int& a, int& b);

// Ponteiro é uma variável que armazena o endereço de memória de uma outra variável (ou função).
int num = 10;
int *ptr = &num;

int value = *ptr;

// Referência - é um alias para uma variável existente, o que significa que é um nome diferente para o mesmo local de memória.
int &refe = num;

int main() {
    cout << value << '\n';
    cout << refe << '\n';

    int x = 5, y = 10;
    cout << "Before Swap: x = " << x << " y = " << y << '\n'; // Outputs 5 10

    swap(x, y);
    cout << "After Swap: x = " << x << " y = " << y << '\n'; // Outputs 10 5

    return 0;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}