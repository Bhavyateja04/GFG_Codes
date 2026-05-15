class Solution {

    static void checkString(String s) {
        int v = 0;
        int c = 0;

        // code here
        for( int i=0;i<s.length();i++){
           char ch= s.charAt(i);
           if(ch!=' '){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                v++;
            }else {c++;}
           }
                 
        }
        
        if(v>c)
        System.out.print("Yes");
        else if(c>v)
        System.out.print("No");
        else if(c==v)
       System.out.print("Same");
        
        System.out.println();
        
    }
}