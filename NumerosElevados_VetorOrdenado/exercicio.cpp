#include<iostream>
#include<windows.h>
using namespace std;

int expoente(int base, int exp)
{
	int i, numero;
	numero = base;
	for(i=0; i<exp-1; i++)
	{
		numero = numero * base;
	};
	return numero;
};

main()
{
	setlocale(LC_ALL, "portuguese");

	int qtd, i, j, eleito, posi, menor, aux;

	cout<<"Digite a Quantidade de Elementos do Vetor: ";
	cin>>qtd;
	while(qtd <= 0)
	{
		cout<<"O Numero é Menor ou Igual a Zero, Digite um Numero Válido: ";
		cin>>qtd;
	};
	system("cls");

	int vetnum[qtd], vetexp[qtd], vetres[qtd];

	for(i=0; i<qtd; i++)
	{
		cout<<"Digite o Numero BASE da Posição "<<i<<" do Vetor: ";
		cin>>vetnum[i];

		cout<<"Digite o Expoente da Base "<<vetnum[i]<<": ";
		cin>>vetexp[i];

		cout<<"\n";
	};

	for(i=0; i<qtd; i++)
	{
		vetres[i] = expoente(vetnum[i], vetexp[i]);
	};

	cout<<"\n### VETOR DESORDENADO ###\n";

	for(i=0; i<qtd; i++)
	{
		cout<<"Posição "<<i<<": "<<vetres[i]<<"\n";
	};

	for(i=0; i<qtd-1; i++)
	{
		eleito = vetres[i];
		posi = i+1;
		menor = vetres[i+1];

		for(j=i+1; j<qtd; j++)
		{
			if (vetres[j] < menor)
			{
				menor = vetres[j];
				posi = j;
			};
		};

		if(vetres[i] > menor)
		{
			aux = vetres[i];
			vetres[i] = menor;
			vetres[posi] = aux;
		};

	};


	cout<<"\n### VETOR ORDENADO ###\n";

	for(i=0; i<qtd; i++)
	{
		cout<<"Posição "<<i<<": "<<vetres[i]<<"\n";
	};

};
