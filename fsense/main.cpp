#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

#include "FSenseUI.h"

int main (int argc, char ** argv)
{
    mainWindow();
    FSenseUI->show(argc,argv);
    return(Fl::run());
}
