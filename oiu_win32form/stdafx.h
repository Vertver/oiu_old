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
//For /Wall
#pragma warning(push)
#pragma warning(disable : 4820)
#pragma warning(disable : 4619)
#pragma warning(disable : 4548)
#pragma warning(disable : 4668)
#pragma warning(disable : 4365)
#pragma warning(disable : 4710)
#pragma warning(disable : 4371)
#pragma warning(disable : 4826)
#pragma warning(disable : 4061)
#pragma warning(disable : 4640)	// Отключаем предупреждения по пустякам
#include "AudioSubsystem.h"
#include "AudioSubsystem_OpenAL.h"
#include "Playlist.h"
#include "Utils.h" // Обожаю слишком много инклюдов OWO
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <set>
#include <map>
#include <list>
#include <deque>
#include <memory>
#pragma warning(pop) //Предупреждение


// TODO: Указаны все заголовки, используемые в коде