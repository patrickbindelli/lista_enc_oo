//Prototipar a classe
//Lista.h
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include "no_dado.h"
#include <curses.h>

using namespace std;

//struct lista {
//	int info;
//	struct lista* prox;
//};
//typedef struct lista no_dado;


//Estruturar a classe Lista que ter� os m�todos de manipula��o da lista simples, usando aloca��o
//de n�-dado struct lista (no_dado) dinamicamente
class Lista{
	//Declarar atributos
	private:
		no_dado* cabeca; //controle de n�-cabe�a
		int qtd; //guardar qtd de n�s encadeados
	
	//Declarando m�todos	
	public:
		Lista();
		~Lista();
		void insere_inicio(int i);
		void insere_fim(int i);
		void imprime();
		void vazia();
		void libera();
		void tamanho();
		void busca(int i);
		void retira(int i);
		void retira_inicio();
		void retira_fim();
		void imprime_inicio();
		void imprime_fim();
		
	private:
		bool isEmpty(no_dado* l);//m�todo privado que auxiliar� verifica��o de lista vazia a partir de um ponteiro	
};

