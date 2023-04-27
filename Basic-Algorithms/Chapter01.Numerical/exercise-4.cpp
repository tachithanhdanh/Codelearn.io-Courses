int maxFraction(std::vector<int> numerators, std::vector<int> denominators)
{
    int maxindex=0;
    for (int i=1;i<numerators.size();++i)
    {
        if ((numerators[maxindex]*denominators[i]-numerators[i]*denominators[maxindex])<0)
        {  maxindex=i;   }
    }
    return maxindex;
}
