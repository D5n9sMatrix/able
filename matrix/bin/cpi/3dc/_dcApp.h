/***************************************************************
 * Name:      _dcApp.h
 * Purpose:   Defines Application Class
 * Author:    D5n9sMatrix (denis.02live@hotmail.com)
 * Created:   2022-01-13
 * Copyright: D5n9sMatrix (https://www.bing.com/)
 * License:
 **************************************************************/

#ifndef _DCAPP_H
#define _DCAPP_H

#include <stdio.h>
#ifdef _DCAPP_EDITOR
class _dcApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // _DCAPP_H
#endif // _DCAPP_EDITOR
