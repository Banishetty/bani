#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int f=1,i,n;
	cout<<"enter n: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
    	f=f*i;
	}
	cout<<"fatorial of "<<n<<"is "<<f<<endl;
	return 0;
}
