/***************************************************************
 * Name:      _dcMain.h
 * Purpose:   Defines Application Frame
 * Author:    D5n9sMatrix (denis.02live@hotmail.com)
 * Created:   2022-01-13
 * Copyright: D5n9sMatrix (https://www.bing.com/)
 * License:
 **************************************************************/

#ifndef _DCMAIN_H
#define _DCMAIN_H



#include "_dcApp.h"



#include "GUIDialog.h"
#ifdef _DCMAIN_EDITOR
class _dcDialog: public GUIDialog
{
    public:
        _dcDialog(wxDialog *dlg);
        ~_dcDialog();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};
#endif // _DCMAIN_H
#endif // _DCMAIN_EDITOR
