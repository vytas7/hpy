
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by tools/autogen.py from tools/public_api.h.
   Run this to regenerate:
       make autogen

*/

static inline HPy HPyModule_Create(HPyContext ctx, HPyModuleDef *def) {
     return ctx->ctx_Module_Create ( ctx, def ); 
}

static inline HPy HPy_Dup(HPyContext ctx, HPy h) {
     return ctx->ctx_Dup ( ctx, h ); 
}

static inline void HPy_Close(HPyContext ctx, HPy h) {
     ctx->ctx_Close ( ctx, h ); 
}

static inline HPy HPyLong_FromLong(HPyContext ctx, long value) {
     return ctx->ctx_Long_FromLong ( ctx, value ); 
}

static inline HPy HPyLong_FromLongLong(HPyContext ctx, long long v) {
     return ctx->ctx_Long_FromLongLong ( ctx, v ); 
}

static inline HPy HPyLong_FromUnsignedLongLong(HPyContext ctx, unsigned long long v) {
     return ctx->ctx_Long_FromUnsignedLongLong ( ctx, v ); 
}

static inline long HPyLong_AsLong(HPyContext ctx, HPy h) {
     return ctx->ctx_Long_AsLong ( ctx, h ); 
}

static inline HPy HPyFloat_FromDouble(HPyContext ctx, double v) {
     return ctx->ctx_Float_FromDouble ( ctx, v ); 
}

static inline double HPyFloat_AsDouble(HPyContext ctx, HPy h) {
     return ctx->ctx_Float_AsDouble ( ctx, h ); 
}

static inline HPy HPy_Add(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_Add ( ctx, h1, h2 ); 
}

static inline HPy HPy_Subtract(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_Subtract ( ctx, h1, h2 ); 
}

static inline HPy HPy_Multiply(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_Multiply ( ctx, h1, h2 ); 
}

static inline HPy HPy_MatrixMultiply(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_MatrixMultiply ( ctx, h1, h2 ); 
}

static inline HPy HPy_FloorDivide(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_FloorDivide ( ctx, h1, h2 ); 
}

static inline HPy HPy_TrueDivide(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_TrueDivide ( ctx, h1, h2 ); 
}

static inline HPy HPy_Remainder(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_Remainder ( ctx, h1, h2 ); 
}

static inline HPy HPy_Divmod(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_Divmod ( ctx, h1, h2 ); 
}

static inline HPy HPy_Power(HPyContext ctx, HPy h1, HPy h2, HPy h3) {
     return ctx->ctx_Power ( ctx, h1, h2, h3 ); 
}

static inline HPy HPy_Negative(HPyContext ctx, HPy h1) {
     return ctx->ctx_Negative ( ctx, h1 ); 
}

static inline HPy HPy_Positive(HPyContext ctx, HPy h1) {
     return ctx->ctx_Positive ( ctx, h1 ); 
}

static inline HPy HPy_Absolute(HPyContext ctx, HPy h1) {
     return ctx->ctx_Absolute ( ctx, h1 ); 
}

static inline HPy HPy_Invert(HPyContext ctx, HPy h1) {
     return ctx->ctx_Invert ( ctx, h1 ); 
}

static inline HPy HPy_Lshift(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_Lshift ( ctx, h1, h2 ); 
}

static inline HPy HPy_Rshift(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_Rshift ( ctx, h1, h2 ); 
}

static inline HPy HPy_And(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_And ( ctx, h1, h2 ); 
}

static inline HPy HPy_Xor(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_Xor ( ctx, h1, h2 ); 
}

static inline HPy HPy_Or(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_Or ( ctx, h1, h2 ); 
}

static inline HPy HPy_Index(HPyContext ctx, HPy h1) {
     return ctx->ctx_Index ( ctx, h1 ); 
}

static inline HPy HPy_Long(HPyContext ctx, HPy h1) {
     return ctx->ctx_Long ( ctx, h1 ); 
}

