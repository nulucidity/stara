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
///   File: main.hpp
///
/// Author: $author$
///   Date: 2/10/2025, 2/11/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_BASE_MAIN_HPP

#include "xos/app/console/network/sockets/protocol/http/base/main_opt.hpp"
#include "xos/protocol/xttp/message/parts.hpp"
#include "xos/protocol/xttp/message/reader.hpp"

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_ACCEPT_PORT 8080
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_CONNECT_PORT 80
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_RELAY_PORT XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_CONNECT_PORT

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace protocol {
namespace http {
namespace base {

/// class maint
template 
<class TExtends = xos::app::console::network::sockets::protocol::http::base::main_optt<>,  class TImplements = typename TExtends::implements>

class maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    typedef typename extends::sequence_char_t sequence_char_t;
    typedef typename extends::char_sequence_t char_sequence_t;
    typedef typename extends::char_seeker_t char_seeker_t;
    typedef typename extends::char_reader_t char_reader_t;
    typedef typename extends::char_writer_t char_writer_t;
    typedef typename extends::reader_string_t reader_string_t;
    typedef typename extends::string_reader_t string_reader_t;

    /// constructor / destructor
    maint()
    : run_(0),
      accept_port_(XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_ACCEPT_PORT), 
      connect_port_(XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_CONNECT_PORT),
      relay_port_(XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_RELAY_PORT) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint &copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef typename extends::xttp_message_parts_t xttp_message_parts_t;
    typedef typename extends::xttp_message_reader_t xttp_message_reader_t;
    
    typedef typename extends::json_boolean_t json_boolean_t;
    typedef typename extends::json_number_t json_number_t;
    typedef typename extends::json_string_t json_string_t;
    typedef typename extends::json_node_t json_node_t;
    typedef typename extends::json_array_t json_array_t;
    typedef typename extends::json_object_t json_object_t;

    typedef typename extends::headers_t headers_t;
    typedef typename extends::content_encoding_header_t content_encoding_header_t;
    typedef typename extends::content_type_header_t content_type_header_t;
    typedef typename extends::content_length_header_t content_length_header_t;

    typedef typename extends::content_t content_t;
    typedef typename extends::content_type_t content_type_t;
    typedef typename extends::text_content_type_t text_content_type_t;
    typedef typename extends::json_content_type_t json_content_type_t;
    typedef typename extends::text_content_t text_content_t;

    typedef typename extends::http_message_t http_message_t;
    typedef typename extends::http_message_reader_t http_message_reader_t;

    //////////////////////////////////////////////////////////////////////////
    /// run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            LOGGER_IS_LOGGED_INFO("(!(err = (this->*run_)(argc, argv, env)))...");
            if (!(err = (this->*run_)(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = (this->*run_)(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = (this->*run_)(argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("(!(err = extends::run(argc, argv, env)))...");
            if (!(err = extends::run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::run(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(err" << err << " = extends::run(argc, argv, env)))");
            }
        }
        return err;
    }

    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_message_to_send
    virtual int default_prepare_message_to_send(xos::network::sockets::interface& cn, string_t& msg, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        LOGGER_IS_LOGGED_INFO("((chars = msg.has_chars(length)))...");
        if ((chars = msg.has_chars(length))) {
            LOGGER_IS_LOGGED_INFO("...((\"" << chars << "\" = msg.has_chars(" << length << ")))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = msg.has_chars(" << length << ")))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...receive_message
    virtual int default_receive_message(string_t& r, char_t& c, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = this->all_receive_crlf2(r, c, cn, argc, argv, env)))...");
        if (!(err = this->all_receive_crlf2(r, c, cn, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = this->all_receive_crlf2(r, c, cn, argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = this->all_receive_crlf2(r, c, cn, argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...receive_crlf2
    /// ...<cr><lf><cr><lf>
    virtual int on_recv_crlf2(string_t& msg, char_t& c, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        LOGGER_IS_LOGGED_INFO("((chars = msg.has_chars(length)))...");
        if ((chars = msg.has_chars(length))) {
            ssize_t count = 0;
            xttp_message_reader_t msg_reader(msg);
            xttp_message_parts_t& xttp_message_parts = this->xttp_message_parts();
            LOGGER_IS_LOGGED_INFO("...((\"" << chars << "\" = msg.has_chars(" << length << ")))");
            LOGGER_IS_LOGGED_INFO("((xttp_message_parts.read(count, c, msg_reader)))...");
            if ((xttp_message_parts.read(count, c, msg_reader))) {
                ssize_t amount = 0;
                xos::network::sockets::reader reader(cn);
                LOGGER_IS_LOGGED_INFO("...((xttp_message_parts.read(count = " << count << ", c, msg_reader)))");
                LOGGER_IS_LOGGED_INFO("((xttp_message_parts.read_content(amount, c, reader)))...");
                if ((xttp_message_parts.read_content(amount, c, reader))) {
                    LOGGER_IS_LOGGED_INFO("...((xttp_message_parts.read_content(amount = " << amount << ", c, reader)))");
                    LOGGER_IS_LOGGED_INFO("((chars = xttp_message_parts.content_chars(length)))...");
                    if ((chars = xttp_message_parts.content_chars(length))) {
                        LOGGER_IS_LOGGED_INFO("...((\"" << chars << "\" = xttp_message_parts.content_chars(" << length << ")))");
                        LOGGER_IS_LOGGED_INFO("msg.append(\"" << chars << "\", " << length << ")...");
                        msg.append(chars, length);
                    } else {
                        LOGGER_IS_LOGGED_INFO("...failed on ((chars = xttp_message_parts.content_chars(" << length << ")))");
                    }
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on ((xttp_message_parts.read_content(amount = " << amount << ", c, reader)))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on ((xttp_message_parts.read(count = " << count << ", c, msg_reader)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = msg.has_chars(" << length << ")))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    virtual short& accept_port() const {
        return (short&)accept_port_;
    }
    virtual short& connect_port() const {
        return (short&)connect_port_;
    }
    virtual short& relay_port() const {
        return (short&)relay_port_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    short accept_port_, connect_port_, relay_port_;
}; /// class maint 
typedef maint<> main;

} /// namespace base 
} /// namespace http 
} /// namespace protocol 
} /// namespace sockets 
} /// namespace network 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_BASE_MAIN_HPP

