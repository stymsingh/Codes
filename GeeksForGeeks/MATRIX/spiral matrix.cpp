#include<bits/stdc++.h>
using namespace std;
void spiralPrint(const vector<vector<int> > &mat)
{
    vector<int>result;
    int rows = mat.size();
    int cols = mat[0].size();
    int left = 0;
    int right = cols - 1;
    int bottom = rows-1;
    int top = 0;
    int dir = 0;
    while(top<= bottom && left<=right)
    {
        if(dir == 0)
        {
            //L->R
            for(int i=left;i<=right;i++)
                result.push_back(mat[top][i]);
            dir = 1;
            top++;
            goto LOOP;
        }
        else if(dir ==1)
        {
            //R->B
            for(int j=top;j<=bottom;j++)
            {
                result.push_back(mat[j][right]);
            }
            right--;
            dir=2;
            goto LOOP;

        }
        else if(dir ==2)
        {
            //B->L
            for(int j=right;j>=left;j--)
            {
                result.push_back(mat[bottom][j]);
            }
            bottom--;
            dir=3;
            goto LOOP;
        }
        else if(dir ==3)
        {
            //L->T
            for(int k=bottom;k>=top;k--)
            {
                result.push_back(mat[k][left]);
            }
            left++;
            dir=0;
            goto LOOP;

        }
    //return result;
}


int main()
{
    vector<vector<int> >mat(3, vector<int>(6))
    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[0][2] = 3;
    mat[0][3] = 4;
    mat[0][4] = 5;
    mat[0][5] = 6;
    mat[1][0] = 7;
    mat[1][1] = 8;
    mat[1][2] = 9;
    mat[1][3] = 10;
    mat[1][4] = 11;
    mat[1][5] = 12;
    mat[2][0] = 13;
    mat[2][1] = 14;
    mat[2][2] = 15;
    mat[2][3] = 16;
    mat[2][4] = 17;
    mat[2][5] = 18;

    spiralPrint(mat);
    return 0;
}
