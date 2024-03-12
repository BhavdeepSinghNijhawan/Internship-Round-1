/* Author: Bhavdeep Singh Nijhawan
   Username: bhavdeepniwp79 */

#include <iostream>
#include <vector>
#include "HTMLValidator.h"
#include "CSSValidator.h"
#include "JSValidator.h"

int main() {
    
    vector<string> html_errors = validate_html(html_code);
    vector<string> css_errors = validate_css(css_code);
    vector<string> js_errors = validate_js(js_code);

    return 0;
}
