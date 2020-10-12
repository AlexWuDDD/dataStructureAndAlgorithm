#ifndef MAZE_H
#define MAZE_H

class Room;

class Maze
{
public:
    Maze();
    void AddRoom(Room*);
    Room* RoomNo(int) const;
private:
    
};


#endif
