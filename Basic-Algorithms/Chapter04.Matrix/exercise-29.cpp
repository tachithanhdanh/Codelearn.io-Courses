#define ft front()
#define bk back()

int chessKnight(string c)
{   int ans =0;
    if (c.ft-2>='a' && c.ft-2<='h' && c.bk-1>='1' && c.bk-1<='8') ++ans;
    if (c.ft-2>='a' && c.ft-2<='h' && c.bk+1>='1' && c.bk+1<='8') ++ans;
    if (c.ft+2>='a' && c.ft+2<='h' && c.bk-1>='1' && c.bk-1<='8') ++ans;
    if (c.ft+2>='a' && c.ft+2<='h' && c.bk+1>='1' && c.bk+1<='8') ++ans;
    if (c.ft-1>='a' && c.ft-1<='h' && c.bk+2>='1' && c.bk+2<='8') ++ans;
    if (c.ft+1>='a' && c.ft+1<='h' && c.bk+2>='1' && c.bk+2<='8') ++ans;
    if (c.ft-1>='a' && c.ft-1<='h' && c.bk-2>='1' && c.bk-2<='8') ++ans;
    if (c.ft+1>='a' && c.ft+1<='h' && c.bk-2>='1' && c.bk-2<='8') ++ans;
    return ans;
}
