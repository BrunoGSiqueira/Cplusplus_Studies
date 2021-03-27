#include <iostream>
#include <cmath>
using namespace std;

/*ESTRUTURA DE REPETIÇÃO WHILE (ENQUANTO)

Enquanto uma determinada condição for atendida, ou enquanto houve condição, a estrutura terá seu loop.
Lembrar sempre que pode-se ocorrer loop´s infinitos caso não seja refeita a pergunta sobre a condição ou uma regra,
 para se evitar o loop.

while(CONDIÇÃO)
{
	
	contador++
	condição para saída do loop;
}


*/

int main()
{
	//EXEMPLO 1
	int entrada;
	
	cout<<"DIGITE UM VALOR QUE QUEIRA IMPRIMIR ATE 100: ";
	cin>>entrada;
	
	while(entrada<=100)
	{
		entrada = entrada+1;
		cout<<" - "<<entrada;
	}

	cout<<endl<<endl;

	//EXEMPLO 2 	
	int entrada2, cont = 0;
	
	cout<<"DIGITE UM VALOR QUE QUEIRA DE TABUADA: ";
	cin>>entrada2;
	
	while( cont <= 10)
	{
		cout<<entrada2<<" x "<<cont<<" = "<<entrada2*cont<<endl;		
		cont = cont+1;
	}

	cout<<endl<<endl;
		
	//EXEMPLO 3 
	int entrada = 1, cont = 1; 
	
	cout<<"DIGITE UM VALOR QUE QUEIRA IMPRIMIR: ";
	cin>>entrada;
	
	while( entrada != 0 && cont < entrada )
	{
		cout<<entrada<<" x "<<cont<<" = "<<entrada*cont<<" e "<<entrada<<" ^ "<<cont<<" = "<<pow(entrada, cont)<<endl;
				
		cont = cont+1;
	} 

	cout<<endl<<endl;
		
	//EXEMPLO 4 
	int entrada;
	bool verdade = true; 
	int cont = 1;
	
	cout<<"DIGITE SUA SENHA: ";
	
	while(verdade)
	{
		cin>>entrada;
		if( entrada == 1910 )
		{
			verdade = false ;
			cout<<"SENHA CORRETA"<<endl;
		}
		else if( entrada != 1910 && cont <= 3 )
		{
			cout<<"DIGITE NOVAMENTE - TENTATIVA "<<cont<<endl;
			cont = cont + 1;
		}
		else if( cont <= 6 )
		{
			cout<<"DICA 1: SUA SENHA TEM 4 NUMEROS - TENTATIVA: "<<cont<<" DIGITE: "<<endl;
			cont= cont + 1; 
		}
		else if( cont <= 9 )
		{
			cout<<"DICA 2: 4 NUMEROS E COMECA COM (1---) - TENTATIVA: "<<cont<<" DIGITE: "<<endl;
			cont = cont + 1; 
		}
		else if( cont <= 12 )
		{
			cout<<"DICA 3: 4 NUMEROS E COMECA COM (19--) - TENTATIVA: "<<cont<<" DIGITE: "<<endl;
			cont = cont + 1; 
		}
		else if( cont <= 15 )
		{
			cout<<"DICA 4: 4 NUMEROS E COMECA COM (191-) - TENTATIVA: "<<cont<<" DIGITE: "<<endl;
			cont = cont + 1; 
		}
		else if( cont <= 17 )
		{
			cout<<"TENTATIVA: "<<cont<<" ---> SUA CONTA FOI BLOQUEADA POR SEGURANCA."<<endl;
			 
			if (cont <= 19)
			{
				verdade = false ;
			}
			cout<<"BLOQUEADO"<<endl;
			cont = cont + 1;
		}
	}
	cout<<"OBRIGADO.";
	
	cout<<endl<<endl;

	//EXEMPLO 5 
	int valor1, valor2, resp;
	bool verdade = true; 
	
	cout<<"DIGITE DOIS VALORES QUE QUEIRA SOMAR: ";
	
	while(verdade)
	{
		cin>>valor1>>valor2;
		resp = valor1 + valor2;
		cout<<"R: "<<resp<<endl;
		if (valor1 == 0 && valor2 == valor1)
		{
			verdade = false;
		}
		
	}
	cout<<"PROGRAMA FINZALIZADO";*/

}
