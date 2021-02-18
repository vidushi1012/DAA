#include<bits/stdc++.h>
using namespace std;

int quaternarySearch(int a[], int l, int r, int x)
{
	while(l<=r){
		int mid1 = l + (r-l)/4;
		int mid2 = mid1 + (r-l)/4;
		int mid3 = mid2 + (r-l)/4;

		if(a[mid1]==x)
			return mid1;
		if(a[mid2]==x)
			return mid2;
		if(a[mid3]==x)
			return mid3;
		if(a[mid1]>x)
			r=mid1-1;
		else if(a[mid2]>x){
			l=mid1+1;
			r=mid2-1;
		}
		else if(a[mid3]<x)
			l=mid3+1;
		else if(a[mid2]<x && a[mid3]>x)
		{
			l=mid2+1;
			r=mid3-1;
		}


	}
	return -1;
}


int main()
{
	int a[9]={2,6,10,11,15,23,25,31,36};
	int result = quaternarySearch(a,0,8,10);
	(result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0; 


}