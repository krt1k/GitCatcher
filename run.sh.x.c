#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f run.sh 
#endif

static  char data [] = 
#define      chk2_z	19
#define      chk2	((&data[4]))
	"\232\362\311\161\045\243\314\167\120\354\364\260\217\236\033\155"
	"\266\345\262\267\072\247\152\337"
#define      chk1_z	22
#define      chk1	((&data[25]))
	"\270\245\302\266\126\115\101\274\155\340\275\340\142\330\137\202"
	"\261\153\326\221\206\242\317\353\114"
#define      msg2_z	19
#define      msg2	((&data[52]))
	"\024\205\124\371\363\162\314\120\162\320\262\215\235\274\172\207"
	"\312\123\142\374\131\202\352\103"
#define      opts_z	1
#define      opts	((&data[73]))
	"\066"
#define      tst1_z	22
#define      tst1	((&data[78]))
	"\200\027\245\175\042\003\350\332\321\062\333\305\137\253\266\072"
	"\030\141\001\242\211\217\061\145\264\000\003"
#define      pswd_z	256
#define      pswd	((&data[107]))
	"\314\211\325\141\325\116\077\363\352\330\110\350\063\376\247\105"
	"\077\043\174\107\062\107\314\044\044\360\033\303\151\241\063\063"
	"\105\207\101\344\350\200\327\323\131\040\274\215\036\143\322\136"
	"\207\116\245\272\225\162\336\272\142\372\176\314\234\261\377\342"
	"\071\100\306\042\301\236\366\032\277\263\247\335\027\171\074\236"
	"\307\342\130\134\124\067\026\267\062\224\204\316\106\203\260\200"
	"\304\166\243\205\025\231\237\324\114\106\261\143\277\356\002\206"
	"\320\133\343\045\222\372\335\304\217\141\222\326\345\102\127\251"
	"\271\372\057\316\224\316\243\340\025\125\104\324\103\107\133\023"
	"\242\077\071\064\072\026\371\311\167\213\240\134\316\367\006\210"
	"\361\065\127\205\004\372\146\031\117\253\356\222\363\112\246\225"
	"\212\337\311\304\366\303\216\155\116\056\312\035\046\321\245\030"
	"\006\375\235\012\367\004\044\106\260\022\331\243\135\200\070\347"
	"\137\002\253\126\305\072\304\024\150\216\061\217\137\327\247\146"
	"\324\105\161\313\112\225\022\372\250\354\236\006\154\327\355\314"
	"\331\231\042\237\323\346\264\074\165\346\313\325\275\162\074\222"
	"\267\255\136\001\103\161\032\300\232\271\140\043\315\346\167\267"
	"\052\076\336\000\275\262\064\075\311\331\273\315\333\323\302\250"
	"\135\230\011\062\346\043\363\201\335\124\244\252\072\033\142\144"
	"\132\100\144\027\362\231\125\274\162\020\211\116\343\113\366\101"
	"\344\000\163\313"
#define      date_z	1
#define      date	((&data[425]))
	"\142"
#define      msg1_z	65
#define      msg1	((&data[438]))
	"\254\366\014\016\133\146\117\300\176\101\131\323\320\221\201\260"
	"\262\317\322\376\202\350\156\312\024\325\361\304\275\150\261\160"
	"\205\251\050\223\365\036\023\011\055\353\256\367\011\263\102\163"
	"\043\122\026\001\350\056\057\215\157\177\123\140\224\265\366\170"
	"\274\203\176\143\130\027\117\224\367\302\202\071\146\375\313\343"
	"\206\032\307\322\021\010\267\021\174\202\066\343"
