#include <bits/stdc++.h>
using namespace std;

int Boardsize ;
int CellSize ;

int board[50][50];

bool check(int ch, int row, int col)
{
    // row
    for (int c = 0; c < Boardsize; c++)
    {
        if (c != col && board[row][c] == ch)
        {
            return false;
        }
    }

    // col
    for (int r = 0; r < Boardsize; r++)
    {
        if (r != row && board[r][col] == ch)
        {
            return false;
        }
    }

    // box
    int str = (row / CellSize) * CellSize;
    int stc = (col / CellSize) * CellSize;
    for (int i = 0; i < CellSize; i++)
    {
        for (int j = 0; j < CellSize; j++)
        {
            if (str + i == row && stc + j == col)
            {
                continue;
            }
            if (board[str + i][stc + j] == ch)
            {
                return false;
            }
        }
    }
    return true;
}

int ans = 0;

void rec(int row, int col)
{

    // short
    if (col == Boardsize)
    {
        rec(row + 1, 0);
        return;
    }

    // base case
    if (row == Boardsize)
    {
        ans++;

        cout << "Total possible Ans:" << ans << endl;
        for (int i = 0; i < Boardsize; i++)
        {
            for (int j = 0; j < Boardsize; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }

        return;
    }

    // choice

    if (board[row][col] == 0)
    {
        for (int ch = 1; ch <= Boardsize; ch++)
        {
            if (check(ch, row, col))
            {
                board[row][col] = ch;
                rec(row, col + 1);
                board[row][col] = 0;
            }
        }
    }
    else
    {
        if (check(board[row][col], row, col))
        {
            rec(row, col + 1);
        }
    }
}

void solve()
{
    cin>>Boardsize; //Boardsize=N
    CellSize=sqrt(Boardsize);
    for (int i = 0; i < Boardsize; i++)
    {
        for (int j = 0; j < Boardsize; j++)
        {
            cin >> board[i][j];
        }
    }
    rec(0, 0);
    // cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin>>t;
    while (t--)
    {

        solve();
    }
}