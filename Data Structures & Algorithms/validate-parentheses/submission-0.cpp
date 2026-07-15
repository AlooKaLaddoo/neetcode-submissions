class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> brackTrack;
        for(char ch : s)
        {
            if(ch == '(' || ch == '{' || ch == '[')
                brackTrack.push(ch);
            else
            {
                if(brackTrack.empty())
                    return false;

                char topEl = brackTrack.top();
                brackTrack.pop();

                if ((ch == ')' && topEl != '(') || (ch == '}' && topEl != '{') || (ch == ']' && topEl != '['))
                    return false;
            }
        }
        return brackTrack.empty();
    }
};
