#include<iostream>
#include<ctype.h>
void comparar(char frase[]);
void mayuscula(char frase[]);
void titulo(char frase[]);
using namespace std;
int main()
{
	char frase[40];
	cout<<"ingresa la frase"<<endl;
	cin.getline(frase,40);
	comparar(frase);
	cout<<frase;	
}
void comparar(char frase[])
{
	frase[0]= toupper(frase[0]);
	for(int i=0;i<frase[i];i++)
	{
		if(frase[i]>65&& frase[i]<90)
		{
			mayuscula(frase);
		}
		else{
		
			titulo(frase);
		}
	}
}

void mayuscula(char frase[])
{
	for(int i=0;i<frase[i];i++)
	{
		frase[i]= tolower(frase[i]);
	}
	titulo(frase);
}
void titulo(char frase[])
{
	frase[0]= toupper(frase[0]);	
	for(int i=0;i<frase[i];i++)
	{
		if(frase[i]==' ')
		frase[i+1]= toupper(frase[i+1]);
	}
	
}
//FALTA FUNCION DE PALINDROMO PARA MAÑANA
