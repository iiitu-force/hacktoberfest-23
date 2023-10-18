#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr,int x,int low,int high){

	while(low <= high){

		int mid = low + (high - low)/2;

		if (arr[mid] == x)
			return mid;

		else if (arr[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return -1;
}

int main(){
	vector<int> arr = {2, 4, 5, 17, 14, 7, 11, 22};
	int x = 22;

	int result = binarySearch(arr, x, 0, arr.size()-1);

	if (result != -1)
		cout << result << endl;
	else
		cout << "Not found" << endl;
	return 0;
}
