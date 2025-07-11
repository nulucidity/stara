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
#   File: ttpb.pro
#
# Author: $author$
#   Date: 5/17/2025
#
# os specific QtCreator project .pro file for framework stara executable ttpb
########################################################################
# Depends: rostra;nadir;fila;crono;versa;cifra;rete
#
# Debug: stara/build/os/QtCreator/Debug/bin/ttpb
# Release: stara/build/os/QtCreator/Release/bin/ttpb
# Profile: stara/build/os/QtCreator/Profile/bin/ttpb
#
include(../../../../../build/QtCreator/stara.pri)
include(../../../../QtCreator/stara.pri)
include(../../stara.pri)
include(../../../../QtCreator/app/ttpb/ttpb.pri)

TARGET = $${ttpb_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${ttpb_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${ttpb_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${ttpb_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${ttpb_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${ttpb_HEADERS} \
$${ttpb_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${ttpb_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${ttpb_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${ttpb_LIBS} \
$${FRAMEWORKS} \

########################################################################
