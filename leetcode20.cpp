class Solution {
public:
    
    stack<char> in;
    bool isValid(string s) {
        
        if(s.size()<2)
            return false;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                in.push(s[i]);
            
            if(s[i] == ')' ){ //前一個一定要是(
                if(in.size()==0) //in裡沒東西 錯誤
                    return false;
                if(in.top() != '(')
                    return false;
                else
                    in.pop(); //是的話就pop掉
            }else if(s[i] == ']'){
                if(in.size()==0) //in裡沒東西 錯誤
                    return false;
                if(in.top() != '[')
                    return false;
                else
                    in.pop(); //是的話就pop掉
            }else if(s[i] == '}'){
                if(in.size()==0) //in裡沒東西 錯誤
                    return false;
                if(in.top() != '{')
                    return false;
                else
                    in.pop(); //是的話就pop掉
            }
        }
        
        if(in.size() == 0)
            return true;
        else
            return false;
    }
};
