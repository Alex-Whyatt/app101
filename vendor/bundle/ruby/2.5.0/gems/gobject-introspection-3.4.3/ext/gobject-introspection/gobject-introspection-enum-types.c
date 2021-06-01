
/* Generated by glib-mkenums.rb ($Id$) */ 

#include "gobject-introspection-enum-types.h"
#include <girepository.h>



/* enumerations from "/usr/include/gobject-introspection-1.0/girepository.h" */
GType
g_i_repository_load_flags_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GFlagsValue values[] = {
      { G_IREPOSITORY_LOAD_FLAG_LAZY, "G_IREPOSITORY_LOAD_FLAG_LAZY", "g-irepository-load-flag-lazy" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static ("GIRepositoryLoadFlags", values);
  }
  return etype;
}

GType
g_i_repository_error_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { G_IREPOSITORY_ERROR_TYPELIB_NOT_FOUND, "G_IREPOSITORY_ERROR_TYPELIB_NOT_FOUND", "typelib-not-found" },
      { G_IREPOSITORY_ERROR_NAMESPACE_MISMATCH, "G_IREPOSITORY_ERROR_NAMESPACE_MISMATCH", "namespace-mismatch" },
      { G_IREPOSITORY_ERROR_NAMESPACE_VERSION_CONFLICT, "G_IREPOSITORY_ERROR_NAMESPACE_VERSION_CONFLICT", "namespace-version-conflict" },
      { G_IREPOSITORY_ERROR_LIBRARY_NOT_FOUND, "G_IREPOSITORY_ERROR_LIBRARY_NOT_FOUND", "library-not-found" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("GIRepositoryError", values);
  }
  return etype;
}


/* enumerations from "/usr/include/gobject-introspection-1.0/gitypes.h" */
GType
g_i_info_type_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { GI_INFO_TYPE_INVALID, "GI_INFO_TYPE_INVALID", "invalid" },
      { GI_INFO_TYPE_FUNCTION, "GI_INFO_TYPE_FUNCTION", "function" },
      { GI_INFO_TYPE_CALLBACK, "GI_INFO_TYPE_CALLBACK", "callback" },
      { GI_INFO_TYPE_STRUCT, "GI_INFO_TYPE_STRUCT", "struct" },
      { GI_INFO_TYPE_BOXED, "GI_INFO_TYPE_BOXED", "boxed" },
      { GI_INFO_TYPE_ENUM, "GI_INFO_TYPE_ENUM", "enum" },
      { GI_INFO_TYPE_FLAGS, "GI_INFO_TYPE_FLAGS", "flags" },
      { GI_INFO_TYPE_OBJECT, "GI_INFO_TYPE_OBJECT", "object" },
      { GI_INFO_TYPE_INTERFACE, "GI_INFO_TYPE_INTERFACE", "interface" },
      { GI_INFO_TYPE_CONSTANT, "GI_INFO_TYPE_CONSTANT", "constant" },
      { GI_INFO_TYPE_INVALID_0, "GI_INFO_TYPE_INVALID_0", "invalid-0" },
      { GI_INFO_TYPE_UNION, "GI_INFO_TYPE_UNION", "union" },
      { GI_INFO_TYPE_VALUE, "GI_INFO_TYPE_VALUE", "value" },
      { GI_INFO_TYPE_SIGNAL, "GI_INFO_TYPE_SIGNAL", "signal" },
      { GI_INFO_TYPE_VFUNC, "GI_INFO_TYPE_VFUNC", "vfunc" },
      { GI_INFO_TYPE_PROPERTY, "GI_INFO_TYPE_PROPERTY", "property" },
      { GI_INFO_TYPE_FIELD, "GI_INFO_TYPE_FIELD", "field" },
      { GI_INFO_TYPE_ARG, "GI_INFO_TYPE_ARG", "arg" },
      { GI_INFO_TYPE_TYPE, "GI_INFO_TYPE_TYPE", "type" },
      { GI_INFO_TYPE_UNRESOLVED, "GI_INFO_TYPE_UNRESOLVED", "unresolved" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("GIInfoType", values);
  }
  return etype;
}

GType
g_i_transfer_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { GI_TRANSFER_NOTHING, "GI_TRANSFER_NOTHING", "nothing" },
      { GI_TRANSFER_CONTAINER, "GI_TRANSFER_CONTAINER", "container" },
      { GI_TRANSFER_EVERYTHING, "GI_TRANSFER_EVERYTHING", "everything" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("GITransfer", values);
  }
  return etype;
}

GType
g_i_direction_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { GI_DIRECTION_IN, "GI_DIRECTION_IN", "in" },
      { GI_DIRECTION_OUT, "GI_DIRECTION_OUT", "out" },
      { GI_DIRECTION_INOUT, "GI_DIRECTION_INOUT", "inout" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("GIDirection", values);
  }
  return etype;
}

GType
g_i_scope_type_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { GI_SCOPE_TYPE_INVALID, "GI_SCOPE_TYPE_INVALID", "invalid" },
      { GI_SCOPE_TYPE_CALL, "GI_SCOPE_TYPE_CALL", "call" },
      { GI_SCOPE_TYPE_ASYNC, "GI_SCOPE_TYPE_ASYNC", "async" },
      { GI_SCOPE_TYPE_NOTIFIED, "GI_SCOPE_TYPE_NOTIFIED", "notified" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("GIScopeType", values);
  }
  return etype;
}

