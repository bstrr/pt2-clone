#pragma once

#include <stdint.h>
#include <stdbool.h>
#include "pt2_header.h"
#include "pt2_unicode.h"
#include "pt2_structs.h"

void showSongUnsavedAskBox(int8_t askScreenType);
void loadModFromArg(char *arg);
void loadDroppedFile(char *fullPath, uint32_t fullPathLen, bool autoPlay, bool songModifiedCheck);
void loadDroppedFile2(void);
module_t *createEmptyMod(void);
module_t *modLoad(UNICHAR *fileName);
void setupLoadedMod(void);
