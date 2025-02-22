#pragma once

#include <public/eiface.h>
#include <string>

#include "core/globals.h"

namespace counterstrikesharp {
namespace utils {

static std::string gameDirectory;

inline std::string GameDirectory() {
    if (gameDirectory.empty()) {
        CBufferStringGrowable<255> gamePath;
        globals::engine->GetGameDir(gamePath);
        gameDirectory = std::string(gamePath.Get());
    }

    return gameDirectory;
}

inline std::string GetRootDirectory() { return "/serverdata/counterstrikesharp"; }
inline std::string PluginsDirectory() { return "/serverdata/counterstrikesharp/plugins"; }
inline std::string ConfigsDirectory() { return "/serverdata/counterstrikesharp/configs"; }
inline std::string GamedataDirectory() { return "/serverdata/counterstrikesharp/gamedata"; }

}  // namespace utils
}  // namespace counterstrikesharp
