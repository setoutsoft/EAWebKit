/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSHTMLFormElement_h
#define JSHTMLFormElement_h

#include "HTMLFormElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLFormElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLFormElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLFormElement> impl)
    {
        JSHTMLFormElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLFormElement>(globalObject->vm().heap)) JSHTMLFormElement(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertySlotByIndex(JSC::JSObject*, JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static void getOwnPropertyNames(JSC::JSObject*, JSC::ExecState*, JSC::PropertyNameArray&, JSC::EnumerationMode mode = JSC::ExcludeDontEnumProperties);
    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    HTMLFormElement& impl() const
    {
        return static_cast<HTMLFormElement&>(Base::impl());
    }
protected:
    JSHTMLFormElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLFormElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetPropertyNames | JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::HasImpureGetOwnPropertySlot | Base::StructureFlags;
    static JSC::JSValue indexGetter(JSC::ExecState*, JSC::JSValue, unsigned);
private:
    static bool canGetItemsForName(JSC::ExecState*, HTMLFormElement*, JSC::PropertyName);
    static JSC::JSValue nameGetter(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
};


class JSHTMLFormElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSHTMLFormElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLFormElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLFormElementPrototype>(vm.heap)) JSHTMLFormElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLFormElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSHTMLFormElementConstructor : public DOMConstructorObject {
private:
    JSHTMLFormElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLFormElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLFormElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLFormElementConstructor>(vm.heap)) JSHTMLFormElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLFormElementPrototypeFunctionSubmit(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLFormElementPrototypeFunctionReset(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLFormElementPrototypeFunctionCheckValidity(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLFormElementAcceptCharset(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFormElementAcceptCharset(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementAction(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFormElementAction(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementAutocomplete(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFormElementAutocomplete(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementEnctype(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFormElementEnctype(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementEncoding(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFormElementEncoding(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementMethod(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFormElementMethod(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFormElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementNoValidate(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFormElementNoValidate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementTarget(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLFormElementTarget(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFormElementElements(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLFormElementLength(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLFormElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif