class Solution {
  public:
    vector<int> computeLPSArray(string &pat) {
    int n = pat.length();
    vector<int> lps(n);

    
    lps[0] = 0;
    int len = 0;

    int i = 1;
    while (i < n) {

      
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }

        // If there is a mismatch
        else if (pat[i] != pat[len]) {

            // If len is not zero, update len to
            // the last known prefix length
            if (len != 0) {
                len = lps[len - 1];
            }

            // No prefix matches, set lps[i] to 0
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

// Method returns minimum character to be added at
// front to make string palindrome
int minChar(string &s) {
    int n = s.length();
    string rev = s;
    reverse(rev.begin(), rev.end());

    // Get concatenation of string, special character
    // and reverse string
    s = s + "$" + rev;

    //  Get LPS array of this concatenated string
    vector<int> lps = computeLPSArray(s);

    // By subtracting last entry of lps vector from
    // string length, we will get our result
    return (n - lps.back());
}
};
