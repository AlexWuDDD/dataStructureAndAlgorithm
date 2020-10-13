#include "StandardMazeBuilder.h"
#include "../Maze.h"
#include "../Wall.h"
#include "../Door.h"

StandardMazeBuilder::StandardMazeBuilder()
{
    m_currentMaze = 0;
}

void StandardMazeBuilder::BuildMaze()
{
    m_currentMaze = new Maze;
}

Maze * StandardMazeBuilder::GetMaze()
{
    return m_currentMaze;
}

void StandardMazeBuilder::BuildRoom(int n)
{
    if(!m_currentMaze->RoomNo(n)){
        Room* room = new Room(n);
        m_currentMaze->AddRoom(room);
        
        room->SetSide(Room::North, new Wall);
        room->SetSide(Room::South, new Wall);
        room->SetSide(Room::East, new Wall);
        room->SetSide(Room::West, new Wall);
    }
}

void StandardMazeBuilder::BuildDoor(int roomFrom, int rootTo)
{
    Room* r1 = m_currentMaze->RoomNo(roomFrom);
    Room* r2 = m_currentMaze->RoomNo(rootTo);
    
    Door* d = new Door(r1, r2);
    r1->SetSide(CommonWall(r1, r2), d);
    r2->SetSide(CommonWall(r2, r1), d);
    
}





