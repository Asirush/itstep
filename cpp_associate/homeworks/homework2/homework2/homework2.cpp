#include <iostream>
#include <cmath>

class point
{
public:
	point();
	~point();
	point(int x, int y);
	int get_x();
	int get_y();
	void show();
	void find();

private:
	int _x;
	int _y;
};
point::point()
{
	_x = 0;
	_y = 0;
}
point::~point()
{
}
point::point(int x, int y)
{
	_x = x;
	_y = y;
}
int point::get_x()
{
	return _x;
}
int point::get_y()
{
	return _y;
}

void point::show()
{
	std::cout << "(" << _x << ";" << _y << ")" << std::endl;
}

void point::find()
{

}

const size_t SIZE = 100;

class points
{
public:
	points();
	~points();
	void set_point(point pnt);
	void show();
	void find();


private:
	point _points[SIZE];
	size_t _index;
	int _summ_len[SIZE];
	int _min_len;
	int _min_len_index;
};
points::points()
{
	_index = 0;
	_min_len = 9999999;
	_min_len_index = 0;
}

points::~points()
{
}

void points::set_point(point pnt)
{
	if (_index < SIZE) {
		_points[_index] = pnt;
		_index++;
	}
}

void points::show()
{
	for (int i = 0; i < SIZE; i++) {
		_points[i].show();
	}
}

void points::find()
{
	for (int i = 0; i < SIZE; i++) {
		_summ_len[i] = 0;
		for (int j = 0; j < SIZE; j++) {
			_summ_len[i] += abs(sqrt((_points[j].get_x() - _points[i].get_x()) * (_points[j].get_x() - _points[i].get_x()) + ((_points[j].get_x() - _points[i].get_x()) * (_points[j].get_x() - _points[i].get_x()))));
			if (_summ_len[i] < _min_len) { _min_len = _summ_len[i]; _min_len_index = i; };
			
		}
		
	}
	std::cout << std::endl << "min_len: " << _min_len << std::endl << "index: " << _min_len_index << std::endl;
}

int main() {

	points pnts;
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {
		int x = rand() % SIZE;
		int y = rand() % SIZE;
		point pnt(rand() % SIZE, rand() % SIZE);
		pnts.set_point(pnt);
	}
	pnts.show();
	pnts.find();

	return 0;
}