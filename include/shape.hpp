#pragma once

#include <cstddef>
#include <variant>
#include <vector>

#include "constants.hpp"
#include "error.hpp"
#include "point.hpp"

struct Shape {
    const std::vector<Point> points;
    const Error error;

    Shape( const std::vector<Point>& points, const Error& error ):
        points( points ), error( error ) {}
};

const size_t get_points_amount( const Shape& shape );

const std::variant<Point, Error> get_point( const Shape& shape,
                                            const size_t index );

const Error& get_error( const Shape& shape );

const Shape make_shape( const std::vector<Point>& points,
                        const Error& error = Errors::OK );
