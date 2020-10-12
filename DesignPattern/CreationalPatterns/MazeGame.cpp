#include "MazeGame.h"
#include "Maze.h"
#include "Room.h"
#include "Door.h"
#include "Wall.h"

/*
 It hard-codes the maze layout.
 Changing the layout means Changing this member function, 
 either by overriding it - 
 which means reimplementing the whole thing or by changing parts of it
 */

Maze * MazeGame::CreateMaze()
{
    Maze * aMaze = new Maze;
    Room* r1 = new Room(1);
    Room* r2 = new Room(2);
    
    Door* theDoor = new Door(r1, r2);
    
    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);
    
    r1->SetSide(Room::North, new Wall);
    r1->SetSide(Room::East, theDoor);
    r1->SetSide(Room::South, new Wall);
    r1->SetSide(Room::West, new Wall);
    
    r2->SetSide(Room::North, new Wall);
    r2->SetSide(Room::East, new Wall);
    r2->SetSide(Room::South, new Wall);
    r2->SetSide(Room::West, theDoor);
    
    return aMaze;
}






