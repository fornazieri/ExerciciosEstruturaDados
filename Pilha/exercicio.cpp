#include<iostream>
using namespace std;

int const maxtam=5;
int pilha[maxtam];
int topo;

void pilha_construtor()
{
	topo = -1;
};

bool pilha_vazia()
{
	if(topo == -1)
	{
		return true;
	}else
	{
		return false;
	};
};

bool pilha_cheia()
{
	if (topo == maxtam -1)
	{
		return true;
	}else
	{
		return false;
	};
};

bool pilha_push(int valor)
{
	if(pilha_cheia())
	{
		return false;
	}else
	{
		topo++;
		pilha[topo] = valor;
		return true;
	};
};

bool pilha_pop(int &valor)
{
	if(pilha_vazia())
	{
		return false;
	}else
	{
		valor = pilha[topo];
		topo--;
		return true;
	};
};

bool pilha_get(int &valor)
{
	if(pilha_vazia())
	{
		return false;
	}else
	{
		valor = pilha[topo];
		return true;
	};
};

main()
{
	setlocale(LC_ALL, "portuguese");
	int valor;

	cout<<"Empilhando valores via código fonte, e desempilhando só um valor. \n";
	pilha_construtor();
	pilha_push(5);
	pilha_push(10);
	pilha_push(15);
	pilha_pop(valor);

	cout<<" - Valor desempilhado é: "<<valor;

	cout<<"\n\nEmpilhando Dinamicamente.\n";
	pilha_construtor();

	while(!pilha_cheia())
	{
		cout<<" - Informe os valores: ";
		cin>>valor;
		pilha_push(valor);
	};

	cout<<"\nImprimindo o valor do Topo Utilizando PILHA_GET (não altera o valor da pilha, só faz GET no topo).\n";
	pilha_get(valor);
	cout<<" - Valor do Topo: "<<valor<<"\n";

	cout<<"\nDesempilhando Dinamicamente.\n";

	while(pilha_pop(valor))
	{
		cout<<" - Desempiplhando: "<<valor<<"\n";
	};
};
