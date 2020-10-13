#ifndef MAZEFACTORY_H
#define MAZEFACTORY_H

class MazeFactory
{
public:
    static MazeFactory* Instance();
    
protected:
    MazeFactory();
private:
    static MazeFactory* m_instance;
};





#endif
