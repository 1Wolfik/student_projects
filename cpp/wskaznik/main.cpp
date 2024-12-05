#include <iostream>

using namespace std;

int main(){
int calculate(int a,int b,int *div,int *sum);
int sum=0;
int div=0;
int a=9;
int b=5;
calculate(&a,&b,&div,&sum);
	return 0;
}