#include "httpd.h"
#include "http_core.h"
#include "http_protocol.h"
#include "http_request.h"
static void register_hooks(apr_pool_t *pool);
static int gci_handler(request_rec *r);

module AP_MODULE_DECLARE_DATA   gci_module =
{
    STANDARD20_MODULE_STUFF,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    register_hooks
};

static void register_hooks(apr_pool_t *pool) 
{
    ap_hook_handler(gci_handler, NULL, NULL, APR_HOOK_LAST);
}

static int gci_handler(request_rec *r)
{
    if (!r->handler || strcmp(r->handler, "gci-handler")) return (DECLINED);
    ap_rputs("GCI 2019", r);
    return OK;
}
