//Nome: Angelo Sérgio
//Matricula: 04031043
//Turma: BCC 8 sem. manhã
#include <iostream>

using namespace std;

int main()
{
    string numConta;
    float saldo, cheque, valor;
    int op;
    
    cheque = 2000;
    op == 0;
    
    cout << "digite o número da sua conta: ";
    cin >> numConta;
    
    while(op != 3){
    
        cout << "1 - DEPÓSITO" << endl;
        cout << "2 - SAQUE" << endl;
        cout << "3 -  SAIR" << endl;
        cout << "Escolha a opção desejada: " << endl;
        
        cin >> op;
        
        switch(op){
            case 1:
                cout << "qual o valor do depósito: R$";
                cin >> valor;
                cout << "adicionando valor..." << endl;
                saldo = saldo + valor;
                cout << "novo saldo da conta: R$" << saldo << endl;
                break;
                
            case 2:
                cout << "qual o valor do saque: R$";
                cin >> valor;
                
                if(valor > saldo){
                    cout << "ATENÇÃO: você estourou seu saldo bancário e o valor foi descontado do cheque especial." << endl;
                    saldo = saldo - valor;
                    cheque = cheque + saldo;
                    saldo = 0;
                    cout << "valor descontado do cheque: R$" << 2000 - cheque << endl;
                    cout << "valor restante do cheque: R$" << cheque << endl;
                    
                }else{
                    cout << "sacando o valor..." << endl;
                    saldo = saldo - valor;
                    cout << "novo saldo da conta: R$" << saldo << endl;   
                }
                
                break;
        }
    }

    return 0;
}
