#include <bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int>& nums, int minK, int maxK)
{
	
	long long count = 0;
	
	for(int i = 0; i < nums.size(); i++)
	{
		
		int min_num = INT_MAX, max_num = INT_MIN;
		bool check_min = 0, check_max = 0;
		for(int j = i; j < nums.size(); j++)
		{
			
			min_num = min(min_num, nums[j]);
			max_num = max(max_num, nums[j]);
			if(min_num == minK)
			{
				check_min = 1;
			}
			else
			{
				check_min = 0;
			}
			if(max_num == maxK)
			{
				check_max = 1;
			}
			else
			{
				check_max = 0;
			}
			if(check_max & check_min) count++;
		}
	}
	return count;
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		int minK, maxK;
		cin >> s >> minK >> maxK;
		stringstream ss(s);
		string temp;
		vector<int> nums;
		while(getline(ss,temp,','))
		{
			nums.push_back(stoi(temp));
		}
		cout << countSubarrays(nums,minK,maxK) << endl;
	}
}