/* 4.- Programe la función que int elevar(int base, int exponente), la cual eleva la base al exponente, la función no
puede usar pow */

#include <iostream>
using namespace std;

int elevar(int base, int exponente){
    int valor = 1;
    
    for (int i = 0; i < exponente; i++){
        valor *= base;
    }
    
    return valor;
}

int main(){
    cout << elevar(2, 3) <<endl;
}