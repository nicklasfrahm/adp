#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

int countFilesFromFilesystem(string s)
{
  throw runtime_error("Cannot count files in: " + s);
}

int main(void)
{
  try
  {
    try
    {
      int files = countFilesFromFilesystem("/mnt/data");
    }
    // catch most specific exceptions first
    catch (runtime_error &e)
    {
      cout << e.what() << endl;
      // rethrow
      throw;
    }
    catch (exception &e)
    {
      cout << e.what() << endl;
    }
  }
  catch (runtime_error &e)
  {
    cout << e.what() << endl;
  }
}