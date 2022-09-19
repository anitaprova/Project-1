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
	int end = maze[4][5];
	while(cin >> x){
		if () {
			cout << "You are stuck in the maze.";
		}
		else {
			cout << "You got out of the maze";
		}
		
		if(x == "R") {
			
		}
	}
}
