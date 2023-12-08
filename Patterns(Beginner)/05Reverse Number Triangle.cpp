void nNumberTriangle(int n) {
    // Write your code here.
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<n-row; col++) 
        {
                cout<< col+1<<" ";

        }
        cout<<endl;
    }
           
}