#define      text_z	1781
#define      text	((&data[614]))
	"\277\343\225\314\362\361\063\101\261\261\203\012\204\201\326\147"
	"\010\360\057\333\001\067\222\023\263\024\111\227\343\201\066\242"
	"\144\314\157\127\275\242\230\156\123\033\171\330\235\117\077\245"
	"\100\157\200\102\246\022\125\132\047\237\361\012\040\047\255\205"
	"\364\034\334\261\276\165\040\022\221\231\352\056\350\052\323\051"
	"\231\123\153\100\146\301\232\215\140\213\230\201\263\106\007\247"
	"\145\152\074\326\324\124\304\141\057\325\106\313\007\365\323\372"
	"\257\060\371\073\160\225\235\314\252\054\143\233\376\161\210\224"
	"\002\361\303\276\145\162\164\132\172\315\200\050\017\312\127\056"
	"\226\374\126\152\251\157\046\173\363\261\277\354\353\033\337\040"
	"\127\231\373\150\164\107\223\044\306\156\103\046\352\266\033\116"
	"\024\024\001\224\262\261\350\337\106\032\133\124\307\004\267\105"
	"\011\221\256\365\025\363\142\344\245\246\365\201\150\300\202\337"
	"\116\322\206\332\251\133\167\340\333\047\274\364\115\253\311\373"
	"\025\076\005\202\143\071\165\057\253\307\032\113\106\134\230\242"
	"\145\213\014\247\004\374\162\000\233\067\154\056\004\250\275\113"
	"\025\337\011\014\166\156\351\222\111\306\071\262\011\111\050\054"
	"\211\251\162\052\177\241\107\372\120\176\057\365\040\253\115\167"
	"\376\210\330\360\001\334\213\345\005\260\124\331\216\046\277\115"
	"\325\326\115\127\105\132\204\111\253\235\137\334\306\267\115\076"
	"\344\101\372\137\056\110\302\014\075\276\330\027\154\056\346\112"
	"\310\245\120\361\375\075\311\127\257\310\154\124\370\152\014\155"
	"\332\261\357\070\054\220\206\030\360\213\040\200\372\221\365\266"
	"\240\077\176\356\263\152\143\073\274\110\310\132\167\307\153\063"
	"\033\334\037\214\324\100\335\335\167\276\350\045\034\145\237\266"
	"\032\312\365\224\272\042\310\202\343\061\242\270\150\071\222\125"
	"\347\062\377\232\364\103\252\020\153\251\027\010\336\137\371\251"
	"\160\025\312\005\370\367\155\373\060\120\150\151\365\356\305\006"
	"\317\333\356\326\077\121\216\146\012\006\147\213\205\355\023\301"
	"\247\237\253\347\142\062\242\107\044\246\077\221\215\261\110\110"
	"\327\325\370\217\000\077\235\325\012\065\325\342\062\274\237\060"
	"\263\341\332\202\365\035\232\330\232\254\000\043\277\010\013\341"
	"\147\201\143\126\067\320\134\101\170\035\176\064\266\343\257\212"
	"\175\153\136\355\017\335\244\105\373\104\123\206\150\046\041\221"
	"\072\226\166\063\154\063\235\167\016\261\171\246\256\225\116\010"
	"\133\347\105\136\113\262\240\276\126\332\256\360\037\021\352\343"
	"\171\315\272\317\052\376\003\067\030\334\113\355\175\157\127\170"
	"\106\210\032\264\353\256\135\363\267\142\233\125\364\041\101\214"
	"\317\126\221\030\257\206\020\062\377\153\073\225\307\036\012\055"
	"\132\010\314\264\250\054\217\274\252\147\231\350\144\167\272\200"
	"\242\277\033\025\004\116\044\370\212\173\067\162\361\004\126\111"
	"\247\052\331\001\176\137\327\007\000\174\231\001\226\013\212\012"
	"\122\052\176\107\147\171\122\141\057\335\241\167\325\361\122\264"
	"\261\220\205\142\171\375\321\371\066\144\121\046\360\327\240\257"
	"\270\206\301\254\153\331\120\147\171\346\125\344\010\051\061\371"
	"\107\207\252\354\211\340\275\201\045\321\014\361\031\324\012\257"
	"\104\170\263\011\273\006\365\067\104\025\032\146\206\231\336\346"
	"\160\067\310\330\175\014\255\137\303\004\250\274\303\035\046\077"
	"\331\212\031\127\350\225\151\070\372\057\162\030\326\301\121\071"
	"\006\175\222\005\374\245\340\147\367\077\055\063\326\152\061\250"
	"\016\034\144\301\233\222\140\057\213\255\216\166\256\355\233\064"
	"\130\323\370\124\332\301\336\172\021\022\333\075\107\041\324\174"
	"\042\074\050\003\006\063\043\244\124\210\357\043\214\105\352\122"
	"\341\226\361\007\361\134\005\243\324\320\020\013\172\014\347\364"
	"\260\071\210\001\054\344\322\006\223\173\050\367\150\101\310\222"
	"\273\314\171\371\304\215\220\155\022\204\323\166\163\373\222\364"
	"\246\235\246\037\210\030\055\224\176\230\056\217\047\075\244\025"
	"\137\023\236\242\222\301\014\342\326\345\204\301\105\253\245\223"
	"\111\153\001\345\214\020\364\166\207\236\323\176\040\105\320\074"
	"\150\347\015\310\251\372\342\140\160\013\302\326\213\245\337\023"
	"\352\310\127\061\164\025\327\005\334\144\227\037\252\233\114\371"
	"\246\234\172\145\367\247\055\021\231\005\127\055\222\226\146\155"
	"\160\135\272\100\175\315\327\311\140\027\127\354\004\255\237\073"
	"\140\005\323\026\351\356\027\142\100\037\272\230\046\272\273\077"
	"\161\042\307\261\115\232\201\145\163\113\242\321\203\110\063\250"
	"\340\004\342\024\203\041\070\326\250\277\212\150\044\103\250\221"
	"\237\140\360\013\377\046\047\314\250\353\210\067\352\076\073\234"
	"\203\131\155\323\226\365\173\130\111\134\234\216\254\003\242\177"
	"\155\170\014\031\342\346\310\015\040\042\134\234\154\165\142\206"
	"\373\034\267\326\222\024\107\322\237\306\204\255\225\022\101\243"
	"\210\272\276\161\073\173\316\125\260\362\202\065\250\137\156\350"
	"\310\247\160\060\140\340\311\156\141\157\304\317\047\036\157\165"
	"\226\162\070\053\111\205\154\045\234\174\204\244\363\222\105\300"
	"\114\071\204\044\207\266\127\316\200\222\020\142\027\355\047\217"
	"\064\204\257\167\126\052\330\017\260\351\025\246\245\005\041\322"
	"\103\276\313\346\300\012\235\341\337\114\371\146\252\165\263\117"
	"\041\123\201\373\334\366\126\305\221\017\364\015\137\007\311\104"
	"\132\147\135\066\154\345\233\111\047\062\221\203\202\274\150\140"
	"\114\335\275\226\045\221\212\363\340\033\317\007\044\376\055\064"
	"\223\055\071\235\110\142\324\005\301\037\003\045\060\353\365\050"
	"\370\153\167\035\134\162\334\343\144\012\221\255\150\322\276\364"
	"\165\173\131\306\036\212\317\264\221\315\136\013\260\334\020\367"
	"\050\303\354\104\276\063\103\063\013\016\154\252\230\102\230\123"
	"\020\245\153\210\301\054\116\312\221\144\073\060\351\366\263\261"
	"\042\074\342\300\315\011\377\152\066\324\147\267\263\125\226\011"
	"\137\250\376\206\162\067\246\335\021\173\031\250\135\066\074\143"
	"\021\307\264\062\374\335\315\333\211\047\316\264\260\050\014\376"
	"\106\355\332\300\143\145\334\051\351\112\065\020\037\313\151\331"
	"\043\047\143\245\271\252\060\052\350\101\264\111\143\034\344\206"
	"\132\254\152\014\203\214\121\166\257\202\267\145\110\301\315\215"
	"\053\270\013\065\004\022\350\161\116\200\123\364\115\270\035\354"
	"\057\021\044\366\152\023\050\055\303\224\123\106\153\170\056\255"
	"\200\030\257\174\004\017\343\244\320\255\220\351\226\267\244\324"
	"\134\055\307\216\240\216\245\374\135\260\316\076\112\302\217\174"
	"\350\322\227\240\041\151\063\042\245\353\370\174\376\334\261\332"
	"\141\045\111\130\074\356\200\046\370\056\255\042\173\223\323\261"
	"\154\243\365\375\133\225\122\377\113\134\054\064\272\302\141\115"
	"\250\311\101\245\212\276\173\051\153\146\275\342\115\007\126\272"
	"\333\154\072\337\356\014\104\366\334\336\270\042\246\355\371\306"
	"\245\031\226\055\020\072\260\215\107\137\023\217\271\051\114\010"
	"\061\026\015\300\374\306\141\144\143\127\106\115\323\341\027\370"
	"\244\213\161\106\027\330\353\115\103\237\243\041\125\300\334\016"
	"\220\201\365\311\155\343\001\276\032\066\147\346\274\310\120\306"
	"\331\327\006\147\341\335\225\061\331\240\325\322\034\303\172\314"
	"\065\152\175\352\317\244\353\256\264\133\222\145\315\203\232\012"
	"\166\326\121\277\056\044\215\175\144\125\011\136\173\156\051\154"
	"\250\132\321\004\345\171\217\073\336\207\122\217\031\017\266\036"
	"\154\117\311\260\356\005\334\125\352\106\046\137\170\150\342\311"
	"\055\161\040\003\354\134\336\061\370\151\272\015\110\142\053\337"
	"\006\344\375\024\155\315\063\200\262\156\101\040\152\264\345\254"
	"\362\031\223\035\250\105\373\144\265\313\144\020\241\061\050\103"
	"\035\127\050\155\123\277\154\144\261\202\003\001\234\351\274\261"
	"\017\235\124\105\151\232\243\204\074\177\017\115\066\054\241\022"
	"\116\127\303\015\114\173\264\233\241\254\124\126\162\224\353\042"
	"\023\277\204\235\171\264\337\167\060\152\202\163\063\357\254\332"
	"\154\267\224\173\370\330\034\100\037\040\137\225\234\347\077\265"
	"\140\035\305\176\137\341\130\132\240\233\306\043\023\134\261\105"
	"\303\210\267\217\053\142\343\130\041\131\171\064\352\022\036\030"
	"\373\111\353\044\343\077\217\044\245\120\276\063\261\112\314\063"
	"\375\022\072\244\165\036\375\226\170\166\312\142\211\351\172\204"
	"\063\146\250\027\245\067\073\113\210\371\177\072\103\114\156\101"
	"\136\251\346\323\310\344\152\100\132\065\242\344\037\034\150\122"
	"\203\020\152\050\110\245\164\321\236\364\013\342\100\171\043\237"
	"\042\012\163\352\356\335\052\111\023\315\055\062\352\225\205\155"
	"\246\357\226\356\224\012\277\063\376\313\026\077\104\072\336\147"
	"\104\121\122\062\057\175\173\102\112\250\164\064\076\371\242\344"
	"\350\070\323\175\103\223\260\101\136\307\201\243\001\137\013\105"
	"\261\135\170\340\333\364\042\046\235\226\133\333\220\375\300\171"
	"\065\223\367\170\047\250\272\205\157\073\051\160\233\064\266\114"
	"\222\056\054\155\043\116\223\300\345\356\233\166\354\134\360\041"
	"\360\347\232\027\217\125\235\376\221\306\157\054\372\046\171\214"
	"\125\246\372\170\365\215\070\332\174\324\121\150\060\101\212\040"
	"\050\045\070\270\172\325\267\014\233\046\071\225\114\262\042\241"
	"\130\034\032\115\252\122\050\047\046\172\220\127\273\033\167\344"
	"\100\260\234\273\205\124\307\041\172\001"
#define      rlax_z	1
#define      rlax	((&data[2672]))
	"\150"
#define      tst2_z	19
#define      tst2	((&data[2675]))
	"\366\203\046\155\043\224\052\344\131\025\360\073\365\135\116\362"
	"\101\127\107\271\350"
#define      xecc_z	15
#define      xecc	((&data[2696]))
	"\202\307\150\021\151\262\007\251\120\151\014\071\004\024\030\303"
	"\156\374\374\127"
#define      inlo_z	3
#define      inlo	((&data[2714]))
	"\272\030\335"
#define      shll_z	10
#define      shll	((&data[2718]))
	"\173\363\252\063\364\262\067\313\105\266\307\071\157"
#define      lsto_z	1
#define      lsto	((&data[2730]))
	"\067"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
