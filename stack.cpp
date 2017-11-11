#include<iostream>
#include<conio.h>

using namespace std;

struct STACK{
	int data[5];
	int atas;
}urutan;

int main() {
	int pil, nilai;
	urutan.atas=-1;
	
	do {
		cout<<"------------------------------------------------------\n";
		cout<<"Daftar isi STACK : ";
		if(urutan.atas==-1) {
			cout<<" ";
		}
		else {
			for(int i=0; i<=urutan.atas; i++){
				cout<<urutan.data[i]<<" ";
			}
		}
		cout<<"\n------------------------------------------------------";
		
		cout<<"\n1.Push";
		cout<<"\n2.Pop";
		cout<<"\n3.Top";
		cout<<"\n4.Empty";
		cout<<"\n5.Exit";
		
		cout<<"\n\nPilihan :";
		cin>>pil;
		
		switch(pil) {
			case 1 : {
				if(urutan.atas==5-1) {
					cout<<"\tData Penuh\n";
				}
				else {
					cout<<"\tnilai data : ";
					cin>>nilai;
					urutan.atas++;
					urutan.data[urutan.atas]=nilai;
				}
				break;
			}
			case 2 : {
				if(urutan.atas==-1) {
					cout<<"\tData Kosong\n";
				}
				else {
					cout<<"\tdata terbaru terhapus\n";
					urutan.atas--;
				}
				break;
			}
			case 3 : {
				cout<<"\tdata paling baru (top) adalah "<<urutan.data[urutan.atas]<<"\n";
				break;
			}
			case 4 : {
				cout<<"\tData Kosong"<<"\n";
				urutan.atas=-1;
				break;
			}
			default:cout<<"\tExit pilih 5\n";
		}
	}while(pil!=5);
}
