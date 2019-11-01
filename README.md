dgres v0.1.1.0
====================================
Progress bar in C

# Dependencies

## General


# Features

* Support run in thread
* Live loading

# Api

## Functions

### dgres_new
```C
extern int dgres_new(char *txt, int ntxt)
```
### dgres_tnew
```C
extern int dgres_tnew(size_t *thread, char *txt, int ntxt)
```
### dgres_live
```C
extern int dgres_live(char *txt, int ntxt)
```
### dgres_end
```C
extern int dgres_end(size_t thread)
```

# Install

```
git clone git@github.com:Denpus/dgres.git
cd dgres
mkdir build && cd build
cmake ..
```

# Info

* Homepage: [https://github.com/Denpus/dgres](https://github.com/Denpus/dgres)
* Language code: C
* License: [GPL-3.0](https://www.gnu.org/licenses/gpl-3.0.html)
* Author: Denis Karabadjak <denkar@mail.ru>

Copyright (C) 2019 Denis Karabadjak
