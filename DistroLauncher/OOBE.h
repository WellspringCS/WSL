/*
 * Copyright (C) 2021 Canonical Ltd
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

namespace DistributionInfo
{
    // isOOBEAvailable returns true if OOBE executable is found inside rootfs.
    bool isOOBEAvailable();

    // GetPrefillInfoInYaml generates a YAML string from Windows user
    // and locale information, UTF-8 encoded, thus std::string.
    std::string GetPrefillInfoInYaml();

    // Saves Windows information inside Linux filesystem to supply to the OOBE.
    // Returns empty string if we fail to generate the prefill file
    // or the postfix to be added to the OOBE command line.
    std::wstring PreparePrefillInfo();

    // Returns true if the argument ARG_SKIP_INSTALLER is present.
    // Removes it from the argument vector if present to avoid interference with upstream code.
    bool shouldSkipInstaller(std::vector<std::wstring_view>& arguments, std::wstring_view value);
}
