#pragma once

#include "error.hpp"

namespace Messages {
    const std::string OK_ERROR = "";
    const std::string OUT_OF_RANGE_ERROR = "Index out of range!";
}

namespace Errors {
    const Error OK = make_error( ErrorCode::OK, Messages::OK_ERROR );
    const Error INDEX_OUT_OF_RANGE =
        make_error( ErrorCode::RUNTIME_ERROR, Messages::OUT_OF_RANGE_ERROR );
}
