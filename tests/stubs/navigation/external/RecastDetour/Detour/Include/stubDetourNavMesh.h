// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubDetourNavMesh_custom.h file.

#ifndef STUB_NAVIGATION_EXTERNAL_RECASTDETOUR_DETOUR_INCLUDE_DETOURNAVMESH_H
#define STUB_NAVIGATION_EXTERNAL_RECASTDETOUR_DETOUR_INCLUDE_DETOURNAVMESH_H

#include "navigation/external/RecastDetour/Detour/Include/DetourNavMesh.h"
#include "stubDetourNavMesh_custom.h"









#ifndef STUB_dtNavMesh_dtNavMesh
//#define STUB_dtNavMesh_dtNavMesh
   dtNavMesh::dtNavMesh()
    : m_nextFree(nullptr),m_tiles(nullptr)
  {
    
  }
#endif //STUB_dtNavMesh_dtNavMesh

#ifndef STUB_dtNavMesh_dtNavMesh_DTOR
//#define STUB_dtNavMesh_dtNavMesh_DTOR
   dtNavMesh::~dtNavMesh()
  {
    
  }
#endif //STUB_dtNavMesh_dtNavMesh_DTOR

#ifndef STUB_dtNavMesh_init
//#define STUB_dtNavMesh_init
  dtStatus dtNavMesh::init(const dtNavMeshParams* params)
  {
    return *static_cast<dtStatus*>(nullptr);
  }
#endif //STUB_dtNavMesh_init

#ifndef STUB_dtNavMesh_init
//#define STUB_dtNavMesh_init
  dtStatus dtNavMesh::init(unsigned char* data, const int dataSize, const int flags)
  {
    return *static_cast<dtStatus*>(nullptr);
  }
#endif //STUB_dtNavMesh_init

#ifndef STUB_dtNavMesh_getParams
//#define STUB_dtNavMesh_getParams
  const dtNavMeshParams* dtNavMesh::getParams() const
  {
    return nullptr;
  }
#endif //STUB_dtNavMesh_getParams

#ifndef STUB_dtNavMesh_addTile
//#define STUB_dtNavMesh_addTile
  dtStatus dtNavMesh::addTile(unsigned char* data, int dataSize, int flags, dtTileRef lastRef, dtTileRef* result)
  {
    return *static_cast<dtStatus*>(nullptr);
  }
#endif //STUB_dtNavMesh_addTile

#ifndef STUB_dtNavMesh_removeTile
//#define STUB_dtNavMesh_removeTile
  dtStatus dtNavMesh::removeTile(dtTileRef ref, unsigned char** data, int* dataSize)
  {
    return *static_cast<dtStatus*>(nullptr);
  }
#endif //STUB_dtNavMesh_removeTile

#ifndef STUB_dtNavMesh_calcTileLoc
//#define STUB_dtNavMesh_calcTileLoc
  void dtNavMesh::calcTileLoc(const float* pos, int* tx, int* ty) const
  {
    
  }
#endif //STUB_dtNavMesh_calcTileLoc

#ifndef STUB_dtNavMesh_getTileAt
//#define STUB_dtNavMesh_getTileAt
  const dtMeshTile* dtNavMesh::getTileAt(const int x, const int y, const int layer) const
  {
    return nullptr;
  }
#endif //STUB_dtNavMesh_getTileAt

#ifndef STUB_dtNavMesh_getTilesAt
//#define STUB_dtNavMesh_getTilesAt
  int dtNavMesh::getTilesAt(const int x, const int y, dtMeshTile const** tiles, const int maxTiles) const
  {
    return 0;
  }
#endif //STUB_dtNavMesh_getTilesAt

#ifndef STUB_dtNavMesh_getTileRefAt
//#define STUB_dtNavMesh_getTileRefAt
  dtTileRef dtNavMesh::getTileRefAt(int x, int y, int layer) const
  {
    return *static_cast<dtTileRef*>(nullptr);
  }
#endif //STUB_dtNavMesh_getTileRefAt

#ifndef STUB_dtNavMesh_getTileRef
//#define STUB_dtNavMesh_getTileRef
  dtTileRef dtNavMesh::getTileRef(const dtMeshTile* tile) const
  {
    return *static_cast<dtTileRef*>(nullptr);
  }
#endif //STUB_dtNavMesh_getTileRef

#ifndef STUB_dtNavMesh_getTileByRef
//#define STUB_dtNavMesh_getTileByRef
  const dtMeshTile* dtNavMesh::getTileByRef(dtTileRef ref) const
  {
    return nullptr;
  }
#endif //STUB_dtNavMesh_getTileByRef

