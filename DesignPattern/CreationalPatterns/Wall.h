#ifndef WALL_H
#define WALL_H

#ifndef MAPSITE_H
#include "MapSite.h"
#endif

class Wall : public MapSite
{
public:
    Wall();
    void Enter() override;
};

#endif
