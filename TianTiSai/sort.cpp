#include<iostream>
#include<algorithm>
using namespace std;

struct stu{
	int num;
	float score;
}; 

bool cmp(const stu &a, const stu &b){
	return a.score > b.score;
}

int main(){
	stu nums[3] = {{1,98.5}, {2,88.5}, {3,68.5}};
	sort(nums, nums + 3, cmp);
	for(int i = 0; i < 3; ++ i)
	{
		cout << nums[i].score <<endl;
	}
	return 0;
}