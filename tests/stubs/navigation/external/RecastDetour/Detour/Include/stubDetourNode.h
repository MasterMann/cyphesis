// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubDetourNode_custom.h file.

#ifndef STUB_NAVIGATION_EXTERNAL_RECASTDETOUR_DETOUR_INCLUDE_DETOURNODE_H
#define STUB_NAVIGATION_EXTERNAL_RECASTDETOUR_DETOUR_INCLUDE_DETOURNODE_H

#include "navigation/external/RecastDetour/Detour/Include/DetourNode.h"
#include "stubDetourNode_custom.h"


#ifndef STUB_dtNodePool_dtNodePool
//#define STUB_dtNodePool_dtNodePool
   dtNodePool::dtNodePool(int maxNodes, int hashSize)
    : m_nodes(nullptr),m_first(nullptr),m_next(nullptr)
  {
    
  }
#endif //STUB_dtNodePool_dtNodePool

#ifndef STUB_dtNodePool_dtNodePool_DTOR
//#define STUB_dtNodePool_dtNodePool_DTOR
   dtNodePool::~dtNodePool()
  {
    
  }
#endif //STUB_dtNodePool_dtNodePool_DTOR

#ifndef STUB_dtNodePool_getNode
//#define STUB_dtNodePool_getNode
  dtNode* dtNodePool::getNode(dtPolyRef id)
  {
    return nullptr;
  }
#endif //STUB_dtNodePool_getNode

#ifndef STUB_dtNodePool_findNode
//#define STUB_dtNodePool_findNode
  dtNode* dtNodePool::findNode(dtPolyRef id)
  {
    return nullptr;
  }
#endif //STUB_dtNodePool_findNode


#ifndef STUB_dtNodeQueue_dtNodeQueue
//#define STUB_dtNodeQueue_dtNodeQueue
   dtNodeQueue::dtNodeQueue(int n)
  {
    
  }
#endif //STUB_dtNodeQueue_dtNodeQueue

#ifndef STUB_dtNodeQueue_dtNodeQueue_DTOR
//#define STUB_dtNodeQueue_dtNodeQueue_DTOR
   dtNodeQueue::~dtNodeQueue()
  {
    
  }
#endif //STUB_dtNodeQueue_dtNodeQueue_DTOR

#ifndef STUB_dtNodeQueue_bubbleUp
//#define STUB_dtNodeQueue_bubbleUp
  void dtNodeQueue::bubbleUp(int i, dtNode* node)
  {
    
  }
#endif //STUB_dtNodeQueue_bubbleUp

#ifndef STUB_dtNodeQueue_trickleDown
//#define STUB_dtNodeQueue_trickleDown
  void dtNodeQueue::trickleDown(int i, dtNode* node)
  {
    
  }
#endif //STUB_dtNodeQueue_trickleDown


#endif