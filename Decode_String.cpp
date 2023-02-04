#include <bits/stdc++.h>
using namespace std;

    string decodeString(string s) {
        stack<int> fq;
        stack<string> st;
        string curr="";
        int k=0;
        for(char c:s)
        {
            if(isdigit(c)) k=k*10+(c-'0');
            else if(isalpha(c)) curr.push_back(c);
            else if(c=='['){
                fq.push(k);
                st.push(curr);
                k=0;
                curr="";
            }
            else if(c==']'){
                while(fq.top()-- >0) st.top()+=curr;
                fq.pop();
                curr=st.top();
                st.pop();
                k=0;
            }
        }
        return curr;
    }
   int main()
   {
    string s = "3[a]2[bc]";
    cout<<decodeString(s);
    return 0;
   }