/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* plusOne(int* A, int n1, int *len1) {
     
    int i,pos,*p;
    
    for(i=0;i<n1;i++)
    {
        if(A[i]!=0)
        {
            pos=i;break;
        }
    }
    p=&A[pos];
    *len1=n1-pos;
    
    if(A[n1-1]!=9)
        {A[n1-1]+=1;return p;}
        
    else if(A[n1-1]==9)
    {
        
        for(i=n1-1;i>=pos;i--)
         {
             if(A[i]==9)
             A[i]=0;
             else
             {A[i]+=1;*len1=n1-pos;return p;}
         }
        if(A[pos]==0)
        {
            int *B=(int*)calloc((n1-pos+1),sizeof(int));
            B[0]=1;
            *len1=n1-pos+1;
            return B;
        }
        else{*len1=n1-pos;
            return p;}
    }
}
