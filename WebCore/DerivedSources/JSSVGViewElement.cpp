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

#include "JSSVGViewElement.h"

#include "JSSVGStringList.h"
#include "SVGStringList.h"
#include "SVGViewElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedRect.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGViewElementTableValues[] =
{
    { "viewTarget", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementViewTarget), (intptr_t)0 },
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementExternalResourcesRequired), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "viewBox", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementViewBox), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "preserveAspectRatio", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementPreserveAspectRatio), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "zoomAndPan", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementZoomAndPan), (intptr_t)setJSSVGViewElementZoomAndPan },
#endif
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGViewElementTable = { 16, 15, JSSVGViewElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGViewElementConstructorTableValues[] =
{
#if ENABLE(SVG)
    { "SVG_ZOOMANDPAN_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementSVG_ZOOMANDPAN_UNKNOWN), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "SVG_ZOOMANDPAN_DISABLE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementSVG_ZOOMANDPAN_DISABLE), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "SVG_ZOOMANDPAN_MAGNIFY", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementSVG_ZOOMANDPAN_MAGNIFY), (intptr_t)0 },
#endif
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGViewElementConstructorTable = { 9, 7, JSSVGViewElementConstructorTableValues, 0 };

#if ENABLE(SVG)
COMPILE_ASSERT(0 == SVGViewElement::SVG_ZOOMANDPAN_UNKNOWN, SVGViewElementEnumSVG_ZOOMANDPAN_UNKNOWNIsWrongUseDoNotCheckConstants);
#endif
#if ENABLE(SVG)
COMPILE_ASSERT(1 == SVGViewElement::SVG_ZOOMANDPAN_DISABLE, SVGViewElementEnumSVG_ZOOMANDPAN_DISABLEIsWrongUseDoNotCheckConstants);
#endif
#if ENABLE(SVG)
COMPILE_ASSERT(2 == SVGViewElement::SVG_ZOOMANDPAN_MAGNIFY, SVGViewElementEnumSVG_ZOOMANDPAN_MAGNIFYIsWrongUseDoNotCheckConstants);
#endif

const ClassInfo JSSVGViewElementConstructor::s_info = { "SVGViewElementConstructor", &Base::s_info, &JSSVGViewElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGViewElementConstructor) };

JSSVGViewElementConstructor::JSSVGViewElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGViewElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGViewElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGViewElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGViewElementConstructor, JSDOMWrapper>(exec, JSSVGViewElementConstructorTable, jsCast<JSSVGViewElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGViewElementPrototypeTableValues[] =
{
#if ENABLE(SVG)
    { "SVG_ZOOMANDPAN_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementSVG_ZOOMANDPAN_UNKNOWN), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "SVG_ZOOMANDPAN_DISABLE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementSVG_ZOOMANDPAN_DISABLE), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "SVG_ZOOMANDPAN_MAGNIFY", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementSVG_ZOOMANDPAN_MAGNIFY), (intptr_t)0 },
#endif
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGViewElementPrototypeTable = { 9, 7, JSSVGViewElementPrototypeTableValues, 0 };
const ClassInfo JSSVGViewElementPrototype::s_info = { "SVGViewElementPrototype", &Base::s_info, &JSSVGViewElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGViewElementPrototype) };

JSObject* JSSVGViewElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGViewElement>(vm, globalObject);
}

bool JSSVGViewElementPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGViewElementPrototype* thisObject = jsCast<JSSVGViewElementPrototype*>(object);
    return getStaticValueSlot<JSSVGViewElementPrototype, JSObject>(exec, JSSVGViewElementPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSVGViewElement::s_info = { "SVGViewElement", &Base::s_info, &JSSVGViewElementTable, 0 , CREATE_METHOD_TABLE(JSSVGViewElement) };

JSSVGViewElement::JSSVGViewElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGViewElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGViewElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGViewElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGViewElementPrototype::create(vm, globalObject, JSSVGViewElementPrototype::createStructure(vm, globalObject, JSSVGElementPrototype::self(vm, globalObject)));
}

bool JSSVGViewElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGViewElement* thisObject = jsCast<JSSVGViewElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGViewElement, Base>(exec, JSSVGViewElementTable, thisObject, propertyName, slot);
}

JSValue jsSVGViewElementViewTarget(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewElement* castedThis = jsCast<JSSVGViewElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(impl, impl.viewTarget())));
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGViewElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewElement* castedThis = jsCast<JSSVGViewElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedBoolean> obj = impl.externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGViewElementViewBox(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewElement* castedThis = jsCast<JSSVGViewElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedRect> obj = impl.viewBoxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGViewElementPreserveAspectRatio(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewElement* castedThis = jsCast<JSSVGViewElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = impl.preserveAspectRatioAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGViewElementZoomAndPan(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewElement* castedThis = jsCast<JSSVGViewElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewElement& impl = castedThis->impl();
    JSValue result = jsNumber(impl.zoomAndPan());
    return result;
}

#endif

JSValue jsSVGViewElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewElement* domObject = jsCast<JSSVGViewElement*>(asObject(slotBase));
    return JSSVGViewElement::getConstructor(exec->vm(), domObject->globalObject());
}

void JSSVGViewElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSVGViewElement* thisObject = jsCast<JSSVGViewElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSSVGViewElement, Base>(exec, propertyName, value, JSSVGViewElementTable, thisObject, slot);
}

#if ENABLE(SVG)
void setJSSVGViewElementZoomAndPan(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGViewElement* castedThis = jsCast<JSSVGViewElement*>(thisObject);
    SVGViewElement& impl = castedThis->impl();
    unsigned short nativeValue(toUInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl.setZoomAndPan(nativeValue);
}

#endif

JSValue JSSVGViewElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGViewElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

#if ENABLE(SVG)
JSValue jsSVGViewElementSVG_ZOOMANDPAN_UNKNOWN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

#endif
#if ENABLE(SVG)
JSValue jsSVGViewElementSVG_ZOOMANDPAN_DISABLE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

#endif
#if ENABLE(SVG)
JSValue jsSVGViewElementSVG_ZOOMANDPAN_MAGNIFY(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

#endif

}

#endif // ENABLE(SVG)