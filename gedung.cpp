#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int jum,tamp=1;
	cout<<"Tentukan Jumlah Gedung : ";
	cin>>jum;
	
	int data[jum];
	for(int i=0;i<jum;i++) {
		cout<<"Tingi gedug "<<i+1<<"(m) :";
		cin>>data[i];
	}
	
	cout<<"\nUrutan tinggi gedung : ";
	for(int i=0;i<jum;i++) {
		cout<<data[i]<<" ";
	}
	for(int i=1;i<jum;i++) {
		if(data[i]>data[i-1]){
			tamp++;
		}
	}
	cout<<"\nJumlah gedung terlihat : "<<tamp<<" gedung";
}
