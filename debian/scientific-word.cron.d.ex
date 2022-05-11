#
# Regular cron jobs for the scientific-word package
#
0 4	* * *	root	[ -x /usr/bin/scientific-word_maintenance ] && /usr/bin/scientific-word_maintenance
