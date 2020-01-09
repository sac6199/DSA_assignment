#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define ll long long int
int main()
{
	ll n,m;
	scanf("%lld",&n);
	scanf("%lld",&m);
	ll i,j,t,p,k,q;
	ll a[n+5][m+5];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%lld", &a[i][j]);
		}
	}
	scanf("%lld",&p);
	scanf("%lld",&q);
	ll b[p+5][q+5];
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%lld",&b[i][j]);
		}
	}
	ll flag=1;
	for(i=0;i<n-p;i++)
	{
		for(j=0;j<m-q;j++)
		{
			if(a[i][j]==b[0][0])
			{
				ll flag2=0;
				for(k=i;k<i+p;k++)
				{
					for(t=j;t<j+q;t++)
					{
						if(a[k][t]!=b[k-i][t-j])
						{
							flag2=1;
						}
					}
				}
				if(flag2==0)
				{
					printf("YES\n");
					printf("%lld %lld\n",i,j);
					return(0);
				}
			}
		}
	}
	printf("NO\n");
}