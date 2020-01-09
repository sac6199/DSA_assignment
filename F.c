#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define ll long long int
#include <string.h>
char s[1000000];
char t[1000000];
ll n,m,i;
int main()
{
	scanf("%s", s);
	scanf("%s", t);
	n=strlen(s);
	m=strlen(t);
	for(i=0;i<n/2;i++)
	{
		char temp=s[n-1-i];
		s[n-1-i]=s[i];
		s[i]=temp;
	}
	for(i=0;i<m/2;i++)
	{
		char temp=t[m-1-i];
		t[m-1-i]=t[i];
		t[i]=temp;
	}
	ll len=max(n,m);
	for(i=n;i<len;i++)
	{
		s[i]='0';
	}
	for(i=m;i<len;i++)
	{
		t[i]='0';
	}
	ll ans[len+5];
	ll carry=0;
	for(i=0;i<len;i++)
	{
		ll an=(s[i]-'0')+(t[i]-'0')+carry;
		if(an>=2)
		{
			carry=1;
			ans[i]=an%2;
		}
		else
		{
			ans[i]=an;
			carry=0;
		}
	}
	ans[len]=carry;
	for(i=len;i>=0;i--)
	{
		printf("%lld",ans[i]);
	}
}