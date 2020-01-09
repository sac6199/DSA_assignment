#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define ll long long int
#include <string.h>
char s[];
int main()
{
	gets(s);
	ll n=strlen(s);
	s[n]=' ';
	ll count=0;
	ll i,j;
	ll prev=-1;
	for(i=0;i<=n;i++)
	{
		if(s[i]==' ')
		{
			for(j=i-1;j>prev;j--)
			{
				printf("%c",s[j]);
			}
			printf(" ");
			prev=i;
		}

	}
}