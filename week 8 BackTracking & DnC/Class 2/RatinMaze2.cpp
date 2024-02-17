#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int maze[4][4], int row, int col, int srcx, int srcy, int newx, int newy, vector<vector<bool> >&visited){
    //Safe Conditions 
    //1--->>check if Out of Bound
    //2--->>check if Path is not closed(!=0)  
    //3--->>check if Already Visited in that loop 

    if(
        (newx >=0 && newx < row) &&
        (newy >=0 && newy < col) &&
        (maze[newx][newy] == 1) &&
        (visited[newx][newy]==false)
    ){
        //safe to Visit
        return true;
    }
    else {
        return false;
    }
}


void printAllPath(int maze[4][4], int row, int col, int srcx, int srcy, string &Output,vector<vector<bool> >&visited){
    //Base Case
    if(srcx == row-1 && srcy == col-1){
        //Print Output
        cout << Output << endl;
        return;
    }

    //UP
    int newx=srcx-1;
    int newy=srcy;
    if(isSafe(maze, row, col, srcx, srcy, newx, newy, visited)){
        //First of All MArk is Visited
        visited[newx][newy]=true;

        //Call Recursion
        Output.push_back('U');
        printAllPath(maze, row, col, newx, newy, Output,visited);

        //Now Backtracking
        Output.pop_back();
        visited[newx][newy]=false;
    }
    
    //DOWN
    newx=srcx+1;
    newy=srcy;
        if(isSafe(maze, row, col, srcx, srcy, newx, newy, visited)){
        //First of All MArk is Visited
        visited[newx][newy]=true;

        //Call Recursion
        Output.push_back('D');
        printAllPath(maze, row, col, newx, newy, Output,visited);

        //Now Backtracking
        Output.pop_back();
        visited[newx][newy]=false;
    }
    
    //LEFT
    newx=srcx;
    newy=srcy-1;
        if(isSafe(maze, row, col, srcx, srcy, newx, newy, visited)){
        //First of All MArk is Visited
        visited[newx][newy]=true;

        //Call Recursion
        Output.push_back('L');
        printAllPath(maze, row, col, newx, newy, Output,visited);

        //Now Backtracking
        Output.pop_back();
        visited[newx][newy]=false;
    }
    
    //RIGHT
    newx=srcx;
    newy=srcy+1;
        if(isSafe(maze, row, col, srcx, srcy, newx, newy, visited)){
        //First of All MArk is Visited
        visited[newx][newy]=true;

        //Call Recursion
        Output.push_back('R');
        printAllPath(maze, row, col, newx, newy, Output,visited);

        //Now Backtracking
        Output.pop_back();
        visited[newx][newy]=false;
    }
}



int main(){
    int maze[4][4]={
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1}
    };

    int row = 4; int col = 4;
    int srcx = 0; int srcy = 0;

    string Output="";

    //Creating Visited Array to keep Track of Visited Block
    vector<vector<bool> >visited(row,vector<bool>(col,false));

    if(maze[0][0]==0){
        //This Means that our Strting Position  is blocked
        //Rat cant Move
        cout << " No Possible Moves Allowed " << endl;
    }
    else{
        cout << "All Possible Ways are Listed as follows : " << endl << endl;
        visited[srcx][srcy]=true;
        printAllPath(maze,row,col,srcx,srcy,Output,visited);
    }
}