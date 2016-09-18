#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string str; cin >> str;	
		int sum = (str[0]-'0')+(str[str.size()-1]-'0');
		printf("%d\n", sum);
	}
}
