// NOTE: This file was autogenerated by re_types_builder; DO NOT EDIT.
// Based on "crates/re_types/definitions/rerun/components/label.fbs"

#pragma once

#include "../data_cell.hpp"
#include "../datatypes/label.hpp"
#include "../result.hpp"

#include <cstdint>
#include <memory>
#include <string>
#include <utility>

namespace arrow {
    class DataType;
    class MemoryPool;
    class StringBuilder;
} // namespace arrow

namespace rerun {
    namespace components {
        /// A String label component.
        struct Label {
            rerun::datatypes::Label value;

            /// Name of the component, used for serialization.
            static const char* NAME;

          public:
            // Extensions to generated type defined in 'label_ext.cpp'

            /// Construct Label from c string.
            Label(const char* str) : value(str) {}

            const char* c_str() const {
                return value.c_str();
            }

          public:
            Label() = default;

            Label(rerun::datatypes::Label _value) : value(std::move(_value)) {}

            Label& operator=(rerun::datatypes::Label _value) {
                value = std::move(_value);
                return *this;
            }

            Label(std::string arg) : value(std::move(arg)) {}

            /// Returns the arrow data type this type corresponds to.
            static const std::shared_ptr<arrow::DataType>& arrow_datatype();

            /// Creates a new array builder with an array of this type.
            static Result<std::shared_ptr<arrow::StringBuilder>> new_arrow_array_builder(
                arrow::MemoryPool* memory_pool
            );

            /// Fills an arrow array builder with an array of this type.
            static Error fill_arrow_array_builder(
                arrow::StringBuilder* builder, const Label* elements, size_t num_elements
            );

            /// Creates a Rerun DataCell from an array of Label components.
            static Result<rerun::DataCell> to_data_cell(
                const Label* instances, size_t num_instances
            );
        };
    } // namespace components
} // namespace rerun
