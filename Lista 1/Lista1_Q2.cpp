//Nome: Angelo Sérgio
//Matricula: 04031043
//Turma: BCC 8° sem. manhã


#include <iostream>

using namespace std;

int main()
{
    int qtdProd;
    float precoProd, comiQtd, comiVend;
    
    cout << "Qual o valor do produto: R$";
    cin >> precoProd;
    
    cout << "Quantos produtos foram vendidos: ";
    cin >> qtdProd;
    
    comiQtd = qtdProd * 10;
    comiVend = (precoProd * 0.03) * qtdProd; 
    cout << "Comissão pela quantidade de produtos: R$" << comiQtd << endl;
    cout << "Comissão de 3% do valor da venda: R$" << comiVend << endl;
    cout << "Salário total do funcionário: R$" << 3300 + comiQtd + comiVend;
    

    return 0;
}
