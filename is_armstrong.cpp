#include<iostream>
#include<cmath>
using namespace std;
int order(int n)
{
	int count =0;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	return count;
}
void isArmstrong(int n)
{
	int sum=0;
	int temp=n;
	int size=order(n);
	while(n>0)
	{
		int ld=n%10;
		sum=sum+pow(ld,size);
		n=n/10;
	}
	n=temp;
	if(n!=sum)
	cout<<"false\n";
	else
	cout<<"true\n";
}
int main()
{
int n;
cin>>n;
isArmstrong(n);
return 0;
}