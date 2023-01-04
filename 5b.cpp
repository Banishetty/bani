#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	char temp;
	int i,j;
	cout<<"enter any string with special characters: "<<endl;
	cin>>a;
	for(i=0,j=a.length()-1;i<=a.length()/2-1;i++,j--){
		if(((a[i]>='a'&&a[i]<='z')&&(a[j]>='a'&&a[j]<='z'))||((a[i]>='A'&&a[i]<='Z')&&(a[j]>='A'&&a[j]<='Z'))){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A' && a[i]<='Z')){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
    }
	cout<<"changed string: "<<a<<endl;
	return 0;
	
}
