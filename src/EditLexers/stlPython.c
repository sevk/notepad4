#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_Python = {{
//++Autogenerated -- start of section automatically generated
"and as assert async await break case class continue def del elif else except exec finally for from global "
"if import in is lambda match nonlocal not or pass print raise return try while with yield "

, // 1 type
"basestring bool buffer bytearray bytes complex dict file float frozenset int list long memoryview object property range "
"set slice str super tuple type unicode xrange "

, // 2 built-in constant
"Ellipsis False None NotImplemented True __debug__ __main__ self "

, // 3 built-in function
"__import__( __subclasses__( abs( aiter( all( anext( any( apply( ascii( "
"basestring( bin( bool( breakpoint( buffer( bytearray( bytes( callable( chr( classmethod( cmp( coerce( compile( complex( "
"delattr( dict( dir( divmod( enumerate( eval( exec( execfile( exit( file( filter( float( format( frozenset( "
"getattr( globals( hasattr( hash( help( hex( id( input( int( intern( isinstance( issubclass( iter( "
"len( list( locals( long( map( max( memoryview( min( mro( next( oct( open( ord( pow( print( property( quit( "
"range( raw_input( reduce( reload( repr( reversed( round( set( setattr( slice( sorted( staticmethod( str( sum( super( "
"tuple( type( unichr( unicode( vars( xrange( zip( "

, // 4 attribute
"__all__ __annotations__ __args__ __bases__ __breakpointhook__ "
"__cached__ __cause__ __class__ __closure__ __code__ __context__ __defaults__ __dict__ __displayhook__ __doc__ "
"__excepthook__ __file__ __func__ __globals__ __interactivehook__ __kwdefaults__ __loader__ "
"__match_args__ __members__ __metaclass__ __module__ __mro__ __name__ __origin__ __package__ __parameters__ __path__ "
"__qualname__ __self__ __slots__ __spec__ __stderr__ __stdin__ __stdout__ __suppress_context__ __traceback__ "
"__unraisablehook__ __version__ __weakref__ "

, // 5 special method
"__abs__( __add__( __aenter__( __aexit__( __aiter__( __and__( __anext__( __await__( __bool__( __bytes__( "
"__call__( __ceil__( __class_getitem__( __cmp__( __coerce__( __complex__( __contains__( __copy__( "
"__deepcopy__( __del__( __delattr__( __delete__( __delitem__( __dir__( __div__( __divmod__( __enter__( __eq__( __exit__( "
"__float__( __floor__( __floordiv__( __format__( __fspath__( __ge__( "
"__get__( __getattr__( __getattribute__( __getinitargs__( __getitem__( __getnewargs__( __getnewargs_ex__( __getstate__( "
"__gt__( __hash__( __hex__( __iadd__( __iand__( __idiv__( __ifloordiv__( __ilshift__( __imatmul__( __imod__( __imul__( "
"__index__( __init__( __init_subclass__( __instancecheck__( __int__( __invert__( __ior__( __ipow__( __irshift__( "
"__isub__( __iter__( __itruediv__( __ixor__( __le__( __len__( __length_hint__( __long__( __lshift__( __lt__( "
"__matmul__( __missing__( __mod__( __mul__( __ne__( __neg__( __new__( __next__( __nonzero__( __oct__( __or__( "
"__pos__( __pow__( __prepare__( __radd__( __rand__( __rdiv__( __rdivmod__( "
"__reduce__( __reduce_ex__( __repr__( __reversed__( __rfloordiv__( __rlshift__( __rmatmul__( __rmod__( __rmul__( "
"__ror__( __round__( __rpow__( __rrshift__( __rshift__( __rsub__( __rtruediv__( __rxor__( "
"__set__( __set_name__( __setattr__( __setitem__( __setstate__( __sizeof__( __str__( "
"__sub__( __subclasscheck__( __subclasshook__( __truediv__( __trunc__( __unicode__( __xor__( "

