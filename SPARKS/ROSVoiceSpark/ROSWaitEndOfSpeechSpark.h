#ifndef __ROSSpark_H
#define __ROSSpark_H

#include "ros/ros.h"
#include "VoiceWaitStop_srv.h"

//#include "ScriptingGeneral.h"

#include "Component.h"
#include "IVoice.h"

//#include <v8.h>
#include <string>
#include <map>
#include <stdlib.h>
using namespace std;
//using namespace v8;

class ROSWaitEndOfSpeechSpark:
	public Component
{
public:
	ROSWaitEndOfSpeechSpark(
			char *instanceName,
			ComponentSystem *cs
			) : Component(instanceName, cs)
	{}

	void init(void);
	void quit(void);
	void process(void);

protected:
	IVoice *myVoice;

	void initializeRequiredInterfaces(){
		requestRequiredInterface<IVoice>(&myVoice);
	};

};

bool callbackROS(fiona_pkg::VoiceWaitStop_srv::Request  &req, fiona_pkg::VoiceWaitStop_srv::Response &res)
{
	IVoice *myVoice;
        myVoice->waitEndOfSpeech();
	res.voice_waitstop = true;
        return true;
}

#endif
