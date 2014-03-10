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

#include "JSSVGTextContentElement.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGPoint.h"
#include "JSSVGRect.h"
#include "SVGPoint.h"
#include "SVGRect.h"
#include "SVGTextContentElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGTextContentElementTableValues[] =
{
    { "textLength", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementTextLength), (intptr_t)0 },
    { "lengthAdjust", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLengthAdjust), (intptr_t)0 },
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementExternalResourcesRequired), (intptr_t)0 },
#endif
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGTextContentElementTable = { 9, 7, JSSVGTextContentElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGTextContentElementConstructorTableValues[] =
{
    { "LENGTHADJUST_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLENGTHADJUST_UNKNOWN), (intptr_t)0 },
    { "LENGTHADJUST_SPACING", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLENGTHADJUST_SPACING), (intptr_t)0 },
    { "LENGTHADJUST_SPACINGANDGLYPHS", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLENGTHADJUST_SPACINGANDGLYPHS), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGTextContentElementConstructorTable = { 8, 7, JSSVGTextContentElementConstructorTableValues, 0 };

COMPILE_ASSERT(0 == SVGTextContentElement::LENGTHADJUST_UNKNOWN, SVGTextContentElementEnumLENGTHADJUST_UNKNOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == SVGTextContentElement::LENGTHADJUST_SPACING, SVGTextContentElementEnumLENGTHADJUST_SPACINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == SVGTextContentElement::LENGTHADJUST_SPACINGANDGLYPHS, SVGTextContentElementEnumLENGTHADJUST_SPACINGANDGLYPHSIsWrongUseDoNotCheckConstants);

const ClassInfo JSSVGTextContentElementConstructor::s_info = { "SVGTextContentElementConstructor", &Base::s_info, &JSSVGTextContentElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGTextContentElementConstructor) };

JSSVGTextContentElementConstructor::JSSVGTextContentElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGTextContentElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGTextContentElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGTextContentElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTextContentElementConstructor, JSDOMWrapper>(exec, JSSVGTextContentElementConstructorTable, jsCast<JSSVGTextContentElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGTextContentElementPrototypeTableValues[] =
{
    { "LENGTHADJUST_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLENGTHADJUST_UNKNOWN), (intptr_t)0 },
    { "LENGTHADJUST_SPACING", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLENGTHADJUST_SPACING), (intptr_t)0 },
    { "LENGTHADJUST_SPACINGANDGLYPHS", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLENGTHADJUST_SPACINGANDGLYPHS), (intptr_t)0 },
    { "getNumberOfChars", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetNumberOfChars), (intptr_t)0 },
    { "getComputedTextLength", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetComputedTextLength), (intptr_t)0 },
    { "getSubStringLength", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetSubStringLength), (intptr_t)0 },
    { "getStartPositionOfChar", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetStartPositionOfChar), (intptr_t)0 },
    { "getEndPositionOfChar", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetEndPositionOfChar), (intptr_t)0 },
    { "getExtentOfChar", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetExtentOfChar), (intptr_t)0 },
    { "getRotationOfChar", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetRotationOfChar), (intptr_t)0 },
    { "getCharNumAtPosition", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetCharNumAtPosition), (intptr_t)0 },
    { "selectSubString", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionSelectSubString), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGTextContentElementPrototypeTable = { 33, 31, JSSVGTextContentElementPrototypeTableValues, 0 };
const ClassInfo JSSVGTextContentElementPrototype::s_info = { "SVGTextContentElementPrototype", &Base::s_info, &JSSVGTextContentElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGTextContentElementPrototype) };

JSObject* JSSVGTextContentElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTextContentElement>(vm, globalObject);
}

bool JSSVGTextContentElementPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGTextContentElementPrototype* thisObject = jsCast<JSSVGTextContentElementPrototype*>(object);
    return getStaticPropertySlot<JSSVGTextContentElementPrototype, JSObject>(exec, JSSVGTextContentElementPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSVGTextContentElement::s_info = { "SVGTextContentElement", &Base::s_info, &JSSVGTextContentElementTable, 0 , CREATE_METHOD_TABLE(JSSVGTextContentElement) };

JSSVGTextContentElement::JSSVGTextContentElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGTextContentElement> impl)
    : JSSVGGraphicsElement(structure, globalObject, impl)
{
}

void JSSVGTextContentElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGTextContentElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGTextContentElementPrototype::create(vm, globalObject, JSSVGTextContentElementPrototype::createStructure(vm, globalObject, JSSVGGraphicsElementPrototype::self(vm, globalObject)));
}

