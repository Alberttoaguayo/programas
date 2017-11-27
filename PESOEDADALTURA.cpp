#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream arch("C:\\Datos\\salida.csv",ios::out);
	char nombre[20];
	int edad, m[4][4];
	float altura;
	cout<<"ingresa nombre, edad y peso"<<endl;
	cin>> nombre;
	cin>>edad;
	cin>>altura;
	arch<<nombre<<endl<<edad<<endl<<altura<<endl;
	int c=1;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			m[i][j]=c;
			c++;
			arch<<m[i][j]<<",";	
		}		
		arch<<endl;
		
	}
	arch.close();
}
