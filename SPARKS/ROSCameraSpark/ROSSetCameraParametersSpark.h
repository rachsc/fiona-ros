#ifndef __ROSSpark_H
#define __ROSSpark_H

#include "ros/ros.h"
#include "CameraParameters_srv.h"

//#include "ScriptingGeneral.h"

#include "Component.h"
#include "ICamera.h"

//#include <v8.h>
#include <string>
#include <map>
#include <stdlib.h>
using namespace std;
//using namespace v8;

class ROSSetCameraParametersSpark:
	public Component
{
public:
	ROSSetCameraParametersSpark(
			char *instanceName,
			ComponentSystem *cs
			) : Component(instanceName, cs)
	{}

	void init(void);
	void quit(void);
	void process(void);

protected:
	ICamera *myCamera;

	void initializeRequiredInterfaces(){
		requestRequiredInterface<ICamera>(&myCamera);
	};

};

bool callbackROS(fiona_pkg::CameraParameters_srv::Request  &req, fiona_pkg::CameraParameters_srv::Response &res)
{
	ICamera *myCamera;
        myCamera->setCameraParameters(req.IsOrtho, req.VisionAngle, req.nearClippingPlane, req.FarClippingPlane);
	res.camera_parameters = true;
        return true;
}


#endif
