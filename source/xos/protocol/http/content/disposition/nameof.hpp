//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2025 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: nameof.hpp
///
/// Author: $author$
///   Date: 2/1/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_PROTOCOL_HTTP_CONTENT_DISPOSITION_NAMEOF_HPP
#define XOS_PROTOCOL_HTTP_CONTENT_DISPOSITION_NAMEOF_HPP

#include "xos/protocol/http/content/disposition/name.hpp"

namespace xos {
namespace protocol {
namespace http {
namespace content {
namespace disposition {
namespace nameof {

//////////////////////////////////////////////////////////////////////////
/// class none
typedef xos::protocol::http::content::disposition::name none_extend;
class exported none: virtual public none_extend::implements, public none_extend {
public:
    typedef none_extend::implements implements;
    typedef none_extend extends;
    typedef none derives;
    //////////////////////////////////////////////////////////////////////////
    /// constructor / destructor
    none(const none &copy): extends(copy) {
    }
    none(): extends(disposition::none) {
    }
    virtual ~none() {
    }
    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class none

} /// namespace nameof 
} /// namespace disposition 
} /// namespace content 
} /// namespace http 
} /// namespace protocol 
} /// namespace xos 

#endif /// ndef XOS_PROTOCOL_HTTP_CONTENT_DISPOSITION_NAMEOF_HPP

