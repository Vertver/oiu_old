
// Autogenerated by ALExtractor 0.5.92 (C) Sergey Kosarevsky
// Part of Linderdaum Engine
// http://www.linderdaum.com


#include "LAL.h"
#include <stdafx.h>
#include <stdio.h>

#if !defined( AL_STATIC_LINK )
HMODULE FLib = 0;

LPALENABLE                 alEnable;
LPALDISABLE                alDisable;
LPALISENABLED              alIsEnabled;
LPALGETSTRING              alGetString;
LPALGETBOOLEANV            alGetBooleanv;
LPALGETINTEGERV            alGetIntegerv;
LPALGETFLOATV              alGetFloatv;
LPALGETDOUBLEV             alGetDoublev;
LPALGETBOOLEAN             alGetBoolean;
LPALGETINTEGER             alGetInteger;
LPALGETFLOAT               alGetFloat;
LPALGETDOUBLE              alGetDouble;
LPALGETERROR               alGetError;
LPALISEXTENSIONPRESENT     alIsExtensionPresent;
LPALGETPROCADDRESS         alGetProcAddress;
LPALGETENUMVALUE           alGetEnumValue;
LPALLISTENERF              alListenerf;
LPALLISTENER3F             alListener3f;
LPALLISTENERFV             alListenerfv;
LPALLISTENERI              alListeneri;
LPALLISTENER3I             alListener3i;
LPALLISTENERIV             alListeneriv;
LPALGETLISTENERF           alGetListenerf;
LPALGETLISTENER3F          alGetListener3f;
LPALGETLISTENERFV          alGetListenerfv;
LPALGETLISTENERI           alGetListeneri;
LPALGETLISTENER3I          alGetListener3i;
LPALGETLISTENERIV          alGetListeneriv;
LPALGENSOURCES             alGenSources;
LPALDELETESOURCES          alDeleteSources;
LPALISSOURCE               alIsSource;
LPALSOURCEF                alSourcef;
LPALSOURCE3F               alSource3f;
LPALSOURCEFV               alSourcefv;
LPALSOURCEI                alSourcei;
LPALSOURCE3I               alSource3i;
LPALSOURCEIV               alSourceiv;
LPALGETSOURCEF             alGetSourcef;
LPALGETSOURCE3F            alGetSource3f;
LPALGETSOURCEFV            alGetSourcefv;
LPALGETSOURCEI             alGetSourcei;
LPALGETSOURCE3I            alGetSource3i;
LPALGETSOURCEIV            alGetSourceiv;
LPALSOURCEPLAYV            alSourcePlayv;
LPALSOURCESTOPV            alSourceStopv;
LPALSOURCEREWINDV          alSourceRewindv;
LPALSOURCEPAUSEV           alSourcePausev;
LPALSOURCEPLAY             alSourcePlay;
LPALSOURCESTOP             alSourceStop;
LPALSOURCEREWIND           alSourceRewind;
LPALSOURCEPAUSE            alSourcePause;
LPALSOURCEQUEUEBUFFERS     alSourceQueueBuffers;
LPALSOURCEUNQUEUEBUFFERS   alSourceUnqueueBuffers;
LPALGENBUFFERS             alGenBuffers;
LPALDELETEBUFFERS          alDeleteBuffers;
LPALISBUFFER               alIsBuffer;
LPALBUFFERDATA             alBufferData;
LPALBUFFERF                alBufferf;
LPALBUFFER3F               alBuffer3f;
LPALBUFFERFV               alBufferfv;
LPALBUFFERI                alBufferi;
LPALBUFFER3I               alBuffer3i;
LPALBUFFERIV               alBufferiv;
LPALGETBUFFERF             alGetBufferf;
LPALGETBUFFER3F            alGetBuffer3f;
LPALGETBUFFERFV            alGetBufferfv;
LPALGETBUFFERI             alGetBufferi;
LPALGETBUFFER3I            alGetBuffer3i;
LPALGETBUFFERIV            alGetBufferiv;
LPALDOPPLERFACTOR          alDopplerFactor;
LPALDOPPLERVELOCITY        alDopplerVelocity;
LPALSPEEDOFSOUND           alSpeedOfSound;
LPALDISTANCEMODEL          alDistanceModel;
LPALCCREATECONTEXT         alcCreateContext;
LPALCMAKECONTEXTCURRENT    alcMakeContextCurrent;
LPALCPROCESSCONTEXT        alcProcessContext;
LPALCSUSPENDCONTEXT        alcSuspendContext;
LPALCDESTROYCONTEXT        alcDestroyContext;
LPALCGETCURRENTCONTEXT     alcGetCurrentContext;
LPALCGETCONTEXTSDEVICE     alcGetContextsDevice;
LPALCOPENDEVICE            alcOpenDevice;
LPALCCLOSEDEVICE           alcCloseDevice;
LPALCGETERROR              alcGetError;
LPALCISEXTENSIONPRESENT    alcIsExtensionPresent;
LPALCGETPROCADDRESS        alcGetProcAddress;
LPALCGETENUMVALUE          alcGetEnumValue;
LPALCGETSTRING             alcGetString;
LPALCGETINTEGERV           alcGetIntegerv;
LPALCCAPTUREOPENDEVICE     alcCaptureOpenDevice;
LPALCCAPTURECLOSEDEVICE    alcCaptureCloseDevice;
LPALCCAPTURESTART          alcCaptureStart;
LPALCCAPTURESTOP           alcCaptureStop;
LPALCCAPTURESAMPLES        alcCaptureSamples;
#endif

