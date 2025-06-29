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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 1/26/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_OPT_HPP

#include "xos/app/console/protocol/http/base/main.hpp"
#include "xos/app/console/protocol/xttp/server/main.hpp"

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPT "status"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTARG "[0..n]"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTUSE \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_PROTOCOL_name " response status code"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTVAL_S "S::"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPT "reason"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTARG "[string]"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTUSE \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_PROTOCOL_name " response status reason"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTVAL_S "A::"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTVAL_C 'A'
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace http {
namespace server {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::http::base::maint
 <xos::app::console::protocol::http::base::main_optt
 <xos::app::console::protocol::xttp::server::maint
 <xos::app::console::protocol::xttp::server::main_optt
 <xos::app::console::protocol::xttp::base::maint
 <xos::app::console::protocol::xttp::base::main_optt
 <xos::app::console::protocol::ttp::server::maint
 <xos::app::console::protocol::ttp::server::main_optt
 <xos::app::console::protocol::ttp::base::maint
 <xos::app::console::protocol::ttp::base::main_optt
 <xos::app::console::protocol::server::maint
 <xos::app::console::protocol::server::main_optt
 <xos::app::console::protocol::base::maint
 <xos::app::console::protocol::base::main_optt<> > > > > > > > > > > > > >,  class TImplements = typename TExtends::implements>

class main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

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
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt &copy) {
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
    int (derives::*status_run_)(int argc, char_t** argv, char_t** env);
    virtual int status_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (status_run_) {
            LOGGER_IS_LOGGED_INFO("(!(err = (this->*status_run_)(argc, argv, env)))...");
            if (!(err = (this->*status_run_)(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = (this->*status_run_)(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = (this->*status_run_)(argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("(!(err = default_status_run(argc, argv, env)))...");
            if (!(err = default_status_run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = default_status_run(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on(!(" << err << " = default_status_run(argc, argv, env)))");
            }
        }
        return err;
    }
    virtual int default_status_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = extends::run(argc, argv, env)))...");
        if (!(err = extends::run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = extends::run(argc, argv, env)))");
        }
        return err;
    }
    virtual int before_status_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_status_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_status_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_status_run(argc, argv, env))) {
            int err2 = 0;
            err = status_run(argc, argv, env);
            if ((err2 = after_status_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_status_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_status_run;
        return err;
    }
    virtual int status_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_status_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int status_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...reason_run
    int (derives::*reason_run_)(int argc, char_t** argv, char_t** env);
    virtual int reason_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (reason_run_) {
            LOGGER_IS_LOGGED_INFO("(!(err = (this->*reason_run_)(argc, argv, env)))...");
            if (!(err = (this->*reason_run_)(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = (this->*reason_run_)(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = (this->*reason_run_)(argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("(!(err = default_reason_run(argc, argv, env)))...");
            if (!(err = default_reason_run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = default_reason_run(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on(!(" << err << " = default_reason_run(argc, argv, env)))");
            }
        }
        return err;
    }
    virtual int default_reason_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = extends::run(argc, argv, env)))...");
        if (!(err = extends::run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = extends::run(argc, argv, env)))");
        }
        return err;
    }
    virtual int before_reason_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_reason_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_reason_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_reason_run(argc, argv, env))) {
            int err2 = 0;
            err = reason_run(argc, argv, env);
            if ((err2 = after_reason_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_reason_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_reason_run;
        return err;
    }
    virtual int reason_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_reason_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int reason_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on...status_option...
    virtual int on_get_status_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_status_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_status_run(argc, argv, env))) {
            if (!(err = status_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_status_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_status_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_status_run(argc, argv, env))) {
                if (!(err = status_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_status_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_status_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_status_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_status_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_status_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* status_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...reason_option...
    virtual int on_get_reason_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_reason_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_reason_run(argc, argv, env))) {
            if (!(err = reason_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_reason_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_reason_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_reason_run(argc, argv, env))) {
                if (!(err = reason_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_reason_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_reason_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_reason_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_reason_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_reason_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* reason_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTVAL_C:
            err = this->on_status_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTVAL_C:
            err = this->on_reason_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// option_usage
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_STATUS_OPTVAL_C:
            chars = this->status_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_REASON_OPTVAL_C:
            chars = this->reason_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace server 
} /// namespace http 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_HTTP_SERVER_MAIN_OPT_HPP

