int minimumOperations(vector<int>& nums) {
    int count = 0;
    map<int,int> mp;
    for(int i:nums){
        if(i != 0){
            if(mp[i] == 0){
                mp[i]++;
                count++;
            }   
        }
    }
    return count;
}
