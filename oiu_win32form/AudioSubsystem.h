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
/**
	A portable audio subsystem wrapper
**/

#pragma once
#include "stdafx.h"
#include <memory>

class iWaveDataProvider;

class iAudioSource
{
public:
	iAudioSource()
	: m_Looping( false )
	{}
	virtual void BindDataProvider( const std::shared_ptr<iWaveDataProvider>& Provider ) = 0;

	virtual void Play() = 0;
	virtual void Stop() = 0;
	virtual bool IsPlaying() const = 0;
	virtual bool IsLooping() const { return m_Looping; }
	virtual void SetLooping( bool Looping ) { m_Looping = Looping; }

private:
	bool m_Looping;
};

class iAudioSubsystem
{
public:
	virtual ~iAudioSubsystem() {};

	virtual void Start() = 0;
	virtual void Stop() = 0;

	virtual std::shared_ptr<iAudioSource> CreateAudioSource() = 0;

	virtual void SetListenerGain( float Gain ) = 0;
};
