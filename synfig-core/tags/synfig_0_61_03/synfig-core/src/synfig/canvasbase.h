/* === S Y N F I G ========================================================= */
/*!	\file canvasbase.h
**	\brief Template Header
**
**	$Id: canvasbase.h,v 1.1.1.1 2005/01/04 01:23:14 darco Exp $
**
**	\legal
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
**	\endlegal
*/
/* ========================================================================= */

/* === S T A R T =========================================================== */

#ifndef __SYNFIG_CANVASBASE_H
#define __SYNFIG_CANVASBASE_H

/* === H E A D E R S ======================================================= */

#include <deque>
#include <ETL/handle>

/* === M A C R O S ========================================================= */

/* === T Y P E D E F S ===================================================== */

namespace synfig {

class Layer;
	
typedef std::deque< etl::handle< Layer > > CanvasBase;
	
}; // END of namespace synfig

/* === E N D =============================================================== */

#endif
