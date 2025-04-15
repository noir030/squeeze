#ifndef SQUEEZE_H
#define SQUEEZE_H
#define SET_BINARY_MODE(file)
#include <iostream>
#include <cstring>
#include <cassert>
#include "zlib.h"

class Squeeze {
  public:
    const long int CHUNK = { 16384 };
    int compress( FILE *, FILE *, int ); 
    int decompress( FILE *, FILE * );
    void error( int );
    void usage( char ** );
};
#endif