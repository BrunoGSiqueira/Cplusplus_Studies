#include <iostream>
#include <cmath>
using namespace std;

/*ESTRUTURA DE REPETIÇÃO FOR (PARA)

Haverá uma inicialização, uma condição a ser atendida, um incremento

for(INICIALIZAÇÃO; CONDIÇÃO; INCREMENTO)
{

}

*/

int main()
{	
	//EXEMPLO I - A ENTRADA DO DADO IRÁ DESIGNAR A PARTIR DE QUE NÚMERO PAR QUERO QUE IMPRIMA ATÉ MENOS QUE 100;
	int entrada;
	cout<<"DIGITE PARA SABER QUAIS SAO OS NUMERO PARES DE ... ATE 100: ";	
	cin>>entrada;
	for(int i = entrada; i<=100; i+=2)
	{
		cout<<"--"<<i;
	}

	cout<<endl<<endl;

	//EXEMPLO II - A ENTRADA IRÁ DESIGNAR ATÉ QUE NÚMERO ÍMPAR QUERO QUE IMPRIMA.
	int entrada2;
	cout<<"DIGITE PARA SABER QUAIS SAO OS NUMERO IMPARES ATE: ";
	cin>>entrada2; 
	
	for(int i=1 ; i<entrada2; i+=2)
	{
		cout<<"--"<<i;
	}

	cout<<endl<<endl;
	
	//EXEMPLO III - A ENTRADA IRÁ DESIGNAR DE QUE NÚMERO ÍMPAR QUERO QUE IMPRIMA ATÉ SUA SOMA COM +12. EXEMPLO 51+12 = 51 53 55 57 59 61 63
	int entrada3;
	cout<<"DIGITE PARA SABER QUAIS SAO OS NUMERO IMPARES DE ... SOMADO + 12: ";
	cin>>entrada3; 
	
	for(int i=entrada3 ; i<=entrada3+12; i+=2)
	{
		cout<<"--"<<i;
	}

	cout<<endl<<endl;
	
	//EXEMPLO IV - A ENTRADA IRÁ DESIGNAR DE QUE NÚMERO ÍMPAR QUERO QUE IMPRIMA ATÉ SUA SOMA COM +10. EXEMPLO 51+12 = 51 53 55 57 59 61	
	int entrada4;
	cout<<"DIGITE PARA SABER QUAIS SAO OS NUMERO IMPARES DE ... SOMADO + 10: ";
	cin>>entrada4;  
	
	if(entrada4%2==0)
		entrada4 = entrada4+1;
	
	for(int i=entrada4 ; i<=entrada4+10 ; i+=2)
	{
		cout<<"--"<<i;
	}
	
	cout<<endl<<"SUA ENTRADA FOI: "<<entrada4<<endl;

	cout<<endl<<endl;
	
	//EXEMPLO VI - TABUADA, O VALOR DE ENTRADA DETERMINARÁ QUAL TABUADA QUER EXIBIR;
	int entrada6;
	cout<<"DIGITE QUAL VALOR DE TABUADA DESEJA EXIBIR : ";
	cin>>entrada6; 
		
	if(entrada6%2==0)
		entrada6 = entrada6+1;
	
	for(int i=0 ; i<=10 ; i++)
	{
		int cont = 0;
		cout<<entrada6<<" x "<<i<<" = "<<entrada6*i<<endl;
	}
		
	cout<<endl<<endl;
}
