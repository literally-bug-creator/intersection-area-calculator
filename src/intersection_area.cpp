#include "intersection_area.hpp"

const double get_area( const IntersectionArea& intersection_area ) {
    return intersection_area.area;
}

const Error& get_error( const IntersectionArea& intersection_area ) {
    return intersection_area.error;
}

const IntersectionArea make_intersection_area( const double area,
                                               const Error& error ) {
    return IntersectionArea( area, error );
}
