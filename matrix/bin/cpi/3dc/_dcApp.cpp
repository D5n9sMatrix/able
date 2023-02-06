/***************************************************************
 * Name:      _dcApp.cpp
 * Purpose:   Code for Application Class
 * Author:    D5n9sMatrix (denis.02live@hotmail.com)
 * Created:   2022-01-13
 * Copyright: D5n9sMatrix (https://www.bing.com/)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "_dcApp.h"
#include "_dcMain.h"
#ifdef _DCAPP_DIALOG
IMPLEMENT_APP(_dcApp);

bool _dcApp::OnInit()
{

    _dcDialog* dlg = new _dcDialog(0L);

    dlg->Show();
    return true;
}
#endif _DCAPP_DIALOG
