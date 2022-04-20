#include <iostream>
#include <string>

using namespace std; 

int main () {
//Variaveis
string nome;
int idade;
bool TesteParada;
 

//Impressão de Tela
cout << " ///////////////////////////////\n";
cout << " /////  LOCADORA DO DANILO  /////\n";
cout << " ///////////////////////////////\n\n";
cout << " -------Cadastro do Usuario-------- ";
cout << "\n\n";
cout << "Nome do Usuario: ";
cin >> nome;
cout << "\n";
cout << "Idade: ";
cin >> idade; 

cout << "\n" << "Confirmando a entrada: " << nome << ", " << idade;



cout << "\n" << "Digite OK para sair: ";
    cin >> TesteParada;

return 0;
}