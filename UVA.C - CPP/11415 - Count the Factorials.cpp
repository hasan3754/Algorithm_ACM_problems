#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#define MAX 5000
#define MAXP 670
#define MAXS 10000001
void is_prime();
int factor(int);
bool seev[MAX];
int prime[MAXP];
int ans[MAXS + 2];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    is_prime();
    int sum = 4,n = 4;
    ans[0] = 1;
    ans[1] = 3;
    ans[2] = 4;
    ans[3] = 4;
    ans[4] = 5;
    for(int i = 5 ; i < 2703664 ; i++)
    {
        sum = sum + factor(i);
        while(n != sum )
        {
            ans[n++] = i;
        }
        ans[sum] = i;
        n = sum;
    }
    int num,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&num);
         printf("%d\n",ans[num]);
    }
    return 0;

}
int factor(int num)
{
    int count = 0;
    int n = sqrt(num);
    for(int i = 0; prime[i] <= n ; i++)
    {
        if(num % prime[i] == 0)
        {
            while(num % prime[i] == 0)
            {
                num = num / prime[i];
                count++;
            }
        }
    }
    if(num != 1) count++;
    return count;
}

void is_prime()
{
    int k = 0 ;
    prime[k++] = 2;
    int n = sqrt(MAX);
    for(int i = 3; i < n ; i = i + 2)
    {
        if(seev[i] == false)
        {
            for(int j = i * i ; j < MAX ; j = j + (2 * i))
            {
                seev[j] = true;
            }
        }
    }
    for(int i = 3 ; i < MAX ; i = i + 2)
    {
        if(seev[i] == false)
        {
            prime[k++] = i;
        }
    }
}
