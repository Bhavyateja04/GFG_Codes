class Solution {
    public void printEvenIndices(String s)
    {
        for (int i=0; i<s.length(); i+=2)
        System.out.print(s.charAt(i));
        
    }
}