, // 6 class
"ABC ABCMeta AbstractAsyncContextManager AbstractContextManager Action ArgumentParser ArithmeticError "
"AssertionError AsyncContextDecorator AsyncExitStack AsyncGenerator AsyncIterable AsyncIterator AttributeError Awaitable "
"BaseException BasicContext BlockingIOError BoundedSemaphore BrokenPipeError "
"BufferError BufferedIOBase BufferedRWPair BufferedRandom BufferedReader BufferedWriter ByteString BytesIO BytesWarning "
"Callable CalledProcessError CancelledError ChainMap ChildProcessError Clamped Codec CodecInfo Collection "
"CompletedProcess Complex Condition "
"Connection ConnectionAbortedError ConnectionError ConnectionRefusedError ConnectionResetError "
"Container ContentTooShortError Context ContextDecorator ContextVar Coroutine Counter Cursor "
"DatabaseError Decimal DecimalException DefaultContext DefragResult DefragResultBytes DeprecationWarning "
"DirEntry DivisionByZero "
"EOFError EncodingWarning Enum Error Event Exception ExitStack ExtendedContext "
"Field FileExistsError FileIO FileNotFoundError FileType Filter Flag FloatOperation FloatingPointError Formatter "
"Fraction FrameSummary FrozenInstanceError FutureWarning "
"Generator GeneratorExit GenericAlias HTTPError Handler Hashable "
"IOBase ImportError ImportWarning IncompleteReadError IncrementalDecoder IncrementalEncoder IncrementalNewlineDecoder "
"IndentationError IndexError Inexact IntEnum IntFlag Integral IntegrityError InterruptedError "
"InvalidOperation InvalidStateError IsADirectoryError ItemsView Iterable Iterator "
"JSONDecodeError JSONDecoder JSONEncoder KeyError KeyboardInterrupt KeysView "
"LifoQueue LimitOverrunError Lock LogRecord Logger LoggerAdapter LookupError "
"Mapping MappingView Match MemoryError ModuleNotFoundError MutableMapping MutableSequence MutableSet "
"NameError NormalDist NotADirectoryError NotImplementedError NotSupportedError Number "
"OSError OperationalError OrderedDict Overflow OverflowError "
"ParseResult ParseResultBytes Path PathLike Pattern PendingDeprecationWarning PermissionError Popen PosixPath "
"PriorityQueue ProcessLookupError ProgrammingError PurePath PurePosixPath PureWindowsPath "
"Queue QueueEmpty QueueFull "
"Random Rational RawIOBase Real RecursionError ReferenceError ResourceWarning Reversible Rounded Row "
"RuntimeError RuntimeWarning "
"SafeUUID SameFileError Semaphore SendfileNotAvailableError Sequence Set Sized SplitResult SplitResultBytes "
"StackSummary StatisticsError StopAsyncIteration StopIteration "
"StreamReader StreamReaderWriter StreamRecoder StreamWriter StringIO Struct Subnormal SubprocessError "
"SyntaxError SyntaxWarning SystemError SystemExit SystemRandom "
"TabError Task Template TextIOBase TextIOWrapper TextWrapper TimeoutError TimeoutExpired Token TracebackException "
"TypeError "
"URLError UUID UnboundLocalError Underflow "
"UnicodeDecodeError UnicodeEncodeError UnicodeError UnicodeTranslateError UnicodeWarning UnsupportedOperation "
"UserDict UserList UserString UserWarning "
"ValueError ValuesView Warning WindowsPath ZeroDivisionError array catch_warnings date datetime defaultdict deque error "
"partialmethod sched_param singledispatchmethod stat_result struct_time terminal_size time timedelta timezone tzinfo "

, // 7 decorator
"abstractmethod asynccontextmanager cache cached_property classmethod contextmanager dataclass lru_cache property "
"register singledispatch staticmethod total_ordering unique wraps "

, // 8 module
"__builtins__ __future__ abc argparse asyncio atexit base64 bisect builtins "
"cmath codecs collections collections.abc contextlib contextvars copy dataclasses decimal enum exception "
"fnmatch fractions functools glob heapq io itertools json logging math numbers os os.path pathlib pickle random re "
"shutil site sqlite3 statistics string struct subprocess sys textwrap traceback types "
"unicodedata urllib.error urllib.parse uuid warnings "

