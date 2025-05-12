#include "error.hpp"

namespace Messages {
    const std::string OK_ERROR = "";
}

namespace Errors {
    const Error OK = make_error(ErrorCode::OK, Messages::OK_ERROR );
}
