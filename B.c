#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define ll long long int
ll arr[11];
int check(ll n)
{
	ll i;
	for(i=2;i<=sqrt(n)+1;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
void freqcount(ll n)
{
	while(n>0)
	{
		arr[n%10]++;
		n=n/10;
	}
}
int main()
{
	ll i;
	for(i=0;i<=9;i++)
	{
		arr[i]=0;
	}
	ll n,m;
	scanf("%lld %lld",&n,&m);
	for(i=n;i<=m;i++)
	{
		if(check(i)==1)
		{
			freqcount(i);
		}
	}
	ll ans=0,freq=0;
	for(i=0;i<=9;i++)
	{
		if(arr[i]>freq)
		{
			ans=i;
			freq=arr[i];
		}
	}
	printf("%lld %lld\n",ans,freq);
}