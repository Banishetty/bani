#include<iostream>
using namespace std;
	class Arith_num{
		int x;
		public:
		void input(){
			cout<<"enter the number: ";
			cin>>x;
		}
		Arith_num operator+(Arith_num &ob){
			 Arith_num A;
			 A.x=x+ob.x;
			 return(A);
		}
		void print(){
			cout<<"the sum of two numbers is: "<<x;
		}
	};
	int main(){
		Arith_num x1,y1,res;
		x1.input();
		y1.input();
		res=x1+y1;
		res.print();
		return 0;
	}
