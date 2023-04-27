vector<string> allLongestStrings(vector<string> inputArray){ 
    int max=0; for(int i=0;i<inputArray.size();++i){
        if (inputArray[i].size()>max) max=inputArray[i].size();
    }   vector<string> ans;
    for(int i=0;i<inputArray.size();++i){
        if (inputArray[i].size()==max) ans.push_back(inputArray[i]);
    }   return ans;
}