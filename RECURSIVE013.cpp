#include<bits/stdc++.h>
using namespace std;

int find_smallest(vector<int>& arr, int lowindex, int highindex)
{
	if(lowindex > highindex)
	{
	    return highindex + 1;
	}
	if(lowindex != arr[lowindex])
	{
	    return lowindex;
	}
	int mid = (lowindex + highindex) / 2;
	if(arr[mid] == mid)
	{
	    return find_smallest(arr, mid + 1, highindex);
	}
	return find_smallest(arr, lowindex, mid);
}

int main(void)
{
    int t;
	cin >> t;
    cin.ignore();
	while(t--) 
	{
	    string str;
        cin >> str;
        stringstream ss(str);
        vector<int> arr;
        for(int i; ss >> i;) 
		{
            arr.push_back(i);
            if(ss.peek() == ',') 
			{
                ss.ignore();
            }
        }

        if(arr.empty()) {
            cout << 0 << endl;
        } 
		else
		{
            cout << find_smallest(arr, 0, arr.size() - 1) << endl;
        }
    }
    return 0;
 }