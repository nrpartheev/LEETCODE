vector<int> plusOne(vector<int>& digits) {
    if(digits.empty()){
        vector<int> v(1,1);
        return v;
    }
    if(digits.back()+1 == 10){
        digits.pop_back();
        digits = plusOne(digits);
        digits.push_back(0);
    }
    else{
        digits.back()++;
    }
    return digits;
}
