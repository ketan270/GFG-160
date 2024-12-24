class Solution {
  public:
    int findMin(vector<int>& arr) {
  
    int res = arr[0];

    for (int i = 1; i < arr.size(); i++) 
        res = min(res, arr[i]);

    return res;
}
};
