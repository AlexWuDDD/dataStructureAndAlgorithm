#include "MazeFactory.h"

MazeFactory* MazeFactory::m_instance = 0;
MazeFactory * MazeFactory::Instance()
{
    if(m_instance == 0){
        const char* mazeStyle = getenv("MAZESTYLE");
        
        if(strcmp(mazeStyle, "boobed") == 0){
            m_instance = new BombedMazeFactory;
        }
        else if(strcmp(mazeStyle, "enchanted") == 0){
            m_instance = new EnchantedMazeFactory;
        }
        
        //other possible subclasses
        else{ //default
            m_instance = new MazeFactory;
        }
    }
    return m_instance;
}



