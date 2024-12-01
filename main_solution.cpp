/*
# Instructions

Movie Data

Write a program that creates a structure to store information.  The data stored
should include the following:

Title
Director
Year Released
Running Time (in minutes)
Production Costs
Profits

Create two instances of your structure and hard code the data from two different
movies.  Pass the structure to a function for output, display the
information for both instances of the structure.

As a reminder, you can complile and run programs without using the "run" button.  This can be handy to run the examples.

To run the circle.cpp example, open a shell and execute these two commands:

    g++ circle.cpp -o circle
    ./circle
    

*/
#include <iostream>
#include <string>

struct MovieData {
    std::string title;
    std::string director;
    int yearReleased;
    int runningTime;
    double productionCosts;
    double profits;
};

void displayMovieData(const MovieData& movie) {
    std::cout << "Title: " << movie.title << std::endl;
    std::cout << "Director: " << movie.director << std::endl;
    std::cout << "Year Released: " << movie.yearReleased << std::endl;
    std::cout << "Running Time: " << movie.runningTime << " minutes" << std::endl;
    std::cout << "Production Costs: $" << movie.productionCosts << std::endl;
    std::cout << "Profits: $" << movie.profits << std::endl;
}

int main() {
    MovieData movie1 = {"Inception", "Christopher Nolan", 2010, 148, 160000000, 829895144};
    MovieData movie2 = {"The Matrix", "Lana Wachowski, Lilly Wachowski", 1999, 136, 63000000, 463517383};

    displayMovieData(movie1);
    std::cout << std::endl;
    displayMovieData(movie2);

    return 0;
}