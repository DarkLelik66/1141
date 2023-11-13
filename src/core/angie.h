
/*
 * Copyright (C) 2022 Web Server LLC
 */


#ifndef _ANGIE_H_INCLUDED_
#define _ANGIE_H_INCLUDED_


#define angie_version      1003001
#define ANGIE_VERSION      "dev_new_super_6"
#define ANGIE_VER          "DSProxy/" ANGIE_VERSION

#ifdef NGX_BUILD
#define ANGIE_VER_BUILD    ANGIE_VER " (" NGX_BUILD ")"
#else
#define ANGIE_VER_BUILD    ANGIE_VER
#endif

#define ANGIE_VAR          "ANGIE"
#define NGX_OLDPID_EXT     ".oldbin"

#define ngx_angie_sign     ('A' + 'n' + 'g' + 'i' + 'e')


#endif /* _ANGIE_H_INCLUDED_ */
