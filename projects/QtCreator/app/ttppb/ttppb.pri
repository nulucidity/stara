########################################################################
# Copyright (c) 1988-2025 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: ttppb.pri
#
# Author: $author$
#   Date: 6/24/2025
#
# generic QtCreator project .pri file for framework stara executable ttppb
########################################################################

########################################################################
# ttppb

# ttppb TARGET
#
ttppb_TARGET = ttppb

# ttppb INCLUDEPATH
#
ttppb_INCLUDEPATH += \
$${stara_INCLUDEPATH} \

# ttppb DEFINES
#
ttppb_DEFINES += \
$${stara_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# ttppb OBJECTIVE_HEADERS
#
#ttppb_OBJECTIVE_HEADERS += \
#$${STARA_SRC}/xos/app/console/ttppb/main.hh \

# ttppb OBJECTIVE_SOURCES
#
#ttppb_OBJECTIVE_SOURCES += \
#$${STARA_SRC}/xos/app/console/ttppb/main.mm \

########################################################################
# ttppb HEADERS
#
ttppb_HEADERS += \
$${NADIR_SRC}/xos/console/sequence.hpp \
$${NADIR_SRC}/xos/console/out.hpp \
$${NADIR_SRC}/xos/console/output.hpp \
$${NADIR_SRC}/xos/console/input.hpp \
$${NADIR_SRC}/xos/console/error.hpp \
$${NADIR_SRC}/xos/console/io.hpp \
$${NADIR_SRC}/xos/console/main.hpp \
$${NADIR_SRC}/xos/console/getopt/main_opt.hpp \
$${NADIR_SRC}/xos/console/getopt/main.hpp \
\
$${NADIR_SRC}/xos/app/console/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/main.hpp \
$${NADIR_SRC}/xos/app/console/version/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/version/main.hpp \
$${NADIR_SRC}/xos/app/console/output/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/output/base/main.hpp \
$${NADIR_SRC}/xos/app/console/input/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/input/base/main.hpp \
\
$${VERSA_SRC}/xos/app/console/protocol/base/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/base/main.hpp \
$${VERSA_SRC}/xos/app/console/protocol/client/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/client/main.hpp \
$${VERSA_SRC}/xos/app/console/protocol/server/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/server/main.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/ttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/ttp/base/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/ttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/ttp/client/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/ttp/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/ttp/server/main.hpp \

# ttppb SOURCES
#
ttppb_SOURCES += \
$${STARA_SRC}/xos/app/console/protocol/ttp/base/main_opt.cpp \
$${STARA_SRC}/xos/app/console/protocol/ttp/base/main.cpp \

########################################################################
# ttppb FRAMEWORKS
#
ttppb_FRAMEWORKS += \
$${stara_FRAMEWORKS} \

# ttppb LIBS
#
ttppb_LIBS += \
$${stara_LIBS} \

########################################################################
# NO Qt
QT -= gui core
