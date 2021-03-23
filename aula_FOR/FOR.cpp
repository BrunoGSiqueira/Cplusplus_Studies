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
	int i,entrada;
	
	cin>>entrada;
	
	if(entrada%2==0)
		entrada = entrada+1;
	
	for(i=entrada ; i<=entrada+10 ; i+=2)
	{
		cout<<i<<endl;
	}cout<<entrada - <<endl;
	
}
