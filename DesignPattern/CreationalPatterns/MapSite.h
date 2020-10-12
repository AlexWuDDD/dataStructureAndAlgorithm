#ifndef MAPSITE_H
#define MAPSITE_H

//The class MapSite is the common abstract class for all the components of a maze

class MapSite
{
public:
    /*
     * Its meaning depends on what you're entering.
     * If you enter a room, then your locations changes.
     * If you try to enter a door, then one of two things happen:
     *  If door is open, you go into the next room
     *  if door is closed, then you hurt your nose.
     * 
    */
    virtual void Enter() = 0;
};




#endif
