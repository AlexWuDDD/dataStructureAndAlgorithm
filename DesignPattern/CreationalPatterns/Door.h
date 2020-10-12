#ifndef DOOR_H
#define DOOR_H

#ifndef MAPSITE_H
#include "MapSite.h"
#endif

class Room;

class Door : public MapSite
{
public:
    Door(Room* = 0, Room* = 0);
    
    void Enter() override;
    Room* OtherSideFrom(Room*);
private:
    Room* m_room1;
    Room* m_room2;
    bool  m_isOpen;
};


#endif
