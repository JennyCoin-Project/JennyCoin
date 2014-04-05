// Copyright (c) 2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#include <string>

#include "version.h"

// Name of client reported in the 'version' message. Report the same name
// for both bitcoind and bitcoin-qt, to make it harder for attackers to
// target servers or GUI users specifically.
const std::string CLIENT_NAME("JennyCoin");

// Client version number
#define CLIENT_VERSION_SUFFIX   ""


#ifdef HAVE_BUILD_INFO
#    include "build.h"
#endif

// git will put "#define GIT_ARCHIVE 1" on the next line inside archives. 
#define GIT_ARCHIVE 1
#ifdef GIT_ARCHIVE
#    define GIT_COMMIT_ID "85f303d"
#    define GIT_COMMIT_DATE "Sat, 15 Feb 2014 00:13:43 -1000"
#endif

#define BUILD_DESC_FROM_COMMIT(maj,min,rev,build,commit) \
    "v" DO_STRINGIZE(maj) "." DO_STRINGIZE(min) "." DO_STRINGIZE(rev) "." DO_STRINGIZE(build) "-g" commit

#define BUILD_DESC_FROM_UNKNOWN(maj,min,rev,build) \
    "v" DO_STRINGIZE(maj) "." DO_STRINGIZE(min) "." DO_STRINGIZE(rev) "." DO_STRINGIZE(build) "-unk"

#ifndef BUILD_DESC
#    ifdef GIT_COMMIT_ID
#        define BUILD_DESC BUILD_DESC_FROM_COMMIT(CLIENT_VERSION_MAJOR, CLIENT_VERSION_MINOR, CLIENT_VERSION_REVISION, CLIENT_VERSION_BUILD, GIT_COMMIT_ID)
#    else
#        define BUILD_DESC BUILD_DESC_FROM_UNKNOWN(CLIENT_VERSION_MAJOR, CLIENT_VERSION_MINOR, CLIENT_VERSION_REVISION, CLIENT_VERSION_BUILD)
#    endif
#endif

#ifndef BUILD_DATE
#    ifdef GIT_COMMIT_DATE
#        define BUILD_DATE GIT_COMMIT_DATE
#    else
#        define BUILD_DATE __DATE__ ", " __TIME__
#    endif
#endif

const std::string CLIENT_BUILD(BUILD_DESC CLIENT_VERSION_SUFFIX);
const std::string CLIENT_DATE(BUILD_DATE);
