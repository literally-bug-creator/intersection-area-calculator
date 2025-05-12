#include "output.hpp"

#include <iostream>
#include <string>

#include "error.hpp"
#include "intersection_area.hpp"

std::ostream& OUTPUT_STREAM = std::cout;

void output_message( const std::string message ) {
    OUTPUT_STREAM << message << std::endl;
}

const std::string
get_area_message( const IntersectionArea& intersection_area ) {
    return std::to_string( get_area( intersection_area ) );
}

bool has_error( const IntersectionArea& intersection_area ) {
    Error error = get_error( intersection_area );
    return !is_ok( error );
}

const std::string get_message( const IntersectionArea& intersection_area ) {
    if ( has_error( intersection_area ) ) {
        return get_error_message( get_error( intersection_area ) );
    }

    return get_area_message( intersection_area );
}

void output( const IntersectionArea& intersection_area ) {
    std::string message = get_message( intersection_area );
    output_message( message );
}
