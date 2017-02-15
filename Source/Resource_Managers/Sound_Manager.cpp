#include "Sound_Manager.h"

Sound_Manager::Sound_Manager()
{
    std::string path ("Res/Sounds/");

    registerResource(Sound_ID::Splash_Made_By,  path + "MadeBy.ogg");
    registerResource(Sound_ID::Sword1,          path + "Sword1.ogg");
}
