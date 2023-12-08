void nBinaryTriangle(int n) {
    // Write your code here.
    int bit;
    for(int row=0; row<n; row++)
    {
        if(row%2==0) 
            bit=1;
        else
            bit=0;
        
        for(int col=0; col<=row; col++)
        {
            cout<<bit<<" ";
            (bit==1)? bit=0: bit=1;
        }
        cout<<endl;
    }   
}