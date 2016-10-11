#include<stdio.h>
#include<iostream>
#include<algorithm>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int x = n/25;
		int y = n%25;
		
		string str = "zyxwvutsrqponmlkjihgfedcba";
		if ( y!=0 ) 
			cout << str.substr(26-y-1, y+1);
			
		REPN(i,0,x) cout << str;
		cout << endl;
	}
}
