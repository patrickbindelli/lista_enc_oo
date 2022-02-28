#include "Lista.h"
#include "ncurses.h"


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	
	cout << "PROGRAMA LISTA ENCADEADA SIMPLES" << endl << endl;
	Lista l;

	int op;

	do{	
		cout << "1. Inserir no início" << endl;
		cout << "2. Inserir no fim"<< endl;
		cout << endl;
	
		cout << "3. Remover início"<< endl;
		cout << "4. Remover fim"<< endl;
		cout << "5. Remover número" << endl;
		cout << "6. Limpar Lista" << endl;
		cout << endl;

		cout << "7. Buscar"<< endl;
		cout << endl;

		cout << "8. Imprimir início da lista"<< endl;
		cout << "9. Imprimir final da lista"<< endl;
		cout << "10. Imprimir lista completa"<< endl;
		cout << "11. Imprimir Quantidade na Lista"<< endl << endl;
		cout << "-------------------------------------------"<< endl;
		cout << "99. Sair"<< endl << endl;
	
		cout << "Opção: ";
		cin >> op;

		int v;
		switch(op){
			case 1:
				cout << "[ Inserir no início ]" << endl << endl;
				cout << "Adicionar valor: ";
				cin >> v;
				
				l.insere_inicio(v);
				
				cout << endl << "> Valor adicionado !" << endl;
				getch();
				system("clear");
				break;
				
			case 2:
				cout << "[ Inserir no final ]" << endl << endl;
				cout << "Adicionar valor: ";
				cin >> v;
				
				//l.insere_fim(v);
				
				cout << endl << "> Valor adicionado !" << endl;
				system("clear");
				break;
				
			case 3:
				system("clear");
				l.retira_fim();
				
				cout << endl << "> Valor Removido !" << endl;
				
				break;
				
			case 4:
				system("clear");
				l.retira_fim();
				
				cout << endl << "> Valor Removido !" << endl;
				break;
				
			case 5:
				cout << "[ Remover dado ]" << endl << endl;
				cout << "Remover valor: ";
				cin >> v;
				
				//l.retira(v);
				cout << "Pressione para continuar...";
				
				
				system("clear");
				break;
				
			case 6:
				l.libera();
				cout << "Lista foi esvaziada" << endl;
				cout << "Pressione para continuar...";
				
				system("clear");
				break;
				
			case 7:
				
				break;
				
			case 8:
				system("clear");
				l.imprime_inicio();
				cout << "Pressione para continuar...";
				
				system("clear");
				break;
				
			case 9:
				l.imprime_fim();
				cout << "Pressione para continuar...";
				
				system("clear");
				break;
			
			case 10:
				l.imprime();
				cout << "Pressione para continuar...";
				
				system("clear");
				break;
			
			case 11:
				l.tamanho();
				cout << "Pressione para continuar...";
				
				system("clear");
				break;
			case 99:
				break;
			default:
				cout << "[Opção inválida]" << endl;
		}

	}while (op != 99);


	system("clear");
	l.~Lista();	
	return 0;
}
