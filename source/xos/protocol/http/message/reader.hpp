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
///   File: reader.hpp
///
/// Author: $author$
///   Date: 2/8/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_PROTOCOL_HTTP_MESSAGE_READER_HPP
#define XOS_PROTOCOL_HTTP_MESSAGE_READER_HPP

#include "xos/protocol/xttp/message/reader.hpp"
#include "xos/protocol/http/message/part.hpp"

namespace xos {
namespace protocol {
namespace http {
namespace message {

//////////////////////////////////////////////////////////////////////////
/// class readert
template 
<class TPart = xos::protocol::http::message::part, 
 class TExtends = xos::protocol::xttp::message::readert<TPart>, 
 class TImplements = typename TExtends::implements>
class exported readert: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef readert derives;

    typedef typename extends::string_t string_t;
    
    //////////////////////////////////////////////////////////////////////////
    /// constructor / destructor
    readert(const string_t& string): extends(string) {
    }
    readert(const readert &copy): extends(copy) {
    }
    readert() {
    }
    virtual ~readert() {
    }

    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class readert
typedef readert<> reader;

} /// namespace message 
} /// namespace http 
} /// namespace protocol 
} /// namespace xos 

#endif /// ndef XOS_PROTOCOL_HTTP_MESSAGE_READER_HPP

