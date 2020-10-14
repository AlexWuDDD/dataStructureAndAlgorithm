class EnchantedMazeGame : public MazeGame 
{
public:
    EnchantedMazeGame();
    virtual Room* MakeRoom(int n) const
    { return new EnchantedRoom(n, CastSpell()); }
    
    virtual Door* MakeDoor(Room* rl, Room* r2) const
    { return new DoorNeedingSpell(rl, r2); }
protected:
    Spell* CastSpell() const;
};
