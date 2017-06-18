/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
import com.adobe.test.Assert;

// var SECTION = "Definitions"; // provide a document reference (ie, ECMA section)
// var VERSION = "AS3"; // Version of JavaScript or ECMA
// var TITLE = "Testing try block with multiple catch blocks, the first catch block catching the type error"; // Provide ECMA section title or a description
var BUGNUMBER = "";


thisError = "no error";
thisError1 = "no error";

try {
    try {
        throw new ReferenceError();
    } catch(eo: ReferenceError) {
        thisError1 = "This is outer reference error:" + eo.toString();
        //print(thisError1);
        try {
            throw new TypeError();
        } catch(ei1: ReferenceError) {
            thisError = "Inner reference error:" + ei1.toString();
        } catch(ei2: URIError) {
            thisError = "This is inner URI Error:" + ei2.toString();
        } catch(ei3: EvalError) {
            thisError = "This is inner Eval Error:" + ei3.toString();
        } catch(ei4: RangeError) {
            thisError = "This is inner Range Error:" + ei4.toString();
        } catch(ei5: SecurityError) {
            thisError = "This is inner Security Error!!!" + ei5.toString();
        } catch(ei6: ArgumentError) {
            thisError = "This is inner Argument Error" + ei6.toString();
        }
    } catch(eo1: TypeError) {
        thisError1 = "This is outer TypeError:" + eo1.toString();
    } catch(eo2: ArgumentError) {
        thisError1 = "This is outer Argument Error" + eo2.toString();
    } catch(eo3: URIError) {
        thisError1 = "This is outer URI Error" + eo3.toString();
    } catch(eo4: EvalError) {
        thisError1 = "This is outer Eval Error" + eo4.toString();
    } catch(eo5: RangeError) {
        thisError1 = "This is outer Range Error" + eo5.toString();
    } catch(eo6: SecurityError) {
        thisError1 = "This is outer Security Error!!!" + eo6.toString();
    } catch(eo7: Error) {
        thisError1 = "This is outer Error:" + eo7.toString();
    } finally {
        Assert.expectEq("Testing Nested try block with multiple catch block inside the first catch block of the outer try block", "This is outer finally:This is outer reference error:ReferenceError", "This is outer finally:" + thisError1 + "");
        
    }
} catch (typeError:TypeError) {
    // catch the inner typeerror instead of letting it go uncaught
    Assert.expectEq("Inner TypeError thrown gets caught", "TypeError", typeError.toString());
}

// displays results.
