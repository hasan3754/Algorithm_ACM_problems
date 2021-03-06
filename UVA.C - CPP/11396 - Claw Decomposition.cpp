//#include <bits/stdc++.h>
#include <cstdio>
#include <ctime>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <set>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <vector>
#include <bitset>
#include <utility>
#include <sstream>
#include <numeric>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>



using namespace std;

#define sf              scanf
#define pf              printf
#define fs              first
#define se              second
#define pb              push_back
#define ins             insert
#define Lb              lower_bound
#define Up              upper_bound
#define INF             0x7F7F7F7F
#define mem(a,b)        memset(a, b, sizeof(a))
#define MAX             100010
#define MAXR            100010
#define MAXC            100010

typedef long long ll;

const double PI = 2.0 * acos(0.0);
const double eps = 1e-9;

template < class T > T Abs(T x) { return x > 0 ? x : -x; }
template < class T > string toString(T n) { ostringstream ost; ost << n; ost.flush() ; return ost.str(); }
template < class T > inline T sqr(T n) { return n * n; }

template < class T > inline T gcd(T a,T b)
{
    if(a < 0) return gcd(-a,b);
    if(b < 0) return gcd(a,-b);
    return (b == 0) ? a : gcd(b ,a % b);
}

template < class T > inline T lcm(T a,T b)
{
    if(a < 0) return lcm(-a,b);
    if(b < 0) return lcm(a,-b);
    return a * (b / gcd(a , b));
}

template < class T > T power(T n, int p)
{
    if(!p) return 1;
    else
    {
        T sum = sqr( power( n ,  p >> 1) );
        if(p & 1) sum =  n;
        return sum;
    }
}


//ll bigmod(ll num , ll p , ll mod)
//{
//    ll sum = 1 , temp = num;
//    while(p)
//    {
//        if(p & 1) sum = (sum * temp) % mod;
//        temp = (temp * temp) % mod; p = p >> 1;
//    }
//    return sum;
//}


/// S , E  , N , W
//int one [] = {0 ,1 , 0,-1};
//int two [] = {1 ,0 ,-1, 0};
///S , SE , E , NE , N , NW , W , SW
//int one [] = {1 ,1 ,0,-1,-1,-1, 0, 1};
//int two [] = {0 ,1 ,1 ,1, 0,-1,-1,-1};
///Knight Direction
//int one[]={2 ,1 ,-1,-2,-2,-1, 1, 2};
//int two[]={1 ,2 , 2, 1,-1,-2,-2,-1};


///***********************************************END*********************************//////////////////

vector < int > ve[305];
int vis[305];
bool bfs();


int main()
{
   // freopen("input.txt" , "r" , stdin);
    int t , a , b;
    bool ans;
    while(sf("%d" , &t) && t)
    {
        for(int i = 0 ; i <= t ; ++i) ve[i].clear() , vis[i] = INF;
        while( sf("%d %d" , &a ,&b) && (a || b) )
        {
            ve[a].push_back(b);
            ve[b].push_back(a);
        }
        ans = bfs();
        if(ans) pf("YES\n");
        else pf("NO\n");
    }
    return 0;
}




bool bfs()
{
    queue < int > Q;
    Q.push(1);
    vis[1] = 0;
    bool flag = true;
    while(!Q.empty() && flag)
    {
        int k = Q.front(); Q.pop();
        for(int i = 0 ; i < (int) ve[k].size() ; ++i)
        {
            int l = ve[k][i];
            if(vis[l] == INF)
            {
                vis[l] = 1 - vis[k];
                Q.push(l);
            }
            else if(vis[l] == vis[k])
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}