#ifndef STUB_dtNavMesh_getMaxTiles
//#define STUB_dtNavMesh_getMaxTiles
  int dtNavMesh::getMaxTiles() const
  {
    return 0;
  }
#endif //STUB_dtNavMesh_getMaxTiles

#ifndef STUB_dtNavMesh_getTile
//#define STUB_dtNavMesh_getTile
  const dtMeshTile* dtNavMesh::getTile(int i) const
  {
    return nullptr;
  }
#endif //STUB_dtNavMesh_getTile

#ifndef STUB_dtNavMesh_getTileAndPolyByRef
//#define STUB_dtNavMesh_getTileAndPolyByRef
  dtStatus dtNavMesh::getTileAndPolyByRef(const dtPolyRef ref, const dtMeshTile** tile, const dtPoly** poly) const
  {
    return *static_cast<dtStatus*>(nullptr);
  }
#endif //STUB_dtNavMesh_getTileAndPolyByRef

#ifndef STUB_dtNavMesh_getTileAndPolyByRefUnsafe
//#define STUB_dtNavMesh_getTileAndPolyByRefUnsafe
  void dtNavMesh::getTileAndPolyByRefUnsafe(const dtPolyRef ref, const dtMeshTile** tile, const dtPoly** poly) const
  {
    
  }
#endif //STUB_dtNavMesh_getTileAndPolyByRefUnsafe

#ifndef STUB_dtNavMesh_isValidPolyRef
//#define STUB_dtNavMesh_isValidPolyRef
  bool dtNavMesh::isValidPolyRef(dtPolyRef ref) const
  {
    return false;
  }
#endif //STUB_dtNavMesh_isValidPolyRef

#ifndef STUB_dtNavMesh_getPolyRefBase
//#define STUB_dtNavMesh_getPolyRefBase
  dtPolyRef dtNavMesh::getPolyRefBase(const dtMeshTile* tile) const
  {
    return *static_cast<dtPolyRef*>(nullptr);
  }
#endif //STUB_dtNavMesh_getPolyRefBase

#ifndef STUB_dtNavMesh_getOffMeshConnectionPolyEndPoints
//#define STUB_dtNavMesh_getOffMeshConnectionPolyEndPoints
  dtStatus dtNavMesh::getOffMeshConnectionPolyEndPoints(dtPolyRef prevRef, dtPolyRef polyRef, float* startPos, float* endPos) const
  {
    return *static_cast<dtStatus*>(nullptr);
  }
#endif //STUB_dtNavMesh_getOffMeshConnectionPolyEndPoints

#ifndef STUB_dtNavMesh_getOffMeshConnectionByRef
//#define STUB_dtNavMesh_getOffMeshConnectionByRef
  const dtOffMeshConnection* dtNavMesh::getOffMeshConnectionByRef(dtPolyRef ref) const
  {
    return nullptr;
  }
#endif //STUB_dtNavMesh_getOffMeshConnectionByRef

#ifndef STUB_dtNavMesh_setPolyFlags
//#define STUB_dtNavMesh_setPolyFlags
  dtStatus dtNavMesh::setPolyFlags(dtPolyRef ref, unsigned short flags)
  {
    return *static_cast<dtStatus*>(nullptr);
  }
#endif //STUB_dtNavMesh_setPolyFlags

#ifndef STUB_dtNavMesh_getPolyFlags
//#define STUB_dtNavMesh_getPolyFlags
  dtStatus dtNavMesh::getPolyFlags(dtPolyRef ref, unsigned short* resultFlags) const
  {
    return *static_cast<dtStatus*>(nullptr);
  }
#endif //STUB_dtNavMesh_getPolyFlags

#ifndef STUB_dtNavMesh_setPolyArea
//#define STUB_dtNavMesh_setPolyArea
  dtStatus dtNavMesh::setPolyArea(dtPolyRef ref, unsigned char area)
  {
    return *static_cast<dtStatus*>(nullptr);
  }
#endif //STUB_dtNavMesh_setPolyArea

#ifndef STUB_dtNavMesh_getPolyArea
//#define STUB_dtNavMesh_getPolyArea
  dtStatus dtNavMesh::getPolyArea(dtPolyRef ref, unsigned char* resultArea) const
  {
    return *static_cast<dtStatus*>(nullptr);
  }
#endif //STUB_dtNavMesh_getPolyArea

#ifndef STUB_dtNavMesh_getTileStateSize
//#define STUB_dtNavMesh_getTileStateSize
  int dtNavMesh::getTileStateSize(const dtMeshTile* tile) const
  {
    return 0;
  }
#endif //STUB_dtNavMesh_getTileStateSize

