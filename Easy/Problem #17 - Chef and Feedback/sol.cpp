#include<string>
#include<stdio.h>
#include<iostream>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string s; cin >> s;
		
		(s.find("010")<s.length()||s.find("101")<s.length())? printf("Good\n") : printf("Bad\n");
	}
}
