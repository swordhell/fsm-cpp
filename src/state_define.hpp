#pragma once
#include <stdint.h>
#include <map>

enum class State : uint8_t {
    none,
    idle,
    seek_enemy,
    pursuit,
    attack,
    go_home,
};
