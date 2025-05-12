#pragma once

struct Point {
    const double x;
    const double y;

    Point( const double x, const double y ): x( x ), y( y ) {}
};

const double get_x( const Point& point );

const double get_y( const Point& point );

const Point make_point( const double x, const double y );
