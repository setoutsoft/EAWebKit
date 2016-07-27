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

#ifndef JSTypeConversions_h
#define JSTypeConversions_h

#include "JSDOMBinding.h"
#include "TypeConversions.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSTypeConversions : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSTypeConversions* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TypeConversions> impl)
    {
        JSTypeConversions* ptr = new (NotNull, JSC::allocateCell<JSTypeConversions>(globalObject->vm().heap)) JSTypeConversions(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSTypeConversions();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    TypeConversions& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    TypeConversions* m_impl;
protected:
    JSTypeConversions(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<TypeConversions>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSTypeConversionsOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, TypeConversions*)
{
    DEFINE_STATIC_LOCAL(JSTypeConversionsOwner, jsTypeConversionsOwner, ());
    return &jsTypeConversionsOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, TypeConversions*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, TypeConversions*);
TypeConversions* toTypeConversions(JSC::JSValue);

class JSTypeConversionsPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSTypeConversionsPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTypeConversionsPrototype* ptr = new (NotNull, JSC::allocateCell<JSTypeConversionsPrototype>(vm.heap)) JSTypeConversionsPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTypeConversionsPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsTypeConversionsTestLong(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTypeConversionsTestLong(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTypeConversionsTestEnforceRangeLong(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTypeConversionsTestEnforceRangeLong(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTypeConversionsTestUnsignedLong(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTypeConversionsTestUnsignedLong(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTypeConversionsTestEnforceRangeUnsignedLong(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTypeConversionsTestEnforceRangeUnsignedLong(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTypeConversionsTestLongLong(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTypeConversionsTestLongLong(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTypeConversionsTestEnforceRangeLongLong(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTypeConversionsTestEnforceRangeLongLong(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTypeConversionsTestUnsignedLongLong(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTypeConversionsTestUnsignedLongLong(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTypeConversionsTestEnforceRangeUnsignedLongLong(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTypeConversionsTestEnforceRangeUnsignedLongLong(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTypeConversionsTestByte(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTypeConversionsTestByte(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTypeConversionsTestEnforceRangeByte(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTypeConversionsTestEnforceRangeByte(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTypeConversionsTestOctet(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTypeConversionsTestOctet(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTypeConversionsTestEnforceRangeOctet(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTypeConversionsTestEnforceRangeOctet(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);

} // namespace WebCore

#endif