void symmetry(int n) {

    int space=0;

    for(int i=1;i<=n;i++){//1

        for(int j=1;j<=n+1-i;j++){//3 2 1

            cout<<"* ";

        }

        for(int s=1;s<=space;s++){//2 4

            cout<<" ";

        }

        for(int j=1;j<=n+1-i;j++){

            cout<<"* ";

        }

        space+=2;//2 4 6

        cout<<endl;

    }

 

    for(int i=n;i>=1;i--){//3 2

        space-=2;//4 2

        for(int j=1;j<=n+1-i;j++){//1 2

            cout<<"* ";

        }

        for(int s=1;s<=space;s++){//4

            cout<<" ";

        }

        for(int j=1;j<=n+1-i;j++){

            cout<<"* ";

        }

        cout<<endl;

    }

}