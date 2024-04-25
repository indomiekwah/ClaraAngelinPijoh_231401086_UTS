#include<iostream>
using namespace std;

int main()
{	
	int x,i,j,jarak_spasi_x;
	system("cls");
	cout<<"Masukkan suku: ";
	cin>>x;
	if  ((x<=2)&&(x>=10)) {
		cout<<"Inputan tidak memenuhi batas.";
		return 0;
	}
	for (i=1;i<=x;i++) {
		for (j=1;j<=i;j++) {
			cout<<"x";
		}
		cout<<endl;
	}
	jarak_spasi_x=x;
	for (i=1;i<=2*x;i++) {
		for(j=1;j<=2*x;j++) {
			if (j<=jarak_spasi_x)
				cout<<" ";
			else {
				cout<<"x";
			}
		}
		cout<<endl;
		jarak_spasi_x+=1;
	}
	return 0;
}