static inline HPy HPy_Float(HPyContext ctx, HPy h1) {
     return ctx->ctx_Float ( ctx, h1 ); 
}

static inline HPy HPy_InPlaceAdd(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_InPlaceAdd ( ctx, h1, h2 ); 
}

static inline HPy HPy_InPlaceSubtract(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_InPlaceSubtract ( ctx, h1, h2 ); 
}

static inline HPy HPy_InPlaceMultiply(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_InPlaceMultiply ( ctx, h1, h2 ); 
}

static inline HPy HPy_InPlaceMatrixMultiply(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_InPlaceMatrixMultiply ( ctx, h1, h2 ); 
}

static inline HPy HPy_InPlaceFloorDivide(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_InPlaceFloorDivide ( ctx, h1, h2 ); 
}

static inline HPy HPy_InPlaceTrueDivide(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_InPlaceTrueDivide ( ctx, h1, h2 ); 
}

static inline HPy HPy_InPlaceRemainder(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_InPlaceRemainder ( ctx, h1, h2 ); 
}

static inline HPy HPy_InPlacePower(HPyContext ctx, HPy h1, HPy h2, HPy h3) {
     return ctx->ctx_InPlacePower ( ctx, h1, h2, h3 ); 
}

static inline HPy HPy_InPlaceLshift(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_InPlaceLshift ( ctx, h1, h2 ); 
}

static inline HPy HPy_InPlaceRshift(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_InPlaceRshift ( ctx, h1, h2 ); 
}

static inline HPy HPy_InPlaceAnd(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_InPlaceAnd ( ctx, h1, h2 ); 
}

static inline HPy HPy_InPlaceXor(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_InPlaceXor ( ctx, h1, h2 ); 
}

static inline HPy HPy_InPlaceOr(HPyContext ctx, HPy h1, HPy h2) {
     return ctx->ctx_InPlaceOr ( ctx, h1, h2 ); 
}

static inline void HPyErr_SetString(HPyContext ctx, HPy h_type, const char *message) {
     ctx->ctx_Err_SetString ( ctx, h_type, message ); 
}

static inline int HPyErr_Occurred(HPyContext ctx) {
     return ctx->ctx_Err_Occurred ( ctx ); 
}

static inline int HPyObject_IsTrue(HPyContext ctx, HPy h) {
     return ctx->ctx_Object_IsTrue ( ctx, h ); 
}

static inline HPy HPyType_FromSpec(HPyContext ctx, HPyType_Spec *spec) {
     return ctx->ctx_Type_FromSpec ( ctx, spec ); 
}

static inline HPy HPy_GetAttr(HPyContext ctx, HPy obj, HPy name) {
     return ctx->ctx_GetAttr ( ctx, obj, name ); 
}

static inline HPy HPy_GetAttr_s(HPyContext ctx, HPy obj, const char *name) {
     return ctx->ctx_GetAttr_s ( ctx, obj, name ); 
}

static inline int HPy_HasAttr(HPyContext ctx, HPy obj, HPy name) {
     return ctx->ctx_HasAttr ( ctx, obj, name ); 
}

static inline int HPy_HasAttr_s(HPyContext ctx, HPy obj, const char *name) {
     return ctx->ctx_HasAttr_s ( ctx, obj, name ); 
}

static inline int HPy_SetAttr(HPyContext ctx, HPy obj, HPy name, HPy value) {
     return ctx->ctx_SetAttr ( ctx, obj, name, value ); 
}

static inline int HPy_SetAttr_s(HPyContext ctx, HPy obj, const char *name, HPy value) {
     return ctx->ctx_SetAttr_s ( ctx, obj, name, value ); 
}

static inline HPy HPy_GetItem(HPyContext ctx, HPy obj, HPy key) {
     return ctx->ctx_GetItem ( ctx, obj, key ); 
}

static inline HPy HPy_GetItem_i(HPyContext ctx, HPy obj, HPy_ssize_t idx) {
     return ctx->ctx_GetItem_i ( ctx, obj, idx ); 
}

