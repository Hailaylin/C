/*
��ţ�0509        ��Ŀ:����        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/29 0:00:00	 
 	
��Ŀ���ݣ�
һ�������ǡ�õ�����������֮�ͣ���������ǡ������������磺6��������1��2��3����6=1+2+3�����6������������ҳ�1000֮�ڵ��������������������ʽ��������ӣ�
6 its factors are 1,2,3
28 its factors are 1,2,4,7,14

(��3��)
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
	}//�������飿ָ�룿�������� 
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
		}//ѭ�������ж�sum==i 
		if(sum==i) {//�ж���ԭ���Ƿ���� 
			wan[y]=sum;
			y++;
		//�������break��һֱ��ѭ��������ȥ�� 
		}
	}
	//������������� 
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
