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

#include <deque>
#include <string>
#include "stdafx.h"
// Используется для app.rc


class clPlaylist
{
public:
	virtual ~clPlaylist() {};

	virtual void EnqueueTrack( const char* FileName )
	{
		m_FileNames.emplace_back( FileName );
	}

	virtual bool IsEmpty() const { return m_FileNames.empty(); }
	virtual size_t GetNumTracks() const { return m_FileNames.size(); }
	virtual std::string GetAndPopNextTrack( bool Loop )
	{
		std::string Result = m_FileNames.front();

		m_FileNames.pop_front();

		// Читается в конце списка
		if ( Loop ) m_FileNames.push_back( Result );

		return Result;
	}

private:
	std::deque<std::string> m_FileNames;
};