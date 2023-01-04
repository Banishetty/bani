#include<iostream>
using namespace std;
class Basic_Info{
int roll;
char name[50];
char gender[10];
public:
void getdata(){
cout<<"enter thr roll no \n";
cin>>roll;
cout<<"enter name \n";
cin>>name;
cout<<"enter gender \n";
cin>>gender;
}
void display(){
cout<<"name:"<<name;
cout<<"\nroll no:"<<roll;
cout<<"\ngender :"<<gender;
}
};
class Physical_Fit:public Basic_Info{
int height,weight,phonenumber;
public:
void getdata(){
Basic_Info::getdata();
   cout<<"enter heigth \n";
   cin>>height;
   cout<<"enter weight \n";
   cin>>weight;
   cout<<"enter the phonenumber \n";
   cin>>phonenumber;
   }
   void display(){
    Basic_Info::display();
    cout<<"*****student details******"<<endl;
    cout<<"height\n"<<height;
    cout<<"weight"<<weight;
    cout<<"phonenumber"<<phonenumber;
   }
};
int main(){
int n;
cout<<"enter limit: ";
cin>>n;
Physical_Fit p[n];
for(int i=0;i<n;i++){
p[i].getdata();
}
for(int i=0;i<n;i++){
p[i].display();
}
}