bool JSSVGTextContentElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGTextContentElement* thisObject = jsCast<JSSVGTextContentElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGTextContentElement, Base>(exec, JSSVGTextContentElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGTextContentElementTextLength(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGTextContentElement* castedThis = jsDynamicCast<JSSVGTextContentElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGTextContentElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.textLengthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGTextContentElementLengthAdjust(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGTextContentElement* castedThis = jsDynamicCast<JSSVGTextContentElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGTextContentElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedEnumeration> obj = impl.lengthAdjustAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


#if ENABLE(SVG)
EncodedJSValue jsSVGTextContentElementExternalResourcesRequired(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGTextContentElement* castedThis = jsDynamicCast<JSSVGTextContentElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGTextContentElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedBoolean> obj = impl.externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}

#endif

EncodedJSValue jsSVGTextContentElementConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGTextContentElement* domObject = jsDynamicCast<JSSVGTextContentElement*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGTextContentElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGTextContentElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGTextContentElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetNumberOfChars(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGTextContentElement* castedThis = jsDynamicCast<JSSVGTextContentElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGTextContentElement::info());
    SVGTextContentElement& impl = castedThis->impl();

    JSC::JSValue result = jsNumber(impl.getNumberOfChars());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetComputedTextLength(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGTextContentElement* castedThis = jsDynamicCast<JSSVGTextContentElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGTextContentElement::info());
    SVGTextContentElement& impl = castedThis->impl();

    JSC::JSValue result = jsNumber(impl.getComputedTextLength());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetSubStringLength(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGTextContentElement* castedThis = jsDynamicCast<JSSVGTextContentElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGTextContentElement::info());
    SVGTextContentElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int offset(toUInt32(exec, exec->argument(0), NormalConversion));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int length(toUInt32(exec, exec->argument(1), NormalConversion));
    if (length < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsNumber(impl.getSubStringLength(offset, length, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetStartPositionOfChar(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGTextContentElement* castedThis = jsDynamicCast<JSSVGTextContentElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGTextContentElement::info());
    SVGTextContentElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int offset(toUInt32(exec, exec->argument(0), NormalConversion));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGPoint>::create(impl.getStartPositionOfChar(offset, ec))));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetEndPositionOfChar(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGTextContentElement* castedThis = jsDynamicCast<JSSVGTextContentElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGTextContentElement::info());
    SVGTextContentElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int offset(toUInt32(exec, exec->argument(0), NormalConversion));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGPoint>::create(impl.getEndPositionOfChar(offset, ec))));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetExtentOfChar(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGTextContentElement* castedThis = jsDynamicCast<JSSVGTextContentElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGTextContentElement::info());
    SVGTextContentElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int offset(toUInt32(exec, exec->argument(0), NormalConversion));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(impl.getExtentOfChar(offset, ec))));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetRotationOfChar(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGTextContentElement* castedThis = jsDynamicCast<JSSVGTextContentElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGTextContentElement::info());
    SVGTextContentElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int offset(toUInt32(exec, exec->argument(0), NormalConversion));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsNumber(impl.getRotationOfChar(offset, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetCharNumAtPosition(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGTextContentElement* castedThis = jsDynamicCast<JSSVGTextContentElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGTextContentElement::info());
    SVGTextContentElement& impl = castedThis->impl();
    SVGPropertyTearOff<SVGPoint>* point(toSVGPoint(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    if (!point) {
        setDOMException(exec, TYPE_MISMATCH_ERR);
        return JSValue::encode(jsUndefined());
    }

    JSC::JSValue result = jsNumber(impl.getCharNumAtPosition(point->propertyReference()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionSelectSubString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGTextContentElement* castedThis = jsDynamicCast<JSSVGTextContentElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGTextContentElement::info());
    SVGTextContentElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int offset(toUInt32(exec, exec->argument(0), NormalConversion));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int length(toUInt32(exec, exec->argument(1), NormalConversion));
    if (length < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.selectSubString(offset, length, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

// Constant getters

EncodedJSValue jsSVGTextContentElementLENGTHADJUST_UNKNOWN(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0)));
}

EncodedJSValue jsSVGTextContentElementLENGTHADJUST_SPACING(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(1)));
}

EncodedJSValue jsSVGTextContentElementLENGTHADJUST_SPACINGANDGLYPHS(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(2)));
}


}

#endif // ENABLE(SVG)