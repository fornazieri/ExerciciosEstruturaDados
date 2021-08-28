#include<iostream>
using namespace std;
main()
{
	int vet[10], i, j, posi, aux, menor, eleito;

	for(i=0; i<10; i++)
	{
		cout<<"Informe o Elemento "<<i<<" do Vetor: ";
		cin>>vet[i];
	};

	cout<<"###  Vetor Desordenado ###\n";
	for(i=0; i<10; i++)
	{

		cout<<vet[i]<<"\t";
	};

	//###################################################################
	for(i=0; i<9; i++) // ESTE FOR SEMPRE SERA O TAMANHO DO VETOR MENOS 1
	{
		//###############################################################
		eleito = vet[i];		//
		posi = i+1;				//INCREMENTA O ELEITO
		menor = vet[i+1];		//
		//###############################################################
		for(j=i+1; j<10; j++)    	//ESTE FOR SEMPRE O TAMANHO DO VETOR
		{						 	//
			if (vet[j] < menor)		//
			{						//COMPARA TODOS A DIREITA
				menor = vet[j];		//E ESCOLHE O MENOR
				posi = j;			//
			};						//
		};							//
		//###############################################################
		if(vet[i] > menor)		//
		{						//
			aux = vet[i];		//VERIRICA SE O MENOR
			vet[i] = menor;		//É MENOR QUE O ELEITO
			vet[posi] = aux;	//
		};						//
		//###############################################################
	};
	//###################################################################

	cout<<"###  Vetor Ordenado ###\n";
	for(i=0; i<10; i++)
	{

		cout<<vet[i]<<"\t";
	};
};
