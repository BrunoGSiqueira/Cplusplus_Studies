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
	int i,entrada;
	
	cin>>entrada;
	
	while(entrada<10)
	{
		entrada = entrada+1;
		
		cout<<entrada<<endl;
			
	}
	
}
