#include <iostream>
#include <string>

using namespace std;

int main() {
    char seunome[30]; 
    int x = 10;
    string nome = "Joao";
    string linguagem = "C++";

    cout << nome << " X: " << x << " Linguagem usada: " << linguagem << endl;
    cout << "Qual é o seu nome?" << endl;
    cin >> seunome;
    cout << "Boa tarde " << seunome << endl;

    return 0; 
}