, // 9 function
"EncodedFile( Etiny( Etop( WCOREDUMP( WEXITSTATUS( WIFCONTINUED( WIFEXITED( WIFSIGNALED( WIFSTOPPED( WSTOPSIG( WTERMSIG( "
"_asdict( _clear_type_cache( _current_exceptions( _current_frames( _debugmallocstats( "
"_enablelegacywindowsfsencoding( _exit( _getframe( _make( _replace( "
"a85decode( a85encode( abort( abspath( access( accumulate( aclose( aclosing( acos( acosh( acquire( add( addFilter( "
"addHandler( addLevelName( "
"add_argument( add_argument_group( add_dll_directory( add_done_callback( add_mutually_exclusive_group( add_subparsers( "
"addaudithook( adjusted( all_tasks( append( appendleft( "
"as_completed( as_integer_ratio( as_posix( as_tuple( as_uri( asctime( asdict( asend( asin( asinh( astimezone( astuple( "
"at_eof( atan( atan2( atanh( athrow( audit( auto( "
"b16decode( b16encode( b32decode( b32encode( b32hexdecode( b32hexencode( b64decode( b64encode( b85decode( b85encode( "
"backslashreplace_errors( backup( basename( basicConfig( betavariate( "
"bidirectional( bisect( bisect_left( bisect_right( bit_count( bit_length( breakpointhook( buffer_info( byteswap( "
"cache( cached_property( calcsize( call_tracing( callback( can_write_eof( cancel( cancelled( canonical( "
"capitalize( captureWarnings( capwords( casefold( cast( category( cdf( ceil( center( "
"chain( chdir( check_returncode( check_unused_args( chflags( chmod( choice( choices( chown( chroot( "
"clear( clear_flags( clear_frames( clear_traps( "
"clock_getres( clock_gettime( clock_gettime_ns( clock_settime( clock_settime_ns( close( closerange( closing( cmp_to_key( "
"comb( combinations( combinations_with_replacement( combine( combining( commit( commonpath( commonprefix( communicate( "
"compare( compare_signal( compare_total( compare_total_mag( complete_statement( compress( "
"confstr( conjugate( connect( convert_arg_line_to_args( convert_field( copy( copy2( "
"copy_abs( copy_context( copy_decimal( copy_file_range( copy_negate( copy_sign( copyfile( copyfileobj( copymode( "
"copysign( copystat( copytree( correlation( cos( cosh( count( covariance( cpu_count( createLock( create_aggregate( "
"create_collation( create_decimal( create_decimal_from_float( create_function( "
"create_subprocess_exec( create_subprocess_shell( create_task( critical( ctermid( ctime( current_task( cursor( cwd( "
"cycle( "
"dataclass( debug( decimal( decode( decomposition( dedent( deepcopy( default( degrees( detach( device_encoding( "
"difference( difference_update( digit( dirname( disable( discard( disk_usage( displayhook( dist( divide( divide_int( "
"done( drain( dropwhile( dst( dump( dumps( dup( dup2( "
"east_asian_width( elements( emit( empty( "
"enable_callback_tracebacks( enable_load_extension( encode( end( endswith( enter_async_context( enter_context( "
"erf( erfc( escape( eventfd( eventfd_read( eventfd_write( exc_info( excepthook( exception( "
"execl( execle( execlp( execlpe( execute( executemany( executescript( execv( execve( execvp( execvpe( exists( "
"exp( expand( expandtabs( expanduser( expandvars( expm1( expovariate( "
"extend( extendleft( extract( extract_stack( extract_tb( "
"fabs( factorial( fchdir( fchmod( fchown( fdatasync( fdopen( fetchall( fetchmany( fetchone( "
"field( fields( fileno( fill( filterfalse( filterwarnings( find( findCaller( findall( finditer( floor( flush( "
"fma( fmean( fmod( fnmatch( fnmatchcase( fork( forkpty( formatException( formatStack( formatTime( "
"format_exc( format_exception( format_exception_only( format_field( format_help( format_list( format_map( format_stack( "
"format_tb( format_usage( formatwarning( fpathconf( frexp( "
"from_bytes( from_decimal( from_exception( from_float( from_iterable( from_list( from_samples( frombytes( fromfile( "
"fromhex( fromisocalendar( fromisoformat( fromkeys( fromlist( fromordinal( fromtimestamp( fromunicode( fromutc( "
"fsdecode( fsencode( fspath( fstat( fstatvfs( fsum( fsync( ftruncate( full( fullmatch( fwalk( "
"gamma( gammavariate( gather( gauss( gcd( geometric_mean( get( getChild( getEffectiveLevel( "
"getLevelName( getLogRecordFactory( getLogger( getLoggerClass( getMessage( get_archive_formats( get_asyncgen_hooks( "
"get_blocking( get_cache_token( get_clock_info( get_coro( get_coroutine_origin_tracking_depth( get_default( "
"get_exec_path( get_extra_info( get_field( get_handle_inheritable( get_inheritable( get_name( get_nowait( get_stack( "
"get_terminal_size( get_unpack_formats( get_value( getallocatedblocks( getandroidapilevel( getatime( getbuffer( "
"getcontext( getctime( getcwd( getcwdb( getdecoder( getdefaultencoding( getdlopenflags( "
"getegid( getencoder( getenv( getenvb( geteuid( getfilesystemencodeerrors( getfilesystemencoding( "
"getgid( getgrouplist( getgroups( getincrementaldecoder( getincrementalencoder( getloadavg( getlogin( getmtime( getnode( "
"getpgid( getpgrp( getpid( getppid( getpriority( getprofile( "
"getrandbits( getrandom( getreader( getrecursionlimit( getrefcount( getresgid( getresuid( "
"getsid( getsize( getsizeof( getstate( getswitchinterval( gettrace( getuid( geturl( getvalue( "
"getwindowsversion( getwriter( getxattr( glob( gmtime( group( groupby( groupdict( groups( "
"handle( handleError( hardlink_to( harmonic_mean( hasHandlers( heapify( heappop( heappush( heappushpop( heapreplace( "
"home( hypot( "
"iglob( ignore_errors( ignore_patterns( indent( index( indices( info( initgroups( inode( "
"insert( insort( insort_left( insort_right( interrupt( intersection( intersection_update( inv_cdf( isEnabledFor( "
"is_absolute( is_block_device( is_canonical( is_char_device( is_closing( is_dataclass( is_dir( "
"is_fifo( is_file( is_finalizing( is_finite( is_infinite( is_integer( is_mount( is_nan( is_normal( is_normalized( "
"is_qnan( is_relative_to( is_reserved( is_set( is_signed( is_snan( is_socket( is_subnormal( is_symlink( is_zero( "
"isabs( isalnum( isalpha( isascii( isatty( isclose( isdecimal( isdigit( isdir( isdisjoint( isfile( isfinite( "
"isidentifier( isinf( islice( islink( islower( ismount( isnan( isnumeric( isocalendar( isoformat( isoweekday( "
"isprintable( isqrt( isspace( issubset( issuperset( istitle( isupper( "
"items( iter_unpack( iterdecode( iterdir( iterdump( iterencode( "
"join( joinpath( keys( kill( killpg( "
"lchflags( lchmod( lchown( lcm( ldexp( lexists( lgamma( "
"limit_denominator( linear_regression( link( link_to( listdir( listxattr( ljust( ln( load( load_extension( loads( "
"localcontext( localtime( locked( lockf( "
"log( log10( log1p( log2( logb( logical_and( logical_invert( logical_or( logical_xor( lognormvariate( "
"lookup( lookup_error( lower( lru_cache( lseek( lstat( lstrip( "
"major( makeLogRecord( makeRecord( make_archive( make_dataclass( makedev( makedirs( maketrans( match( max_mag( "
"mean( median( median_grouped( median_high( median_low( memfd_create( merge( min_mag( minor( minus( mirrored( "
"mkdir( mkfifo( mknod( mktime( mode( modf( monotonic( monotonic_ns( most_common( move( move_to_end( multimode( multiply( "
"name( namedtuple( namereplace_errors( new_child( next_minus( next_plus( next_toward( nextafter( nice( nlargest( "
"normalize( normalvariate( normcase( normpath( notify( notify_all( now( nsmallest( nullcontext( number_class( numeric( "
"open_code( open_connection( open_unix_connection( openpty( overlap( owner( "
"pack( pack_into( pairwise( paretovariate( "
"parse( parse_args( parse_intermixed_args( parse_known_args( parse_known_intermixed_args( parse_qs( parse_qsl( "
"partial( partition( pathconf( pdf( peek( perf_counter( perf_counter_ns( perm( permutations( phase( "
"pidfd_open( pipe( pipe2( plock( plus( "
"polar( poll( pop( pop_all( popen( popitem( popleft( posix_fadvise( posix_fallocate( posix_spawn( posix_spawnp( power( "
"pread( preadv( print_exc( print_exception( print_help( print_last( print_stack( print_tb( print_usage( "
"process( process_time( process_time_ns( prod( product( pstdev( pthread_getcpuclockid( "
"purge( push( push_async_callback( push_async_exit( put( put_nowait( putenv( pvariance( pwrite( pwritev( "
"qsize( quantiles( quantize( quote( quote_from_bytes( quote_plus( "
"radians( radix( randbytes( randint( random( randrange( raw_decode( read( read1( read_bytes( read_text( "
"readable( readall( readexactly( readinto( readinto1( readline( readlines( readlink( readuntil( readv( realpath( "
"reconfigure( rect( redirect_stderr( redirect_stdout( register( "
"register_adapter( register_archive_format( register_at_fork( register_converter( register_error( "
"register_unpack_format( relative_to( release( relpath( remainder( remainder_near( "
"remove( removeFilter( removeHandler( remove_done_callback( removedirs( removeprefix( removesuffix( removexattr( "
"rename( renames( repeat( replace( replace_errors( reset( resetwarnings( resolve( result( reverse( rfind( rglob( rindex( "
"rjust( rmdir( rmtree( rollback( rotate( rpartition( rsplit( rstrip( run( run_coroutine_threadsafe( "
"safe_substitute( same_quantum( samefile( sameopenfile( samestat( sample( samples( scaleb( scandir( "
"sched_get_priority_max( sched_get_priority_min( sched_getaffinity( sched_getparam( sched_getscheduler( "
"sched_rr_get_interval( sched_setaffinity( sched_setparam( sched_setscheduler( sched_yield( search( "
"seed( seek( seekable( send( send_signal( sendfile( setFormatter( setLevel( setLogRecordFactory( setLoggerClass( "
"set_asyncgen_hooks( set_authorizer( set_blocking( set_coroutine_origin_tracking_depth( set_defaults( "
"set_handle_inheritable( set_inheritable( set_name( set_progress_handler( set_trace_callback( setcontext( "
"setdefault( setdlopenflags( setegid( seteuid( setgid( setgroups( setpgid( setpgrp( setpriority( setprofile( "
"setrecursionlimit( setregid( setresgid( setresuid( setreuid( setsid( setstate( setswitchinterval( settrace( setuid( "
"setxattr( shield( shift( shorten( showwarning( shuffle( shutdown( simplefilter( sin( sinh( sleep( sort( "
"span( spawnl( spawnle( spawnlp( spawnlpe( spawnv( spawnve( spawnvp( spawnvpe( "
"splice( split( splitdrive( splitext( splitlines( sqrt( standard_b64decode( standard_b64encode( "
"starmap( start( start_server( start_unix_server( startfile( startswith( stat( statvfs( stdev( "
"strerror( strftime( strict_errors( strip( strptime( sub( subn( substitute( subtract( suppress( swapcase( "
"symlink( symlink_to( symmetric_difference( symmetric_difference_update( sync( sysconf( system( "
"takewhile( tan( tanh( task_done( tcgetpgrp( tcsetpgrp( tee( tell( terminate( text_encoding( "
"thread_time( thread_time_ns( throw( time_ns( times( timestamp( timetuple( timetz( title( "
"to_bytes( to_eng_string( to_integral( to_integral_exact( to_integral_value( to_sci_string( to_thread( tobytes( today( "
"tofile( tolist( toordinal( toreadonly( total( total_seconds( touch( tounicode( translate( triangular( trunc( truncate( "
"ttyname( tzname( tzset( "
"ulp( umask( uname( uniform( union( unlink( unpack( unpack_archive( unpack_from( "
"unquote( unquote_plus( unquote_to_bytes( "
"unraisablehook( unregister( unregister_archive_format( unregister_unpack_format( unsetenv( unwrap( "
"update( update_abstractmethods( update_wrapper( upper( urandom( "
"urldefrag( urlencode( urljoin( urlparse( urlsafe_b64decode( urlsafe_b64encode( urlsplit( urlunparse( urlunsplit( "
"utcfromtimestamp( utcnow( utcoffset( utctimetuple( utime( uuid1( uuid3( uuid4( uuid5( "
"values( variance( vformat( vonmisesvariate( "
"wait( wait3( wait4( wait_closed( wait_for( waitid( waitpid( waitstatus_to_exitcode( walk( walk_stack( walk_tb( "
"warn( warn_explicit( warning( weekday( weibullvariate( which( with_name( with_stem( with_suffix( with_traceback( "
"wrap( wraps( writable( write( write_bytes( write_eof( write_text( writelines( writev( "
"xmlcharrefreplace_errors( zfill( zip_longest( zscore( "

