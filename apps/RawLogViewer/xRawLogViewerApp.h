/* +------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)            |
   |                          http://www.mrpt.org/                          |
   |                                                                        |
   | Copyright (c) 2005-2018, Individual contributors, see AUTHORS file     |
   | See: http://www.mrpt.org/Authors - All rights reserved.                |
   | Released under BSD License. See details in http://www.mrpt.org/License |
   +------------------------------------------------------------------------+ */

#ifndef XRAWLOGVIEWERAPP_H
#define XRAWLOGVIEWERAPP_H

#include <wx/app.h>

class xRawLogViewerApp : public wxApp
{
   public:
	bool OnInit() override;
	int OnExit() override;
};

#endif  // XRAWLOGVIEWERAPP_H
