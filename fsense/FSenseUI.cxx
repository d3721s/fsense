// generated by Fast Light User Interface Designer (fluid) version 1.0401

#include "FSenseUI.h"

Fl_Double_Window *FSenseUI=(Fl_Double_Window *)0;

Fl_Menu_Bar *FSenseMenuBar=(Fl_Menu_Bar *)0;

Fl_Double_Window* mainWindow() {
  { FSenseUI = new Fl_Double_Window(240, 560, "FSense");
    FSenseUI->color(FL_BACKGROUND2_COLOR);
    FSenseUI->when(FL_WHEN_NEVER);
    { FSenseMenuBar = new Fl_Menu_Bar(0, 0, 240, 44);
      FSenseMenuBar->align(Fl_Align(FL_ALIGN_CLIP));
    } // Fl_Menu_Bar* FSenseMenuBar
    FSenseUI->size_range(240, 560, 240, 560);
    FSenseUI->end();
  } // Fl_Double_Window* FSenseUI
  return FSenseUI;
}