#ifndef STUB_dtNavMesh_storeTileState
//#define STUB_dtNavMesh_storeTileState
  dtStatus dtNavMesh::storeTileState(const dtMeshTile* tile, unsigned char* data, const int maxDataSize) const
  {
    return *static_cast<dtStatus*>(nullptr);
  }
#endif //STUB_dtNavMesh_storeTileState

#ifndef STUB_dtNavMesh_restoreTileState
//#define STUB_dtNavMesh_restoreTileState
  dtStatus dtNavMesh::restoreTileState(dtMeshTile* tile, const unsigned char* data, const int maxDataSize)
  {
    return *static_cast<dtStatus*>(nullptr);
  }
#endif //STUB_dtNavMesh_restoreTileState

#ifndef STUB_dtNavMesh_getTile
//#define STUB_dtNavMesh_getTile
  dtMeshTile* dtNavMesh::getTile(int i)
  {
    return nullptr;
  }
#endif //STUB_dtNavMesh_getTile

#ifndef STUB_dtNavMesh_getTilesAt
//#define STUB_dtNavMesh_getTilesAt
  int dtNavMesh::getTilesAt(const int x, const int y, dtMeshTile** tiles, const int maxTiles) const
  {
    return 0;
  }
#endif //STUB_dtNavMesh_getTilesAt

#ifndef STUB_dtNavMesh_getNeighbourTilesAt
//#define STUB_dtNavMesh_getNeighbourTilesAt
  int dtNavMesh::getNeighbourTilesAt(const int x, const int y, const int side, dtMeshTile** tiles, const int maxTiles) const
  {
    return 0;
  }
#endif //STUB_dtNavMesh_getNeighbourTilesAt

#ifndef STUB_dtNavMesh_findConnectingPolys
//#define STUB_dtNavMesh_findConnectingPolys
  int dtNavMesh::findConnectingPolys(const float* va, const float* vb, const dtMeshTile* tile, int side, dtPolyRef* con, float* conarea, int maxcon) const
  {
    return 0;
  }
#endif //STUB_dtNavMesh_findConnectingPolys

#ifndef STUB_dtNavMesh_connectIntLinks
//#define STUB_dtNavMesh_connectIntLinks
  void dtNavMesh::connectIntLinks(dtMeshTile* tile)
  {
    
  }
#endif //STUB_dtNavMesh_connectIntLinks

#ifndef STUB_dtNavMesh_baseOffMeshLinks
//#define STUB_dtNavMesh_baseOffMeshLinks
  void dtNavMesh::baseOffMeshLinks(dtMeshTile* tile)
  {
    
  }
#endif //STUB_dtNavMesh_baseOffMeshLinks

#ifndef STUB_dtNavMesh_connectExtLinks
//#define STUB_dtNavMesh_connectExtLinks
  void dtNavMesh::connectExtLinks(dtMeshTile* tile, dtMeshTile* target, int side)
  {
    
  }
#endif //STUB_dtNavMesh_connectExtLinks

#ifndef STUB_dtNavMesh_connectExtOffMeshLinks
//#define STUB_dtNavMesh_connectExtOffMeshLinks
  void dtNavMesh::connectExtOffMeshLinks(dtMeshTile* tile, dtMeshTile* target, int side)
  {
    
  }
#endif //STUB_dtNavMesh_connectExtOffMeshLinks

#ifndef STUB_dtNavMesh_unconnectExtLinks
//#define STUB_dtNavMesh_unconnectExtLinks
  void dtNavMesh::unconnectExtLinks(dtMeshTile* tile, dtMeshTile* target)
  {
    
  }
#endif //STUB_dtNavMesh_unconnectExtLinks

#ifndef STUB_dtNavMesh_queryPolygonsInTile
//#define STUB_dtNavMesh_queryPolygonsInTile
  int dtNavMesh::queryPolygonsInTile(const dtMeshTile* tile, const float* qmin, const float* qmax, dtPolyRef* polys, const int maxPolys) const
  {
    return 0;
  }
#endif //STUB_dtNavMesh_queryPolygonsInTile

#ifndef STUB_dtNavMesh_findNearestPolyInTile
//#define STUB_dtNavMesh_findNearestPolyInTile
  dtPolyRef dtNavMesh::findNearestPolyInTile(const dtMeshTile* tile, const float* center, const float* extents, float* nearestPt) const
  {
    return *static_cast<dtPolyRef*>(nullptr);
  }
#endif //STUB_dtNavMesh_findNearestPolyInTile

#ifndef STUB_dtNavMesh_closestPointOnPoly
//#define STUB_dtNavMesh_closestPointOnPoly
  void dtNavMesh::closestPointOnPoly(dtPolyRef ref, const float* pos, float* closest, bool* posOverPoly) const
  {
    
  }
#endif //STUB_dtNavMesh_closestPointOnPoly


#endif