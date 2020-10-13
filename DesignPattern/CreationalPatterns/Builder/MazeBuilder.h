#ifndef MAZEBUILDER_H
#define MAZEBUILDER_H

class Maze;

class MazeBuilder
{
public:
    virtual void BuildMaze(){};
    virtual void BuildRoom(int n){}
    virtual void BuildDoor(int roomFrom, int rootTo) {}
    virtual Maze* GetMaze() {return 0;}
protected:
    MazeBuilder();
};




#endif
