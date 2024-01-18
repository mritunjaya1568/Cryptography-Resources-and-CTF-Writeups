# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "../include/stdc-predef.h" 1
# 1 "<command-line>" 2
# 1 "./../include/libc-symbols.h" 1
# 85 "./../include/libc-symbols.h"
# 1 "/home/mritunjya/rooms/cryptography/crypto-hack/crackmes-one/glibc-2.34/build/config.h" 1
# 86 "./../include/libc-symbols.h" 2


# 1 "../sysdeps/generic/libc-symver.h" 1
# 25 "../sysdeps/generic/libc-symver.h"
# 1 "/home/mritunjya/rooms/cryptography/crypto-hack/crackmes-one/glibc-2.34/build/config.h" 1
# 26 "../sysdeps/generic/libc-symver.h" 2
# 89 "./../include/libc-symbols.h" 2
# 865 "./../include/libc-symbols.h"
# 1 "../sysdeps/generic/symbol-hacks.h" 1
# 866 "./../include/libc-symbols.h" 2
# 1 "<command-line>" 2
# 1 "<stdin>"
BEGIN {





# 1 "db-symbols.h" 1
# 37 "db-symbols.h"
# 1 "structs.def" 1
# 51 "structs.def"
required["_thread_db_sizeof_pthread"] = 1;
required["_thread_db_pthread_list"] = 1;
required["_thread_db_pthread_report_events"] = 1;
required["_thread_db_pthread_tid"] = 1;
required["_thread_db_pthread_start_routine"] = 1;
required["_thread_db_pthread_cancelhandling"] = 1;
required["_thread_db_pthread_schedpolicy"] = 1;
required["_thread_db_pthread_schedparam_sched_priority"] = 1;
required["_thread_db_pthread_specific"] = 1;
required["_thread_db_pthread_eventbuf"] = 1;
required["_thread_db_pthread_eventbuf_eventmask"] = 1;
required["_thread_db_pthread_eventbuf_eventmask_event_bits"] = 1;
required["_thread_db_pthread_nextevent"] = 1;

required["_thread_db_sizeof_list_t"] = 1;
required["_thread_db_list_t_next"] = 1;
required["_thread_db_list_t_prev"] = 1;

required["_thread_db_sizeof_td_thr_events_t"] = 1;
required["_thread_db_td_thr_events_t_event_bits"] = 1;

required["_thread_db_sizeof_td_eventbuf_t"] = 1;
required["_thread_db_td_eventbuf_t_eventnum"] = 1;
required["_thread_db_td_eventbuf_t_eventdata"] = 1;

required["__nptl_version"] = 1;
required["__nptl_create_event"] = 1;
required["__nptl_death_event"] = 1;
required["__nptl_threads_events"] = 1;
required["__nptl_nthreads"] = 1; required["_thread_db___nptl_nthreads"] = 1;
required["__nptl_last_event"] = 1; required["_thread_db___nptl_last_event"] = 1;


required["__pthread_keys"] = 1; required["_thread_db___pthread_keys"] = 1;
required["_thread_db_sizeof_pthread_key_struct"] = 1;
required["_thread_db_pthread_key_struct_seq"] = 1;
required["_thread_db_pthread_key_struct_destr"] = 1;

required["_thread_db_sizeof_pthread_key_data"] = 1;
required["_thread_db_pthread_key_data_seq"] = 1;
required["_thread_db_pthread_key_data_data"] = 1;
required["_thread_db_sizeof_pthread_key_data_level2"] = 1;
required["_thread_db_pthread_key_data_level2_data"] = 1;

required["_thread_db_link_map_l_tls_modid"] = 1;
required["_thread_db_link_map_l_tls_offset"] = 1;

required["_thread_db_dtv_dtv"] = 1;

required["_thread_db_dtv_t_pointer_val"] = 1;
required["_thread_db_dtv_t_counter"] = 1;

required["_thread_db_pthread_dtvp"] = 1;



required["__nptl_rtld_global"] = 1; required["_thread_db___nptl_rtld_global"] = 1;

required["_thread_db_rtld_global__dl_tls_dtv_slotinfo_list"] = 1;
required["_thread_db_rtld_global__dl_stack_user"] = 1;
required["_thread_db_rtld_global__dl_stack_used"] = 1;

required["_thread_db_sizeof_dtv_slotinfo_list"] = 1;
required["_thread_db_dtv_slotinfo_list_len"] = 1;
required["_thread_db_dtv_slotinfo_list_next"] = 1;
required["_thread_db_dtv_slotinfo_list_slotinfo"] = 1;

required["_thread_db_sizeof_dtv_slotinfo"] = 1;
required["_thread_db_dtv_slotinfo_gen"] = 1;
required["_thread_db_dtv_slotinfo_map"] = 1;
# 38 "db-symbols.h" 2
# 47 "db-symbols.h"
th_unique["_thread_db_register64"] = 1;
th_unique["_thread_db_register32"] = 1;
th_unique["_thread_db_const_thread_area"] = 1;

th_unique["_thread_db_register32_thread_area"] = 1;

th_unique["_thread_db_register64_thread_area"] = 1;
# 8 "<stdin>" 2
   in_symtab = 0;
}
/^GLIBC_PRIVATE / {
    seen[$2] = 1
}
END {
  status = 0;
  for (s in required) {
    if (s in seen) print s, "ok";
    else {
      status = 1;
      print s, "***MISSING***";
    }
  }
  any = "";
  for (s in th_unique) {
    if (s in seen) {
      any = s;
      break;
    }
  }
  if (any)
    print "th_unique:", any;
  else {
    status = 1;
    print "th_unique:", "***MISSING***";
  }
  exit(status);
}
