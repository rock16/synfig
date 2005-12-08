/*! ========================================================================
** Synfig
** Template Header File
** $Id: mptr_mplayer.h,v 1.1.1.1 2005/01/04 01:23:14 darco Exp $
**
**	Copyright (c) 2002-2005 Robert B. Quattlebaum Jr., Adrian Bentley
**
**	This package is free software; you can redistribute it and/or
**	modify it under the terms of the GNU General Public License as
**	published by the Free Software Foundation; either version 2 of
**	the License, or (at your option) any later version.
**
**	This package is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
**	General Public License for more details.
**
** === N O T E S ===========================================================
**
** ========================================================================= */

/* === S T A R T =========================================================== */

#ifndef __SYNFIG_MPTR_MPLAYER_H
#define __SYNFIG_MPTR_MPLAYER_H

/* === H E A D E R S ======================================================= */

#include <synfig/synfig.h>
#include <stdio.h>
#include "string.h"

/* === M A C R O S ========================================================= */

/* === T Y P E D E F S ===================================================== */

/* === C L A S S E S & S T R U C T S ======================================= */

class mplayer_mptr : public synfig::Importer
{
public:
private:
	String filename;
	
public:
	mplayer_mptr(const char *filename);
	~mplayer_mptr();


	static const char Name[];
	static const char Ext[];

	virtual bool GetFrame(synfig::Time time, synfig::Surface &, synfig::ProgressCallback *);

	static synfig::Importer *New(const char *filename);
};

/* === E N D =============================================================== */

#endif
