#include <iostream>
using namespace std;
double add(double m, double n)
{
	return m+n;
}
int main()
{
    double inp1, inp2;
	cin>>inp1>>inp2;
	cout <<add(inp1,inp2)<< endl;
    return 0;
}
