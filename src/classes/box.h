/*
 * Make a class Box with length, width and height as private members. Make a constructor with
 * 3 parameters for initializing these three member-variables. Make the public member-functions
 * get_volume , get_surface. You can also make set- and get-member-functions for your 3
 * member-variables. In your main-function make some boxes and try them out.
 */

class Box
{
private:
  int length;
  int width;
  int height;

public:
  Box(int l, int w, int h);
  int get_volume(void);
  int get_surface(void);
};

Box::Box(int l = 0, int w = 0, int h = 0) : length(l), width(w), height(h) {}

int Box::get_volume(void)
{
  return length * width * height;
}

int Box::get_surface(void)
{
  return 2 * (length * width + width * height + height * length);
}