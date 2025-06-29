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
///   Date: 5/17/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_RESPONSE_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_RESPONSE_MAIN_HPP

#include "xos/app/console/protocol/http/server/response/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace http {
namespace server {
namespace response {

/// class maint
template 
<class TExtends = xos::app::console::protocol::http::server::response::main_optt<>,  class TImplements = typename TExtends::implements>

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
    maint(): run_(0) {
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

    typedef typename extends::headers_t headers_t;
    typedef typename extends::content_encoding_header_t content_encoding_header_t;
    typedef typename extends::content_type_header_t content_type_header_t;
    typedef typename extends::content_length_header_t content_length_header_t;

    typedef typename extends::content_t content_t;
    typedef typename extends::content_type_t content_type_t;
    typedef typename extends::text_content_type_t text_content_type_t;
    typedef typename extends::json_content_type_t json_content_type_t;
    typedef typename extends::text_content_t text_content_t;

    typedef typename extends::response_status_t response_status_t;
    typedef typename extends::response_reason_t response_reason_t;
    typedef typename extends::response_line_t response_line_t;
    typedef typename extends::response_t response_t;
    typedef typename extends::response_string_t response_string_t;

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
    /// ...prepare_response_to_http_GET_request_run
    virtual int prepare_response_to_http_GET_request_run(string_t& response, const http_message_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_http_request_default_run(response, \"" << request << "\", argc, argv, env)))...");
        if (!(err = all_prepare_response_to_http_request_default_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = all_prepare_response_to_http_request_default_run(response, \"" << request << "\", argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = all_prepare_response_to_http_request_default_run(response, \"" << request << "\", argc, argv, env)))");
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
        const string_t& not_found_response = this->not_found_response();
        const string_t& not_found_response_content = this->not_found_response_content();
        string_t& response_content = this->response_content();

        LOGGER_IS_LOGGED_INFO("response.assign(\"" << not_found_response << "\")...");
        response.assign(not_found_response);
        LOGGER_IS_LOGGED_INFO("response_content.assign(\"" << not_found_response_content << "\")...");
        response_content.assign(not_found_response_content);

        LOGGER_IS_LOGGED_INFO("(!(err =  this->unset_no_append_content_prepare_response_to_output_run(argc, argv, env)))...");
        if (!(err =  this->unset_no_append_content_prepare_response_to_output_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " =  this->unset_no_append_content_prepare_response_to_output_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " =  this->unset_no_append_content_prepare_response_to_output_run(argc, argv, env)))");
        }
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
        const string_t& ok_response = this->ok_response();
        const string_t& ok_response_content = this->ok_response_content();
        string_t& response_content = this->response_content();

        LOGGER_IS_LOGGED_INFO("response.assign(\"" << ok_response << "\")...");
        response.assign(ok_response);
        LOGGER_IS_LOGGED_INFO("response_content.assign(\"" << ok_response_content << "\")...");
        response_content.assign(ok_response_content);

        LOGGER_IS_LOGGED_INFO("(!(err =  this->unset_no_append_content_prepare_response_to_output_run(argc, argv, env)))...");
        if (!(err =  this->unset_no_append_content_prepare_response_to_output_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " =  this->unset_no_append_content_prepare_response_to_output_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " =  this->unset_no_append_content_prepare_response_to_output_run(argc, argv, env)))");
        }
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
protected:
}; /// class maint 
typedef maint<> main;

} /// namespace response 
} /// namespace server 
} /// namespace http 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_RESPONSE_MAIN_HPP
