#include "CountingMazeBuilder.h"

CountingMazeBuilder::CountingMazeBuilder()
{
    m_rooms = m_doors = 0;
}

void CountingMazeBuilder::BuildRoom(int n)
{
    m_doors++;
}

void CountingMazeBuilder::BuildDoor(int roomFrom, int rootTo)
{
    m_doors++;
}

void CountingMazeBuilder::GetCounts(int& rooms, int& doors) const
{
    rooms = m_rooms;
    doors = m_doors;
}

/*
 int rooms, doors;
 MazeGame game;
 CountingMazeBuilder builder;
 game.CreateMaze(builder);
 builder.GetCounts(rooms, doors);
 cout << "The maze has "
      << rooms << " rooms and "
      << doors << " doors" << endl;
 */




