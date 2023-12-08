void nStarDiamond(int n) {
    // Write your code here.
    //upper half
    for(int row=0; row<n; row++)
    {
        //space
        for(int space=0; space<n-row-1; space++)
            cout<<" ";
        
        //star
        for(int star=0; star<(2*row)+1; star++)
            cout<<"*";
        
        //space
        for(int space=0; space<n-row-1; space++)
            cout<<" ";
        cout<<endl;
    }

    //lower half
    for(int row=0; row<n; row++)
    {
        //space
        for(int space=0; space<row; space++)
            cout<<" ";
        
        //star
        for(int space=0; space<2*(n-row-1)+1; space++)
            cout<<"*";
        
        //space
        for(int space=0; space<row; space++)
            cout<<" ";
        cout<<endl;
    }
}