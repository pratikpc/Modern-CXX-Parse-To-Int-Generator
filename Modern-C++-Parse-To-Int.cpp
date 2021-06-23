#include <iostream>
#include <sstream>
#include <fstream>
#include <string_view>
#include <string>
#include <experimental/generator>

std::experimental::generator<std::string> Lines (std::istream& stream)
{
   std::string line;
   while (std::getline (stream, line)) co_yield line;
}

std::experimental::generator<std::string> LineToWords (std::string const& line, char separator = ',')
{
   std::string word;
   std::istringstream stream{line};
   while (std::getline (stream, word, separator)) co_yield word;
}
std::experimental::generator<long long> LineToNum (std::string const& line, char separator = ',')
{
   for (auto const& word : LineToWords (line, separator))  co_yield std::stoll (word);
}
int main ()
{
   std::ifstream file ("./data.csv");
   for (auto const& row : Lines (file))
   {
      for (auto const num : LineToNum (row))
         std::cout << num << " : ";
      std::cout << "\n";
   }
   return 0;
}
