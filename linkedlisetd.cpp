#include <iostream>
#include <cstdlib>

using namespace std;

struct TNode {
	int data;
	TNode *next;
};

TNode *head;
int isEmpty() {
	if (head == NULL) return 1;
	else return 0;
}

void inDepan(int nilai) {
	TNode *baru;
	baru = new TNode;
	baru->data = nilai;
	baru->next = NULL;
	if (isEmpty() == 1) {
		head = baru;
		head->next = NULL;
	} 
	else {
		baru->next = head;
		head = baru;
	}
}

void inBelakang (int nilai) {
	TNode *baru,*tamp;
	baru = new TNode;
	baru->data = nilai;
	baru->next = NULL;
	if(isEmpty()==1) {
		head=baru;
		head->next = NULL;
	}else {
		tamp=head;
		while(tamp->next!=NULL) {
			tamp=tamp->next;
		}tamp->next = baru;
	}
}

void delDepan() {
	TNode *hapus;
	int d;
	if (isEmpty() == 0) {
		if (head->next != NULL) {
			hapus = head;
			d = hapus->data;
			head = head->next;
			delete hapus;
		}
		else {
			d = head->data;
			head = NULL;
		}
		cout <<"Data terdepan terhapus\n";
	}
	else cout <<"Data kosong\n";
}

void delBelakang() {
	TNode *hapus,*tamp;
	int d;
	if (isEmpty()==0){
		if(head->next != NULL){
			tamp = head;
			while(tamp->next->next!=NULL){
				tamp = tamp->next;
			}
			hapus = tamp->next;
			d = hapus->data;
			tamp->next = NULL;
			delete hapus;
		}
		else {
			d = head->data;
			head = NULL;
		}
		cout<<"Data terbelakang terhapus\n";
	}
	else cout<<"Data kosong\n";
}

void print() {
	TNode *tamp;
	tamp = head;
	if (isEmpty() == 0) {
		while (tamp != NULL) {
			cout << tamp->data << " ";
			tamp = tamp->next;
		}
	}
	else cout << " ";
}






int main() {
	int pil,tamp;
	
	do {
		cout<<"------------------------------------------------------\n";
		cout << "linked List : ";
		print();
		cout<<"\n------------------------------------------------------";
		
		cout << "\n1.Tambah Depan";
		cout << "\n2.Tambah Belakang";
		cout << "\n3.Hapus Depan";
		cout << "\n4.Hapus Belakang";
		cout << "\n5.Exit";
		cout<<"\n\nPilihan :";
		cin>>pil;
	
		switch(pil) {
			case 1 : {
				cout << "\tnilai data :";
				cin >>tamp;
				inDepan(tamp);
				break;
			}
			case 2 : {
				cout << "\tnilai data :";
				cin >> tamp;
				inBelakang(tamp);
				break;
			}
			case 3 : {
				cout<<"\t";
				delDepan();
				break;
			}
			case 4 : {
				cout<<"\t";
				delBelakang();
				break;
			}
			default:cout<<"\tExit pilih 5\n";
		}
	
	}while(pil!=5);
	
}
