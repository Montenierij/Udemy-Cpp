/**
 * Jacob Montenieri
 * Section 13 Challenge - Udemy C++
 * This code demonstrates classes and objects in
 * Object Oriented Programming. The example for
 * this program demonstrates a Movie class and a
 * Movies class which contains a vector full of Movie objects.
 * The classes allow adding movies, and incrementing the
 * number of times the movie has been watched.
 */
#include <iostream>
#include "Movies.h"


//Function prototypes
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movie, std::string name, std::string rating, int watched);


/************************************************************
 * helper function
 * increment_watched expects reference to Movies object
 * and the name of the movie to increment the wateched count
 * 
 * If the watched count was incremented successfully it
 * displays a success message
 * otherwise the watched count could not be incremented
 * because the name of the movie was not found
 * *********************************************************/
 void increment_watched(Movies &movies, std::string name){
     if (movies.increment_watched(name))
         std::cout << name << " watch incremented" << std::endl;
    else
        std::cout << name << " not found" << std::endl;
 }
 
 
/************************************************************
 * helper function
 * add_movies expects reference to Movies object
 * and the name of the movie, rating, and watched count
 * 
 * If the movie was successfully added to the movies object
 * it displays a success message
 * otherwise the movie will not be added
 * because the name of the movie was already in movies
 * *********************************************************/ 
 void add_movie(Movies &movies, std::string name, std::string rating, int watched){
     if(movies.add_movie(name,rating,watched))
         std::cout << name << " added" << std::endl;
     else
         std::cout << name << " already exists" << std::endl;
 }
 
 
int main(){
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies,"Big","PG-13",2);
    add_movie(my_movies,"Star Wars","PG",5);
    add_movie(my_movies,"Cinderella","PG",7);
    
    my_movies.display();
    
    add_movie(my_movies,"Cinderella","PG",7); //Already exists, will print denial
    add_movie(my_movies,"Ice Age","PG", 12);
    
    my_movies.display();
    
    increment_watched(my_movies,"Big");
    increment_watched(my_movies,"Ice Age");
    increment_watched(my_movies,"XXXXXXX");  //Doesn't exist in my_movies
    
    my_movies.display();
    
    return 0;
}
