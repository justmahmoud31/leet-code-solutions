class Solution {
public:
    int romanToInt(string s) {
          map<char,int>mp;
    mp.insert({'I', 1});
    mp.insert({'V', 5});
    mp.insert({'X', 10});
    mp.insert({'L', 50});
    mp.insert({'C', 100});
    mp.insert({'D', 500});
    mp.insert({'M', 1000});
    int sum(0);
    for (int i=0;i<s.size();i++ ){
            auto x = mp.find(s[i]);
            int t = x->second;
            auto y = mp.find(s[i+1]);
            int k = y->second;
           if(t<k){
               sum+=(k-t);
               i++;
           }
           else{
               sum+=t;
           }
    }
        return sum;
    }

};