#include<iostream>
#include<cstdio>

using namespace std;
short int R0,R1,R2,R3,R4,R5,R6,R7;

int main()
{
	cin>>R1;
	while(1){
		R2=1,R3=8,R4=0;
		while(R3){
			R5=R3&R1;
			if(R5){
				R4=R4+R2;
			}
			R2=R2+R2;
			R3=R3+R3;
		}
		R2=R1&7;
		R1=R2+R4;
		if(R1<7){
			cout<<R1<<endl;
			break;
		}
		else if(R1==7){
			R1=R1-7;
			cout<<R1<<endl;
			break;
		}
	}
	return 0;
}