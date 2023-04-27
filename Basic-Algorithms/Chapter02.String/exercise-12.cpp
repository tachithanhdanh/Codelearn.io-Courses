bool checkPalindrome(string inputString)
{   int i=0,s=inputString.size();
    while(i*2+1<s){
        if (inputString[i]!=inputString[s-i-1])
            return false;
        ++i;
    }
    return true;
}
