class Solution {
    public String addBinary(String s1, String s2) {
        StringBuilder result = new StringBuilder();
        int i = s1.length() - 1, j = s2.length() - 1, carry = 0;
        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;
            if (i >= 0) sum += s1.charAt(i--) - '0';
            if (j >= 0) sum += s2.charAt(j--) - '0';
            result.append(sum % 2);
            carry = sum / 2;
        }
        return result.reverse().toString().replaceFirst("^0+(?!$)", "");
    }
}
