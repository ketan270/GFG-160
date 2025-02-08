class Solution {
  public:
  void genPermutations(int n, string &curr ,unordered_map<char, int> &cnt,
                             vector<string>& res) {
    
  
    if (curr.size() == n) {
        res.push_back(curr);
        return;
    }

    
    for (pair<char, int> it: cnt) {
        char c = it.first;
        int count = it.second;

        if (count == 0) 
            continue;

        
        curr.push_back(c);

  
        cnt[c]--;

        
        genPermutations(n, curr, cnt , res);

        curr.pop_back();
        cnt[c]++;
    }
}
    vector<string> findPermutation(string s) {
  
 
    vector<string> res; 
  
   
    unordered_map<char, int> cnt;   


    for (char c : s) 
        cnt[c]++;


    string curr = "";
    genPermutations(s.size(), curr, cnt, res);
    return res;
}
};
