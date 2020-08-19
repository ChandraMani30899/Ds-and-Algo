#include<bits/stdc++.h>
using namespace std;
bool ratInAMaze(char maze[4][4], int sr, int sc, int er, int ec) {

                          if(sr==er && sc==ec)
                            return true;

                           if(sr> er || sc > ec)
                             return false; 

             bool r,f;
                  if(maze[sr+1][sc]!='X')
                    r=ratInAMaze(maze, sr + 1, sc, er, ec);
                  else r=false;
                  if (maze[sr + 1][sc] != 'X')
                      f=ratInAMaze(maze, sr , sc+1, er, ec);
                   else f=false;

            return r || f;          
}
void printInAMaze(char maze[4][4], int sr, int sc, int er, int ec)
{

    if (sr == er && sc == ec)
    {
    
    
        
    }
    if (sr > er || sc > ec || maze[sr][sc]=='X')
        return false;

    bool r, f;
    
        r = printInAMaze(maze, sr + 1, sc, er, ec);
    
        f = printInAMaze(maze, sr, sc + 1, er,ec);
    return r || f;
}

int main() {

	// int board[4][4] = {0};
	// int n = 4;

	// cout << NQueens(board, 0, n) << endl;

	char maze[][4] = {
		{'0', '0', '0', '0'},
		{'0', '0', '0', 'X'},
		{'0', '0', '0', '0'},
		{'0', 'X', '0', '0'},
	};
cout<<ratInAMaze(maze,0,0,3,3)<<"\n";
	return 0;
}