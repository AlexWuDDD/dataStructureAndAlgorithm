class BombedMazeGame : public MazeGame
{
public:
    BombedMazeGame();
    
    virtual Wall* MakeWall() const
    {return new BombedMazeGame;}
    
    virtual Room* MakeRoom(int n) const
    {return new RoomWithABomb(n);}
};
