bool insideCircle(std::vector<int> a, std::vector<int> i, int r)
{
    return ((a[0]-i[0])*(a[0]-i[0])+(a[1]-i[1])*(a[1]-i[1]))<=r*r;
}
