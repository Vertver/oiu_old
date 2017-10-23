/* "oiu" Version GPL Source Code
/
/ (c) Anton Vertver, Main coder, 2017
/
/ "oiu" Source Code is free software: you can redistribute it and/or modify for your apps and other projects
/
/ The code can contain comments in different languages (like a Russia, English, Deutsh)
/
/ Non-copyright source code
*/

#pragma once
#include "stdafx.h"
#include "AudioSubsystem.h"

std::shared_ptr<iAudioSubsystem> CreateAudioSubsystem_OpenAL();
