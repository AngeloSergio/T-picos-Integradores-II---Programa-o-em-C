// Nome: Angelo Sérgio
// Matricula: 04031043
// Turma: BCC 8 sem. manhã
#include <iostream>
using namespace std;

int main() {
    float valor[5], vTotal, mediaTotal;
    string merc[5];
    
    for(int i = 1; i <=5; i++){
        cout << "Digite o valor da mercadoria " << i << ": ";
        cin >> valor[i];
        cout << endl;
        vTotal += valor[i];
        
        cout << "Ainda existe esta mercadoria no estoque (S/N): ";
        cin >> merc[i];
        cout << vTotal;
        cout << endl;
    }
    
    mediaTotal = vTotal / 5;
    cout << "O valor total das mercadorias foi de R$" << vTotal << endl;
    cout << "A média de valor das mercadorias foi de R$" << mediaTotal << endl;
    
    return 0;
}
