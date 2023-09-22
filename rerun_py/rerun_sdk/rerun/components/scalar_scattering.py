# DO NOT EDIT! This file was auto-generated by crates/re_types_builder/src/codegen/python.rs
# Based on "crates/re_types/definitions/rerun/components/scalar_scattering.fbs".

# You can extend this class by creating a "ScalarScatteringExt" class in "scalar_scattering_ext.py".

from __future__ import annotations

from typing import TYPE_CHECKING, Any, Sequence, Union

import numpy as np
import numpy.typing as npt
import pyarrow as pa
from attrs import define, field

from .._baseclasses import (
    BaseExtensionArray,
    BaseExtensionType,
)
from .scalar_scattering_ext import ScalarScatteringExt

__all__ = [
    "ScalarScattering",
    "ScalarScatteringArray",
    "ScalarScatteringArrayLike",
    "ScalarScatteringLike",
    "ScalarScatteringType",
]


@define
class ScalarScattering(ScalarScatteringExt):
    """If true, a scalar will be shown as individual point in a scatter plot."""

    # You can define your own __init__ function as a member of ScalarScatteringExt in scalar_scattering_ext.py

    scattered: bool = field(converter=bool)


if TYPE_CHECKING:
    ScalarScatteringLike = Union[ScalarScattering, bool]
else:
    ScalarScatteringLike = Any

ScalarScatteringArrayLike = Union[ScalarScattering, Sequence[ScalarScatteringLike], bool, npt.NDArray[np.bool_]]


# --- Arrow support ---


class ScalarScatteringType(BaseExtensionType):
    def __init__(self) -> None:
        pa.ExtensionType.__init__(self, pa.bool_(), "rerun.components.ScalarScattering")


class ScalarScatteringArray(BaseExtensionArray[ScalarScatteringArrayLike]):
    _EXTENSION_NAME = "rerun.components.ScalarScattering"
    _EXTENSION_TYPE = ScalarScatteringType

    @staticmethod
    def _native_to_pa_array(data: ScalarScatteringArrayLike, data_type: pa.DataType) -> pa.Array:
        return ScalarScatteringExt.native_to_pa_array_override(data, data_type)


ScalarScatteringType._ARRAY_TYPE = ScalarScatteringArray

# TODO(cmc): bring back registration to pyarrow once legacy types are gone
# pa.register_extension_type(ScalarScatteringType())
