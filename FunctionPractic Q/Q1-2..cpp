#include <iostream>
using namespace std;
int fact(int n){
	int fact=1;
	cout<<n<<"!:";
	for(int i=n;i>=1;i--){
		if(i==1)
			cout<<i<<"=";
		else 
			cout<<i<<"*";
		fact=fact*i;
	}
	return fact;
};
int main(){
	int num;
	cout<<"Enter Number:";
	cin>>num;
	int hold=fact(num);
	cout<<hold;
}
