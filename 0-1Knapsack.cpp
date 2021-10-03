#include<bits/stdc++.h>
using namespace std;
int knapSack(int w, int wt[], int val[], int n);
int main(){
     int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
     
    cout << knapSack(W, wt, val, n);
     
    return 0;
}
int knapSack(int w, int wt[], int val[], int n)
{
    int t[n+1][w+1];
 
    // Build table K[][] in bottom up manner
    for(int i=0;i<=n;i++)
        for(int j=0;j<w+1;j++)
        {
            if (i==0||j==0)
                t[i][j] = 0;
        }
     for(int i=1;i<n+1;i++)
        for(int j=1;j<w+1;j++)
        {
             if(wt[i-1]<=j){
                 t[i][j]=max((val[i-1]+t[i-1][j-wt[i-1]]),t[i-1][j]);
            }
            else 
            t[i][j]=t[i-1][j];
        }
    return t[n][w];
}