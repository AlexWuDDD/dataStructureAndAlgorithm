#ifndef ROOM_H
#define ROOM_H

#ifndef MAPSITE_H
#include "MapSite.h"
#endif


class Room : public MapSite
{
public:
    //each room has four sides
    enum Direction{North, South, East, West};
    
    Room(int roomNo);
    
    MapSite* GetSide(Direction) const;
    void SetSide(Direction, MapSite*);
    
    void Enter() override;

private:
    MapSite* m_sides[4];
    int m_roomNumber;
};




#endif
