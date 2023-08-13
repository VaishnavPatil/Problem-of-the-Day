//
// Created by vaishnav on 13-08-2023.
//
/*
Given a positive integer n, find the nth fibonacci number. Since the answer can be very large, return the answer modulo 1000000007.

Example 1:

Input:
n = 2
Output:
1
Explanation:
1 is the 2nd number of fibonacci series.
Example 2:

Input:
n = 5
Output:
5
Explanation:
5 is the 5th number of fibonacci series.
Your Task:
You dont need to read input or print anything. Complete the function nthFibonacci() which takes n as input parameter and returns nth fibonacci number.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:
1<= n <=105
*/



/*                                          Authors Solution                                            */


/*
        //Back-end complete function Template for C++
class Solution {
  public:
    const int mod = 1e9+7;
    int nthFibonacci(int n) {
        //prestoring
        int dp[n+5];
        //initializing dp[0] as 0
        dp[0]=0;
        //initializing dp[1] as 1
        dp[1]=1;
        for(int i=2;i<=n;i++){
            //as same as fibonacci formula f(i)=f(i-1)+f(i-2)
            dp[i]=(dp[i-1]%mod + dp[i-2]%mod)%mod;
        }
        //returning nth value
        return dp[n];
    }
};
 */

/*                                           MY SUBMISSION                                      */

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    int nthFibonacci(int n)
    {
        const int mod = 1e9+7;
        vector<int> fib(n+1);
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= n; ++i)
            fib[i] = (fib[i-1] % mod + fib[i-2] % mod) % mod;
        return fib[n];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends