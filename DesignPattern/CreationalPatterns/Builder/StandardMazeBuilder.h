#ifndef STANDARDMAZEBUILDER_H
#define STANDARDMAZEBUILDER_H

#ifndef MAZEBUILDER_H
#include "MazeBuilder.h"
#endif

#ifndef ROOM_H
#include "../Room.h"
#endif

class StandardMazeBuilder : public MazeBuilder
{
public:
    StandardMazeBuilder();
    
    void BuildMaze() override;
    void BuildRoom(int n) override;
    void BuildDoor(int roomFrom, int rootTo) override;
    
    Maze * GetMaze() override;
    
private:
    Room::Direction CommonWall(Room*, Room*);
    Maze* m_currentMaze;
};

/*
 Maze* maze;
 MazeGame game;
 StandardMazeBuilder builder;
 
 game.CreateMaze(builder);
 maze = builder.GetMaze();
 
 */



#endif
