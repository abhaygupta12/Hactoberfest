#include <iostream>
using namespace std;

int solution_binary(int a[],int n)
{
 int s=0,e=n-1;
 while(s<=e)
 {
 	int mid=s+(e-s)/2;
 	int next=(mid+1)%n;
 	int prev=(mid+n-1)%n;

 	if(a[prev]>=a[mid] and a[mid]<=a[next])
 	{
 		return mid;
 	}
 	else if(a[s]<=a[mid])
 	{
 		s=mid+1;
 	}
 	else if(a[mid]<=a[e])
 	{
 		e=mid+1;
 	}
 }
	
return -1;


}



int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
 cout<<solution_binary(a,n);
}