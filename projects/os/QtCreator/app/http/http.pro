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
#   File: http.pro
#
# Author: $author$
#   Date: 5/17/2025
#
# os specific QtCreator project .pro file for framework stara executable http
########################################################################
# Depends: rostra;nadir;fila;crono;versa;cifra;rete
#
# Debug: stara/build/os/QtCreator/Debug/bin/http
# Release: stara/build/os/QtCreator/Release/bin/http
# Profile: stara/build/os/QtCreator/Profile/bin/http
#
include(../../../../../build/QtCreator/stara.pri)
include(../../../../QtCreator/stara.pri)
include(../../stara.pri)
include(../../../../QtCreator/app/http/http.pri)

TARGET = $${http_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${http_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${http_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${http_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${http_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${http_HEADERS} \
$${http_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${http_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${http_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${http_LIBS} \
$${FRAMEWORKS} \

########################################################################
