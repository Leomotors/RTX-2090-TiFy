#include "AboutApp.hpp"

#include <string>

#include "AppProps.h"

std::string App::aboutAppSimple()
{
    return std::string("RTX 2090 TiFy ") + APP_VERSION +
           (VERSION_BRANCH == std::string("Release") ? ""
                                                     : " (" + std::string(VERSION_BRANCH) + ")");
}

std::string App::aboutAppLong()
{
    std::string AboutApp = "Turns you into RTX 2090 Ti\nApp Version: ";
    AboutApp += APP_VERSION;
    AboutApp += "\nVersion Branch: ";
    AboutApp += VERSION_BRANCH;
    AboutApp += "\nCreated by Leomotors\nUsing wxWidgets & OpenCV";
    return AboutApp;
}
