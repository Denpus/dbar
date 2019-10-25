/*
 * main.c
 *
 * Example dgres_tnew()
 * ===============
 *
 * Author   :  
 * Created  :  Fri Oct 25 20:51:00 2019
 *
 * Copyright (C) Denis Karabadjak <denkar@mail.ru>
 */

#include <dgres.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>

int main(void) {
    int    err = 0;
    size_t thread;

    dgres_tnew(&thread, "Loading", 7);

    sleep(3);

    dgres_end(thread);
    printf("end loading");
    fflush(stdout);
    sleep(5);

    return err;
}
