/* 3.- Programe la función int quesigloes(int aaaammdd), que recibe una fecha en formato aaaa(año)mm(mes)dd(día), e indica
a qué siglo corresponde. Asuma solo fecha positivas.

Ejemplo quesigloes(19700101) debe devolver siglo 20 */

#include <iostream>
using namespace std;

int queSigloEs(int aaaammdd){
    int año = aaaammdd / 100;
    
    cout << año << endl;

    return año + 1;
}

int main() {
    cout << queSigloEs(17000101) << endl;
}