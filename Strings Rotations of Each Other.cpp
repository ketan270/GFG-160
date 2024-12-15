class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
    int n = s1.size();
      
     
    for (int i = 0; i < n; ++i) {
      
          
        if (s1 == s2)
            return true;
      
          
        char last = s1.back();
        s1.pop_back();
        s1 = last + s1;
    }
    return false;
}
};
