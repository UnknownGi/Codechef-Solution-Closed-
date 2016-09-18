#include<stdio.h>
#include<sstream>
#define ulli unsigned long long int
#define ullINF 10000000000000000000uLL
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t, n;
	scanf("%d", &t);
	while ( t-- ) {
		scanf("%d", &n);
		
		int round = 0;
		ulli fact = 1;
		while ( n-- && n>0 ) {
			fact *= n;
			if ( fact > ullINF ) { fact -= ullINF; ++round; }
		}
		
		if ( round > 0 ) {
			fact += ullINF;	
			
			string str;
			stringstream ss, nss;
			ss << fact; 
			ss >> str;  
			
			printf("%s ", str.c_str());
		}
		
		printf("%d %llu\n", round, fact);
	}
}