void UnloadAL()
{
#if !defined( AL_STATIC_LINK )
	FreeLibrary( FLib );
#endif
}

bool LoadAL()
{
#if !defined( AL_STATIC_LINK )

	if ( !FLib )
	{
		FLib = LoadLibrary( "OpenAL32.dll" );

		if ( FLib == INVALID_HANDLE_VALUE || !FLib ) {  printf("Unable to load OpenAL32.dll\n"); return false; }
	}

	alEnable = ( LPALENABLE )GetProcAddress( FLib, "alEnable" );
	alDisable = ( LPALDISABLE )GetProcAddress( FLib, "alDisable" );
	alIsEnabled = ( LPALISENABLED )GetProcAddress( FLib, "alIsEnabled" );
	alGetString = ( LPALGETSTRING )GetProcAddress( FLib, "alGetString" );
	alGetBooleanv = ( LPALGETBOOLEANV )GetProcAddress( FLib, "alGetBooleanv" );
	alGetIntegerv = ( LPALGETINTEGERV )GetProcAddress( FLib, "alGetIntegerv" );
	alGetFloatv = ( LPALGETFLOATV )GetProcAddress( FLib, "alGetFloatv" );
	alGetDoublev = ( LPALGETDOUBLEV )GetProcAddress( FLib, "alGetDoublev" );
	alGetBoolean = ( LPALGETBOOLEAN )GetProcAddress( FLib, "alGetBoolean" );
	alGetInteger = ( LPALGETINTEGER )GetProcAddress( FLib, "alGetInteger" );
	alGetFloat = ( LPALGETFLOAT )GetProcAddress( FLib, "alGetFloat" );
	alGetDouble = ( LPALGETDOUBLE )GetProcAddress( FLib, "alGetDouble" );
	alGetError = ( LPALGETERROR )GetProcAddress( FLib, "alGetError" );
	alIsExtensionPresent = ( LPALISEXTENSIONPRESENT )GetProcAddress( FLib, "alIsExtensionPresent" );
	alGetProcAddress = ( LPALGETPROCADDRESS )GetProcAddress( FLib, "alGetProcAddress" );
	alGetEnumValue = ( LPALGETENUMVALUE )GetProcAddress( FLib, "alGetEnumValue" );
	alListenerf = ( LPALLISTENERF )GetProcAddress( FLib, "alListenerf" );
	alListener3f = ( LPALLISTENER3F )GetProcAddress( FLib, "alListener3f" );
	alListenerfv = ( LPALLISTENERFV )GetProcAddress( FLib, "alListenerfv" );
	alListeneri = ( LPALLISTENERI )GetProcAddress( FLib, "alListeneri" );
	alListener3i = ( LPALLISTENER3I )GetProcAddress( FLib, "alListener3i" );
	alListeneriv = ( LPALLISTENERIV )GetProcAddress( FLib, "alListeneriv" );
	alGetListenerf = ( LPALGETLISTENERF )GetProcAddress( FLib, "alGetListenerf" );
	alGetListener3f = ( LPALGETLISTENER3F )GetProcAddress( FLib, "alGetListener3f" );
	alGetListenerfv = ( LPALGETLISTENERFV )GetProcAddress( FLib, "alGetListenerfv" );
	alGetListeneri = ( LPALGETLISTENERI )GetProcAddress( FLib, "alGetListeneri" );
	alGetListener3i = ( LPALGETLISTENER3I )GetProcAddress( FLib, "alGetListener3i" );
	alGetListeneriv = ( LPALGETLISTENERIV )GetProcAddress( FLib, "alGetListeneriv" );
	alGenSources = ( LPALGENSOURCES )GetProcAddress( FLib, "alGenSources" );
	alDeleteSources = ( LPALDELETESOURCES )GetProcAddress( FLib, "alDeleteSources" );
	alIsSource = ( LPALISSOURCE )GetProcAddress( FLib, "alIsSource" );
	alSourcef = ( LPALSOURCEF )GetProcAddress( FLib, "alSourcef" );
	alSource3f = ( LPALSOURCE3F )GetProcAddress( FLib, "alSource3f" );
	alSourcefv = ( LPALSOURCEFV )GetProcAddress( FLib, "alSourcefv" );
	alSourcei = ( LPALSOURCEI )GetProcAddress( FLib, "alSourcei" );
	alSource3i = ( LPALSOURCE3I )GetProcAddress( FLib, "alSource3i" );
	alSourceiv = ( LPALSOURCEIV )GetProcAddress( FLib, "alSourceiv" );
	alGetSourcef = ( LPALGETSOURCEF )GetProcAddress( FLib, "alGetSourcef" );
	alGetSource3f = ( LPALGETSOURCE3F )GetProcAddress( FLib, "alGetSource3f" );
	alGetSourcefv = ( LPALGETSOURCEFV )GetProcAddress( FLib, "alGetSourcefv" );
	alGetSourcei = ( LPALGETSOURCEI )GetProcAddress( FLib, "alGetSourcei" );
	alGetSource3i = ( LPALGETSOURCE3I )GetProcAddress( FLib, "alGetSource3i" );
	alGetSourceiv = ( LPALGETSOURCEIV )GetProcAddress( FLib, "alGetSourceiv" );
	alSourcePlayv = ( LPALSOURCEPLAYV )GetProcAddress( FLib, "alSourcePlayv" );
	alSourceStopv = ( LPALSOURCESTOPV )GetProcAddress( FLib, "alSourceStopv" );
	alSourceRewindv = ( LPALSOURCEREWINDV )GetProcAddress( FLib, "alSourceRewindv" );
	alSourcePausev = ( LPALSOURCEPAUSEV )GetProcAddress( FLib, "alSourcePausev" );
	alSourcePlay = ( LPALSOURCEPLAY )GetProcAddress( FLib, "alSourcePlay" );
	alSourceStop = ( LPALSOURCESTOP )GetProcAddress( FLib, "alSourceStop" );
	alSourceRewind = ( LPALSOURCEREWIND )GetProcAddress( FLib, "alSourceRewind" );
	alSourcePause = ( LPALSOURCEPAUSE )GetProcAddress( FLib, "alSourcePause" );
	alSourceQueueBuffers = ( LPALSOURCEQUEUEBUFFERS )GetProcAddress( FLib, "alSourceQueueBuffers" );
	alSourceUnqueueBuffers = ( LPALSOURCEUNQUEUEBUFFERS )GetProcAddress( FLib, "alSourceUnqueueBuffers" );
	alGenBuffers = ( LPALGENBUFFERS )GetProcAddress( FLib, "alGenBuffers" );
	alDeleteBuffers = ( LPALDELETEBUFFERS )GetProcAddress( FLib, "alDeleteBuffers" );
	alIsBuffer = ( LPALISBUFFER )GetProcAddress( FLib, "alIsBuffer" );
	alBufferData = ( LPALBUFFERDATA )GetProcAddress( FLib, "alBufferData" );
	alBufferf = ( LPALBUFFERF )GetProcAddress( FLib, "alBufferf" );
	alBuffer3f = ( LPALBUFFER3F )GetProcAddress( FLib, "alBuffer3f" );
	alBufferfv = ( LPALBUFFERFV )GetProcAddress( FLib, "alBufferfv" );
	alBufferi = ( LPALBUFFERI )GetProcAddress( FLib, "alBufferi" );
	alBuffer3i = ( LPALBUFFER3I )GetProcAddress( FLib, "alBuffer3i" );
	alBufferiv = ( LPALBUFFERIV )GetProcAddress( FLib, "alBufferiv" );
	alGetBufferf = ( LPALGETBUFFERF )GetProcAddress( FLib, "alGetBufferf" );
	alGetBuffer3f = ( LPALGETBUFFER3F )GetProcAddress( FLib, "alGetBuffer3f" );
	alGetBufferfv = ( LPALGETBUFFERFV )GetProcAddress( FLib, "alGetBufferfv" );
	alGetBufferi = ( LPALGETBUFFERI )GetProcAddress( FLib, "alGetBufferi" );
	alGetBuffer3i = ( LPALGETBUFFER3I )GetProcAddress( FLib, "alGetBuffer3i" );
	alGetBufferiv = ( LPALGETBUFFERIV )GetProcAddress( FLib, "alGetBufferiv" );
	alDopplerFactor = ( LPALDOPPLERFACTOR )GetProcAddress( FLib, "alDopplerFactor" );
	alDopplerVelocity = ( LPALDOPPLERVELOCITY )GetProcAddress( FLib, "alDopplerVelocity" );
	alSpeedOfSound = ( LPALSPEEDOFSOUND )GetProcAddress( FLib, "alSpeedOfSound" );
	alDistanceModel = ( LPALDISTANCEMODEL )GetProcAddress( FLib, "alDistanceModel" );
	alcCreateContext = ( LPALCCREATECONTEXT )GetProcAddress( FLib, "alcCreateContext" );
	alcMakeContextCurrent = ( LPALCMAKECONTEXTCURRENT )GetProcAddress( FLib, "alcMakeContextCurrent" );
	alcProcessContext = ( LPALCPROCESSCONTEXT )GetProcAddress( FLib, "alcProcessContext" );
	alcSuspendContext = ( LPALCSUSPENDCONTEXT )GetProcAddress( FLib, "alcSuspendContext" );
	alcDestroyContext = ( LPALCDESTROYCONTEXT )GetProcAddress( FLib, "alcDestroyContext" );
	alcGetCurrentContext = ( LPALCGETCURRENTCONTEXT )GetProcAddress( FLib, "alcGetCurrentContext" );
	alcGetContextsDevice = ( LPALCGETCONTEXTSDEVICE )GetProcAddress( FLib, "alcGetContextsDevice" );
	alcOpenDevice = ( LPALCOPENDEVICE )GetProcAddress( FLib, "alcOpenDevice" );
	alcCloseDevice = ( LPALCCLOSEDEVICE )GetProcAddress( FLib, "alcCloseDevice" );
	alcGetError = ( LPALCGETERROR )GetProcAddress( FLib, "alcGetError" );
	alcIsExtensionPresent = ( LPALCISEXTENSIONPRESENT )GetProcAddress( FLib, "alcIsExtensionPresent" );
	alcGetProcAddress = ( LPALCGETPROCADDRESS )GetProcAddress( FLib, "alcGetProcAddress" );
	alcGetEnumValue = ( LPALCGETENUMVALUE )GetProcAddress( FLib, "alcGetEnumValue" );
	alcGetString = ( LPALCGETSTRING )GetProcAddress( FLib, "alcGetString" );
	alcGetIntegerv = ( LPALCGETINTEGERV )GetProcAddress( FLib, "alcGetIntegerv" );
	alcCaptureOpenDevice = ( LPALCCAPTUREOPENDEVICE )GetProcAddress( FLib, "alcCaptureOpenDevice" );
	alcCaptureCloseDevice = ( LPALCCAPTURECLOSEDEVICE )GetProcAddress( FLib, "alcCaptureCloseDevice" );
	alcCaptureStart = ( LPALCCAPTURESTART )GetProcAddress( FLib, "alcCaptureStart" );
	alcCaptureStop = ( LPALCCAPTURESTOP )GetProcAddress( FLib, "alcCaptureStop" );
	alcCaptureSamples = ( LPALCCAPTURESAMPLES )GetProcAddress( FLib, "alcCaptureSamples" );
#endif

	return true;
}
