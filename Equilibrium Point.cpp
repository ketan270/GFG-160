class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int>& arr) {
    int prefSum = 0, total = 0;

    
    for (int ele: arr) {
        total += ele;
    }
    for (int pivot = 0; pivot < arr.size(); pivot++) {
          int suffSum = total - prefSum - arr[pivot];
          if (prefSum == suffSum) {
              return pivot;
        }
          prefSum += arr[pivot];
    }

    return -1;
}
};
