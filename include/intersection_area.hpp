#pragma once

#include "constants.hpp"
#include "error.hpp"

struct IntersectionArea {
    const double area;
    const Error error;

    IntersectionArea( const double area, const Error& error ):
        area( area ), error( error ) {}
};

const double get_area( const IntersectionArea& intersection_area );

const Error& get_error( const IntersectionArea& intersection_area );

const IntersectionArea
make_intersection_area( const double area, const Error& error = Errors::OK );
