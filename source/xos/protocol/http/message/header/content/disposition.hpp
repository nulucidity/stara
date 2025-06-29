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
///   File: disposition.hpp
///
/// Author: $author$
///   Date: 2/1/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_PROTOCOL_HTTP_MESSAGE_HEADER_CONTENT_DISPOSITION_HPP
#define XOS_PROTOCOL_HTTP_MESSAGE_HEADER_CONTENT_DISPOSITION_HPP

#include "xos/protocol/xttp/message/header/content/disposition.hpp"
#include "xos/protocol/http/message/header/field.hpp"
#include "xos/protocol/http/content/disposition/name.hpp"

namespace xos {
namespace protocol {
namespace http {
namespace message {
namespace header {
namespace content {

/// class dispositiont
template 
<class TExtends = xttp::message::header::content::extended::dispositiont
 <http::content::disposition::name, http::message::header::field>, 
 class TImplements = typename TExtends::implements>

class exported dispositiont: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef dispositiont derives; 
    
    typedef typename extends::type_t type_t;
    typedef typename extends::part_t part_t;
    typedef typename extends::string_t string_t;
    typedef typename string_t::char_t char_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;

    /// constructors / destructor
    dispositiont(const string_t& chars) {
        this->set_type(chars);
    }
    dispositiont(const char_t* chars, size_t length) {
        this->set_type(chars, length);
    }
    dispositiont(const char_t* chars) {
        this->set_type(chars);
    }
    dispositiont(const dispositiont& copy) {
        this->set_type(copy.value());
    }
    dispositiont() {
        this->set_type();
    }
    virtual ~dispositiont() {
    }

}; /// class dispositiont
typedef dispositiont<> disposition;

} /// namespace content 
} /// namespace header 
} /// namespace message 
} /// namespace http 
} /// namespace protocol 
} /// namespace xos 

#endif /// ndef XOS_PROTOCOL_HTTP_MESSAGE_HEADER_CONTENT_DISPOSITION_HPP

