/*
题号：0509        题目:完数        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
一个数如果恰好等于它的因子之和，这个数就是“完数”。例如：6的因子是1，2，3，而6=1+2+3，因此6是完数。编程找出1000之内的所有完数，并按下面格式输出其因子：
6 its factors are 1,2,3
28 its factors are 1,2,4,7,14

(共3个)
*/
//#include<stdio.h>
/*
int main(){
	//int qiuyin(int num);
	int i,j,n,sum,yin[20],wan[3],y,z;
	for (i=2,n=1000;i<=n;i++){
		sum=0;
		for (j=2,y=0;j<i;j++){ 
			if(i%j==0) {
				sum+=j;	
			}
			if(sum==n) {
				wan[y++]=sum;
			}
		}
	}
 	for(z=0;z<=3;z++){
		printf("%d its factors are \n",wan[z]); 		
	 }

	return 0;
}

int yinzi(int num){
	int i,j;
	for (i=2;i<num;i++){
		if(num%i==0) 
	}//返回数组？指针？？？？？ 
}
*/

#include<stdio.h>
int main(){
	int i,j,n,m=0,sum,yin,wan[4]={0},y=0,z;
	for (i=2,n=1000;i<=n;i++){
		sum=0;
		for (j=1;j<=i/2;j++){ 
			if(i%j==0) {
				sum+=j;	
			}
		}//循环完再判断sum==i 
		if(sum==i) {//判断与原数是否相等 
			wan[y]=sum;
			y++;
		//如果不加break，一直在循环跳不出去？ 
		}
	}
	//输出完数和因子 
 	for(z=0;z<=2;z++){
		printf("%d its factors are 1",wan[z]);
		for (i=2;i<wan[z];i++){
			yin=wan[z]%i;
			if(yin==0){
				printf(",%d",i);
			} 
		}
		printf("\n");		
	 }
	return 0;
}

/*
#include<stdio.h>
int main(){
	int n,i,sum;
	for(n=1;n<=1000;n++){
		sum=0;
		for(i=1;i<=n/2;i++){
			if(n%i==0){
				sum+=i;
			}
			if(sum==n){
				printf("%d its factors are 1",n);
				for(i=1;i<=n;n++){
					if(n%i==0) printf(",%d",i);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
*/
