bool isRectangle(std::vector<std::vector<int>> p)
{
    int v1[]={p[1][0]-p[0][0],p[1][1]-p[0][1]};
    int v2[]={p[2][0]-p[1][0],p[2][1]-p[1][1]};
    int v3[]={p[3][0]-p[2][0],p[3][1]-p[2][1]};
    int v4[]={p[0][0]-p[3][0],p[0][1]-p[3][1]};
    bool b1=v1[0]*v2[0]+v1[1]*v2[1];
    bool b2=v2[0]*v3[0]+v2[1]*v3[1];
    bool b3=v3[0]*v4[0]+v3[1]*v4[1];
    return (!b1) && (!b2) && (!b3);
}
