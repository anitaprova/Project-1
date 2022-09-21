/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1 Task 2
The program prints whether you are out of the maze or not.
*/

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
		}
		
		for (string i: arr) { //for each element in the array
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
		}
	}

	if (curr_row == end_row && curr_col == end_col) {
		cout << "You got out of the maze." << endl;
	}
	else {
		cout << "You are stuck in the maze." << endl;
	}
}
