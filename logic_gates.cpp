#include<iostream>
using namespace std;
bool NOT(){
	int x;
	cin >>x;
	if(x==1){  return 0;}
	else if(x==0) { return 1;}
	else{ cout<<" Bool ERROR";}
}
bool AND(){
	int x, y;
	cin>>x;
	cin>>y;
	if((x==0) && (y==0))
	{
		cout<<"0 AND 0 ";
		return 0;
	}
	else if((x==0) && (y==1))
	{
		cout<<"0 AND 1 ";
		return 0;
	}
	else if((x==1) && (y==0))
	{
		cout<<"1 AND 0 ";
		return 0;
	}
	else if((x==1) && (y==1))
	{
		cout<<"1 AND 1 ";
		return 1;
	}
	else{
		cout<<" Bool ERROR";
	}
}
bool OR(){
	int x, y;
	cin>>x;
	cin>>y;
	if((x==0) && (y==0))
	{
		cout<<"0 OR 0 ";
		return 0;
	}
	else if((x==0) && (y==1))
	{
		cout<<"0 OR 1 ";
		return 1;
	}
	else if((x==1) && (y==0))
	{
		cout<<"1 OR 0 ";
		return 1;
	}
	else if((x==1) && (y==1))
	{
		cout<<"1 OR 1 ";
		return 1;
	}
	else{
		cout<<" Bool ERROR";
	}
}
bool NAND(){
	OR();
}
int main(){
	cout<<" This is And gate"<<endl;
	for(int i=1;i<=4;i++){
		cout<<AND()<<endl;
	}
	cout<<" This is OR gate"<<endl;
	for(int i=1;i<=4;i++){
		cout<<OR()<<endl;
	}
	cout<<" This is NOT gate"<<endl;
	for(int i=1;i<=2;i++){
		cout<<NOT();
	}
	
	return 0;
}
