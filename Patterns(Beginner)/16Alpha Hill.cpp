void alphaHill(int n) {
    // Write your code here.
    for(int row=1;  row<=n; row++)
    {

        for(int space=n-row; space>=1; space--)
        {

            cout<<" ";

        }

        char ch='A';

        int br=row;

        for(int j=1;j<=2*row-1;j++){

          int k=j;

            cout<<ch<<" ";

            if(k<br){

              ch++;

            }

            else{

              ch--;

            }

            

        }

        for(int j=n-row;j>=1;j--){

            cout<<" ";

        }

        cout<<endl;

    }
}