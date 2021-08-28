#include<iostream>
#include<windows.h>
using namespace std;
main()
{
	setlocale(LC_ALL, "portuguese");

	int vet[10], i, j, achou, posi, eleito, qtd_impares, soma;
	qtd_impares = 0;
	soma = 0;
	for(i=0; i<10; i++)
	{
		cout<<"Digite um numero para o elemento "<<i<<" do vetor: ";
		cin>>vet[i];
		if(vet[i] % 2 != 0)
		{
			qtd_impares++;
		};
		soma = soma + vet[i];
	};

	for(i=1; i<10; i++) //i comanda a parte desordenada
	{
		eleito = vet[i];
		j = 0; //j comanda parte ordenada
		achou = 0;
		while((j<i) and (achou == 0)) //começo A - verifica qual o elemento da parte ordenada maior que o eleito
		{
			if(vet[j] > eleito)
			{
				achou = 1;
				posi = j; //posi armazena a posição do elemento maior que o eleito
			}else
			{
				j++;
			};

		};/////////////////////////////FIM A

		if(achou == 1) //COMEÇO B - Desclocamento e inserção do eleito
		{
			for(j=i; j>posi; j--)
			{
				vet[j] = vet[j-1];
			};
			vet[posi] = eleito;
		};/////////////FIM B
	};

	system("cls");
	cout<<"###   VETOR ORDENADO   ###\n";
	for(i=0; i<10; i++)
	{
		cout<<"Elemento "<<i<<": "<<vet[i]<<"\n";
	};
	cout<<"Soma de Todos os Elementos: "<<soma;
	cout<<"\nQuantidade de Elementos Impares: "<<qtd_impares;
	cout<<"\n\n";

};
