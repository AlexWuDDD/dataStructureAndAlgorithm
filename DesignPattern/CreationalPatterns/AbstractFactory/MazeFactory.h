#ifndef MAZEFACTORY_H
#define MAZEFACTORY_H

#ifndef MAZE_H
#include "../Maze.h"
#endif

#ifndef ROOM_H
#include "../Room.h"
#endif

#ifndef WALL_H
#include "../Wall.h"
#endif

#ifndef DOOR_H
#include "../Door.h"
#endif

class MazeFactory
{
public:
    MazeFactory();
    
    virtual Maze* MakeMaze() const
    { return new Maze;}
    
    virtual Wall* MakeWall() const
    { return new Wall;}
    
    virtual Room* MakeRoom(int n) const
    { return new Room(n);}

    virtual Door* MakeDoor(Room* r1, Room * r2) const
    { return new Door(r1, r2);}
};





#endif
