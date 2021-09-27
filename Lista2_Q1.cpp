// Nome: Angelo Sérgio
// Matricula: 04031043
// Turma: BCC 8 sem. manhã
#include <iostream>
using namespace std;

int main() {
    int horaFunc[5];
    int horaExtra[5];
    float salBruto;
    
    for(int i = 1;i <= 5; i++){
        cout << "===========FUNCIONÁRIO " << i << " ============" << endl;
        cout << "Digite as horas trabalhadas no mês do funcionário " << i << ":";
        cin >> horaFunc[i];
        cout << "Digite as horas EXTRAS trabalhadas no mês do funcionário " << i << ":";
        cin >> horaExtra[i];
    }
    
    for(int i = 1; i<= 5; i++){
        cout << "===========FUNCIONÁRIO " << i << " ============" << endl;
        salBruto = (horaFunc[i] * 10) + (horaExtra[i] * 15);
        cout << "O salário bruto do funcionário " << i << " é de: R$" << salBruto << endl;
        cout << "O salário líquido do funcionário " << i << "é de: R$" << (salBruto) - (salBruto * 0.10) << endl;
        
    }
    
    return 0;
}