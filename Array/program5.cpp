find a subarray with given sum only positive numbers allowed.
  code:- solved using sliding window approach
#include <iostream>
using namespace std;
int subArraySum(int arr[], int n, int sum)
{
    int currentSum = arr[0], start = 0, i;

    
    for (i = 1; i <= n; i++) {
        
        while (currentSum > sum && start < i - 1) {
            currentSum = currentSum - arr[start];
            start++;
        }

       
        if (currentSum == sum) {
            cout << "Sum found between indexes " << start
                 << " and " << i - 1;
            return 1;
        }

        
        if (i < n)
            currentSum = currentSum + arr[i];
    }

    
    cout << "No subarray found";
    return 0;
}


int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subArraySum(arr, n, sum);
    return 0;
}


