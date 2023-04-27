char convertChar(char ch)
{
    bitset<7> a(ch);
    a.flip();
    return a.to_ulong();
}