, // 10 field
"ASCII BOM_UTF16 BOM_UTF16_BE BOM_UTF16_LE BOM_UTF32 BOM_UTF32_BE BOM_UTF32_LE BOM_UTF8 "
"CLD_CONTINUED CLD_DUMPED CLD_EXITED CLD_KILLED CLD_STOPPED CLD_TRAPPED CLOCK_BOOTTIME CLOCK_HIGHRES "
"CLOCK_MONOTONIC CLOCK_MONOTONIC_RAW CLOCK_PROCESS_CPUTIME_ID CLOCK_PROF CLOCK_REALTIME "
"CLOCK_TAI CLOCK_THREAD_CPUTIME_ID CLOCK_UPTIME CLOCK_UPTIME_RAW CRITICAL "
"DEBUG DEFAULT_BUFFER_SIZE DEVNULL DOTALL "
"EFD_CLOEXEC EFD_NONBLOCK EFD_SEMAPHORE ERROR EX_CANTCREAT EX_CONFIG EX_DATAERR EX_IOERR "
"EX_NOHOST EX_NOINPUT EX_NOPERM EX_NOTFOUND EX_NOUSER EX_OK EX_OSERR EX_OSFILE EX_PROTOCOL EX_SOFTWARE EX_TEMPFAIL "
"EX_UNAVAILABLE EX_USAGE "
"F_LOCK F_OK F_TEST F_TLOCK F_ULOCK GRND_NONBLOCK GRND_RANDOM HAVE_CONTEXTVAR IGNORECASE INFO Inf Infinity KW_ONLY "
"LOCALE "
"MAXYEAR MAX_EMAX MAX_PREC MFD_ALLOW_SEALING MFD_CLOEXEC MFD_HUGETLB "
"MFD_HUGE_16GB MFD_HUGE_16MB MFD_HUGE_1GB MFD_HUGE_1MB MFD_HUGE_256MB MFD_HUGE_2GB MFD_HUGE_2MB MFD_HUGE_32MB "
"MFD_HUGE_512KB MFD_HUGE_512MB MFD_HUGE_64KB MFD_HUGE_8MB MFD_HUGE_MASK MFD_HUGE_SHIFT "
"MINYEAR MIN_EMIN MIN_ETINY MISSING MULTILINE "
"NAMESPACE_DNS NAMESPACE_OID NAMESPACE_URL NAMESPACE_X500 NOTSET NaN "
"O_APPEND O_ASYNC O_BINARY O_CLOEXEC O_CREAT O_DIRECT O_DIRECTORY O_DSYNC O_EVTONLY O_EXCL O_EXLOCK O_FSYNC "
"O_NDELAY O_NOATIME O_NOCTTY O_NOFOLLOW O_NOFOLLOW_ANY O_NOINHERIT O_NONBLOCK O_PATH O_RANDOM O_RDONLY O_RDWR O_RSYNC "
"O_SEQUENTIAL O_SHLOCK O_SHORT_LIVED O_SYMLINK O_SYNC O_TEMPORARY O_TEXT O_TMPFILE O_TRUNC O_WRONLY "
"PARSE_COLNAMES PARSE_DECLTYPES PIPE "
"POSIX_FADV_DONTNEED POSIX_FADV_NOREUSE POSIX_FADV_NORMAL POSIX_FADV_RANDOM POSIX_FADV_SEQUENTIAL POSIX_FADV_WILLNEED "
"POSIX_SPAWN_CLOSE POSIX_SPAWN_DUP2 POSIX_SPAWN_OPEN PRIO_PGRP PRIO_PROCESS PRIO_USER "
"P_ALL P_DETACH P_NOWAIT P_NOWAITO P_OVERLAY P_PGID P_PID P_PIDFD P_WAIT "
"ROUND_05UP ROUND_CEILING ROUND_DOWN ROUND_FLOOR ROUND_HALF_DOWN ROUND_HALF_EVEN ROUND_HALF_UP ROUND_UP "
"RTLD_DEEPBIND RTLD_GLOBAL RTLD_LAZY RTLD_LOCAL RTLD_NODELETE RTLD_NOLOAD RTLD_NOW "
"RWF_APPEND RWF_DSYNC RWF_HIPRI RWF_NOWAIT RWF_SYNC R_OK "
"SCHED_BATCH SCHED_FIFO SCHED_IDLE SCHED_OTHER SCHED_RESET_ON_FORK SCHED_RR SCHED_SPORADIC SEEK_CUR SEEK_END SEEK_SET "
"SF_MNOWAIT SF_NODISKIO SF_SYNC SPLICE_F_MORE SPLICE_F_MOVE SPLICE_F_NONBLOCK STDOUT "
"VERBOSE WARNING WCONTINUED WEXITED WNOHANG WNOWAIT WSTOPPED WUNTRACED W_OK "
"XATTR_CREATE XATTR_REPLACE XATTR_SIZE_MAX X_OK "
"_field_defaults _fields _generate_next_value_ _ignore_ _missing_ _name_ _order_ _value_ _xoptions "
"abiflags absolute_import altsep altzone anchor annotations api_version args argv arraysize "
"ascii_letters ascii_lowercase ascii_uppercase avoids_symlink_attacks "
"base_exec_prefix base_prefix break_long_words break_on_hyphens builtin_module_names byteorder bytes_le "
"c_contiguous characters_written children_system children_user closed cmd "
"code colno columns confstr_names connection consumed contiguous copyright credits curdir "
"data datefmt day daylight default_factory defpath deleter denominator description devnull digits division dllhandle "
"doc dont_write_bytecode drive drop_whitespace "
"elapsed encoding end end_lineno end_offset endpos environ environb errno errors "
"exc_type exec_prefix executable expand_tabs expected "
"f_contiguous fields filemode filename filename2 fix_sentence_endings flags float_info float_repr_style "
"fold force format fragment func "
"generator_stop generators getter groupindex groups hash_info headers hex hexdigits hexversion hostname hour "
"imag implementation in_transaction inf infj initial_indent int_info is_safe isolation_level itemsize keywords "
"lastResort last_traceback last_type last_value lastgroup lastindex lastrowid level "
"license line_buffering lineno lines linesep "
"maps max max_lines maxlen maxsize maxunicode mean median meta_path microsecond min minute mode modules month msg "
"name nan nanj nbytes ndim nested_scopes netloc newlines numerator obj octdigits offset old_value orig_argv output "
"params pardir parent parents partial parts password path path_hooks path_importer_cache pathconf_names pathsep pattern "
"pi pid placeholder platform platlibdir port pos prefix print_function printable propagate ps1 ps2 punctuation "
"pycache_prefix "
"query raw readonly real reason replace_whitespace resolution returncode root row_factory rowcount "
"sNaN safe scheme second sep setter shape size sqlite_version sqlite_version_info st_atime st_atime_ns "
"st_birthtime st_blksize st_blocks st_creator st_ctime st_ctime_ns st_dev st_file_attributes st_flags st_fstype "
"st_gen st_gid st_ino st_mode st_mtime st_mtime_ns st_nlink st_rdev st_reparse_tag st_rsize st_size st_type st_uid "
"stack start stderr stdev stdin stdlib_module_names stdout stem stream strerror strides style "
"suboffsets subsequent_indent suffix suffixes supports_bytes_environ supports_dir_fd supports_effective_ids "
"supports_fd supports_follow_symlinks supports_unicode_filenames sysconf_names system "
"tabsize tau template text text_factory thread_info timeout "
"tm_gmtoff tm_hour tm_isdst tm_mday tm_min tm_mon tm_sec tm_wday tm_yday tm_year tm_zone total_changes "
"tracebacklimit transport typecode typecodes tzname "
"ucd_3_2_0 unicode_literals unidata_version unknown unsafe urn user username utc "
"var variance variant version version_info warnoptions whitespace width winerror winver with_statement write_through "
"year "

