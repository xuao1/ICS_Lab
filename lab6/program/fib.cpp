#include<iostream>
#include<cstdio>

using namespace std;
short int R0,R1,R2,R3,R4,R5,R6,R7;

int main()
{
	cin>>R0;
	R1=1,R2=1,R3=2;
	if(R0==0){
		R7=R1;
		cout<<R7<<endl;
		return 0;
	}
	R0=R0-1;
	if(R0==0){
		R7=R2;
		cout<<R7<<endl;
		return 0;
	}
	R0=R0-1;
	if(R0==0){
		R7=R3;
		cout<<R7<<endl;
		return 0;
	}
	while(R0){
		R7=(2*R1+R3)%1024;
		R1=R2;
		R2=R3;
		R3=R7;
		R0--;
	}
	cout<<R7<<endl;
	return 0;
}