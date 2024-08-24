import pytest

import sample

def test_add():
    assert sample.add(1, 2) == 3

def test_raise_zero_division_error():
    with pytest.raises(ZeroDivisionError):
        sample.raise_zero_division_error()