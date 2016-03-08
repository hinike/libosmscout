/*
  This source is part of the libosmscout library
  Copyright (C) 2012  Tim Teulings

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
*/

#include "osmscout/CoordDataFile.h"

#include <osmscout/system/Assert.h>

#include <osmscout/util/File.h>
#include <osmscout/util/Logger.h>

namespace osmscout {

  const char* CoordDataFile::COORD_DAT="coord.dat";
  const char* CoordDataFile::COORD_IDX="coord.idx";

  CoordDataFile::CoordDataFile(unsigned long indexCacheSize)
  : IndexedDataFile<OSMId,Coord>(COORD_DAT,
                                 COORD_IDX,
                                 indexCacheSize)
  {
    // no code
  }
}
