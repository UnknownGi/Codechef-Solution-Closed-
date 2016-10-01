#include<stdio.h>
#include<iostream>
#define ulli unsigned long long int
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		string a, b;
		cin >> a >> b;
		
		int arr[n+1];
		for ( int i=0; i<=n; ++i ) scanf("%d", &arr[i]);
		
		int x=0, z=0, res=0;
		for ( int i=0; i<n; ++i ) {
			if ( a[i]==b[i] ) ++z;
			else ++x;
		}
		
		if ( x==0 ) res = arr[z];
		else { 
			for ( int i=0; i<=z; ++i ) {
				res = res>arr[i]? res : arr[i];
			}
		}
		
		printf("%d\n", res);
	}
}
