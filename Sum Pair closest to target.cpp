class Solution {
  public:
   vector<int> sumClosest(vector<int> &arr, int target) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<int> res;
    int minDiff = INT_MAX;

    int left = 0, right = n - 1;

    while (left < right) {
        int currSum = arr[left] + arr[right];

      
        if (abs(target - currSum) < minDiff) {
            minDiff = abs(target - currSum);
            res = {arr[left], arr[right]};
        }

        
        if (currSum < target)
            left++;

       
        else if (currSum > target)
            right--;

       
        else
            return res;
    }

    return res;
}
};
