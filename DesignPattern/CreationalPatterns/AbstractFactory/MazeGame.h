#ifndef MAZEGAME_H
#define MAZEGAME_H

class Maze;
class MazeFactory;

class MazeGame
{
public:
    static Maze* CreateMaze(MazeFactory& factory);
};


#endif
