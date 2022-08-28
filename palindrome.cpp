bool isPalindrome(int x) {
    // reason for double was because one of the testcase was not in the range of a signed int...
    double reverse = 0;
    int temp = x;
    while(x>0){
        reverse = (reverse*10)+(x%10);
        x = x/10;
    }
    if(reverse == temp){
        return 1;
    }
    else{
        return 0;
    }
}
