#include<stdio.h>
#include<iostream>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string s; 
		cin >> s;
		
		int o=0, z=0;
		REPN(i,0,s.size()) {
			s[i]=='0'? ++z : ++o;
		}
		
		( (o+1==s.size() && z==1) || (z+1==s.size() && o==1) )? printf("Yes\n") : printf("No\n");
	}
}
