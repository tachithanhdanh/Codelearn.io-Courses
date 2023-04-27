bool checkStrongPassword(string password)
{
    if (password.size()<6) return false;
    int num=0,a=0,A=0,spec=0;
    for (int i=0;i<password.size();++i)
    {
        if (password[i]>='0' && password[i]<='9') ++num;
        else if (password[i]>='a' && password[i]<='z') ++a;
        else if (password[i]>='A' && password[i]<='Z') ++A;
        else if (password[i]>='!' && password[i]<='-' && password[i]!=34 && password[i]!=39 && password[i]!=44)
        // So 34 la dau " , 39 la ', con so 44 la dau phay.
        {
            ++spec;
        }
        if (num>0 && a>0 && A>0 && spec>0) return true;
    }
    return false;
}
