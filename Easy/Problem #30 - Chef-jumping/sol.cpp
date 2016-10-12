#include<stdio.h>
#define llu unsigned long long int
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	llu n; scanf("%llu", &n);
	
	int m = n%6;
	m==0 || m==1 || m==3? printf("yes\n") : printf("no\n");
}
