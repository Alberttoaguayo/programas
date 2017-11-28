#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int dado();
int main()
{
	int pju=0,jug1=0,jug2=0;
	srand(time(NULL));
	int tabla[101]={0};
	tabla[5]=15;
	tabla[30]=37;
	tabla[23]=31;
	tabla[16]=21;
	tabla[52]=60;
	tabla[70]=84;
	tabla[3]=10;
	tabla[92]=97;
	tabla[13]=23;
	tabla[85]=100;

	tabla[16]=1;
	tabla[32]=27;
	tabla[84]=69;
	tabla[14]=4;
	tabla[99]=86;
	tabla[55]=50;
	tabla[28]=22;
	tabla[77]=67;
	tabla[70]=65;
	tabla[10]=0;
	while(jug1<100 && jug2<100)
	{
		jug1+=dado();
		jug2+=dado();
		jug1+=tabla[jug1];
		cout<<"Jugador 1: "<<jug1<<endl;
		jug2+=tabla[jug2];	
		cout<<"Jugador 2: "<<jug2<<endl;
		if(jug1>100 || jug2>100)
		{
		}
	}	
		if(jug1<jug2)
		{
			cout<<"El Jugador 2 es el ganador";	
		}
		if(jug1>jug2)
		{
			cout<<"El Jugador 1 es el ganador";
		}	
}
int dado()
{
	return 1+rand()%6;
}
