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
		string arr[x.size()];
                for (int i = 0; i < x.size(); i++) { //puts all the letters into an array
                        arr[i] = x[i];
			//std::cout << arr[i] << " ";
                }

                for (string i: arr) { //for each element in the array
                        if(i == ";") {
			       if (curr_row == end_row && curr_col == end_col) {
					cout << "You got out of the maze." << endl;
				}
			        else {
					cout << "You are stuck in the maze." << endl;
				}
				curr_row = 0;
				curr_col = 1;
			}	       

			if(i == "R" && maze[curr_row][curr_col + 1] != 1) {
                                curr_col++;
                        }
                        else if(i == "L" && maze[curr_row][curr_col - 1] != 1) {
                                curr_col--;
                        }
                        else if(i == "U" && maze[curr_row - 1][curr_col] != 1) {
                                curr_row--;
                        }
                        else if(i == "D" && maze[curr_row + 1][curr_col] != 1) {
                                curr_row++;
                        }
			else {
				curr_row = curr_row;
				curr_col = curr_col;
			}
			//cout << curr_row << ":" << curr_col << "  ";

                }
        }
}
