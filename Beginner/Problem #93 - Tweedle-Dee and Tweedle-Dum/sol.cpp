#include<stdio.h>
#include<iostream>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		string s; cin >> s;
		
		int a[n];
		REPN(i,0,n) scanf("%d", &a[i]);
		
		if ( s=="Dee" && n==1 && a[0]%2==0 ) printf("Dee\n");
		else printf("Dum\n");
	}
}
