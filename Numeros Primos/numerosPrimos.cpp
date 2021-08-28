//VITOR FORNAZIERI RODRIGUES RA: 203010-4 UNISALESIANO ARAÇATUBA 18/08/2015 TDS 4º TERMO
#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL, "portuguese");
	int vet[10], i, p, primo, achou, aux;

	for(i=0; i<10; i++)
	{
		cout<<"Digite um Numero Primo: ";
		cin>>vet[i];
		cout<<"\n";

		do{
			primo = 1;
			if(vet[i] != 1)
			{
				for(p=2; p<vet[i]; p++)
				{
					if(vet[i]%p == 0)
					{
						primo = 0;
					};
				};
			}
			else
			{
				primo = 0;
			};
			if(primo == 0)
			{
				cout<<"O Numero "<<vet[i]<<" não é Primo, Digite um Numero Primo: ";
				cin>>vet[i];
				cout<<"\n";
			};
		}while(primo == 0);
	};

	cout<<"\n### VETOR NÃO ORDENADO ###\n";
	for(i=0; i<10; i++)
	{
		cout<<"Posição "<<i<<": "<<vet[i]<<"\n";
	};


	achou = 1;
	while(achou == 1)
	{
		achou = 0;
		for(i=0; i<10; i++)
		{
			if(vet[i] > vet[i+1])
			{
				achou = 1;
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
			};
		};
	};

	cout<<"\n### VETOR ORDENADO ###\n";

	for(i=0; i<10; i++)
	{
		cout<<"Posição "<<i<<": "<<vet[i]<<"\n";
	};
}


