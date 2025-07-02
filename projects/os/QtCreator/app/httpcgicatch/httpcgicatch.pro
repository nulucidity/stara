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
#   File: httpcgicatch.pro
#
# Author: $author$
#   Date: 5/17/2025
#
# os specific QtCreator project .pro file for framework stara executable httpcgicatch
########################################################################
# Depends: rostra;nadir;fila;crono;versa;cifra;rete
#
# Debug: stara/build/os/QtCreator/Debug/bin/httpcgicatch
# Release: stara/build/os/QtCreator/Release/bin/httpcgicatch
# Profile: stara/build/os/QtCreator/Profile/bin/httpcgicatch
#
include(../../../../../build/QtCreator/stara.pri)
include(../../../../QtCreator/stara.pri)
include(../../stara.pri)
include(../../../../QtCreator/app/httpcgicatch/httpcgicatch.pri)

TARGET = $${httpcgicatch_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${httpcgicatch_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${httpcgicatch_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${httpcgicatch_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${httpcgicatch_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${httpcgicatch_HEADERS} \
$${httpcgicatch_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${httpcgicatch_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${httpcgicatch_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${httpcgicatch_LIBS} \
$${FRAMEWORKS} \

########################################################################
