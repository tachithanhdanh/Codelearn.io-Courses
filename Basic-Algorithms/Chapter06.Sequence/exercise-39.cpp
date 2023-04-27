bool isArithmeticProgression(std::vector<int> sequence)
{
    const int a=sequence[1]-sequence[0];
    for (int i=0;i<sequence.size()-1;++i) {
        if (sequence[i+1]-sequence[i]!=a) return false;
    }
    return true;
}
