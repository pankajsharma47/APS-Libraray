#include<bits/stdc++.h>
using namespace std;
vector<int> reverseArray(std::vector<int> arr, int start, int end)
{
    for (int i = start, j = end; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return arr;
}
vector<int> rotate_left(vector<int> arr, int x)
{
    int total_size = arr.size();
    arr = reverseArray(arr, 0, x-1);
    arr = reverseArray(arr, x, total_size-1);
    arr = reverseArray(arr, 0, total_size-1);

    return arr;

}
vector<int> rotate_right(vector<int> arr, int x)
{
    int total_size = arr.size();
    arr = reverseArray(arr, total_size - x, total_size-1);
    arr = reverseArray(arr, 0, total_size-x-1);
    arr = reverseArray(arr, 0, total_size-1);

    return arr;

}



int main(void) {
    int n;
	cin>>n;
	std::vector<int>arr;
	std::vector<int>temp;
	int input;
	for(int i = 0; i<n ; i++)
	{
	    cin>>input;
	    arr.push_back(input);
	}
	int q;
	cin>>q;
	int query[q];
	for(int i = 0; i<q ; i++)
	{
	    cin>>query[i];
	}
	int sum = 0;
	for(int i = 0; i<q; i++)
	{

	    if(query[i]>=0)
            temp = rotate_right(arr,query[i]);
	    if(query[i]<0)
            temp = rotate_left(arr,query[i]*-1);
        arr.insert( arr.end(), temp.begin(), temp.end());
        cout << accumulate(arr.begin(), arr.end(), 0)<<endl;

	}

	return 0;
}