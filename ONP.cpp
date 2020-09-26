#include <iostream>
#include<stack>
#include<string>
using namespace std;
int prec(char a){
    if(a == '^'){
        return 3;
    }else if(a=='*' || a=='/'){
        return 2;
    }else if(a=='+'||a=='-'){
        return 1;
    }else{
        return 0;
    }
};
int main() {
    stack<char> st;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
	    string ns="";
	    string s;
	    cin >> s;
	    for(int i=0;i<s.length();++i){
	        if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
	            ns += s[i];
	        }
	        else if(s[i]=='('){
	            st.push(s[i]);
	        }
	        else if(s[i]==')'){
	            while(!st.empty() && st.top()!='('){
	                char tmp;
	                tmp = st.top();
	                ns += tmp;
	                st.pop();
	            }
	            if(st.top()=='('){
	                char tmp;
	                tmp = st.top();
	                //ns += tmp;
	                st.pop();
	            }
	        }
	        else{
	            while(!st.empty() && prec(s[i])<=prec(st.top())){
	                char tmp;
	                tmp = st.top();
	                ns += tmp;
	                st.pop();
	            }
	            st.push(s[i]);
	        }
	    }
	    cout << ns;
	    while(!st.empty()){
	        char tmp;
	        tmp = st.top();
	        cout << tmp;
	        st.pop();
	    }
	    cout << endl;
	}
	return 0;
} 
