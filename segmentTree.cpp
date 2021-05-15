#include <bits/stdc++.h>
using namespace std;
#define long long int
int getMid(int s, int e) { return s + (e -s)/2; }
const int mod=1e9+7;
int addMod(int a,int b=0){
    return (a%mod + b%mod)%mod;
}
int getSumUtil(vector<int> &st, int ss, int se, int qs, int qe, int si)
{
    if (qs <= ss && qe >= se)
        return st[si];
    if (se < qs || ss > qe)
        return 0;
    int mid = getMid(ss, se);
    return addMod(getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
        getSumUtil(st, mid+1, se, qs, qe, 2*si+2));
}
void updateValueUtil(vector<int> &st, int ss, int se, int i, int diff, int si)
{
    if (i < ss || i > se)
        return;
    st[si] = addMod(st[si] , diff);
    if (se != ss)
    {
        int mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
    }
}
void updateValue(vector<int> &arr,vector<int> &st, int n, int i, int new_val)
{
    if (i < 0 || i > n-1)
    {
        cout<<"Invalid Input";
        return;
    }
    int diff = addMod(new_val - arr[i]+mod,mod);
    arr[i] = addMod(new_val);
    updateValueUtil(st, 0, n-1, i, diff, 0);
}
int getSum(vector<int>& st, int n, int qs, int qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        cout<<"Invalid Input";
        return -1;
    }
 
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}
int constructSTUtil(vector<int> &arr, int ss, int se, vector<int> &st, int si)
{
    if (ss == se)
    {
        st[si] = addMod(arr[ss]);
        return st[si];
    }
    int mid = getMid(ss, se);
    st[si] = addMod(constructSTUtil(arr, ss, mid, st, si*2+1),
            constructSTUtil(arr, mid+1, se, st, si*2+2));
    return st[si];
}
 

vector<int> constructST(vector<int>& arr, int n)
{
    int x = (int)(ceil(log2(n)));
    int max_size = 2*(int)pow(2, x) - 1;
    vector<int> st(max_size,0);
    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}
 
int32_t main()
{
    int n=1e6;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        arr[i]=addMod(1e18);
    
    vector<int> st = constructST(arr, n);
    for(int i=0;i<n;i++){
        int x=getSum(st, n, max(0,i-1),min(n-1,i+2));
        assert(x<mod && x>=0);
        cout<<"Sum of values in given range = "<<x<<endl;
        updateValue(arr, st, n, i, i+2);
    }
    return 0;
}
