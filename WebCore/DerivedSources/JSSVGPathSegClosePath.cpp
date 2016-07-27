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

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGPathSegClosePath.h"

#include "SVGPathSegClosePath.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGPathSegClosePathTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegClosePathConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGPathSegClosePathTable = { 2, 1, JSSVGPathSegClosePathTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGPathSegClosePathConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGPathSegClosePathConstructorTable = { 1, 0, JSSVGPathSegClosePathConstructorTableValues, 0 };
const ClassInfo JSSVGPathSegClosePathConstructor::s_info = { "SVGPathSegClosePathConstructor", &Base::s_info, &JSSVGPathSegClosePathConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegClosePathConstructor) };

JSSVGPathSegClosePathConstructor::JSSVGPathSegClosePathConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegClosePathConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGPathSegClosePathPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGPathSegClosePathConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegClosePathConstructor, JSDOMWrapper>(exec, JSSVGPathSegClosePathConstructorTable, jsCast<JSSVGPathSegClosePathConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegClosePathPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGPathSegClosePathPrototypeTable = { 1, 0, JSSVGPathSegClosePathPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegClosePathPrototype::s_info = { "SVGPathSegClosePathPrototype", &Base::s_info, &JSSVGPathSegClosePathPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegClosePathPrototype) };

JSObject* JSSVGPathSegClosePathPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegClosePath>(vm, globalObject);
}

const ClassInfo JSSVGPathSegClosePath::s_info = { "SVGPathSegClosePath", &Base::s_info, &JSSVGPathSegClosePathTable, 0 , CREATE_METHOD_TABLE(JSSVGPathSegClosePath) };

JSSVGPathSegClosePath::JSSVGPathSegClosePath(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegClosePath> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
}

void JSSVGPathSegClosePath::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGPathSegClosePath::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGPathSegClosePathPrototype::create(vm, globalObject, JSSVGPathSegClosePathPrototype::createStructure(vm, globalObject, JSSVGPathSegPrototype::self(vm, globalObject)));
}

bool JSSVGPathSegClosePath::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGPathSegClosePath* thisObject = jsCast<JSSVGPathSegClosePath*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGPathSegClosePath, Base>(exec, JSSVGPathSegClosePathTable, thisObject, propertyName, slot);
}

JSValue jsSVGPathSegClosePathConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegClosePath* domObject = jsCast<JSSVGPathSegClosePath*>(asObject(slotBase));
    return JSSVGPathSegClosePath::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSSVGPathSegClosePath::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegClosePathConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)