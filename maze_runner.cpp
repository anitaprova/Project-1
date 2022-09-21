#include <iostream>
#include <string>
using namespace std;

int main()
{
	int maze[6][6] = {
		1,0,1,1,1,1,
		1,0,0,0,1,1,
		1,0,1,0,0,1,
		1,0,1,0,1,1,
		1,0,0,0,0,0,
		1,1,1,1,1,1
	};
	
	string x;
	int end_row = 4;
	int end_col = 5;
	int curr_row = 0;
	int curr_col = 1;

	while(cin >> x){
		if(x == "R" && maze[curr_row][curr_col + 1] != 1) {
			curr_col++;	
		}
		else if(x == "L" && maze[curr_row][curr_col - 1] != 1) {
			curr_col--;
		}
		else if(x == "U" && maze[curr_row - 1][curr_col] != 1) {
			curr_row--;
		}
		else if(x == "D" && maze[curr_row + 1][curr_col] != 1) {
			curr_row++;
		}
		cout << curr_row << " " << curr_col << endl;
	}

	if (curr_row == end_row && curr_col == end_col) {
		cout << "You got out of the maze." << endl;
	}
	else {
		cout << "You are stuck in the maze." << endl;
	}
}
