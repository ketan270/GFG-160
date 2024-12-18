class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int> &citations) {

    int n = citations.size();
    vector<int> freq(n + 1);

   
    for (int i = 0; i < n; i++) {
        if (citations[i] >= n)
            freq[n] += 1;
        else
            freq[citations[i]] += 1;
    }

    int idx = n;
    
    int s = freq[n]; 
    while (s < idx) {
        idx--;
        s += freq[idx];
    }
  
    return idx;
}
};