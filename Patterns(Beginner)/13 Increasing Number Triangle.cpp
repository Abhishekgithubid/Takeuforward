void nNumberTriangle(int n) {
    // Write your code here.
    int i=1;
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<=row; col++)
        {
            cout<<i<<" ";
            i++;
        }
       cout<< endl;
    }
}