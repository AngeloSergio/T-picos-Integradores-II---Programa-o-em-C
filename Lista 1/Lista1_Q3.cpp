//Nome: Angelo Sérgio
//Matricula: 04031043
//Turma: BCC 8 sem. manhã
#include <iostream>

using namespace std;

int main()
{
    float vTotal, vDivisao, vRicardo, vJoao, vRodrigo, vCentavos;
    
    cout << "Qual o valor total a ser pago: R$";
    cin >> vTotal;
    vDivisao = vTotal/3;
    vCentavos = vDivisao - int(vDivisao);
    
    vJoao = int(vDivisao);
    vRodrigo = int(vDivisao);
    vRicardo = int(vDivisao) + vCentavos * 3;
    cout << "João deve pagar: R$" << vJoao << endl;
    cout << "Rodrigo deve pagar: R$" << vRodrigo << endl;
    cout << "Ricardo deve pagar: R$" << vRicardo << endl;

    return 0;
}
