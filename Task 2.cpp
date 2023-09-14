#include <iostream>
using namespace std;

void add(int x,int y){
	cout<<"\naddition="<<x+y;
}
void sub(int x,int y){
	cout<<"\nsubtraction="<<x-y;
}
void mul(int x,int y){
	cout<<"\nmultiplication="<<x*y;
}
void div(int x,int y){
	cout<<"\ndivision="<<x/y;
}

int main(){
	char stop;
	do{
		int ch;
		cout<<"enter the choice:\n1]additon\n2]subtraction\n3]multiplication\n4]division\n";
		cin>>ch;
		switch(ch){
			case 1:{
				int x,y;
				cout<<"enter the two numbers=";
				cin>>x>>y;
				add(x,y);
				break;
			}
			case 2:{
				int x,y;
				cout<<"enter the two numbers=";
				cin>>x>>y;
				sub(x,y);
				break;
			}
			case 3:{
				int x,y;
				cout<<"enter the two numbers=";
				cin>>x>>y;
				mul(x,y);
				break;
			}
			case 4:{
				int x,y;
				cout<<"enter the two numbers=";
				cin>>x>>y;
				div(x,y);
				break;
			}
		}
		cout<<"\ndo you want to continue (y/n)=";
		cin>>stop;
	}while(stop=='y');
}
