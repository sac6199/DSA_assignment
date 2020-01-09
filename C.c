#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define ll long long int
#include <string.h>
char s[1000005];
ll arr[30];
ll word[30];
ll n,m;
int check(int j)
{
	ll i;
	for(i=0;i<n;i++)
	{
		if(arr[s[i]-'a']<word[s[i]-'a'])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char t[1000005];
	gets(t);
	ll i;
	scanf("%s",&s);
	n=strlen(s);
	m=strlen(t);
	for(i=0;i<30;i++)
	{
		word[i]=0;
		arr[i]=0;
	}
	for(i=0;i<n;i++)
	{
		ll d=s[i]-'a';
		word[d]++;
	}
	ll ans=1e9;
	ll end=0,start=0,sp,endp;
	for(i=0;i<m;i++)
	{
		if(t[i]!=' ')
		{
			arr[t[i]-'a']++;
			if(check(1)==1)
			{
				end=i;
				if(ans>(end-start+1))
				{
					ans=(end-start+1);
					sp=start;
					endp=end;
				}
				while(check(1)==1)
				{
					if(ans>(end-start+1))
					{
						ans=(end-start+1);
						sp=start;
						endp=end;
					}
					if(t[start]!=' ')
					{
						arr[t[start]-'a']--;
					}
					start++;

				}
				
			}
		}
		
	}
	if(ans==1e9)
	{
		printf("NO WINDOW");
	}
	else
	{
		printf("%lld %lld\n",sp,endp);
		for(i=sp;i<=endp;i++)
		{
			printf("%c",t[i]);
		}
	}
}