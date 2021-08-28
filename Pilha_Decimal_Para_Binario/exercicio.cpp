#include<iostream>
#include<windows.h>
using namespace std;

int const maxtam=400;
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
	int valor, n;

	do{
		cout<<"Digite Um Numero Decimal para ser convertido em Binário (0123 para Sair): ";
		cin>>n;
		if(n != 12345)
		{
			system("cls");
			pilha_construtor();


			cout<<"Numero Digitado: "<<n<<"\n";

			while(n>0)
			{
				valor = n % 2;
				pilha_push(valor);
				n = n / 2;
			};

			while(pilha_pop(valor))
			{
				cout<<"Corresponde ao Binario: "<<valor<<"\n";
			};

			system("pause");
			system("cls");
		};
	}while (n!= 12345);

};

