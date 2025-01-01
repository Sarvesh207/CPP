// Print 1 To N Without Loop
public:
// Complete this function
void printNos(int n)
{
    if (n == 0)
        return;       // Base case: Stop recursion when n becomes 0
    printNos(n - 1);  // Recursive call with n-1
    cout << n << " "; // Print the current value of n
}
}
;

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;

    // taking testcases
    cin >> T;

    while (T--)
    {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends