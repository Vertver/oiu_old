#pragma once
#include "stdafx.h"
#include "AudioSubsystem.h"

std::shared_ptr<iAudioSubsystem> CreateAudioSubsystem_OpenAL();
