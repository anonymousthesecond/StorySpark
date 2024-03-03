#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to generate a random number between min and max (inclusive)
int getRandomNumber(int min, int max) {
  return rand() % (max - min + 1) + min;
}

// Function to return a random element from a vector
string getRandomElement(const vector<string>& elements) {
  int randomIndex = getRandomNumber(0, elements.size() - 1);
  return elements[randomIndex];
}

int main() {
  // Seed the random number generator
  srand(time(0));

  // Horror story elements
  vector<string> horrorSettings = {"abandoned mansion", "dark forest", "ancient graveyard"};
  vector<string> horrorCharacters = {"vengeful ghost", "deranged serial killer", "mysterious creature"};
  vector<string> horrorEvents = {"strange noises", "unexplained visions", "sudden disappearances"};

  // Comedy story elements
  vector<string> comedySettings = {"chaotic workplace",  "dysfunctional family reunion", "luxurious cruise with a twist"};
  vector<string> comedyCharacters = {"clumsy protagonist", "overly critical relative", "mischievous pet"};
  vector<string> comedyEvents = {"awkward misunderstanding",  "unexpected mishap", "hilarious prank"};

  // Get user input for genre
  string genre;
  cout << "Enter 'horror' or 'comedy' to inspire a story: ";
  cin >> genre;

  // Generate story elements based on genre
  vector<string> settings;
  vector<string> characters;
  vector<string> events;
  if (genre == "horror") {
    settings = horrorSettings;
    characters = horrorCharacters;
    events = horrorEvents;
  } else if (genre == "comedy") {
    settings = comedySettings;
    characters = comedyCharacters;
    events = comedyEvents;
  } else {
    cout << "Invalid genre. Please try again." << endl;
    return 1;
  }

  // Print a random story inspiration message
  string setting = getRandomElement(settings);
  string character = getRandomElement(characters);
  string event = getRandomElement(events);
  cout << "Story idea: A " << event << " unfolds for a " << character << " in a " << setting << "." << endl;

  // You can extend this code to generate more complex story elements, add subplots, or create narratives with multiple characters. 
  
  return 0;
}
