#include<iostream>
using namespace std;
int m[100][100],k1;
main()
{int n,p[100];
cin>>n;
for(int i=0;i<=n;i++)
{cin>>p[i];
}

for(int i=n;i>=1;i++)
{

    for(int j=i+1;j<=n;j++)
    {
     if(i==j)
     m[i][j]=0;

     else
    { k1=INT_MAX;
    for(int k=i;k<j;k++)
      {k1=min(k1,m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
    }

    }
    m[i][j]=k1;
    }
}

    for(int i=1;i<=n;i++)
    {


        for(int j=1;j<=n;j++)
    {
        cout<<m[i][j]<<" ";
    }
    cout<<endl;
    }
}


