#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int maze[][4],int row,int col,int srcx,int srcy,int newx,int newy,vector<vector<bool> > &visited){
    //Cases for Checking Safe
        //1--if Path is open which is 1
        //2--Check if we are out of bound
        //3--check if already visited
    
    if(
        (newx >= 0 && newx <row) &&
        (newy >= 0 && newy <col) &&
        (maze[newx][newy] == 1) &&
        visited[newx][newy] == false
        ) {
        return true;
    }
    else{
        return false;
    }
}

void printAllPath(int maze[][4],int row,int col,int srcx,int srcy,string &output,vector<vector<bool> > &visited){
    if(srcx == row-1 && srcy == col-1){
        //Reached Destination
        cout << output << endl;
        return;
    }

    // ek case Solve karo aur baaki recursion Sambhal lega
    //UP
    int newx=srcx-1;
    int newy=srcy;
    if(isSafe(maze,row,col,srcx,srcy,newx,newy,visited)==true){
        
        //First of all Mark it Visited
        visited[newx][newy]=true;
        
        //CallRecursion
        output.push_back('U');
        printAllPath(maze,row,col,newx,newy,output,visited);
        
        //Backtracking So that Another Case Prints too 
        output.pop_back();
        visited[newx][newy]=false;
    }
    //RIGHT
    newx=srcx;
    newy=srcy+1;
    if(isSafe(maze,row,col,srcx,srcy,newx,newy,visited)==true){
        
        //First of all Mark it Visited
        visited[newx][newy]=true;
        
        //CallRecursion
        output.push_back('R');
        printAllPath(maze,row,col,newx,newy,output,visited);
        
        //Backtracking So that Another Case Prints too 
        output.pop_back();
        visited[newx][newy]=false;
    }



    //DOWN
    newx=srcx+1;
    newy=srcy;
    if(isSafe(maze,row,col,srcx,srcy,newx,newy,visited)==true){
        
        //First of all Mark it Visited
        visited[newx][newy]=true;
        
        //CallRecursion
        output.push_back('D');
        printAllPath(maze,row,col,newx,newy,output,visited);
        
        //Backtracking So that Another Case Prints too 
        output.pop_back();
        visited[newx][newy]=false;
    }
    

    //LEFT
    newx=srcx;
    newy=srcy-1;
    if(isSafe(maze,row,col,srcx,srcy,newx,newy,visited)==true){
        
        //First of all Mark it Visited
        visited[newx][newy]=true;
        
        //CallRecursion
        output.push_back('L');
        printAllPath(maze,row,col,newx,newy,output,visited);
        
        //Backtracking So that Another Case Prints too 
        output.pop_back();
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
    int row = 4;   int col = 4;
    cout << row << endl;
    //  Source or Starting Position of Rat
    int srcx = 0; int srcy = 0;
    string output="";

    //Destination Point of Rat
    //destx=row-1 and desty=col-1
    
    //Creating Visited 2d array in which we will keep track of Visited Paths
    vector<vector<bool> > visited(row,vector<bool>(col,false));
    if(maze[0][0]== 0){
        //Source Position is CLosed, RAT cannot Move
        cout << "No Path Exists" << endl;
    }
    else{
        visited[srcx][srcy]=true;
        printAllPath(maze, row, col, srcx, srcy, output, visited );
    }
}