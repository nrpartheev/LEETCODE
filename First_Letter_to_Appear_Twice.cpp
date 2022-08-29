// Runtime: 0 ms, faster than 100.00% of C++ online submissions for First Letter to Appear Twice.
char repeatedCharacter(string s) {
    map<char,int> hashmap;
    for(char i:s){
        if(hashmap[i] == 1){
            return i;
            break;
        }
        else{
            hashmap[i]++;
        }
    }
    return -1;
}
