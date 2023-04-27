bool isMonotonous(std::vector<int> sequence)
{   bool flag1=true,flag2=true;
    for (int i=1;i<sequence.size();++i) {
        if (!(sequence[i]>sequence[i-1])) {
            flag1=false; break;
        }
    }
    for (int i=1;i<sequence.size();++i) {
        if (!(sequence[i]<sequence[i-1])) {
            flag2=false; break;
        }
    }
    return flag1 || flag2;
}
