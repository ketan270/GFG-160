class Solution {
  public:
    int missingNumber(vector<int> &arr) {
    int n = arr.size();

   
    vector<bool> vis(n, false);
    for (int i = 0; i < n; i++) {

      
        if (arr[i] > 0 && arr[i] <= n)
            vis[arr[i] - 1] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i - 1]) {
            return i;
        }
    }

    return n + 1;
}
};
