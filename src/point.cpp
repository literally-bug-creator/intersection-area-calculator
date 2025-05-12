#include "point.hpp"

const double get_x( const Point& point ) { return point.x; }

const double get_y( const Point& point ) { return point.y; }

const Point make_point( const double x, const double y ) {
    return Point( x, y );
}
