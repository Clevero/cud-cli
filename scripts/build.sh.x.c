#if 0
	shc Version 3.8.9, Generic Script Compiler
	Copyright (c) 1994-2012 Francisco Rosales <frosal@fi.upm.es>

	shc -T -f scripts/build.sh 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[2]))
	"\142\354\104\360\163\351\212\041\320\176\252\252\056\164\331\037"
	"\030\227\367\205\213\356"
#define      opts_z	1
#define      opts	((&data[22]))
	"\016"
#define      rlax_z	1
#define      rlax	((&data[23]))
	"\022"
#define      inlo_z	3
#define      inlo	((&data[24]))
	"\246\317\253"
#define      xecc_z	15
#define      xecc	((&data[28]))
	"\213\344\105\132\146\160\037\134\232\007\146\173\356\043\253\237"
	"\275\376\324"
#define      chk2_z	19
#define      chk2	((&data[47]))
	"\355\263\222\361\017\252\311\107\362\157\001\356\021\006\147\145"
	"\231\031\032\257\200\172\022"
#define      pswd_z	256
#define      pswd	((&data[91]))
	"\221\234\125\175\212\022\205\366\303\106\064\007\362\066\134\133"
	"\066\350\030\064\274\016\114\317\215\130\323\126\223\340\046\171"
	"\052\133\222\064\216\112\356\343\150\202\243\246\245\223\015\065"
	"\120\310\016\203\041\132\122\257\262\046\006\106\006\055\277\061"
	"\210\122\145\027\234\124\372\005\327\236\253\175\061\270\262\201"
	"\201\301\004\243\033\127\122\316\175\130\025\204\206\324\265\016"
	"\047\033\046\303\157\041\311\107\277\164\304\360\055\167\162\256"
	"\070\167\122\124\317\244\043\114\375\070\321\203\015\207\222\064"
	"\242\270\370\022\332\301\132\231\065\036\211\142\226\374\021\316"
	"\163\143\043\102\010\106\217\005\176\141\211\213\351\034\277\213"
	"\325\270\236\257\171\371\110\256\027\322\021\256\316\042\174\102"
	"\206\240\205\216\346\024\224\145\166\036\360\137\072\260\353\020"
	"\150\212\300\342\203\010\221\233\333\242\111\251\305\306\354\114"
	"\146\161\332\115\206\156\262\374\215\243\134\307\123\107\330\274"
	"\321\230\236\125\241\057\360\174\322\072\046\230\000\022\344\147"
	"\204\276\264\012\055\147\007\272\012\143\202\136\253\132\033\175"
	"\363\272\322\224\352\303\020\274\376\066\124\376\111\070\146\315"
	"\367\033\327\045\203\337\232\136\373\033\331\016\037\062\000\261"
	"\317\125\056\131\150\264\117\053\373\204\062\355\272\217\111\360"
	"\167\141\045\064\157\300\223\153\333\154\171\372\236\171\253\156"
	"\317\332\307\067\216\027\143\211\234\226\167\126\045\300\107\235"
	"\042\155\321"
#define      chk1_z	22
#define      chk1	((&data[409]))
	"\374\215\137\140\351\273\172\011\023\210\230\242\346\127\134\237"
	"\307\327\077\276\245\015\254\010\320"
#define      lsto_z	1
#define      lsto	((&data[433]))
	"\351"
#define      msg1_z	42
#define      msg1	((&data[441]))
	"\277\212\245\367\030\275\133\133\075\354\200\215\370\013\313\003"
	"\140\143\303\263\112\102\103\111\201\023\122\037\102\013\131\236"
	"\317\220\151\060\223\273\040\213\064\130\242\053\270\324\125\064"
	"\265\242\131\361\032\260\026\333\367\263"
#define      date_z	1
#define      date	((&data[492]))
	"\233"
#define      msg2_z	19
#define      msg2	((&data[495]))
	"\214\232\167\176\054\316\012\056\126\321\174\056\023\060\013\024"
	"\301\016\025\147\073\272\002\236\052"
#define      shll_z	10
#define      shll	((&data[518]))
	"\370\177\067\272\131\226\067\137\234\127"
