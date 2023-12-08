void nTriangle(int n) {
	// Write your code here
	for(int row=1; row<=n; row++)
	{
		for(int col=1; col<=row; col++)
		{
			cout<<col<<" ";
		}
		cout<<endl;
	}
}