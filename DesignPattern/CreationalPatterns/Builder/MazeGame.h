#ifndef MAZEGAME_H
#define MAZEGAME_H

class Maze;
class MazeBuilder;

class MazeGame
{
public:
    static Maze* CreateMaze(MazeBuilder& builder);
    static Maze* CreateComplexMaze(MazeBuilder& builder);
};


#endif
