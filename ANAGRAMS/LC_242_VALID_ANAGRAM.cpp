//There are twoo methods to solve this type of problem

// method_1:
// so in cpp each char has integer value..like
// a:1
// b:2
// c:3
// .
// .
// .
// .
// .
// z:26
// so what we do is we add the value and check if the sum of both the input is same..if yes then they are anagrams if not then not anagrams

// below code is wrong..change required

class Solution {
public:
    bool isAnagram(string s, string t) {
       int a=0;
       int b=0;
       for(int i=0;i<s.size();i++){
           a+=s[i];
       }
       for(int i=0;i<t.size();i++){
           b+=t[i];
       }
       if(a==b){
           return true;
       }
        return false;
    }
};

// method_2:
// just sorting both the inputs would also do the job

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            return true;
        }
        return false;
    }
};