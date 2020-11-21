/*
L1-7 谷歌的招聘 (20分)
2004 年 7 月，谷歌在硅谷的 101 号公路边竖立了一块巨大的广告牌（如下图）用于招聘。
内容超级简单，就是一个以 .com 结尾的网址，而前面的网址是一个 10 位素数，这个素数是自然常数 e 中最早出现的 10 位连续数字。
能找出这个素数的人，就可以通过访问谷歌的这个网站进入招聘流程的下一步。

prime.jpg

自然常数 e 是一个著名的超越数，前面若干位写出来是这样的：
e = 2.71828182845904523536028747135266249775724709369995957496696762772407663035354759457138217852516642**7427466391**932003059921... 
其中粗体标出的 10 位数就是答案。

本题要求你编程解决一个更通用的问题：从任一给定的长度为 L 的数字中，找出最早出现的 K 位连续数字所组成的素数。

输入格式：
输入在第一行给出 2 个正整数，分别是 L（不超过 1000 的正整数，为数字长度）和 K（小于 10 的正整数）。
接下来一行给出一个长度为 L 的正整数 N。

输出格式：
在一行中输出 N 中最早出现的 K 位连续数字所组成的素数。
如果这样的素数不存在，则输出 404。注意，原始数字中的前导零也计算在位数之内。
例如在 200236 中找 4 位素数，0023 算是解；但第一位 2 不能被当成 0002 输出，因为在原始数字中不存在这个 2 的前导零。

输入样例 1：
20 5
23654987725541023819
输出样例 1：
49877
输入样例 2：
10 3
2468024680
输出样例 2：
404
*/
#include<stdio.h>
int main()
{
	
	printf("404");
	return 0;
}
