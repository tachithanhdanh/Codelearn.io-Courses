int adjacentElementsProduct(std::vector<int> inputVector)
{
    int max=0;
    for(int i=0;i<inputVector.size()-1;++i){
        if(max<inputVector[i]*inputVector[i+1]) 
            max=inputVector[i]*inputVector[i+1];
    }
    return max;
}
