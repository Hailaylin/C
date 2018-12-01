#include<iostream>
using namespace std;
int main(){
	int s1,s2,s3;
	s1=15*20;
	s2=20*10;
	s3=(s1-s2)/(20-10);
	cout<<"s="<<s3<<endl;

	int x=7,y=8;
	int z1=y-(x++);
	int z2=y-(++x);
	cout<<"z1="<<z1<<endl<<"z2="<<z2<<endl;
	return 0;
}
