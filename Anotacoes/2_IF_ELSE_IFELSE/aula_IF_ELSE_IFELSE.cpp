#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//AULA 2

/*

#include <cmath> : BIBLIOTECA DE INCLUSSÃO DOS COMANDOS SQRT E POW

ESTUTURA IF, ELSE, IF ELSE

if(condição)
{
 ...
}else if(condição)
 {
  ...
 }else
  {
   ...
  }
	
*/

int main( ) {
	
	// EXERCÍCIO 1
	int A, B;
	
	cout<<"INSIRA VALORES DE A e B PARA SABER SE SAO DIFERENTES OU IGUAIS"<<endl;
	cin>>A>>B;
	
	if(A>B)
	{
	cout<<"A = "<<A<<endl;
	}else if(B>A)
	 {
	  cout<<"B = "<<B<<endl;
	 }else if(A==B)
	  {
	   cout<<"VALORES IGUAIS"<<endl<<endl; 	
	  }else
	   {
		cout<<"VALORES INVALIDOS"<<endl<<endl;	
       }	
    
    // EXERCÍCIO 2
	int AA,BB,CC,DD, somaAB, somaCD;
	
	cout<<"\n\nINSIRA VALORES DE AA, BB, CC e DD PARA SABER SE SERAO ACEITOS OU NAO"<<endl;
	cin>>AA>>BB>>CC>>DD;
	
	somaAB = AA+BB;
	somaCD = CC+DD;
		
	if(BB>CC && DD>AA && somaCD>somaAB && CC>0 && DD>0 && AA%2==0)
	{
		cout<<"VALORES ACEITOS"<<endl;
	}else
	 {
		cout<<"VALORES NAO ACEITOS"<<endl;  
	 }   
	
	// EXERCÍCIO 3	
	float n;
	
	cout<<"\n\nDIGITE VALOR PARA N E DESCUBRA SEU INTERVALO"<<endl;
	cin>>n;
	
	if(n>0 and n <=25)
	{
	cout<<"Intervalo (0,25)"<<endl;
	}
	else if(n>25 and n<=50)
	 {
	  cout<<"Intervalo (25,50)"<<endl;
 	 }
	  else if(n>50 and n<= 75)
	  {
	   cout<<"Intervalo (50,75)"<<endl;	
	  }
		else if(n>75 and n <= 100 )
		{
	 	 cout<<"Intervalo (75,100)"<<endl;
		}
		else
		{
		cout<<"Fora do intervalo"<<endl;
		}
	
	
	// EXERCÍCIO 4
	double AAA, BBB, CCC, DDD, R1, R2;

    cout<<setprecision(5)<<fixed;
	
	cout<<"\n\nINSIRA VALORES PARA A B C PARA CALCULAR BHASKARA"<<endl;
	cin>>AAA>>BBB>>CCC;
	
	DDD = (BBB*BBB) -4 * (AAA * CCC);
	R1 = ((-1*BBB) + sqrt(DDD)) / (2*AAA);
	R2 = ((-1*BBB) - sqrt(DDD)) / (2*AAA);	
	
	if(DDD < 0)
	{
	 cout<<"IMPOSSIVEL CALCULAR"<<endl;
	}else
	 {
	  cout<<"RI : "<<R1<<endl;	
	  cout<<"R2 : "<<R2<<endl;	 
	 }
	
	return 0;
}
