#include<iostream>
using namespace std;
void Mostrar(int ma[5][6] );
void llenar(int ma[5][6]);
int main()
{
	int ma[5][6]={{0}};
	int m;

	do
	{
		cout<<"Hay productos a la venta?(1=SI-----0=NO)"<<endl;
		cin>>m;
		if(m==1)
		{
			llenar(ma);
		}
		else
		{
			Mostrar(ma);
		}
	}while(m!=0);
}

void llenar(int ma[5][6])
{
	int v,c,p;
	cout<<"que numero de vendedor es?(1 a 4)"<<endl;
	cin>>v;
	cout<<"que numero de producto vendio?(1 a 5)"<<endl;
	cin>>p;
	cout<<"cuantos productos vendio?"<<endl;
	cin>>c;
	ma[v-1][p-1]=c;
}

void Mostrar(int ma[5][6])
{
	int c=0;
	
	for(int i=0;i<5;i++)
	{
		
		for(int j=0;j<6;j++)
		{
			cout<<ma[i][j]<<" ";
			
		}
		ma[5][i]=ma[4][i]+ma[3][i]+ma[2][i]+ma[1][i]+ma[0][i]+ma[5][i];
		cout<<endl;
	}
	

	
}
