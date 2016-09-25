#include<stdio.h>
#include<iostream>
using namespace std;

bool ifPalindrome (string str) {
	for ( int i=0, j=str.size()-1; i<=j; ++i, --j ) {
		if ( str[i] != str[j] ) return false;
	}
	
	return true;
}
int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string str; cin >> str;
		
		if ( ifPalindrome(str) ) printf("wins\n");
		else printf("losses\n");
	}
}
