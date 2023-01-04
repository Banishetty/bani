#include<iostream>
#include<string>
using namespace std;
int main(){
	int a[100],count=1,i,j,n,b[100],max=0;
	cout<<"enter n: "<<endl;
	cin>>n;
	cout<<"enter elements of array"<<endl;
    for(i=0;i<n;i++){
    	cin>>a[i];
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j])
				count++;
		}
		if(count==2)
			b[i]=a[i];
		else
		b[i]=0;
		count=1;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]==b[j])
				max++;
		
		}
		if(max==0){
			cout<<" "<<a[i];
		}
		max=0;
	}
	return 0;
}
