#include <iostream>
#include "Movie.h"


//Implementation of constructor
Movie::Movie(std::string name, std::string rating, int watched)
    :name(name), rating(rating), watched(watched){
}


//Implementation of copy
Movie::Movie(const Movie &source)
    :Movie(source.name,source.rating,source.watched){
}


//Implementation of destructor
Movie::~Movie(){
}


void Movie::display() const{
    std::cout<< name << ", " << rating << ", " << watched << std::endl;
}