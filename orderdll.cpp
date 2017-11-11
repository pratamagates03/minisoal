#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;
template <class T>;

class DOLL : public list <T>{
	public:
		void push(T val){
			typename list<T>::iterator dt, ur;
			if(list<T>::empty()) list<T>::push_front(val);
			else {
				for(dt=list<T>::begin();dt!=list<T>::end();++dt){
					ur=dt;
					if(val<*ur) list<T>::push_back(val);
				}
			}
		}
};

int main(){
	DOLL<int> list;
	int n,val;
	cin>>n;
	while(n--){
		cin>>val;
		list.push_back(val);	
	}
	DOLL<int>::iterator it;
	for(it=list.begin();it!=list.end();++it) cout<<*it<<"<->";
	cout<< "NULL\n";
	return 0;
}
