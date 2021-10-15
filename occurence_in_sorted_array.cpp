#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,key;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>key;
	auto lb=lower_bound(arr,arr+n,key)-arr;
	auto ub=upper_bound(arr,arr+n,key)-arr;

    int occ=ub-lb;
    cout<<lb;

}
