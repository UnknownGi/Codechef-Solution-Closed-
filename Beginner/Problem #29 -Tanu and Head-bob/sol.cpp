#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		string str; cin >> str;
		
		bool z=false, y=false;
		for ( int i=0; i<n; ++i ) {
			if ( str[i]=='I' ) z=true;
			else if ( str[i]=='Y' ) y=true;
		}
		
		if ( z ) printf("INDIAN\n");
		else if ( y ) printf("NOT INDIAN\n");
		else printf("NOT SURE\n");
	}
}
