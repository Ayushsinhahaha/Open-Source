#include <bits/stdc++.h>
#define IOS                  \
	ios::sync_with_stdio(0); \
	cin.tie(0);              \
	cout.tie(0);
#define endl "\n"
#define ll long long int 
#define pb push_back
#define ma make_pair
#define f1(i, a, b) for (int i = a; i < b; i++)
#define f2(i, a, b) for (int i = a; i > b; i--)
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define ii pair<int,int>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<ii>
#define pq priority_queue<int,vi,greater<int> > //for min heap.
using namespace std;
ll sieve[1000001];
void prime_sieve()
{
    memset(sieve,1,sizeof(sieve));
    sieve[1]=0;
    for(int i=2;i*i<=1000000;i++)
    {
        if(sieve[i])
        {
            for(int j=i*i;j<=1000000;j+=i)
            {
                sieve[j]=0;
            }
        }
    }
}
void raj()
{
     string s;
      cin >> s;
       int n=s.size();
       int f= 0;
       int cnt = 0;
       for(int i=0;i<s.size();i++)
        {
         if (s[i] == '0') 
         f = 1;
         else if (s[i]!='0'&&f== 1) 
         { cnt++; f = 0;}
         }
      if (s[n-1]=='0') cnt++;
      cout<<min(cnt, 2) << endl;
}
int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        raj();
    }
}
