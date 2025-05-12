#pragma once

#include <string>

enum ErrorCode {
    OK,
    INPUT_ERROR,
    RUNTIME_ERROR,
    CALCULATION_ERROR
};

struct Error {
    const ErrorCode code;
    const std::string message;

    Error( const ErrorCode code, const std::string& message ):
        code( code ), message( message ) {}
};

const ErrorCode get_error_code( const Error& error );

const std::string& get_error_message( const Error& error );

const bool is_ok( const Error& error );

const Error make_error( const ErrorCode code, const std::string& message );
