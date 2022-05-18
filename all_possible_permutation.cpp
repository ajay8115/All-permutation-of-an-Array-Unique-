#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define forn for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rev(v) reverse(v.begin(), v.end());
#define kk '\n'
using namespace std;

vector<vector<int>> ans;

void per(vector<int> &a, int idx)
{
    int n = a.size();

    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }

    for (int i = idx; i < n; i++)
    {
        swap(a[i], a[idx]);
        per(a, idx + 1);
        swap(a[i], a[idx]);
    }
    return;
}

void aj()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // per(a,0);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << kk;
    // }

    vector<vector<int>> res;
    srt(a);
    do
    {
        res.push_back(a);
    } while (next_permutation(a.begin(), a.end()));

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << kk;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    aj();
    // }
    return 0;
}