, // 11 misc
"Emax Emin "
"abs_tol add_help adobe after_in_child after_in_parent allow_abbrev allow_fragments allow_nan altchars append "
"argument_default assigned auto "
"backlog backslashreplace base bases before buffer_callback buffer_size buffering buffers bufsize "
"capitals capture_locals capture_output casefold category chain check check_circular choices "
"clamp clock_seq close_fds closefd cls compact compare conflict_handler const context copy_function count counts "
"creationflags ctx cum_weights cwd "
"days debug default defaults delete deterministic device dict_factory dir_fd dirs_exist_ok dont_inherit doseq dst_dir_fd "
"effective_ids ensure_ascii enter_result env epilog exclusive exist_ok exit_on_error extra extra_groups "
"factory fallback family fdel fget file_actions file_encoding fillvalue fix_imports flush fmt "
"foldspaces follow_symlinks followlinks formatter_class fromfile_prefix_chars fromlist frozen fset "
"globals group hash help hint host hours "
"ignore ignore_dangling_symlinks ignore_errors ignorechars "
"incrementaldecoder incrementalencoder indent inheritable init initial initial_value input interval "
"keep_blank_values keepends key kw_only last limit line local_addr locals lock lookup_line lookup_lines loop "
"main map01 mapping match_args max_denominator max_num_fields maxsplit message metadata metavar method "
"microseconds milliseconds minutes missing_ok module module_globals modulo "
"namereplace namespace nargs newline node "
"object_hook object_pairs_hook offset_dst offset_src onerror opener optimize order owner "
"pad pages parse_constant parse_float parse_int pass_fds pipesize "
"prec predicate preexec_fn prefix_chars prog progress proto protocol "
"quote_via "
"record recursive registry rel_tol rename repeat replace repr required resetids restore_signals result "
"return_exceptions return_when reuse_address reuse_port reverse root_dir rounding "
"scheduler seconds seed separator separators server_hostname setpgroup setsid setsigdef setsigmask shell "
"sigma signed sinfo skipkeys sleep slots sock sort_keys source src_dir_fd ssl ssl_handshake_timeout "
"stack_info stacklevel start_new_session start_serving startupinfo status step "
"streamreader streamwriter strict strict_parsing surrogateescape surrogatepass symlinks "
"target_is_directory times timespec title top topdown trailers traps tuple_factory typed "
"umask universal_newlines unsafe_hash updated usage utf-8 validate value weeks weights whence wrapcol "
"xbar xmlcharrefreplace "

