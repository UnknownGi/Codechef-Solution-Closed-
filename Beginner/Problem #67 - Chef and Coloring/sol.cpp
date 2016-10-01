#include<stdio.h>
#include<iostream>
#define REP(i,a,b) for(int i=a; i<=b; ++i)
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		string str; cin >> str;
		
		int r=0, g=0, b=0, maj;
		if ( str.size()%2==0 ) maj=str.size()/2;
		else maj=str.size()/2+1;
		
		REPN(i,0,str.size()) {
			if( str[i]=='R' ) ++r;
			else if ( str[i]=='G' ) ++g;
			else if ( str[i]=='B' ) ++b;
		}
		
		if ( r>=maj ) printf("%d\n", (str.size()-r));
		else if ( g>=maj ) printf("%d\n", (str.size()-g));
		else if ( b>=maj ) printf("%d\n", (str.size()-b));
		else {
			int max=0;
			if ( r>=g && r>=b ) max=r;
			else if ( g>=r && g>=b ) max=g;
			else if ( b>=r && b>=g ) max=b;	
			printf("%d\n", (str.size()-max));
		}
	}
}
