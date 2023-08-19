#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
class Movie {
public:
    string title;
    int availableSeats;
    float ticketPrice;
    //This calss is storing the Ticket Price Seats Avalibility And Tiile of the Movie
    Movie(string t, int seats, float price)
        {//This is the Constructor
            title=t;
            availableSeats=seats;
            ticketPrice=price;
        }
};

class Ticket {
public:
    string movieTitle;
    int numSeats;
    float totalCost;
    //this class is store the ticket information like seats numbers are sold and movie title cost of movie ticket
    Ticket(string title, int seats, float cost)
        {
            movieTitle=title;
            numSeats=seats;
            totalCost=cost;
        }
};

vector<Movie> movies;

void displayMovies() {
    cout << "Available Movies:" <<endl;
    //this function is display the movies and information about seat avalibility etc
    for (const Movie& movie : movies) {
        cout << "Title: " << movie.title<< " | Available Seats: " << movie.availableSeats<< " | Ticket Price In INR:" <<fixed <<setprecision(2) << movie.ticketPrice <<" RS"<<endl;
    }
}

int findMovieIndex(const string& title) {
    for (size_t i = 0; i < movies.size(); ++i) {
        if (movies[i].title == title) {
            return i;
        }
    }
    return -1;
}

int main() {
    movies.push_back(Movie("3_idiots",30, 120.0));
    movies.push_back(Movie("Ek_Tha_Tiger", 50, 150.0));
    movies.push_back(Movie("Tiger_Zinda_Hai", 70, 150.0));
    movies.push_back(Movie("Rakshyak_The_Indian_Brave", 30,200.0));
    movies.push_back(Movie("Chennai_Express",50, 100.0));

    cout << "Welcome to the Movie Ticket Booking System!" <<endl;

    while (true) {
        displayMovies();

        string selectedMovie;
        cout << "Enter the title of the movie you want to watch (or 'exit' to quit): ";
        cin >> selectedMovie;

        if (selectedMovie == "exit") {
            cout << "Goodbye!" <<endl;
            break;
        }

        int movieIndex = findMovieIndex(selectedMovie);
        if (movieIndex == -1) {
            cout << "Movie not found." <<endl;
            continue;
        }

        int numSeats;
        cout << "Enter the number of seats you want to book: ";
        cin >> numSeats;

        if (numSeats <= 0 || numSeats > movies[movieIndex].availableSeats) {
            cout << "Invalid number of seats or not enough available seats." <<endl;
            continue;
        }

        float totalCost = numSeats * movies[movieIndex].ticketPrice;
        cout << "Total cost: " <<fixed <<setprecision(2) << totalCost<<" RS"<<endl;

        char confirm;
        cout << "Confirm booking? (y/n): ";
        cin >> confirm;

        if (confirm == 'y' || confirm == 'Y') {
            //It Will Create And Store The Ticket
            Ticket ticket(selectedMovie, numSeats, totalCost);
            //It Will Update Available Seats
            movies[movieIndex].availableSeats -= numSeats;

            cout << "Booking successful!" <<endl;
            cout << "Enjoy the movie!" <<endl;
        } else {
            cout << "Booking canceled." <<endl;
        }
    }

    return 0;
}