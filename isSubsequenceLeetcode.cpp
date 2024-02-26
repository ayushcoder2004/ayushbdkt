class Solution {
public:
    bool isSubsequence(string s, string t) {
        map<char,int>m1;
        for(int i=0;i<s.length();i++){
            m1[s[i]]++;
        }

        map<char,int>m2;
        for(int i=0;i<t.length();i++){
            m2[t[i]]++;
        }

        for(int i=0;i<m1.size();i++){
            if(m1[i+'a']!=m2[i+'a'] ){
                return false;
            }
        }
        return true;
    }
};

















vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int element=nums[i];
            bool present=false;
            int j;
            for(j=0;j<=nums.size();j++){
                if(element==i){present=true;break;}
            }
            if(present==false){
                ans.push_back(j);
            }
        }
        return ans;