GType
g_i_type_tag_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { GI_TYPE_TAG_VOID, "GI_TYPE_TAG_VOID", "void" },
      { GI_TYPE_TAG_BOOLEAN, "GI_TYPE_TAG_BOOLEAN", "boolean" },
      { GI_TYPE_TAG_INT8, "GI_TYPE_TAG_INT8", "int8" },
      { GI_TYPE_TAG_UINT8, "GI_TYPE_TAG_UINT8", "uint8" },
      { GI_TYPE_TAG_INT16, "GI_TYPE_TAG_INT16", "int16" },
      { GI_TYPE_TAG_UINT16, "GI_TYPE_TAG_UINT16", "uint16" },
      { GI_TYPE_TAG_INT32, "GI_TYPE_TAG_INT32", "int32" },
      { GI_TYPE_TAG_UINT32, "GI_TYPE_TAG_UINT32", "uint32" },
      { GI_TYPE_TAG_INT64, "GI_TYPE_TAG_INT64", "int64" },
      { GI_TYPE_TAG_UINT64, "GI_TYPE_TAG_UINT64", "uint64" },
      { GI_TYPE_TAG_FLOAT, "GI_TYPE_TAG_FLOAT", "float" },
      { GI_TYPE_TAG_DOUBLE, "GI_TYPE_TAG_DOUBLE", "double" },
      { GI_TYPE_TAG_GTYPE, "GI_TYPE_TAG_GTYPE", "gtype" },
      { GI_TYPE_TAG_UTF8, "GI_TYPE_TAG_UTF8", "utf8" },
      { GI_TYPE_TAG_FILENAME, "GI_TYPE_TAG_FILENAME", "filename" },
      { GI_TYPE_TAG_ARRAY, "GI_TYPE_TAG_ARRAY", "array" },
      { GI_TYPE_TAG_INTERFACE, "GI_TYPE_TAG_INTERFACE", "interface" },
      { GI_TYPE_TAG_GLIST, "GI_TYPE_TAG_GLIST", "glist" },
      { GI_TYPE_TAG_GSLIST, "GI_TYPE_TAG_GSLIST", "gslist" },
      { GI_TYPE_TAG_GHASH, "GI_TYPE_TAG_GHASH", "ghash" },
      { GI_TYPE_TAG_ERROR, "GI_TYPE_TAG_ERROR", "error" },
      { GI_TYPE_TAG_UNICHAR, "GI_TYPE_TAG_UNICHAR", "unichar" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("GITypeTag", values);
  }
  return etype;
}

GType
g_i_array_type_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { GI_ARRAY_TYPE_C, "GI_ARRAY_TYPE_C", "c" },
      { GI_ARRAY_TYPE_ARRAY, "GI_ARRAY_TYPE_ARRAY", "array" },
      { GI_ARRAY_TYPE_PTR_ARRAY, "GI_ARRAY_TYPE_PTR_ARRAY", "ptr-array" },
      { GI_ARRAY_TYPE_BYTE_ARRAY, "GI_ARRAY_TYPE_BYTE_ARRAY", "byte-array" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("GIArrayType", values);
  }
  return etype;
}

GType
g_i_field_info_flags_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GFlagsValue values[] = {
      { GI_FIELD_IS_READABLE, "GI_FIELD_IS_READABLE", "readable" },
      { GI_FIELD_IS_WRITABLE, "GI_FIELD_IS_WRITABLE", "writable" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static ("GIFieldInfoFlags", values);
  }
  return etype;
}

GType
g_iv_func_info_flags_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GFlagsValue values[] = {
      { GI_VFUNC_MUST_CHAIN_UP, "GI_VFUNC_MUST_CHAIN_UP", "must-chain-up" },
      { GI_VFUNC_MUST_OVERRIDE, "GI_VFUNC_MUST_OVERRIDE", "must-override" },
      { GI_VFUNC_MUST_NOT_OVERRIDE, "GI_VFUNC_MUST_NOT_OVERRIDE", "must-not-override" },
      { GI_VFUNC_THROWS, "GI_VFUNC_THROWS", "throws" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static ("GIVFuncInfoFlags", values);
  }
  return etype;
}

GType
g_i_function_info_flags_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GFlagsValue values[] = {
      { GI_FUNCTION_IS_METHOD, "GI_FUNCTION_IS_METHOD", "is-method" },
      { GI_FUNCTION_IS_CONSTRUCTOR, "GI_FUNCTION_IS_CONSTRUCTOR", "is-constructor" },
      { GI_FUNCTION_IS_GETTER, "GI_FUNCTION_IS_GETTER", "is-getter" },
      { GI_FUNCTION_IS_SETTER, "GI_FUNCTION_IS_SETTER", "is-setter" },
      { GI_FUNCTION_WRAPS_VFUNC, "GI_FUNCTION_WRAPS_VFUNC", "wraps-vfunc" },
      { GI_FUNCTION_THROWS, "GI_FUNCTION_THROWS", "throws" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static ("GIFunctionInfoFlags", values);
  }
  return etype;
}


/* Generated data ends here */
