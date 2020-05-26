#ifndef NGETYPE_H
#define NGETYPE_H
#include <string.h>
#include <ostream>
#include <iostream>
namespace ngetype
{

    /// Color
    typedef struct Color{
    public:
        float r,g,b;
        Color();
        Color(int, int, int);
        Color& operator+=(const Color&);
    }Color;
    /// Pixel
    typedef struct Pixel{
    public:
        float x,y;
        Pixel();
        Pixel(float,float);
    }Pixel;
    /// String
    typedef struct string{
        char str[0];
    public:
        string();
        string(char*);
        char operator[](const int);
        int length();

        string& operator+=(const string&);
        string& operator+=(const char*);

        char* operator+(const string&);
        string& operator+(const char*);
        /*friend std::ostream& operator<<(std::ostream& out,string& str){
            out<<str.str;
            return out;
        }*/
    }string;

    std::ostream& operator<<(std::ostream&, const ngetype::string&);
    ///

};

#endif // NGETYPE_H
