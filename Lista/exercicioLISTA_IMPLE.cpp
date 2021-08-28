#include<iostream>
#include<windows.h>
using namespace std;

int const maxtam = 10;
int lista[maxtam];
int frente;
int tras;

void lista_construtor()
{
	tras   = -1;
	frente =  0;
};

bool lista_vazia()
{
	if(tras == -1)
	{
		return true;
	}else
	{
		return false;
	};
};

bool lista_cheia()
{
	if(tras == maxtam -1)
	{
		return true;
	}else
	{
		return false;
	};
};


bool inserir_fim(int valor)
{
	if(lista_cheia())
	{
		return false;
	}else
	{
		tras++;
		lista[tras] = valor;
		return true;
	};
};

bool inserir_inicio(int valor)
{
	if(lista_cheia())
	{
		return false;
	}else
	{
		for(int i=tras+1; i>frente; i--)
		{
			lista[i] = lista[i-1];
		};
		lista[frente] = valor;
		tras++;
		return true;
	};
};

bool inserir_meio(int valor, int posicao)
{
	if(lista_cheia())
	{
		return false;
	}else
	{
		if((posicao > frente) and (posicao < tras))
		{
			for(int i=tras+1; i>posicao; i--)
			{
				lista[i] = lista[i-1];
			};
			lista[posicao] = valor;
			tras++;
			return true;
		}else
		{
			return false;
		};
	};
};

bool remover_fim(int &valor)
{
	if(lista_vazia())
	{
		return false;
	}else
	{
		valor = lista[tras];
		tras--;
		return true;
	};
};

bool remover_inicio(int &valor)
{
	if(lista_vazia())
	{
		return false;
	}else
	{
		valor = lista[frente];
		for(int i=frente; i<tras; i++)
		{
			lista[i] = lista[i+1];
		};
		tras--;
		return true;
	};
};

bool remover_meio(int &valor, int posicao)
{
	if(lista_vazia())
	{
		return false;
	}else
	{
		if((posicao > frente) and (posicao < tras))
		{
			valor = lista[posicao];
			for(int i=posicao; i<tras; i++)
			{
				lista[i] = lista[i+1];
			};
			tras--;
			return true;
		}else
		{
			return false;
		};
	};
};

bool busca_valor_retorna_posicao(int valor, int &posicao)
{
	int achou;
	if(lista_vazia())
	{
		return false;
	}else
	{
		for(int i=frente; i<=tras; i++)
		{
			if(lista[i] == valor)
			{
				posicao = i;
				achou = 1;
				break;
			}else
			{
				achou = 0;
			};
		};

		if(achou == 1)
			return true;
		else
			return false;
	};
};

main()
{
	setlocale(LC_ALL, "portuguese");

	int numero, valor, posicao;

	lista_construtor();
	inserir_inicio(1);
	inserir_inicio(2);
	inserir_inicio(3);
	inserir_inicio(4);
	inserir_inicio(5);

	cout<<"Digite um valor para buscar: ";
	cin>>numero;

	if(busca_valor_retorna_posicao(numero, valor))
	{
		cout<<"\n o numero "<<numero<<" esta na posicao: "<<valor;
	}else
	{
		cout<<"\n o numero não esta na lista";
	};


}
