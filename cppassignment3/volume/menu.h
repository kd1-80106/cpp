#ifndef MENU_H
#define MENU_H


enum volume
{
    EXIT = 0 ,
    CYLINDER_PARAMETERIZED =1 ,
    SET_RADIUS = 2 ,
    SET_HEIGHT = 3, 
    GET_RADIUS = 4 ,
    GET_HEIGHT = 5 ,
    GET_VOLUME  = 6 ,
    PRINT_VOLUME = 7

} ;

volume Emenu() ;

#endif 