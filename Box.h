class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       // write prototypes of getters for length, width and height
 
       int calcVolume();
};


#include<iostream>
using namespace std;

class Box{
	private:
		int length;
		int width;
		int height;
	public:
		void setLength(int l);
		void setWidth(int w);
		void setHeight(int h);
		int getLength();
		int getWidth();
		int getHeight();
		int calcVolume();
};
