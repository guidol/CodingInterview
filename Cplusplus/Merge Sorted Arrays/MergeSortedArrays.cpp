vector<int> mergeVectors(const vector<int>& myVector, const vector<int>& alicesVector)
{
    // combine the sorted vectors into one large sorted vector
     vector<int> mergedVector(myVector.size() + alicesVector.size());
    size_t indexVector = 0;
    for(auto i = myVector.begin(); i !=myVector.end(); ++i)
    {
       mergedVector[indexVector] = *i;
       ++indexVector;
    }
    for(auto i = alicesVector.begin(); i !=alicesVector.end(); ++i)
    {
       mergedVector[indexVector] = *i;
       ++indexVector;
    }
    
   sort(mergedVector.begin(), mergedVector.end());
     
    return mergedVector;

}

// it takes n^2; and used Vector such as an array.(didn't use Vector's function.)