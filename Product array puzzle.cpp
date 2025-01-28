class Solution {
  public:
    vector<int> productExceptSelf(vector<int> &arr) {
    int zeros = 0, idx = -1;
    int prod = 1;

 
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 0) {
            zeros++;
            idx = i;
        } else {
            prod *= arr[i];
        }
    }

    vector<int> res(arr.size(), 0);

  
    if (zeros == 0) {
        for (int i = 0; i < arr.size(); i++)
            res[i] = prod / arr[i];
    }
  
    else if (zeros == 1)
        res[idx] = prod;

    return res;
}
};
