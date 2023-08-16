#ifndef __HELLO_H
#define __HELLO_H

#include "wx/wx.h"
#include "wx/wxprec.h"

class HelloWorldApp : public wxApp {
public:
    virtual bool OnInit();
};
DECLARE_APP(HelloWorldApp)
#endif
