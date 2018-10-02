/****

1) You are running a website, and you are trying to keep track of how much money you make per day from advertising.
Declare an advertising struct that keeps track of how many ads you’ve shown to readers, what percentage of ads were
clicked on by users, and how much you earned on average from each ad that was clicked. Read in values for each of
these fields from the user. Pass the advertising struct to a function that prints each of the values, and then
calculates how much you made for that day (multiply all 3 fields together).

****/

#include<iostream>
#include<string>
using namespace std;
struct Advertising
{
  int adds_shown;
  long click_percentage;
  double per_click_earnings;
};

void PrintValues(Advertising adds)
{
  int result;
  result = adds.adds_shown * adds.click_percentage * adds.per_click_earnings;
  std::cout << "adds_shown :   " <<adds.adds_shown << '\n';
  std::cout << "click_percentage : " <<adds.click_percentage << '\n';
  std::cout << "earnings : " <<adds.per_click_earnings << '\n';
  std::cout << "total earnings : " <<result << '\n';

}

int main()
{
  Advertising ad;
  std::cout << "Number of adds shown today? ";
  std::cin >> ad.adds_shown;
  std::cout << "percentage of users who clicked on the ads? ";
  std::cin >> ad.click_percentage;
  std::cout << "average earnings per click? ";
  std::cin >> ad.per_click_earnings;

  PrintValues(ad);
  return 0;
}
