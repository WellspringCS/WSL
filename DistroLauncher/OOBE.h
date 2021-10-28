//
//    Copyright: 2021, Canonical Ltd.
//  License: GPL-3
//  This program is free software : you can redistribute itand /or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License.
//  .
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
//  GNU General Public License for more details.
//  .
//  You should have received a copy of the GNU General Public License
//  along with this program.If not, see < https://www.gnu.org/licenses/>.
//  .
//  On Debian systems, the complete text of the GNU General
//  Public License version 3 can be found in "/usr/share/common-licenses/GPL-3".

#pragma once

namespace DistributionInfo {
    // OOBE Experience.
    HRESULT OOBESetup();

    // isOOBEAvailable returns true if OOBE executable is found inside rootfs. 
    bool isOOBEAvailable();

    //OOBEStatusCheck checks the status passed by wsl-setup, and perform the proper actions.
    HRESULT OOBEStatusHandling(std::wstring_view status);

    // GetPrefillInfoInYaml generates a YAML string from Windows user and locale information.
    std::wstring GetPrefillInfoInYaml();

    // Windows Executable name for the current distribution.
    static TCHAR* WINEXEC_NAME = L"{{.LauncherName}}.exe";

    // OOBE executable name.
    static TCHAR* OOBE_NAME = L"/usr/lib/libexec/wsl-setup";
}
