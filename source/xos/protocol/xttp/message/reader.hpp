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
///   Date: 2/7/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_PROTOCOL_XTTP_MESSAGE_READER_HPP
#define XOS_PROTOCOL_XTTP_MESSAGE_READER_HPP

#include "xos/protocol/xttp/message/part.hpp"
#include "xos/io/string/reader.hpp"

namespace xos {
namespace protocol {
namespace xttp {
namespace message {

//////////////////////////////////////////////////////////////////////////
/// class readert
template 
<class TPart = xos::protocol::xttp::message::part, 
 class TString = typename TPart::string_t, 
 class TReader = typename TPart::reader_t, 
 class TExtends = typename xos::io::string::readert<TString, TReader>, 
 class TImplements = typename TExtends::implements>
class exported readert: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef readert derives;

    typedef TString string_t;
    
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
} /// namespace xttp 
} /// namespace protocol 
} /// namespace xos 

#endif /// ndef XOS_PROTOCOL_XTTP_MESSAGE_READER_HPP

