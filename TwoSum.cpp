/* Given an array of integers, find two numbers such that they add up to a specific target number.

Your function should return indices of the two numbers such that they add up to the target, where index1 must be less than index2.

Assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2

*/
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {if(mp.find(target-nums[i])!=mp.end())
            {
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
         mp[nums[i]]=i;}
	return ans;
}
int main(){
	int n;
	cout<<"Enter Size of array: ";
	cin>>n;
	int k;
	cout<<"Enter the target sum: ";
	cin>>k;
	cout<<"Enter the array elements: ";
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<int>res=twoSum(arr,k);
	cout<<"index1="<<res[0]<<" ";
	cout<<"index2="<<res[1];
}
