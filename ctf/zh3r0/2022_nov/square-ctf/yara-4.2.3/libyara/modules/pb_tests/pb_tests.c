
/* Generated by the protoc-gen-yara. DO NOT EDIT! */
#include <yara/mem.h>
#include <yara/modules.h>

#include "modules/pb_tests/pb_tests.pb-c.h"

#define MODULE_NAME pb_tests

static void* _pb_alloc(void* allocator_data, size_t size)
{
  return yr_malloc(size);
}

static void _pb_free(void* allocator_data, void* pointer)
{
  return yr_free(pointer);
}

begin_declarations
  begin_struct("struct")
    begin_struct("enum")
      declare_integer("FIRST");
      declare_integer("SECOND");
    end_struct("enum");
  end_struct("struct");
  declare_integer("f_int32");
  declare_integer("f_int64");
  declare_integer("f_sint32");
  declare_integer("f_sint64");
  declare_integer("f_sfixed32");
  declare_integer("f_sfixed64");
  declare_integer("f_bool");
  declare_string("f_string");
  declare_string("f_bytes");
  begin_struct_array("f_struct_array")
    declare_string("f_string");
    declare_integer("f_enum");
    begin_struct("f_nested_struct")
      declare_integer("f_int32");
      declare_string("f_string");
    end_struct("f_nested_struct")
    begin_struct_array("f_nested_struct_array")
      declare_integer("f_int32");
      declare_string("f_string");
    end_struct_array("f_nested_struct_array");
  end_struct_array("f_struct_array")
  declare_integer_dictionary("f_map_int32");
  declare_integer_dictionary("f_map_bool");
  declare_string_dictionary("f_map_string");
  declare_float_dictionary("f_map_float");
  begin_struct_dictionary("f_map_struct")
    declare_integer("f_int32");
    declare_integer("f_int64");
  end_struct_dictionary("f_map_struct")
  declare_string("f_oneof_string");
  begin_struct("f_oneof_struct")
    declare_integer("f_int32");
    declare_integer("f_int64");
  end_struct("f_oneof_struct")
  declare_string("f_yara_name");
end_declarations

int module_initialize(YR_MODULE* module)
{
  return ERROR_SUCCESS;
}

int module_finalize(YR_MODULE* module)
{
  return ERROR_SUCCESS;
}

int module_unload(YR_OBJECT* module_object)
{
  return ERROR_SUCCESS;
}

