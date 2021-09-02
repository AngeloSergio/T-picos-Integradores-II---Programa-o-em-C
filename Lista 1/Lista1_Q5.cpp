//Nome: Angelo Sérgio
//Matricula: 04031043
//BCC 8 sem. manhã

#include <iostream>

using namespace std;

int main()
{
    float vTotal;
    int op, qFlex, qPremium, qGold;
    op = 0;
    qFlex = 0;
    vTotal = 0;
    
    while (op != 4){
    
        cout << "Escolha a ração desejada:" <<endl;
        cout << "1 - flex (20kg) - R$30,00" <<endl;
        cout << "2 - premium (20kg) - R$40,00" <<endl;
        cout << "3 - gold (20kg) - R$50,00" <<endl;
        cout << "4 - encerrar compra" << endl;
        
        cin >> op;
        
        switch (op){
            
            case 1:
            vTotal = vTotal + (30 - 30 * 0.10);
            qFlex = qFlex + 1;
            cout << "Ração flex adicionada ao carrinho!" << endl;
            break;
            
            case 2:
            vTotal = vTotal + (40 - 40 * 0.20);
            qPremium = qPremium + 1;
            cout << "Ração premium adicionada ao carrinho!" << endl;
            break;
            
            case 3:
            vTotal = vTotal + (50 - 50 * 0.30);
            qGold = qGold + 1;
            cout << "Ração gold adicionada ao carrinho!" << endl;
            break;
            
            case 4:
            if (qFlex > 0){
                cout << "Você comprou " << qFlex << " rações flex" << endl;
                cout << "Com um desconto de R$" << qFlex * (30 * 0.10) << endl;
            }
            
            if (qPremium > 0){
                cout << "Você comprou " << qPremium << " rações premium" << endl;
                cout << "Com um desconto de R$" << qPremium * (40 * 0.20) << endl;
            }
            
            if (qGold > 0){
                cout << "Você comprou " << qGold << " rações gold" << endl;
                cout << "Com um desconto de R$" << qGold * (50 * 0.30) << endl;
            }
            cout << "Total da compra com descontos: R$" << vTotal;
            exit(1);
            break;
        }
    }

    return 0;
}
