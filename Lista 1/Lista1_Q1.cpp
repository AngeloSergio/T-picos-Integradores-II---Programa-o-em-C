//Nome: Angelo Sérgio
//Matricula: 04031043
//Turma: BCC 8° sem. manhã


#include <iostream>

using namespace std;

int main()
{
    float preco;
    
    cout << "Qual o preço do produto que deseja comprar: ";
    cin >> preco;
    
    if(preco < 90){
       cout << "O valor do seu desconto é de: R$" << preco * 0.10;
       cout << " O valor total da sua compra é de: R$" << preco - preco * 0.10;
    }else if(preco >= 90 && preco <= 150){
       cout << "O valor do seu desconto é de: R$" << preco * 0.15;
       cout << " O valor total da sua compra é de: R$" << preco - preco * 0.15; 
    }else{
       cout << "O valor do seu desconto é de: R$" << preco * 0.25;
       cout << " O valor total da sua compra é de: R$" << preco - preco * 0.25; 
    }

    return 0;
}