int module_load(
    YR_SCAN_CONTEXT* context,
    YR_OBJECT* module_object,
    void* module_data,
    size_t module_data_size)
{
  ProtobufCAllocator allocator;

  allocator.alloc = _pb_alloc;
  allocator.free = _pb_free;

  if (module_data == NULL)
    return ERROR_SUCCESS;

  Test__RootMessage* pb = test__root_message__unpack(
      &allocator, module_data_size, module_data);

  if (pb == NULL)
    return ERROR_INVALID_MODULE_DATA;

  set_integer(0, module_object, "struct.enum.FIRST");
  set_integer(1, module_object, "struct.enum.SECOND");

  if (pb->has_f_int32)
  {
    set_integer(pb->f_int32, module_object, "f_int32");
  }

  if (pb->has_f_int64)
  {
    set_integer(pb->f_int64, module_object, "f_int64");
  }

  if (pb->has_f_sint32)
  {
    set_integer(pb->f_sint32, module_object, "f_sint32");
  }

  if (pb->has_f_sint64)
  {
    set_integer(pb->f_sint64, module_object, "f_sint64");
  }

  if (pb->has_f_sfixed32)
  {
    set_integer(pb->f_sfixed32, module_object, "f_sfixed32");
  }

  if (pb->has_f_sfixed64)
  {
    set_integer(pb->f_sfixed64, module_object, "f_sfixed64");
  }

  if (pb->has_f_bool)
  {
    set_integer(pb->f_bool, module_object, "f_bool");
  }
  set_string(pb->f_string, module_object, "f_string");
  set_sized_string(
      (const char*) pb->f_bytes.data,
      pb->f_bytes.len,
      module_object,
      "f_bytes");

  for (int i = 0; i < pb->n_f_struct_array; i++)
  {
    if (pb->f_struct_array[i] != NULL)
    {
      set_string(
          pb->f_struct_array[i]->f_string,
          module_object,
          "f_struct_array[%i].f_string",
          i);

      if (pb->f_struct_array[i]->has_f_enum)
      {
        set_integer(
            pb->f_struct_array[i]->f_enum,
            module_object,
            "f_struct_array[%i].f_enum",
            i);
      }

      if (pb->f_struct_array[i]->f_nested_struct != NULL)
      {
        if (pb->f_struct_array[i]->f_nested_struct->has_f_int32)
        {
          set_integer(
              pb->f_struct_array[i]->f_nested_struct->f_int32,
              module_object,
              "f_struct_array[%i].f_nested_struct.f_int32",
              i);
        }
        set_string(
            pb->f_struct_array[i]->f_nested_struct->f_string,
            module_object,
            "f_struct_array[%i].f_nested_struct.f_string",
            i);
      }

      for (int j = 0; j < pb->f_struct_array[i]->n_f_nested_struct_array; j++)
      {
        if (pb->f_struct_array[i]->f_nested_struct_array[j] != NULL)
        {
          if (pb->f_struct_array[i]->f_nested_struct_array[j]->has_f_int32)
          {
            set_integer(
                pb->f_struct_array[i]->f_nested_struct_array[j]->f_int32,
                module_object,
                "f_struct_array[%i].f_nested_struct_array[%i].f_int32",
                i,
                j);
          }
          set_string(
              pb->f_struct_array[i]->f_nested_struct_array[j]->f_string,
              module_object,
              "f_struct_array[%i].f_nested_struct_array[%i].f_string",
              i,
              j);
        }
      }
    }
  }

  for (int i = 0; i < pb->n_f_map_int32; i++)
  {
    if (pb->f_map_int32[i] != NULL)
    {
      if (pb->f_map_int32[i]->has_value)
      {
        set_integer(
            pb->f_map_int32[i]->value,
            module_object,
            "f_map_int32[%s]",
            pb->f_map_int32[i]->key);
      }
    }
  }

  for (int i = 0; i < pb->n_f_map_bool; i++)
  {
    if (pb->f_map_bool[i] != NULL)
    {
      if (pb->f_map_bool[i]->has_value)
      {
        set_integer(
            pb->f_map_bool[i]->value,
            module_object,
            "f_map_bool[%s]",
            pb->f_map_bool[i]->key);
      }
    }
  }

  for (int i = 0; i < pb->n_f_map_string; i++)
  {
    if (pb->f_map_string[i] != NULL)
    {
      set_string(
          pb->f_map_string[i]->value,
          module_object,
          "f_map_string[%s]",
          pb->f_map_string[i]->key);
    }
  }

  for (int i = 0; i < pb->n_f_map_float; i++)
  {
    if (pb->f_map_float[i] != NULL)
    {
      if (pb->f_map_float[i]->has_value)
      {
        set_float(
            pb->f_map_float[i]->value,
            module_object,
            "f_map_float[%s]",
            pb->f_map_float[i]->key);
      }
    }
  }

  for (int i = 0; i < pb->n_f_map_struct; i++)
  {
    if (pb->f_map_struct[i] != NULL)
    {
      if (pb->f_map_struct[i]->value != NULL)
      {
        if (pb->f_map_struct[i]->value->has_f_int32)
        {
          set_integer(
              pb->f_map_struct[i]->value->f_int32,
              module_object,
              "f_map_struct[%s].f_int32",
              pb->f_map_struct[i]->key);
        }

        if (pb->f_map_struct[i]->value->has_f_int64)
        {
          set_integer(
              pb->f_map_struct[i]->value->f_int64,
              module_object,
              "f_map_struct[%s].f_int64",
              pb->f_map_struct[i]->key);
        }
      }
    }
  }

  if (pb->f_oneof_case == 20)
  {
    set_string(pb->f_oneof_string, module_object, "f_oneof_string");
  }

  if (pb->f_oneof_case == 21)
  {
    if (pb->f_oneof_struct != NULL)
    {
      if (pb->f_oneof_struct->has_f_int32)
      {
        set_integer(
            pb->f_oneof_struct->f_int32,
            module_object,
            "f_oneof_struct.f_int32");
      }

      if (pb->f_oneof_struct->has_f_int64)
      {
        set_integer(
            pb->f_oneof_struct->f_int64,
            module_object,
            "f_oneof_struct.f_int64");
      }
    }
  }
  set_string(pb->f_renamed, module_object, "f_yara_name");


  test__root_message__free_unpacked(pb, &allocator);

  return ERROR_SUCCESS;
}
