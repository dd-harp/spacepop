#ifndef BLOB_PROJECTION_H
#define BLOB_PROJECTION_H

#include <memory>

#include "gdal/ogr_spatialref.h"

namespace spacepop {
    std::shared_ptr<OGRCoordinateTransformation>
            reproject(OGRSpatialReference* purely_lat_long_srs);
}

#endif //BLOB_PROJECTION_H