/*
 Author: Anita Prova
 Course: CSCI-135
 Instructor: Genady Maryash
 Assignment: Project 1 Task 4
 The program prints whether you are out of the maze or not.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
        int maze[10][10];
        int start_row, start_col, end_row, end_col, curr_row, curr_col;
	for(int r = 0; r < 10; r++){
		for (int c = 0; c < 10; c++) {
			cin >> maze[r][c];
		}
	}
	cin >> start_row >> start_col >> end_row >> end_col;
	curr_row = start_row;
	curr_col = start_col;

	string semicolon;
	while(semicolon != ";"){
		cin >> semicolon;
	}

	string x;
        while(cin >> x){
		string arr[x.size()];
		for(int i = 0; i < x.size(); i++) {
			arr[i] = x[i];
		}
		
                for (string i: arr) { //for each element in the array
                        if(i == ";") {
			       if (curr_row == end_row && curr_col == end_col) {
					cout << "You got out of the maze." << endl;
				}
			        else {
					cout << "You are stuck in the maze." << endl;
				}
				curr_row = start_row;
				curr_col = start_col;
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
                }
        }
}
