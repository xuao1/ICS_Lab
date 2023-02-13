#include<iostream>
#include<cstdio>

using namespace std;
short int R0,R1,R2,R3,R4,R5,R6,R7;

int main()
{
	cin>>R0>>R1;
	R2=1;
	while(R2){
		R3=R1&R2;
		if(R3) R7=R7+R0;
		R0=R0+R0;
		R2=R2+R2;
	}
	cout<<R7<<endl;
	return 0;
}