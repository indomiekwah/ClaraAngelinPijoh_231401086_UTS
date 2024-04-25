#include<iostream>
using namespace std;
int main()
{
	int i=1, x, jumlah;
	float rata;
	cout<<"Masukkan nilai (masukkan -1 untuk mengakhiri):\n";
	do {
		inputulang:cout<<"Nilai ke- "<<i<<" :";
		cin>>x;
		if (x<-1) {
			cout<<"Input anda tidak sesuai, input kembali."<<endl;
			goto inputulang;
		}
		jumlah+=x;
		i++;
	}
	while (x!=-1);
	rata=(float)jumlah/(i-2);
	cout.precision(4);
	cout<<"Nilai rata-rata: "<<rata<<endl;;
	return 0;
}

