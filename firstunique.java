//Create a hashmap and put the count of each occuring char in the string. Re scan the string to get the value of the characters
// and the character having only one occurence will be returned as answer.


class Solution {
    public int firstUniqChar(String s) {
        if(s.length() == 0)
            return -1;
        int answer =-1 ;
        HashMap<Character,Integer> m = new HashMap();
        for (int i=0; i<s.length();i++)
        {
            if(m.containsKey(s.charAt(i)))
            {
                int a = m.get(s.charAt(i));
                m.replace(s.charAt(i), a+1);
            }
            else
            {
                m.put(s.charAt(i),1);
            }
        }
        
        for (int i=0; i<s.length();i++)
        {
            int b = m.get(s.charAt(i));
            if(b == 1)
            {
                answer = i;
                break;
            }
        }
     return answer;   
    }
}
