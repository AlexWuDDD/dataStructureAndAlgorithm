#include "MazeGame.h"
#include "MazeFactory.h"

Maze * MazeGame::CreateMaze()
{
    Maze * aMaze = MakeMaze();
    Room* r1 = MakeRoom(1);
    Room* r2 = MakeRoom(2);
    
    Door* theDoor = MakeDoor(r1, r2);
    
    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);
    
    r1->SetSide(Room::North, MakeWall());
    r1->SetSide(Room::East, theDoor);
    r1->SetSide(Room::South, MakeWall());
    r1->SetSide(Room::West, MakeWall());
    
    r2->SetSide(Room::North, MakeWall());
    r2->SetSide(Room::East, MakeWall());
    r2->SetSide(Room::South, MakeWall());
    r2->SetSide(Room::West, theDoor);
    
    
    return aMaze;
}






