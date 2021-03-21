#include <iostream>			
#include <iomanip>		   
#include <cmath>
using namespace std;   

//MAIS EXERCÍCIO NO URI: brunogsiq@gmail.com

/*
AULA 1 

#include <iostream>		BIBLIOTECA PADRÃO DO C++ .
#include <iomanip>  	BIBLIOTECA QUE  SE UTILIZA PARA DOUBLE .  
using namespace std;	COMANDO PARA QUE TODA HORA NÃO SEJA NECESSÁRIO UTILIZAR std:: 

*/

int main() {
	
	//AULA 1
	
	// PARA COMENTARÁRIOS CURTOS SE UTILIZA BARRA-BARRA ( // ) PARA COMENTÁRIO LONGOS ( /* */ ) . 
	
	/* 
	cout<< TEM A MESMA FUNÇÃO DE PRINTF .
	cin>> TEM MESMA FUNÇÃO DE SCANF . 
	PARA PULAR LINHA PODE-SE ULTILIZAR O COMANDO DENTRO DAS ASPAS ( "\n" ) OU FORA DAS ASPAS " <<endl " .
	VÁRIAVEIS PODEM SER INT , FLOAT = 1.25 , DOUBLE = 1.125, CHAR = B, STRING = BRUNO.
	SE USAR DOUBLE TEM QUE UTILIZAR A BIBLIOTECA <iomanip> .
	*/
	
	cout<<"OLA DEV! - SEJA BEM VINDO A CURSO DE C++\n";
	cout<<"CURSO PROMOVIO PELA WTCI EM PARCERIA COM A ""UFJ""\n";
	cout<<"UNIVERSIDADE FEDERAL DE JATAÍ\n";
	
	//*** CALCULO DE AREA ***
	cout<<"\n\nAGORA VAMOS FAZER UM CALCULO BASICO DE AREA"<<endl;
	float area1, pi = 3.14159, raio1, raio2;
	double area2;
	
	cout<<"\nDIGITE UM VALOR PARA RAIO 1: ";
		cin>>raio1;
	cout<<"DIGITE UM VALOR PARA RAIO 2: ";
		cin>>raio2;
	
	cout<<setprecision(6)<<fixed; // O NUMERO DENTRO DO PARÊNTESES SIGNIFICAR O NÚMERO DE PRECISÃO PÓS A VIRGULA.
	
	area1 = pi * (raio1 * raio1);
	area2 = pi * (raio2 * raio2);	
	
	cout<<"\nO VALOR DA AREA 1 EH: "<<area1<<endl; 
	cout<<"O VALOR DA AREA 2 EH: "<<area2<<endl;

	// *** CALCULO DE MEDIA ***	
	float nota1, nota2, nota3, somaNotas, mediaNotas;
	
	cout<<setprecision(4)<<fixed;
	
	cout<<"\n\nAGORA VAMOS FAZER UM CALCULO BASICO DE MEDIA."<<endl;
	cout<<"\nENTRE COM OS VALORES DAS NOTAS CORRESPONDENTES:"<<endl;
	cout<<"NOTA 1: ";
	cin>>nota1;
	cout<<"NOTA 2: ";
	cin>>nota2;
	cout<<"NOTA 3: ";
	cin>>nota3;
	
	somaNotas = nota1 + nota2 + nota3;
	mediaNotas = somaNotas / 3;
	
	cout<<"\nA SOMA TOTAL DAS NOTAS FOI: "<<somaNotas<<endl;
	cout<<"A MEDIA DAS NOTAS FOI: "<<mediaNotas<<endl;

	// *** CALCULO DE MEDIA - 2***	
	float nota11, nota22, nota33, somaNotas2, mediaNotas2;

	cout<<setprecision(2)<<fixed;

	cout<<"\n\nAGORA VAMOS FAZER UM CALCULO BASICO DE MEDIA."<<endl;
	cout<<"\nENTRE COM OS VALORES DAS NOTAS CORRESPONDENTES:"<<endl;
	cout<<"NOTA 1: ";
	cin>>nota11;
	cout<<"NOTA 2: ";
	cin>>nota22;
	cout<<"NOTA 3: ";
	cin>>nota33;
	
	somaNotas = nota11 + nota22 + nota33;
	mediaNotas = ((nota11*2) + (nota22*5) + (nota33*10)) / 17;
	
	cout<<"\nA SOMA TOTAL DAS NOTAS FOI: "<<somaNotas<<endl;
	cout<<"A MEDIA DAS NOTAS FOI: "<<mediaNotas<<endl;

	return 0;
}
