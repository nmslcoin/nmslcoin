// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2021, The NMSLeCoin Developers
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = "\n  _   _ __  __ ____  _     ____ ___ ___ _   _ \n"
                                    " | \\ | |  \\/  / ___|| |   / ___/ _ \\_ _| \\ | |\n"
                                    " |  \\| | |\\/| \\___ \\| |  | |  | | | | ||  \\| |\n"
                                    " | |\\  | |  | |___) | |__| |__| |_| | || |\\  |\n"
                                    " | |\\  | |  | |___) | |__| |__| |_| | || |\\  |\n"
                                    " |_| \\_|_|  |_|____/|_____\\____\\___/___|_| \\_|\n";

const std::string nonWindowsAsciiArt =
    "\n                                                                   \n"
    "███╗   ██╗███╗   ███╗███████╗██╗      ██████╗ ██████╗ ██╗███╗   ██╗\n"
    "████╗  ██║████╗ ████║██╔════╝██║     ██╔════╝██╔═══██╗██║████╗  ██║\n"
    "██╔██╗ ██║██╔████╔██║███████╗██║     ██║     ██║   ██║██║██╔██╗ ██║\n"
    "██║╚██╗██║██║╚██╔╝██║╚════██║██║     ██║     ██║   ██║██║██║╚██╗██║\n"
    "██║ ╚████║██║ ╚═╝ ██║███████║███████╗╚██████╗╚██████╔╝██║██║ ╚████║\n"
    "╚═╝  ╚═══╝╚═╝     ╚═╝╚══════╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