#define      text_z	849
#define      text	((&data[707]))
	"\252\360\154\005\222\305\367\255\166\016\210\155\301\206\322\107"
	"\025\144\061\241\377\353\244\235\026\227\352\037\111\301\316\364"
	"\262\072\372\105\000\361\362\166\377\173\344\301\001\267\010\027"
	"\033\071\270\032\045\134\267\074\363\242\134\075\144\052\062\026"
	"\145\054\133\145\036\115\334\035\311\300\337\312\167\350\341\223"
	"\041\232\256\107\367\146\204\353\010\340\050\154\013\133\202\160"
	"\210\335\325\246\053\262\304\364\162\243\276\352\213\240\176\255"
	"\072\054\365\062\222\171\035\232\132\106\007\145\241\211\326\051"
	"\147\253\320\222\136\224\206\320\070\105\273\304\345\072\161\040"
	"\146\147\122\371\341\157\223\074\266\233\241\127\044\167\201\213"
	"\043\121\036\201\346\244\122\036\352\016\342\320\110\124\360\257"
	"\274\103\250\302\264\314\335\240\304\217\013\277\106\231\374\273"
	"\277\321\336\064\055\230\205\023\234\365\144\231\215\324\164\145"
	"\130\336\004\032\375\313\365\022\010\276\335\020\112\045\317\312"
	"\127\007\367\140\335\341\353\345\252\206\177\145\367\210\261\313"
	"\004\155\154\037\044\143\100\221\315\253\173\346\021\235\265\171"
	"\151\120\155\244\241\366\126\032\337\106\006\303\011\302\000\107"
	"\302\165\323\004\271\272\074\245\025\047\371\266\125\300\121\151"
	"\136\156\212\063\256\121\272\016\015\224\125\276\240\320\265\341"
	"\213\135\300\075\021\043\341\354\336\274\204\115\014\077\230\270"
	"\077\140\161\247\013\345\350\145\317\071\136\032\311\363\235\245"
	"\307\302\110\273\153\235\263\146\104\166\325\270\355\304\104\014"
	"\333\267\166\043\171\136\175\324\106\274\152\303\315\336\300\275"
	"\017\165\272\330\117\113\241\021\053\157\017\224\037\011\347\130"
	"\073\065\255\127\316\051\354\202\317\044\135\363\217\117\162\377"
	"\315\324\217\071\056\124\353\133\000\105\337\040\040\324\023\372"
	"\215\370\232\144\355\311\100\126\005\021\345\121\127\116\345\065"
	"\340\074\246\010\344\152\164\250\360\222\274\267\237\340\253\276"
	"\211\145\211\173\016\043\165\173\313\066\102\301\163\271\170\036"
	"\310\305\237\034\252\014\302\111\157\313\355\030\334\242\375\364"
	"\220\072\362\045\264\061\176\263\125\357\237\056\013\265\063\155"
	"\005\132\325\306\111\336\333\055\163\321\002\063\000\205\074\020"
	"\200\312\275\174\261\232\125\074\233\064\307\221\016\346\032\171"
	"\221\034\211\301\363\014\177\043\311\112\313\013\007\310\251\216"
	"\020\117\100\347\202\274\246\253\030\137\201\316\052\007\107\044"
	"\363\307\330\001\337\176\334\272\060\270\353\040\111\115\020\374"
	"\173\265\157\150\334\257\116\007\311\312\236\103\334\275\331\335"
	"\350\244\274\233\124\347\171\301\224\131\313\364\235\171\056\023"
	"\046\134\265\225\373\323\166\240\150\177\375\037\170\145\230\010"
	"\226\071\107\214\065\204\255\323\147\014\267\066\344\075\275\376"
	"\254\142\200\146\170\347\217\300\126\042\240\232\252\215\153\020"
	"\305\053\273\056\317\204\005\127\201\335\070\374\227\261\335\177"
	"\313\101\223\377\210\010\050\027\112\104\326\041\256\042\257\210"
	"\005\147\227\251\300\074\241\206\122\364\071\353\031\344\114\231"
	"\000\076\350\157\061\325\034\032\253\360\303\077\207\116\035\107"
	"\173\375\214\244\120\156\151\175\121\117\374\141\125\036\175\300"
	"\362\073\344\141\246\142\034\115\176\034\057\267\121\133\330\132"
	"\073\105\013\272\056\145\151\005\300\246\172\315\267\365\240\172"
	"\331\052\242\170\275\345\366\031\312\334\051\314\270\345\245\020"
	"\174\371\172\130\005\154\206\334\012\151\340\230\113\260\006\365"
	"\303\057\335\007\242\012\227\137\007\125\243\056\117\135\327\246"
	"\141\024\106\233\354\240\267\302\023\142\171\077\242\016\117\075"
	"\141\113\044\266\261\025\226\231\074\033\147\225\340\230\053\242"
	"\220\054\006\330\216\060\125\160\324\224\141\221\075\221\315\021"
	"\144\166\136\100\145\343\364\325\326\213\033\045\056\241\132\360"
	"\072\357\044\320\312\021\326\113\251\102\140\172\274\115\301\165"
	"\103\022\003\371\176\057\176\072\364\127\053\064\270\212\116\217"
	"\242\207\006\156\075\027\217\316\312\107\161\327\260\263\063\077"
	"\037\154\164\332\227\201\107\361\361\214\005\244\026\155\105\351"
	"\241\222\066\156\324\012\220\223\360\217\006\147\353\174\222\213"
	"\034\027\107\161\126\267\254\105\245\114\326\130\207\161\005\126"
	"\336\340\163\322\024\235\217\250\073\211\106\256\301\230\013\013"
	"\133\007\163\112\104\216\030\307\064\013\071\215\327\262\332\337"
	"\106\063\276\326\043\043\342\223\270\327\152\170\366\326\035\163"
	"\230\365\105\311\235\263\074\331\151\327\173\301\374\363\102\207"
	"\027\224\245\231\172\112\354\231\064\372\173\005\103\320\366\362"
	"\214\071\233\052\355\327\003\126\256\177\030\252\162\132\062\211"
	"\357\330\042\152\043\016\003\130\011\177\135\115\117\123\100\334"
	"\215\333\006\172\262\012\321\141\212\351\014\374\104\076\206\063"
	"\027\251\235\072\267\241\222\301\040\360\017\160\103\117\114\320"
	"\052\123\113\334\136\034\075\350\005\111\345\112\210\153\175\237"
	"\024\033\332\314\274\155\216\335\135\235\115\241\354\232\162\026"
	"\356\275\363\115\331\061\066\337\173\033\051\003\207\247\243\233"
	"\303\176\150\177\353"
#define      tst1_z	22
#define      tst1	((&data[1703]))
	"\224\252\113\244\211\016\153\131\074\170\105\303\333\022\022\012"
	"\215\142\012\250\303\014\235\241\352"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

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

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
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

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
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
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
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
	char * me = getenv("_");
	if (me == NULL) { me = argv[0]; }

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
	ret = chkenv(argc);
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
	varg[j++] = argv[0];		/* My own name at execution */
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
#if DEBUGEXEC
	debugexec("main", argc, argv);
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
