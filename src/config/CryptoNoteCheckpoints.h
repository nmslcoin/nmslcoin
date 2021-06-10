// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018-2020, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };

    const std::initializer_list<CheckpointData> CHECKPOINTS = {
        {0,"012801ff000183b1de16029b2e4c0281c0b02e7c53291a94d1d0cbff8883f8024f5142ee494ffbbd088071840101b69c785d6bf081d7fca686fd0a8da4e28a7b4071d4584910c0cdd3539eea85d104000000000000000000000000000000000000000000000000000000000000000005000000000000000000000000000000000000000000000000000000000000000006544b88fecef1851f8efbf5575b45c0bfafdd46c52d25f4132e66d16153bc1d09"}
};
} // namespace CryptoNote
