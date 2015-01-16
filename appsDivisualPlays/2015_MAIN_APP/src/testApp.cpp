// 
// testApp.cpp - RAMDanceToolkit
// 
// Copyright 2012-2013 YCAM InterLab, Yoshito Onishi, Satoru Higa, Motoi Shimizu, and Kyle McDonald
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//    http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "testApp.h"

#pragma mark - oF methods
//--------------------------------------------------------------
void testApp::setup()
{
	ofSetFrameRate(60);
	ofSetVerticalSync(true);


	/// ram setup
	// ------------------
	ramInitialize(10000);

	
	/// register myScene to ramSceneManager
	/// - EmptyScene::update, draw, and other method will be triggerd by ramSceneManager
	/// - the scene added to ramSceneManager will appeard on GUI automaticaly
	ramSceneManager& sceneManager = ramSceneManager::instance();
	
    sceneManager.addScene(hakoniwaServoPendulum.getPtr());
    sceneManager.addScene(visServoPendulum.getPtr());
    
    sceneManager.addScene(visStage.getPtr());
    
    sceneManager.addScene(visWorm.getPtr());
    
    sceneManager.addScene(danceMap.getPtr());
    
    sceneManager.addScene(hakoniwaStruggle.getPtr());
    sceneManager.addScene(visStruggle.getPtr());
    
    sceneManager.addScene(hakoniwaSand.getPtr());
    sceneManager.addScene(visSandStorm.getPtr());
    sceneManager.addScene(vecLineCircle.getPtr());
    
    sceneManager.addScene(visMagnetPendulum.getPtr());

	sceneManager.addScene(hakoniwaPlinkOil.getPtr());
	sceneManager.addScene(hakoniwaPlinkLaser.getPtr());
	sceneManager.addScene(hakoniwaPlinkPrism.getPtr());
	sceneManager.addScene(hakoVisPlinkLaser.getPtr());
	sceneManager.addScene(hakoVisPlinkOil.getPtr());
	sceneManager.addScene(hakoVisPlinkPrism.getPtr());

	sceneManager.addScene(hakoVisTheta.getPtr());
	
	sceneManager.addScene(testSceneA.getPtr());
	sceneManager.addScene(testSceneB.getPtr());
	sceneManager.addScene(testSceneC.getPtr());
	sceneManager.addScene(testSceneD.getPtr());
    
	sceneManager.allocateFbos(SINGLE_SCREEN_WIDTH, SINGLE_SCREEN_HEIGHT);
}

//--------------------------------------------------------------
void testApp::update()
{
	
}

//--------------------------------------------------------------
void testApp::draw()
{
	
}



#pragma mark - ram methods
//--------------------------------------------------------------
void testApp::drawActor(const ramActor &actor)
{

}

//--------------------------------------------------------------
void testApp::drawRigid(const ramRigidBody &rigid)
{

}


#pragma mark - ram Events
//--------------------------------------------------------------
void testApp::onActorSetup(const ramActor &actor)
{
	
}

//--------------------------------------------------------------
void testApp::onActorExit(const ramActor &actor)
{
	
}

//--------------------------------------------------------------
void testApp::onRigidSetup(const ramRigidBody &rigid)
{
	
}

//--------------------------------------------------------------
void testApp::onRigidExit(const ramRigidBody &rigid)
{
	
}


#pragma mark - of Events
//--------------------------------------------------------------
void testApp::keyPressed(int key)
{

}

//--------------------------------------------------------------
void testApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y)
{

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button)
{

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button)
{

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button)
{

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h)
{

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg)
{

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo)
{

}

