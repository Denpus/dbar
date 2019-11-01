/*
 * main.c
 *
 * Example dgres_new()
 * ===============
 *
 * Author   :  
 * Created  :  Fri Oct 25 20:39:14 2019
 *
 * Copyright (C) Denis Karabadjak <denkar@mail.ru>
 */

#include <dgres.h>

int main(void) {
    int     err   = 0;
    dgres_t dgres = {
            .stream = stdout,
            .ntxt = 7,
            .txt = "Loading"
    };

    dgres_new(&dgres);

    return err;
}
