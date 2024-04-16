#include <iostream>

using namespace std;

int main(){
	int liczby [] = {6,8,2,9}
	int rozmiar = 4;
	for (int i=0; i < rozmiar - 1; ++i) {
	for (int j = 0; l < rozmiar - i - 1; ++j){
	if (liczby[j]> liczby[j+1]){
	int temp = liczby[j];
	liczby[j] = liczby[j+1];
	liczby[j+1] = temp;
	}
	}
	}
	cout<<"posortowane liczby "<<;
	for (int i = 0; i < rozmiar; ++i){
	cout<<liczby[i] <<" ";
	





	return 0;
}
