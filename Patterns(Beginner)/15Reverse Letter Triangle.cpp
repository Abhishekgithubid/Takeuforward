void nLetterTriangle(int n) {
    // Write your code here.
    for(int row=0; row<n; row++)
    {
        char i= 'A';
        for(int col=0; col<n-row; col++)
        {
            cout<<i<<" ";
            i++;
        }
       cout<< endl;
    }
}