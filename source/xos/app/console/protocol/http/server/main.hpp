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
///   Date: 1/26/2025, 2/8/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_HPP

#include "xos/app/console/protocol/http/server/main_opt.hpp"

#include "xos/protocol/http/request/method/which.hpp"
#include "xos/protocol/http/request/method/name.hpp"
#include "xos/protocol/http/request/method/nameof.hpp"
#include "xos/protocol/http/request/resource/which.hpp"
#include "xos/protocol/http/request/resource/identifier.hpp"
#include "xos/protocol/http/request/line.hpp"
#include "xos/protocol/http/request/message.hpp"

#include "xos/protocol/http/response/status/codeof.hpp"
#include "xos/protocol/http/response/status/reason.hpp"
#include "xos/protocol/http/response/line.hpp"
#include "xos/protocol/http/response/message.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace http {
namespace server {

/// class maint
template 
<class TExtends = xos::app::console::protocol::http::server::main_optt<>,  class TImplements = typename TExtends::implements>

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
      status_(ok_), not_found_status_(not_found_), 
      reason_(status_), not_found_reason_(not_found_status_), 
      response_line_(this->protocol(), status_, reason_), 
      ok_response_line_(this->protocol(), ok_status_, ok_reason_),
      not_found_response_line_(this->protocol(), not_found_status_, not_found_reason_),
      response_headers_(&this->content_type_header(), &this->content_length_header(), null),
      ok_response_headers_(&this->ok_content_type_header(), &this->ok_content_length_header(), null),
      not_found_response_headers_(&this->not_found_content_type_header(), &this->not_found_content_length_header(), null),
      response_(response_line_, response_headers_, this->response_content()),
      ok_response_(ok_response_line_, ok_response_headers_, this->ok_response_content()),
      not_found_response_(not_found_response_line_, not_found_response_headers_, this->not_found_response_content()) {
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

    typedef xos::protocol::http::request::method::name request_method_t;
    typedef xos::protocol::http::request::resource::identifier request_resource_t;
    typedef xos::protocol::http::request::line request_line_t;
    typedef xos::protocol::http::request::message request_t;
    typedef xos::protocol::http::request::message::string_t request_string_t;

    typedef xos::protocol::http::response::status::code response_status_t;
    typedef xos::protocol::http::response::status::reason response_reason_t;
    typedef xos::protocol::http::response::line response_line_t;
    typedef xos::protocol::http::response::message response_t;
    typedef xos::protocol::http::response::message::string_t response_string_t;

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
    /// ...status_run
    virtual int default_status_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        response_status_t& response_status = this->response_status();
        
        if ((chars = response_status.has_chars(length))) {
            this->output_text_run(chars, length, argc, argv, env);
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...reason_run
    virtual int default_reason_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        response_reason_t& response_reason = this->response_reason();
        
        if ((chars = response_reason.has_chars(length))) {
            this->output_text_run(chars, length, argc, argv, env);
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_output_run
    int (derives::*default_prepare_response_to_output_run_)(string_t& response, int argc, char_t** argv, char_t** env);
    virtual int default_prepare_response_to_output_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (default_prepare_response_to_output_run_) {
            LOGGER_IS_LOGGED_INFO("(!(err = (this->*default_prepare_response_to_output_run_)(response, argc, argv, env)))...");
            if (!(err = (this->*default_prepare_response_to_output_run_)(response, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = (this->*default_prepare_response_to_output_run_)(response, argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = (this->*default_prepare_response_to_output_run_)(response, argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("(!(err = append_content_prepare_response_to_output_run(response, argc, argv, env)))...");
            if (!(err = append_content_prepare_response_to_output_run(response, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = append_content_prepare_response_to_output_run(response, argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on(!(" << err << " = default_default_prepare_response_to_output_run(response, argc, argv, env)))");
            }
        }
        return err;
    }
    virtual int append_content_prepare_response_to_output_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        content_t& response_content = this->response_content();
        
        LOGGER_IS_LOGGED_INFO("((chars = response_content.has_chars(length)))...");
        if ((chars = response_content.has_chars(length))) {
            LOGGER_IS_LOGGED_INFO("...((\"" << chars << "\" = response_content.has_chars(" << length << ")))");
            LOGGER_IS_LOGGED_INFO("response.append(\"" << chars << "\", " << length << ")...");
            response.append(chars, length);
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = response_content.has_chars(" << length << ")))");
        }
        return err;
    }
    virtual int no_append_content_prepare_response_to_output_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_no_append_content_prepare_response_to_output_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        default_prepare_response_to_output_run_ = &derives::no_append_content_prepare_response_to_output_run;
        return err;
    }
    virtual int no_append_content_prepare_response_to_output_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_no_append_content_prepare_response_to_output_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        default_prepare_response_to_output_run_ = 0;
        return err;
    }
    virtual int no_append_content_prepare_response_to_output_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...file_on_set_response_option
    virtual int on_file_on_set_response_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            LOGGER_IS_LOGGED_INFO("(!(err = set_no_append_content_prepare_response_to_output_run(argc, argv, env)))...");
            if (!(err = set_no_append_content_prepare_response_to_output_run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = set_no_append_content_prepare_response_to_output_run(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = set_no_append_content_prepare_response_to_output_run(argc, argv, env)))");
            }
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_unknown_request_run
    virtual int before_prepare_response_to_unknown_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;        
        const string_t &unknown_response = this->not_found_response(), 
                       &unknown_response_content = this->not_found_response_content();
        LOGGER_IS_LOGGED_INFO("response.assign(unknown_response = \"" << unknown_response << "\")...");
        response.assign(unknown_response);
        LOGGER_IS_LOGGED_INFO("((chars = unknown_response_content.has_chars(length)))...");
        if ((chars = unknown_response_content.has_chars(length))) {
            LOGGER_IS_LOGGED_INFO("...((\"" << chars << "\" = unknown_response_content.has_chars(" << length << ")))");
            LOGGER_IS_LOGGED_INFO("(!(err = set_no_append_content_prepare_response_to_output_run(argc, argv, env)))...");
            if (!(err = set_no_append_content_prepare_response_to_output_run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = set_no_append_content_prepare_response_to_output_run(argc, argv, env)))");
                LOGGER_IS_LOGGED_INFO("response.append(\"" << chars << "\", " << length << ")...");
                response.append(chars, length);
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = set_no_append_content_prepare_response_to_output_run(argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = unknown_response_content.has_chars(" << length << ")))");
        }
        return err;
    }
    virtual int default_prepare_response_to_unknown_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;

        LOGGER_IS_LOGGED_INFO("((chars = request.has_chars(length)))...");
        if ((chars = request.has_chars(length))) {
            ssize_t count = 0; char_t c = 0;
            http_message_reader_t request_reader(request);
            http_message_t& http_request = this->http_request();

            LOGGER_IS_LOGGED_INFO("...((\"" << chars << "\" = request.has_chars(" << length << ")))");
            LOGGER_IS_LOGGED_INFO("((http_request.read_with_content(count, c, request_reader)))...");
            if ((http_request.read_with_content(count, c, request_reader))) {

                LOGGER_IS_LOGGED_INFO("...((http_request.read_with_content(count = " << count << ", c, request_reader)))");
                LOGGER_IS_LOGGED_INFO("(!(err = prepare_response_to_http_request_run(\"" << response << "\", \"" << http_request << "\", argc, argv, env)))...");
                if (!(err = prepare_response_to_http_request_run(response, http_request, argc, argv, env))) {
                    LOGGER_IS_LOGGED_INFO("...(!(" << err << " = prepare_response_to_http_request_run(\"" << response << "\", \"" << http_request << "\", argc, argv, env)))");
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = prepare_response_to_http_request_run(\"" << response << "\", \"" << http_request << "\", argc, argv, env)))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on ((http_request.read_with_content(count = " << count << ", c, literal_reader)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = request.has_chars(" << length << ")))");
        }
        return err;
    }
    virtual int prepare_response_to_http_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const xos::protocol::http::request::line& line = request.line();
        const xos::protocol::xttp::request::method& method = line.method();
        const xos::protocol::http::request::resource::identifier& resource = line.resource();
        xos::protocol::http::request::method::which_t which = method.which();
        LOGGER_IS_LOGGED_INFO("...xos::protocol::http::request::line = \"" << line << "\"");
        LOGGER_IS_LOGGED_INFO("...xos::protocol::xttp::request::method = \"" << method << "\"");
        LOGGER_IS_LOGGED_INFO("...xos::protocol::http::request::resource::identifier = \"" << resource << "\"");
        LOGGER_IS_LOGGED_INFO("...xos::protocol::http::request::method::which_t = "<< which <<"");
        LOGGER_IS_LOGGED_INFO("switch (which = "<< which <<") {...");
        switch (which) {
        
        case xos::protocol::http::request::method::GET:
            LOGGER_IS_LOGGED_INFO("...case xos::protocol::http::request::method::GET:");
            LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_http_GET_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))...");
            if (!(err = all_prepare_response_to_http_GET_request_run(response, request, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = all_prepare_response_to_http_GET_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = all_prepare_response_to_http_GET_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
            }
            break;

        case xos::protocol::http::request::method::POST:
            LOGGER_IS_LOGGED_INFO("...case xos::protocol::http::request::method::POST:");
            LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_http_POST_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))...");
            if (!(err = all_prepare_response_to_http_POST_request_run(response, request, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = all_prepare_response_to_http_POST_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = all_prepare_response_to_http_POST_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
            }
            break;

        case xos::protocol::http::request::method::restart:
            LOGGER_IS_LOGGED_INFO("...case xos::protocol::http::request::method::restart:");
            LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_http_restart_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))...");
            if (!(err = all_prepare_response_to_http_restart_request_run(response, request, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = all_prepare_response_to_http_restart_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = all_prepare_response_to_http_restart_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
            }
            break;

        case xos::protocol::http::request::method::stop:
            LOGGER_IS_LOGGED_INFO("...case xos::protocol::http::request::method::stop:");
            LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_http_stop_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))...");
            if (!(err = all_prepare_response_to_http_stop_request_run(response, request, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = all_prepare_response_to_http_stop_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = all_prepare_response_to_http_stop_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
            }
            break;

        default:
            LOGGER_IS_LOGGED_INFO("...default:");
            LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_http_unknown_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))...");
            if (!(err = all_prepare_response_to_http_unknown_request_run(response, request, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = all_prepare_response_to_http_unknown_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = all_prepare_response_to_http_unknown_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
            }
            break;
        } /// switch (which)
        LOGGER_IS_LOGGED_INFO("...} /// switch (which = "<< which <<")");
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_http_GET_request_run
    virtual int prepare_response_to_http_GET_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_http_request_default_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))...");
        if (!(err = all_prepare_response_to_http_request_default_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = all_prepare_response_to_http_request_default_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = all_prepare_response_to_http_request_default_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
        }
        return err;
    }
    virtual int before_prepare_response_to_http_GET_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_http_GET_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_http_GET_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_http_GET_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_http_GET_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_http_GET_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_http_POST_request_run
    virtual int prepare_response_to_http_POST_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_http_request_default_run(response, \"" << request << "\", argc, argv, env)))...");
        if (!(err = all_prepare_response_to_http_request_default_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = all_prepare_response_to_http_request_default_run(response, \"" << request << "\", argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = all_prepare_response_to_http_request_default_run(response, \"" << request << "\", argc, argv, env)))");
        }
        return err;
    }
    virtual int before_prepare_response_to_http_POST_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_http_POST_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_http_POST_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_http_POST_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_http_POST_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_http_POST_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_http_restart_request_run
    virtual int prepare_response_to_http_restart_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_http_request_default_run(response, \"" << request << "\", argc, argv, env)))...");
        if (!(err = all_prepare_response_to_http_request_default_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = all_prepare_response_to_http_request_default_run(response, \"" << request << "\", argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = all_prepare_response_to_http_request_default_run(response, \"" << request << "\", argc, argv, env)))");
        }
        return err;
    }
    virtual int before_prepare_response_to_http_restart_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_http_restart_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_http_restart_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_http_restart_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_http_restart_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_http_restart_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_http_stop_request_run
    virtual int prepare_response_to_http_stop_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_http_request_default_run(response, \"" << request << "\", argc, argv, env)))...");
        if (!(err = all_prepare_response_to_http_request_default_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = all_prepare_response_to_http_request_default_run(response, \"" << request << "\", argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = all_prepare_response_to_http_request_default_run(response, \"" << request << "\", argc, argv, env)))");
        }
        return err;
    }
    virtual int before_prepare_response_to_http_stop_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_http_stop_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_http_stop_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_http_stop_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_http_stop_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_http_stop_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_http_unknown_request_run
    virtual int prepare_response_to_http_unknown_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_prepare_response_to_http_unknown_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_http_unknown_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_http_unknown_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_http_unknown_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_http_unknown_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_http_unknown_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_http_request_default_run
    virtual int prepare_response_to_http_request_default_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_prepare_response_to_http_request_default_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_http_request_default_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_http_request_default_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_http_request_default_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_http_request_default_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_http_request_default_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    
    //////////////////////////////////////////////////////////////////////////
    virtual int on_response_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = extends::on_response_option_set(optarg, optind, argc, argv, env))) {
                response_t& response = this->response();
                clear_response_content();
                response.assign(optarg);
            } else {
            }
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...response...
    virtual response_string_t& response_literal() const {
        return (response_string_t&)response_literal_;
    }
    virtual response_t& set_response(const string_t& to) {
        response_t& response = this->response();
        response.set(to);
        return response;
    }
    virtual response_t& set_response(const char_t* to, size_t length) {
        response_t& response = this->response();
        response.set(to, length);
        return response;
    }
    virtual response_t& response_combine_with_content() {
        response_t& response = this->response();
        response.combine_with_content();
        return response;
    }
    virtual response_t& response_combine() {
        response_t& response = this->response();
        response.combine();
        return response;
    }
    virtual response_t& response_separate() {
        response_t& response = this->response();
        response.separate();
        return response;
    }
    virtual response_t& response() const {
        return (response_t&)response_;
    }
    virtual headers_t& response_headers() const {
        return (headers_t&)response_headers_;
    }
    virtual response_line_t& set_response_line(const string_t& to) {
        response_line_t& response_line = this->response_line();
        response_line.set(to);
        return response_line;
    }
    virtual response_line_t& set_response_line(const char_t* to, size_t length) {
        response_line_t& response_line = this->response_line();
        response_line.set(to, length);
        return response_line;
    }
    virtual response_line_t& response_line() const {
        return (response_line_t&)response_line_;
    }
    virtual response_reason_t& response_reason() const {
        return (response_reason_t&)reason_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...response...
    virtual response_t& ok_response() const {
        return (response_t&)ok_response_;
    }
    virtual headers_t& ok_response_headers() const {
        return (headers_t&)ok_response_headers_;
    }
    virtual response_line_t& ok_response_line() const {
        return (response_line_t&)ok_response_line_;
    }
    virtual response_reason_t& ok_response_reason() const {
        return (response_reason_t&)ok_reason_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...response...
    virtual response_t& not_found_response() const {
        return (response_t&)not_found_response_;
    }
    virtual headers_t& not_found_response_headers() const {
        return (headers_t&)not_found_response_headers_;
    }
    virtual response_line_t& not_found_response_line() const {
        return (response_line_t&)not_found_response_line_;
    }
    virtual response_reason_t& not_found_response_reason() const {
        return (response_reason_t&)not_found_reason_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...response_status...
    virtual response_status_t& set_response_status_ok() {
        return set_response_status(response_status_ok());
    }
    virtual response_status_t& response_status_ok() const {
        return (response_status_t&)ok_;
    }
    virtual response_status_t& set_response_status_not_found() {
        return set_response_status(response_status_not_found());
    }
    virtual response_status_t& response_status_not_found() const {
        return (response_status_t&)not_found_;
    }
    virtual response_status_t& set_response_status(const response_status_t& to) {
        return set_response_status(to.chars());
    }
    virtual response_status_t& set_response_status(const char_t* to) {
        response_status_t& status_ = this->response_status();
        response_reason_t& reason_ = this->response_reason();
        response_line_t& response_line_ = this->response_line();
        response_t& response_ = this->response();
        status_.set(to);
        reason_.set(status_);
        response_line_.set_status(status_);
        response_line_.set_reason(reason_);
        response_.set_status(status_);
        response_.set_reason(reason_);
        response_.set_line(response_line_);
        return (response_status_t&)status_;
    }
    virtual response_status_t& response_status() const {
        return (response_status_t&)status_;
    }
    virtual response_status_t& ok_response_status() const {
        return (response_status_t&)ok_status_;
    }
    virtual response_status_t& not_found_response_status() const {
        return (response_status_t&)not_found_status_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...response_content...
    virtual const content_type_t& set_response_content_type(const string_t& to) {
        size_t to_length = 0;
        const char_t* to_chars = to.has_chars(to_length);
        return set_response_content_type(to_chars, to_length);
    }
    virtual const content_type_t& set_response_content_type(const char_t* to, size_t length) {
        headers_t& headers = this->response_headers();
        if ((to) && (length)) {
            response_line_t& response_line = this->response_line();
            response_t& response = this->response();
            content_t& content = this->content();
            headers.set_content_type(to, length);
            response.set(response_line, headers, content);
        }
        return headers.content_type();
    }
    virtual content_t& set_response_content(const string_t& to) {
        size_t to_length = 0;
        const char_t* to_chars = to.has_chars(to_length);
        return set_response_content(to_chars, to_length);
    }
    virtual content_t& set_response_content(const char_t* to, size_t length) {
        content_t& content = this->content();
        if ((to) && (length)) {
            response_line_t& response_line = this->response_line();
            headers_t& headers = this->response_headers();
            response_t& response = this->response();
            headers.set_content_length(length);
            content.set(to, length);
            response.set(response_line, headers, content);
        }
        return content;
    }
    virtual content_t& clear_response_content() {
        content_t& response_content = this->response_content();
        response_line_t& response_line = this->response_line();
        headers_t& headers = this->response_headers();
        response_t& response = this->response();
        headers.set_content_length(0);
        response_content.clear();
        response.set(response_line, headers);
        return response_content;
    }
    virtual content_t& response_content() const {
        content_t& response_content = this->content();
        return response_content;
    }
    virtual content_t& ok_response_content() const {
        content_t& ok_response_content = this->ok_content();
        return ok_response_content;
    }
    virtual content_t& not_found_response_content() const {
        content_t& not_found_response_content = this->not_found_content();
        return not_found_response_content;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual headers_t& request_headers() const {
        return (headers_t&)request_headers_;
    }
    virtual request_line_t& set_request_line(const string_t& to) {
        request_line_t& request_line = this->request_line();
        request_line.set(to);
        return request_line;
    }
    virtual request_line_t& set_request_line(const char_t* to, size_t length) {
        request_line_t& request_line = this->request_line();
        request_line.set(to, length);
        return request_line;
    }
    virtual request_line_t& request_line() const {
        return (request_line_t&)request_line_;
    }
    virtual request_t& request_combine_with_content() {
        request_t& request = this->request();
        request.combine_with_content();
        return request;
    }
    virtual request_t& request() const {
        return (request_t&)request_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...request_content
    virtual const content_type_t& set_request_content_type(const string_t& to) {
        size_t to_length = 0;
        const char_t* to_chars = to.has_chars(to_length);
        return set_request_content_type(to_chars, to_length);
    }
    virtual const content_type_t& set_request_content_type(const char_t* to, size_t length) {
        headers_t& headers = this->request_headers();
        if ((to) && (length)) {
            request_line_t& request_line = this->request_line();
            request_t& request = this->request();
            content_t& content = this->content();
            headers.set_content_type(to, length);
            request.set(request_line, headers, content);
        }
        return headers.content_type();
    }
    virtual content_t& set_request_content(const string_t& to) {
        size_t to_length = 0;
        const char_t* to_chars = to.has_chars(to_length);
        return set_request_content(to_chars, to_length);
    }
    virtual content_t& set_request_content(const char_t* to, size_t length) {
        content_t& request_content = this->request_content();
        if ((to) && (length)) {
            request_line_t& request_line = this->request_line();
            headers_t& headers = this->request_headers();
            request_t& request = this->request();
            headers.set_content_length(length);
            request_content.set(to, length);
            request.set(request_line, headers, request_content);
        }
        return request_content;
    }
    virtual content_t& request_content() const {
        return (content_t&)request_content_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    xos::protocol::http::response::status::codeof::OK ok_;
    xos::protocol::http::response::status::codeof::Not_Found not_found_;
    xos::protocol::http::response::status::code status_, ok_status_, not_found_status_;
    xos::protocol::http::response::status::reason reason_, ok_reason_, not_found_reason_;

    xos::protocol::http::response::line response_line_, ok_response_line_, not_found_response_line_;
    xos::protocol::http::message::header::fields response_headers_, ok_response_headers_, not_found_response_headers_;
    xos::protocol::http::response::message response_, ok_response_, not_found_response_;
    xos::protocol::http::response::message::string_t response_literal_;

    xos::protocol::http::request::line request_line_;
    xos::protocol::http::message::header::fields request_headers_;
    xos::protocol::http::request::message request_;
    xos::protocol::http::request::message::string_t request_literal_;
    content_t request_content_;
}; /// class maint 
typedef maint<> main;

} /// namespace server 
} /// namespace http 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_HPP

