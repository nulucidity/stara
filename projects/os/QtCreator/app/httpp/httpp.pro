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
#   File: httpp.pro
#
# Author: $author$
#   Date: 6/24/2025
#
# os specific QtCreator project .pro file for framework stara executable httpp
########################################################################
# Depends: rostra;nadir;fila;crono;versa;cifra;rete
#
# Debug: stara/build/os/QtCreator/Debug/bin/httpp
# Release: stara/build/os/QtCreator/Release/bin/httpp
# Profile: stara/build/os/QtCreator/Profile/bin/httpp
#
include(../../../../../build/QtCreator/stara.pri)
include(../../../../QtCreator/stara.pri)
include(../../stara.pri)
include(../../../../QtCreator/app/httpp/httpp.pri)

TARGET = $${httpp_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${httpp_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${httpp_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${httpp_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${httpp_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${httpp_HEADERS} \
$${httpp_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${httpp_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${httpp_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${httpp_LIBS} \
$${FRAMEWORKS} \

########################################################################
