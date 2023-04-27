#define ft front()
#define bk back()

std::vector<string> bishopDiagonal(string b1, string b2)
{
    if (b1>b2) swap(b1,b2);
    if (((int)b1.ft-('8'-b1.bk)!=(int)b2.ft-('8'-b2.bk)) && (b1.ft+('8'-b1.bk)!=b2.ft+('8'-b2.bk))){
        return {b1,b2};
    }
    if (b1.ft+('8'-b1.bk)==b2.ft+('8'-b2.bk)){
        while (b1.bk!='1' && b1.ft!='a'){
            --b1.ft; --b1.bk;
        }
        while (b2.ft!='h' && b2.bk!='8'){
            ++b2.ft; ++b2.bk;
        }
    }
    else{
        while (b1.ft!='a' && b1.bk!='8'){
            --b1.ft; ++b1.bk;
        }
        while (b2.bk!='1' && b2.ft!='h'){
            ++b2.ft; --b2.bk;
        }
    }
    return {b1,b2};
}
