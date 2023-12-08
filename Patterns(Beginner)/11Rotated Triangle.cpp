void nStarTriangle(int n) {
    // Write your code here.
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<=row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int row=0; row<n-1; row++)
    {
        for(int col=0; col<n-1-row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


}