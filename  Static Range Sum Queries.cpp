/****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****\
 |  Problems! Problems! Problems! I Don't Like It, I Avoid.             |
 |  But Problems Likes Me! I can't Avoid!                               |
 |                                                                      |
 |  * A.H.M. Fahim Morshed  *                                           |
 |  Github   - ahm-fahim                                                |
 |  Linkedin - https://www.linkedin.com/in/md-fahim-morshed-5b2126233/  |
 |  Gmail    - contactahmfahim@gmail.com                                |
\****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****/

#include <bits/stdc++.h>
using namespace std;
#define make_fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long int

const int sz = 2e5 + 3;
ll arr[sz], sum[sz];

int main()
{
    make_fast();
    ll n, q;
    cin >> n>> q;

    for (int i = 1; i <= n;i++){
        cin >> arr[i];
        sum[i] =arr[i] +  sum[i - 1] ;
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        cout << sum[r] - sum[l - 1]<<'\n';
    }

    return 0;
}

// cses link
//https://cses.fi/problemset/task/1646/

// spoj problem 2nd test case
// https://www.spoj.com/problems/CSUMQ/

/*
    int q;cin>> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << sum[r+1] - sum[l+1 - 1]<<'\n';
    }

*/