#include<iostream>
using namespace std;
void aMinusculas (char c[]);
void aMayusculas (char c[]);
int main()
{
	char c1[10];
	cin>>c1;
	cout<< aMinusculas(c1);
	cout<< aMayusculas(c1);	
}
void aMinusculas (char c[])
{
		int desp='a'-'A';
		cout<<desp;
	for(int i=0;c[i];i++)
		if(c[i]>='a'&&c[i]<='z')
		c[i]-=desp;
	cout<<"cadena nueva"<<endl;
	cout<<c;
}
void aMayusculas (char c[])
{

	int desp='a'-'A';
		cout<<desp;
	for(int i=0;c[i];i++)
		if(c[i]>='A'&&c[i]<='Z')
		c[i]-=desp;
	cout<<"cadena nueva"<<endl;
	cout<<c;
}
















/*#include<iostream>
using namespace std;
int func1(char c[]);
int main()
{
	char c1[10], c2[10], c3[10];
	cout<<"ingresa tres cadenas";
	cin>>c1,c2,c3;
	cout<<"cadena 1 "<<c1<<endl;
	cout<<"cadena 2 "<<c2<<endl;
	cout<<"cadena 3 "<<c3<<endl;
	cout<<func1(c1);
}
int func1(char c[])
{
	int cont=0;
	for(;c[cont];cont++);
	return cont;
}
*/

