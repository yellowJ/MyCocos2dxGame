//
//  RunController.h
//  MazeJump
//
//  Created by wang haibo on 15/7/22.
//
//

#ifndef __MazeJump__RunController__
#define __MazeJump__RunController__

#include "cocos2d.h"
#include "TerrainLayer.h"
class RunController : public cocos2d::Ref
{
    RunController();
    ~RunController();
public:
    static RunController* getInstance();
    bool init(cocos2d::Layer* pMainLayer);
    void update(float delta);
    void destroy();
private:
    cocos2d::Layer*     m_pMainLayer;
    TerrainLayer*       m_pTerrainLayer;
    cocos2d::Camera*    m_pMainCamera;
};

#endif /* defined(__MazeJump__RunController__) */