static inline HPy HPy_GetItem_s(HPyContext ctx, HPy obj, const char *key) {
     return ctx->ctx_GetItem_s ( ctx, obj, key ); 
}

static inline int HPy_SetItem(HPyContext ctx, HPy obj, HPy key, HPy value) {
     return ctx->ctx_SetItem ( ctx, obj, key, value ); 
}

static inline int HPy_SetItem_i(HPyContext ctx, HPy obj, HPy_ssize_t idx, HPy value) {
     return ctx->ctx_SetItem_i ( ctx, obj, idx, value ); 
}

static inline int HPy_SetItem_s(HPyContext ctx, HPy obj, const char *key, HPy value) {
     return ctx->ctx_SetItem_s ( ctx, obj, key, value ); 
}

static inline void *_HPy_Cast(HPyContext ctx, HPy h) {
     return ctx->ctx_Cast ( ctx, h ); 
}

static inline int HPyBytes_Check(HPyContext ctx, HPy h) {
     return ctx->ctx_Bytes_Check ( ctx, h ); 
}

static inline HPy_ssize_t HPyBytes_Size(HPyContext ctx, HPy h) {
     return ctx->ctx_Bytes_Size ( ctx, h ); 
}

static inline HPy_ssize_t HPyBytes_GET_SIZE(HPyContext ctx, HPy h) {
     return ctx->ctx_Bytes_GET_SIZE ( ctx, h ); 
}

static inline char *HPyBytes_AsString(HPyContext ctx, HPy h) {
     return ctx->ctx_Bytes_AsString ( ctx, h ); 
}

static inline char *HPyBytes_AS_STRING(HPyContext ctx, HPy h) {
     return ctx->ctx_Bytes_AS_STRING ( ctx, h ); 
}

static inline HPy HPyUnicode_FromString(HPyContext ctx, const char *utf8) {
     return ctx->ctx_Unicode_FromString ( ctx, utf8 ); 
}

static inline int HPyUnicode_Check(HPyContext ctx, HPy h) {
     return ctx->ctx_Unicode_Check ( ctx, h ); 
}

static inline HPy HPyUnicode_AsUTF8String(HPyContext ctx, HPy h) {
     return ctx->ctx_Unicode_AsUTF8String ( ctx, h ); 
}

static inline HPy HPyUnicode_FromWideChar(HPyContext ctx, const wchar_t *w, HPy_ssize_t size) {
     return ctx->ctx_Unicode_FromWideChar ( ctx, w, size ); 
}

static inline HPy HPyList_New(HPyContext ctx, HPy_ssize_t len) {
     return ctx->ctx_List_New ( ctx, len ); 
}

static inline int HPyList_Append(HPyContext ctx, HPy h_list, HPy h_item) {
     return ctx->ctx_List_Append ( ctx, h_list, h_item ); 
}

static inline HPy HPyDict_New(HPyContext ctx) {
     return ctx->ctx_Dict_New ( ctx ); 
}

static inline int HPyDict_SetItem(HPyContext ctx, HPy h_dict, HPy h_key, HPy h_val) {
     return ctx->ctx_Dict_SetItem ( ctx, h_dict, h_key, h_val ); 
}

static inline HPy HPyDict_GetItem(HPyContext ctx, HPy h_dict, HPy h_key) {
     return ctx->ctx_Dict_GetItem ( ctx, h_dict, h_key ); 
}

static inline HPy HPy_FromPyObject(HPyContext ctx, cpy_PyObject *obj) {
     return ctx->ctx_FromPyObject ( ctx, obj ); 
}

static inline cpy_PyObject *HPy_AsPyObject(HPyContext ctx, HPy h) {
     return ctx->ctx_AsPyObject ( ctx, h ); 
}

static inline void _HPy_CallRealFunctionFromTrampoline(HPyContext ctx, HPyFunc_Signature sig, void *func, void *args) {
     ctx->ctx_CallRealFunctionFromTrampoline ( ctx, sig, func, args ); 
}

