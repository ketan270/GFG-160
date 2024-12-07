class Solution {
public:
    int circularSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int maxKadane = kadane(arr);
        int totalSum = 0;
        
        for (int num : arr) {
            totalSum += num;
        }
        
        for (int &num : arr) {
            num = -num;
        }
        
        int maxInvertedKadane = kadane(arr);
        int maxCircular = totalSum + maxInvertedKadane;
        
        return max(maxKadane, maxCircular == 0 ? INT_MIN : maxCircular);
    }
    
private:
    int kadane(vector<int> &arr) {
        int maxSum = arr[0], currSum = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            currSum = max(arr[i], currSum + arr[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};
