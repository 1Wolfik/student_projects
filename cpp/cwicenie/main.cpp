#include <iostream>

using namespace std;

int main()
{
	cout<<"Podaj odległość podruzy"<<endl;
	float pop;
	cin>>pop;
	cout<<"ile osób jedzie"<<endl;
	float loj;
	cin>>loj;
	cout<<"Podaj cenę paliwa za litr"<<endl;
	float pcp;
	cin>>pcp;
	cout<<"Spalanie auta na 100km"<<endl;
	float pan;
	cin>>pan;

	float paliwo1;
	float paliwo2;
	paliwo1=pop*pan;
	paliwo2=paliwo1/100;

	float zrzut1;
	float zrzut2;

	zrzut1=paliwo2*pcp;
	zrzut2=zrzut1/loj;
	cout<<paliwo2<<"Iloś paliwa na podruz"<<endl;
	cout<<zrzut2<<"koszt z jednej osoby"<<endl;






	return 0;
}