, // 12 comment tag
"param return returns rtype type "

, NULL, NULL, NULL
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_Python[] = {
	EDITSTYLE_DEFAULT,
	{ SCE_PY_WORD, NP2StyleX_Keyword, L"bold; fore:#FF8000" },
	{ SCE_PY_WORD2, NP2StyleX_Type, L"fore:#0080FF" },
	{ SCE_PY_CLASS, NP2StyleX_Class, L"bold; fore:#007F7F" },
	{ SCE_PY_FUNCTION_DEFINITION, NP2StyleX_FunctionDefinition, L"bold; fore:#0080C0" },
	{ SCE_PY_FUNCTION, NP2StyleX_Function, L"fore:#A46000" },
	{ SCE_PY_ATTRIBUTE, NP2StyleX_Attribute, L"fore:#FF8000" },
	{ SCE_PY_DECORATOR, NP2StyleX_Decorator, L"fore:#C65D09" },
	{ SCE_PY_BUILTIN_CONSTANT, NP2StyleX_BuiltInConstant, L"bold; fore:#008080" },
	{ SCE_PY_BUILTIN_FUNCTION, NP2StyleX_BuiltInFunction, L"fore:#0080C0" },
	{ SCE_PY_OBJECT_FUNCTION, NP2StyleX_MagicMethod, L"fore:#0080C0" },
	{ MULTI_STYLE(SCE_PY_COMMENTLINE, SCE_PY_COMMENTBLOCK, 0, 0), NP2StyleX_Comment, L"fore:#608060" },
	{ SCE_PY_COMMENTTAGAT, NP2StyleX_DocCommentTag, L"fore:#408080" },
	{ SCE_PY_TASKMARKER, NP2StyleX_TaskMarker, L"bold; fore:#408080" },
	{ MULTI_STYLE(SCE_PY_STRING_SQ, SCE_PY_STRING_DQ, 0, 0), NP2StyleX_String, L"fore:#008000" },
	{ MULTI_STYLE(SCE_PY_RAWSTRING_SQ, SCE_PY_RAWSTRING_DQ, SCE_PY_TRIPLE_RAWSTRING_SQ, SCE_PY_TRIPLE_RAWSTRING_DQ), NP2StyleX_RawString, L"fore:#008080" },
	{ MULTI_STYLE(SCE_PY_TRIPLE_STRING_SQ, SCE_PY_TRIPLE_STRING_DQ, 0, 0), NP2StyleX_TripleQuotedString, L"fore:#F08000" },
	{ MULTI_STYLE(SCE_PY_FMTSTRING_SQ, SCE_PY_FMTSTRING_DQ, SCE_PY_RAWFMTSTRING_SQ, SCE_PY_RAWFMTSTRING_DQ), NP2StyleX_FormattedString, L"fore:#648000" },
	{ MULTI_STYLE(SCE_PY_TRIPLE_FMTSTRING_SQ, SCE_PY_TRIPLE_FMTSTRING_DQ, SCE_PY_TRIPLE_RAWFMTSTRING_SQ, SCE_PY_TRIPLE_RAWFMTSTRING_DQ), NP2StyleX_TripleQuotedFString, L"fore:#F08000" },
	{ MULTI_STYLE(SCE_PY_BYTES_SQ, SCE_PY_BYTES_DQ, SCE_PY_RAWBYTES_SQ, SCE_PY_RAWBYTES_DQ), NP2StyleX_Bytes, L"fore:#C08000" },
	{ MULTI_STYLE(SCE_PY_TRIPLE_BYTES_SQ, SCE_PY_TRIPLE_BYTES_DQ, SCE_PY_TRIPLE_RAWBYTES_SQ, SCE_PY_TRIPLE_RAWBYTES_DQ), NP2StyleX_TripleQuotedBytes, L"fore:#A46000" },
	{ SCE_PY_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ SCE_PY_FORMAT_SPECIFIER, NP2StyleX_FormatSpecifier, L"fore:#7C5AF3" },
	{ MULTI_STYLE(SCE_PY_PLACEHOLDER, SCE_PY_DOLLAR_PLACEHOLDER, 0, 0), NP2StyleX_Placeholder, L"fore:#8080FF" },
	{ SCE_PY_KEY, NP2StyleX_Key, L"fore:#A46000" },
	{ SCE_PY_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ MULTI_STYLE(SCE_PY_OPERATOR, SCE_PY_OPERATOR2, 0, 0), NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexPython = {
	SCLEX_PYTHON, NP2LEX_PYTHON,
//Settings++Autogenerated -- start of section automatically generated
	{
		LexerAttr_NoBlockComment |
		LexerAttr_IndentBasedFolding |
		LexerAttr_IndentLookForward,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 1) | (1 << 2), // class, function
		SCE_PY_FUNCTION_DEFINITION
		, KeywordAttr32(0, KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(1, KeywordAttr_PreSorted) // type
		| KeywordAttr32(2, KeywordAttr_PreSorted) // built-in constant
		| KeywordAttr32(3, KeywordAttr_PreSorted) // built-in function
		| KeywordAttr32(4, KeywordAttr_PreSorted) // attribute
		| KeywordAttr32(5, KeywordAttr_PreSorted) // special method
		| KeywordAttr32(6, KeywordAttr_PreSorted) // class
		| KeywordAttr64(7, KeywordAttr_NoLexer) // decorator
		| KeywordAttr64(8, KeywordAttr_NoLexer) // module
		| KeywordAttr64(9, KeywordAttr_NoLexer) // function
		| KeywordAttr64(10, KeywordAttr_NoLexer) // field
		| KeywordAttr64(11, KeywordAttr_NoLexer) // misc
		| KeywordAttr64(12, KeywordAttr_NoLexer) // comment tag
	},
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"Python Script", Styles_Python),
	L"py; pyw; pyx; pxd; pxi; pyi; py3; pth; boo; empy; cobra; gs; bzl",
	&Keywords_Python,
	Styles_Python
};
