#include<iostream>
#include<cstdio>

using namespace std;
short int R0,R1,R2,R3,R4,R5,R6,R7;
short int mem[0x4000];

int main()
{
	mem[0x3019]=5;
	R2=0x300f;
	R0=0;
	R7=0x3003;
	while(1){
		mem[R2]=R7;
		R2=R2+1;
		R0=R0+1;
		R1=mem[0x3019];
		R1--;
		mem[0x3019]=R1;
		if(R1==0){
			while(R7!=0x3003){
				R2=R2-1;
				R7=mem[R2];
			}
			break;
		}
		R7=0x300B;
	}
	cout<<R0<<" "<<R1<<" "<<R2<<" "<<R3<<" "<<R4<<" "<<R5<<" "<<R6<<" "<<R7<<" "<<endl;
	return 0;
}