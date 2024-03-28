#include <iostream>

using namespace std;

int main()
{
    int mat[100][100],zone[100];
    int M,N,i,j;
    cin>>M>>N;
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
            cin>>mat[i][j];
    int k=0;
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
    {
        if(mat[i][j]!=0)
        {
            bool verif=true;
            for(int x=0;x<k;x++)
                if(mat[i][j]==zone[x])
                    verif=false;
            if(verif==true)
                zone[k++]=mat[i][j];
        }
    }
    cout<<k;

}
