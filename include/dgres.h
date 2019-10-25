/*
 * dgres.h
 *
 * Headers dgres
 * =============
 * Progress bar in C
 *
 * Author   :   denkar
 * Created  :   05.09.19 11:17
 * Homepage :   https://github.com/Denpus/dgres
 * License  :   GPL-3.0
 * Version  :   0.1.0.0
 *
 * Copyright (C) Denis Karabadjak <denkar>
 */

#pragma once

extern int dgres_new(char *txt, int ntxt);

#include <stddef.h>

extern int dgres_tnew(size_t *thread, char *txt, int ntxt);

extern int dgres_live(char *txt, int ntxt);

#include <stddef.h>

extern int dgres_end(size_t thread);

