int romanToInt(string s) {
    int ans=0;
    map<char,int> hashmap = {{'I', 1,},{'V', 5,},{'X', 10,},{'L', 50,},{'C', 100,},{'D', 500,},{'M', 1000,}};
    int size = s.size();
    for(int i=0;i<size-1;i++){
        if(hashmap[s[i]]>=hashmap[s[i+1]]){
            ans+=hashmap[s[i]];
        }
        else{
            ans-=hashmap[s[i]];
        }
    }
    ans+=hashmap[s[size-1]];
    return ans;
}
