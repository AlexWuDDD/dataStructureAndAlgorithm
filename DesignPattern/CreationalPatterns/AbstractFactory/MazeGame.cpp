#include "MazeGame.h"
#include "MazeFactory.h"

Maze * MazeGame::CreateMaze(MazeFactory& factory)
{
    Maze * aMaze = factory.MakeMaze();
    Room* r1 = factory.MakeRoom(1);
    Room* r2 = factory.MakeRoom(2);
    
    Door* theDoor = factory.MakeDoor(r1, r2);
    
    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);
    
    r1->SetSide(Room::North, factory.MakeWall());
    r1->SetSide(Room::East, theDoor);
    r1->SetSide(Room::South, factory.MakeWall());
    r1->SetSide(Room::West, factory.MakeWall());
    
    r2->SetSide(Room::North, factory.MakeWall());
    r2->SetSide(Room::East, factory.MakeWall());
    r2->SetSide(Room::South, factory.MakeWall());
    r2->SetSide(Room::West, theDoor);
    
    return aMaze;
}






