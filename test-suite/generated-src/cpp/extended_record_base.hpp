// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from extended_record.djinni

#pragma once

#include <utility>

namespace testsuite {

struct ExtendedRecord; // Requiring extended class

/** Extended record */
struct ExtendedRecordBase {
    bool foo;

    ExtendedRecordBase(bool foo_)
    : foo(std::move(foo_))
    {}

    virtual ~ExtendedRecordBase() = default;

protected:
    ExtendedRecordBase(const ExtendedRecordBase&) = default;
    ExtendedRecordBase(ExtendedRecordBase&&) = default;
    ExtendedRecordBase& operator=(const ExtendedRecordBase&) = default;
    ExtendedRecordBase& operator=(ExtendedRecordBase&&) = default;
};

}  // namespace testsuite
