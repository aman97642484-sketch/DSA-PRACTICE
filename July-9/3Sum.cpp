#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
vector<vector<int>> threeSum(vector<int> &v, int n)
{
    set<vector<int>> st;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (v[i] + v[j] + v[k] == 0)
                {
                    vector<int> temp = {v[i], v[j], v[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

vector<vector<int>> threeSumBetter(vector<int> &v, int n)
{
    set<vector<int>> st;

    for (int i = 0; i < n - 1; i++)
    {
        set<int> hashset;
        for (int j = i + 1; j < n; j++)
        {
            int third = -(v[i] + v[j]);
            if (hashset.find(third) != hashset.end())
            {
                vector<int> temp = {v[i], v[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(v[j]);
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
int main()
{
    vector<int> v = {-1, 0, 1, 2, -1, -4};
    int n = v.size();

    vector<vector<int>> result = threeSum(v, n);

    for (auto &triplet : result)
    {
        for (int x : triplet)
            cout << x << " ";
        cout << endl;
    }
    vector<vector<int>> resultBetter = threeSumBetter(v, n);
    for (auto &triplet : resultBetter)
    {
        for (int x : triplet)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}