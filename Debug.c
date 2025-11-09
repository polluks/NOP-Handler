#ifdef __DEBUG__
#include <exec/types.h>
#include <dos/dosextens.h>

const char *ActionToName(LONG action) {
	switch (action) {
		case ACTION_NIL            : return "ACTION_NIL";
		case ACTION_GET_BLOCK      : return "ACTION_GET_BLOCK";
		case ACTION_SET_MAP        : return "ACTION_SET_MAP";
		case ACTION_DIE            : return "ACTION_DIE";
		case ACTION_EVENT          : return "ACTION_EVENT";
		case ACTION_CURRENT_VOLUME : return "ACTION_CURRENT_VOLUME";
		case ACTION_LOCATE_OBJECT  : return "ACTION_LOCATE_OBJECT";
		case ACTION_RENAME_DISK    : return "ACTION_RENAME_DISK";
		case ACTION_WRITE          : return "ACTION_WRITE";
		case ACTION_READ           : return "ACTION_READ";
		case ACTION_FREE_LOCK      : return "ACTION_FREE_LOCK";
		case ACTION_DELETE_OBJECT  : return "ACTION_DELETE_OBJECT";
		case ACTION_RENAME_OBJECT  : return "ACTION_RENAME_OBJECT";
		case ACTION_MORE_CACHE     : return "ACTION_MORE_CACHE";
		case ACTION_COPY_DIR       : return "ACTION_COPY_DIR";
		case ACTION_WAIT_CHAR      : return "ACTION_WAIT_CHAR";
		case ACTION_SET_PROTECT    : return "ACTION_SET_PROTECT";
		case ACTION_CREATE_DIR     : return "ACTION_CREATE_DIR";
		case ACTION_EXAMINE_OBJECT : return "ACTION_EXAMINE_OBJECT";
		case ACTION_EXAMINE_NEXT   : return "ACTION_EXAMINE_NEXT";
		case ACTION_DISK_INFO      : return "ACTION_DISK_INFO";
		case ACTION_INFO           : return "ACTION_INFO";
		case ACTION_FLUSH          : return "ACTION_FLUSH";
		case ACTION_SET_COMMENT    : return "ACTION_SET_COMMENT";
		case ACTION_PARENT         : return "ACTION_PARENT";
		case ACTION_TIMER          : return "ACTION_TIMER";
		case ACTION_INHIBIT        : return "ACTION_INHIBIT";
		case ACTION_DISK_TYPE      : return "ACTION_DISK_TYPE";
		case ACTION_DISK_CHANGE    : return "ACTION_DISK_CHANGE";
		case ACTION_SET_DATE       : return "ACTION_SET_DATE";
		case ACTION_UNDISK_INFO    : return "ACTION_UNDISK_INFO";
		case ACTION_SCREEN_MODE    : return "ACTION_SCREEN_MODE";
		case ACTION_READ_RETURN    : return "ACTION_READ_RETURN";
		case ACTION_WRITE_RETURN   : return "ACTION_WRITE_RETURN";
		case ACTION_SEEK           : return "ACTION_SEEK";
		case ACTION_FINDUPDATE     : return "ACTION_FINDUPDATE";
		case ACTION_FINDINPUT      : return "ACTION_FINDINPUT";
		case ACTION_FINDOUTPUT     : return "ACTION_FINDOUTPUT";
		case ACTION_END            : return "ACTION_END";
		case ACTION_SET_FILE_SIZE  : return "ACTION_SET_FILE_SIZE";
		case ACTION_WRITE_PROTECT  : return "ACTION_WRITE_PROTECT";
		case ACTION_SAME_LOCK      : return "ACTION_SAME_LOCK";
		case ACTION_CHANGE_SIGNAL  : return "ACTION_CHANGE_SIGNAL";
		case ACTION_FORMAT         : return "ACTION_FORMAT";
		case ACTION_MAKE_LINK      : return "ACTION_MAKE_LINK";
		case ACTION_READ_LINK      : return "ACTION_READ_LINK";
		case ACTION_FH_FROM_LOCK   : return "ACTION_FH_FROM_LOCK";
		case ACTION_IS_FILESYSTEM  : return "ACTION_IS_FILESYSTEM";
		case ACTION_CHANGE_MODE    : return "ACTION_CHANGE_MODE";
		case ACTION_COPY_DIR_FH    : return "ACTION_COPY_DIR_FH";
		case ACTION_PARENT_FH      : return "ACTION_PARENT_FH";
		case ACTION_EXAMINE_ALL    : return "ACTION_EXAMINE_ALL";
		case ACTION_EXAMINE_FH     : return "ACTION_EXAMINE_FH";
		case ACTION_LOCK_RECORD    : return "ACTION_LOCK_RECORD";
		case ACTION_FREE_RECORD    : return "ACTION_FREE_RECORD";
		case ACTION_ADD_NOTIFY     : return "ACTION_ADD_NOTIFY";
		case ACTION_REMOVE_NOTIFY  : return "ACTION_REMOVE_NOTIFY";
		case ACTION_EXAMINE_ALL_END: return "ACTION_EXAMINE_ALL_END";
		case ACTION_SET_OWNER      : return "ACTION_SET_OWNER";
		case ACTION_SERIALIZE_DISK : return "ACTION_SERIALIZE_DISK";
		default                    : return NULL;
	}
}
#endif
