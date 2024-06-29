#include <iostream>
using namespace std;
int revd(int n){
	for(int i=n;i>=1;i--){
		int hold=i;
	return hold;
	}
};
int main(){
	int n;
	cout<<"Enter Number:";
	cin>>n;
	for(int i=n;i>=1;i--){
		int hold=revd(i);
	cout<<hold<<" ";
	}
}
