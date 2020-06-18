int Solution::perfectPeak(vector<int> &A) {
    if(A.size()<3)
        return 0;

    vector<int>x;
    
    for(int i=1;i<A.size()-1;i++)
    {
        if(A[i-1]<A[i] && A[i]<A[i+1])
            x.push_back(i);
    }
    if(x.size()==0)
        return 0;
        
    int left[A.size()+1];
    int right[A.size()+1];
    left[0]=A[0];
    right[A.size()-1]=A[A.size()-1];
    
    for(int i=1;i<A.size();i++)
    {
        left[i]=max(left[i-1],A[i]);
    }
    for(int i=A.size()-2;i>=0;i--)
    {
        right[i]=min(right[i+1],A[i]);
    }
    
    for(int i=0;i<x.size();i++)
    {
        int indx=x[i];
        if(left[indx-1]<A[indx] && right[indx+1]>A[indx])
            return 1;
    }
    return 0;
}
