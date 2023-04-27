int sqr(int x) {
    return x*x;
}
int findSquareSide(std::vector<int> x, std::vector<int> y)
{
    int a=sqr(x[0]-x[1])+sqr(y[0]-y[1]), b=sqr(x[0]-x[2])+sqr(y[0]-y[2]);
    return (a<b? a : b);
}
