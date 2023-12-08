void symmetry(int n) {

    // Write your code here.

    // Write your code here.

    int space=0;

    int spacee=n+1;

    for(int i=1;i<=n;i++)

    {

        for(int j=1;j<=i;j++)

        {

            cout<<'*'<<" ";

        }

        for(int j=spacee;j>0;j--)

        {

            cout<<" ";

        }

        for(int j=spacee;j>0;j--)

        {

            cout<<" ";

        }

        for(int j=1;j<=i;j++)

        {

            cout<<'*'<<" ";

        }

        spacee-=2;

        cout<<endl;

    }

    for(int i=1;i<n;i++)

    {

        for(int j=n-1;j>=i;j--)

        {

            cout<<'*'<<" ";

        }

        for(int j=0;j<space;j++)

        {

            cout<<" ";

        }

        for(int j=0;j<space;j++)

        {

            cout<<" ";

        }

        for(int j=n-1;j>=i;j--)

        {

            cout<<'*'<<" ";

        }

        space+=2;

        cout<<endl;

    }