#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define ll long long int
#include <string.h>
char s[1000005];
ll word[30];
ll n,m;
int check(int j)
{
	int i;
	for(i=0;i<30;i++)
	{
		if(word[i]>=2)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	scanf("%s",s);
	ll i;
	n=strlen(s);
	for(i=0;i<30;i++)
	{
		word[i]=0;
	}
	ll ans=0,sp,endp;
	ll start=0,end=0;
	for(i=0;i<n;i++)
	{
		ll d=s[i]-'a';
		word[d]++;
		while(check(1)==0)
		{
			word[s[start]-'a']--;
			start++;
		}
		if(check(1)==1)
		{
			if(ans<(i-start+1))
			{
				ans=(i-start+1);
				sp=start;
				endp=i;
			}

		}
	}
	printf("%lld\n",ans);
	for(i=sp;i<=endp;i++)
	{
		printf("%c",s[i]);
	}
}