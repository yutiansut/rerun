// NOTE: This file was autogenerated by re_types_builder; DO NOT EDIT.
// Based on "crates/re_types/definitions/rerun/testing/components/fuzzy.fbs"

#pragma once

#include "../datatypes/affix_fuzzer1.hpp"

#include <cstdint>
#include <memory>
#include <optional>
#include <rerun/data_cell.hpp>
#include <rerun/result.hpp>
#include <utility>

namespace arrow {
    class DataType;
    class MemoryPool;
    class StructBuilder;
} // namespace arrow

namespace rerun {
    namespace components {
        struct AffixFuzzer6 {
            std::optional<rerun::datatypes::AffixFuzzer1> single_optional;

            /// Name of the component, used for serialization.
            static const char* NAME;

          public:
            AffixFuzzer6() = default;

            AffixFuzzer6(std::optional<rerun::datatypes::AffixFuzzer1> _single_optional)
                : single_optional(std::move(_single_optional)) {}

            AffixFuzzer6& operator=(std::optional<rerun::datatypes::AffixFuzzer1> _single_optional
            ) {
                single_optional = std::move(_single_optional);
                return *this;
            }

            /// Returns the arrow data type this type corresponds to.
            static const std::shared_ptr<arrow::DataType>& arrow_datatype();

            /// Creates a new array builder with an array of this type.
            static Result<std::shared_ptr<arrow::StructBuilder>> new_arrow_array_builder(
                arrow::MemoryPool* memory_pool
            );

            /// Fills an arrow array builder with an array of this type.
            static Error fill_arrow_array_builder(
                arrow::StructBuilder* builder, const AffixFuzzer6* elements, size_t num_elements
            );

            /// Creates a Rerun DataCell from an array of AffixFuzzer6 components.
            static Result<rerun::DataCell> to_data_cell(
                const AffixFuzzer6* instances, size_t num_instances
            );
        };
    } // namespace components
} // namespace rerun
