#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
short int R0,R1,R2,R3,R4,R5,R6,R7;

int main()
{
	cin>>R0;
	R1=1;
	for(int i=2;i<=sqrt(R0);i++){
		if(R0%i==0){
			R1=0;
			break;
		}
	}
	cout<<R1;
	return 0;
}