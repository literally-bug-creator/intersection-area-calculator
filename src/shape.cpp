#include <cstddef>

#include "constants.hpp"
#include "error.hpp"
#include "point.hpp"
#include "shape.hpp"

const size_t get_points_amount( const Shape& shape ) {
    return shape.points.size();
}

bool is_index_in_bound( const Shape& shape, const size_t index ) {
    size_t points_amount = get_points_amount( shape );
    return ( index >= 0 ) && ( index < points_amount );
}

const std::variant<Point, Error> get_point( const Shape& shape,
                                            const size_t index ) {
    if ( !is_index_in_bound( shape, index ) ) {
        return Errors::INDEX_OUT_OF_RANGE;
    }

    return shape.points[index];
}

const Error& get_error( const Shape& shape ) { return shape.error; }

const Shape make_shape( const std::vector<Point>& points, const Error& error ) {
    return Shape( points, error );
}
