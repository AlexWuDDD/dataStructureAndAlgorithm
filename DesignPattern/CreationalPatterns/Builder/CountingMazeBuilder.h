#ifndef COUNTINGMAZEBUILDER_H
#define COUNTINGMAZEBUILDER_H

#ifndef MAZEBUILDER_H
#include "MazeBuilder.h"
#endif

#ifndef ROOM_H
#include "../Room.h"
#endif

class CountingMazeBuilder : public MazeBuilder
{
public:
    CountingMazeBuilder();
    
    void BuildMaze() override;
    void BuildRoom(int n) override;
    void BuildDoor(int roomFrom, int rootTo) override;
    void AddWall(int, Room::Direction);
    
    void GetCounts(int&, int&) const;
    
private:
    int m_doors;
    int m_rooms;
};



#endif
