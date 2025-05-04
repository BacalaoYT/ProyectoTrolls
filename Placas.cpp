#include <iostream>
using namespace std;

#define MAXLETRA 21

struct Matriculas{ // Hacemos un incremento para el caracter nulo que se agrega
    char numeros[5];
    char letras[4];

} matricula;

int main(){

    cout << "Ingrese la matricula de la forma (XXXX ABC): ";
    cin >> matricula.numeros >> matricula.letras;

}