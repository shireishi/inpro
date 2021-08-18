# inpro
<hr>
The inpro (initiate project) project is used to create the filesystem for a project by the specified language.

## Examples
<hr>
`inpro python BankSystem`
```
Directory does not exist. Creating directory.
Directory successfully created. Continuing process.
Creating the directory for the language: python at BankSystem
Creating virtual environment...
Done.
Created all directories.

.
|-- bin
|   |-- Activate.ps1
|   |-- activate
|   |-- activate.csh
|   |-- activate.fish
|   |-- pip
|   |-- pip3
|   |-- pip3.9
|   |-- python -> /usr/bin/python
|   |-- python3 -> python
|   `-- python3.9 -> python
|-- docs
|   `-- notes.text
|-- include
|-- lib
|   `-- python3.9
|       `-- site-packages
|           |-- _distutils_hack
|           |   |-- __init__.py
|           |   |-- __pycache__
|           |   |   |-- __init__.cpython-39.pyc
|           |   |   `-- override.cpython-39.pyc
|           |   `-- override.py
|           |-- distutils-precedence.pth
|           |-- pip
|           |   |-- __init__.py
|           |   |-- __main__.py
|           |   |-- __pycache__
|           |   |   |-- __init__.cpython-39.pyc
|           |   |   `-- __main__.cpython-39.pyc
|           |   |-- _internal
|           |   |   |-- __init__.py
|           |   |   |-- __pycache__
|           |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |-- build_env.cpython-39.pyc
|           |   |   |   |-- cache.cpython-39.pyc
|           |   |   |   |-- configuration.cpython-39.pyc
|           |   |   |   |-- exceptions.cpython-39.pyc
|           |   |   |   |-- main.cpython-39.pyc
|           |   |   |   |-- pyproject.cpython-39.pyc
|           |   |   |   |-- self_outdated_check.cpython-39.pyc
|           |   |   |   `-- wheel_builder.cpython-39.pyc
|           |   |   |-- build_env.py
|           |   |   |-- cache.py
|           |   |   |-- cli
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- autocompletion.cpython-39.pyc
|           |   |   |   |   |-- base_command.cpython-39.pyc
|           |   |   |   |   |-- cmdoptions.cpython-39.pyc
|           |   |   |   |   |-- command_context.cpython-39.pyc
|           |   |   |   |   |-- main.cpython-39.pyc
|           |   |   |   |   |-- main_parser.cpython-39.pyc
|           |   |   |   |   |-- parser.cpython-39.pyc
|           |   |   |   |   |-- progress_bars.cpython-39.pyc
|           |   |   |   |   |-- req_command.cpython-39.pyc
|           |   |   |   |   |-- spinners.cpython-39.pyc
|           |   |   |   |   `-- status_codes.cpython-39.pyc
|           |   |   |   |-- autocompletion.py
|           |   |   |   |-- base_command.py
|           |   |   |   |-- cmdoptions.py
|           |   |   |   |-- command_context.py
|           |   |   |   |-- main.py
|           |   |   |   |-- main_parser.py
|           |   |   |   |-- parser.py
|           |   |   |   |-- progress_bars.py
|           |   |   |   |-- req_command.py
|           |   |   |   |-- spinners.py
|           |   |   |   `-- status_codes.py
|           |   |   |-- commands
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- cache.cpython-39.pyc
|           |   |   |   |   |-- check.cpython-39.pyc
|           |   |   |   |   |-- completion.cpython-39.pyc
|           |   |   |   |   |-- configuration.cpython-39.pyc
|           |   |   |   |   |-- debug.cpython-39.pyc
|           |   |   |   |   |-- download.cpython-39.pyc
|           |   |   |   |   |-- freeze.cpython-39.pyc
|           |   |   |   |   |-- hash.cpython-39.pyc
|           |   |   |   |   |-- help.cpython-39.pyc
|           |   |   |   |   |-- install.cpython-39.pyc
|           |   |   |   |   |-- list.cpython-39.pyc
|           |   |   |   |   |-- search.cpython-39.pyc
|           |   |   |   |   |-- show.cpython-39.pyc
|           |   |   |   |   |-- uninstall.cpython-39.pyc
|           |   |   |   |   `-- wheel.cpython-39.pyc
|           |   |   |   |-- cache.py
|           |   |   |   |-- check.py
|           |   |   |   |-- completion.py
|           |   |   |   |-- configuration.py
|           |   |   |   |-- debug.py
|           |   |   |   |-- download.py
|           |   |   |   |-- freeze.py
|           |   |   |   |-- hash.py
|           |   |   |   |-- help.py
|           |   |   |   |-- install.py
|           |   |   |   |-- list.py
|           |   |   |   |-- search.py
|           |   |   |   |-- show.py
|           |   |   |   |-- uninstall.py
|           |   |   |   `-- wheel.py
|           |   |   |-- configuration.py
|           |   |   |-- distributions
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- base.cpython-39.pyc
|           |   |   |   |   |-- installed.cpython-39.pyc
|           |   |   |   |   |-- sdist.cpython-39.pyc
|           |   |   |   |   `-- wheel.cpython-39.pyc
|           |   |   |   |-- base.py
|           |   |   |   |-- installed.py
|           |   |   |   |-- sdist.py
|           |   |   |   `-- wheel.py
|           |   |   |-- exceptions.py
|           |   |   |-- index
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- collector.cpython-39.pyc
|           |   |   |   |   |-- package_finder.cpython-39.pyc
|           |   |   |   |   `-- sources.cpython-39.pyc
|           |   |   |   |-- collector.py
|           |   |   |   |-- package_finder.py
|           |   |   |   `-- sources.py
|           |   |   |-- locations
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- _distutils.cpython-39.pyc
|           |   |   |   |   |-- _sysconfig.cpython-39.pyc
|           |   |   |   |   `-- base.cpython-39.pyc
|           |   |   |   |-- _distutils.py
|           |   |   |   |-- _sysconfig.py
|           |   |   |   `-- base.py
|           |   |   |-- main.py
|           |   |   |-- metadata
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- base.cpython-39.pyc
|           |   |   |   |   `-- pkg_resources.cpython-39.pyc
|           |   |   |   |-- base.py
|           |   |   |   `-- pkg_resources.py
|           |   |   |-- models
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- candidate.cpython-39.pyc
|           |   |   |   |   |-- direct_url.cpython-39.pyc
|           |   |   |   |   |-- format_control.cpython-39.pyc
|           |   |   |   |   |-- index.cpython-39.pyc
|           |   |   |   |   |-- link.cpython-39.pyc
|           |   |   |   |   |-- scheme.cpython-39.pyc
|           |   |   |   |   |-- search_scope.cpython-39.pyc
|           |   |   |   |   |-- selection_prefs.cpython-39.pyc
|           |   |   |   |   |-- target_python.cpython-39.pyc
|           |   |   |   |   `-- wheel.cpython-39.pyc
|           |   |   |   |-- candidate.py
|           |   |   |   |-- direct_url.py
|           |   |   |   |-- format_control.py
|           |   |   |   |-- index.py
|           |   |   |   |-- link.py
|           |   |   |   |-- scheme.py
|           |   |   |   |-- search_scope.py
|           |   |   |   |-- selection_prefs.py
|           |   |   |   |-- target_python.py
|           |   |   |   `-- wheel.py
|           |   |   |-- network
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- auth.cpython-39.pyc
|           |   |   |   |   |-- cache.cpython-39.pyc
|           |   |   |   |   |-- download.cpython-39.pyc
|           |   |   |   |   |-- lazy_wheel.cpython-39.pyc
|           |   |   |   |   |-- session.cpython-39.pyc
|           |   |   |   |   |-- utils.cpython-39.pyc
|           |   |   |   |   `-- xmlrpc.cpython-39.pyc
|           |   |   |   |-- auth.py
|           |   |   |   |-- cache.py
|           |   |   |   |-- download.py
|           |   |   |   |-- lazy_wheel.py
|           |   |   |   |-- session.py
|           |   |   |   |-- utils.py
|           |   |   |   `-- xmlrpc.py
|           |   |   |-- operations
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- check.cpython-39.pyc
|           |   |   |   |   |-- freeze.cpython-39.pyc
|           |   |   |   |   `-- prepare.cpython-39.pyc
|           |   |   |   |-- build
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   |-- metadata.cpython-39.pyc
|           |   |   |   |   |   |-- metadata_legacy.cpython-39.pyc
|           |   |   |   |   |   |-- wheel.cpython-39.pyc
|           |   |   |   |   |   `-- wheel_legacy.cpython-39.pyc
|           |   |   |   |   |-- metadata.py
|           |   |   |   |   |-- metadata_legacy.py
|           |   |   |   |   |-- wheel.py
|           |   |   |   |   `-- wheel_legacy.py
|           |   |   |   |-- check.py
|           |   |   |   |-- freeze.py
|           |   |   |   |-- install
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   |-- editable_legacy.cpython-39.pyc
|           |   |   |   |   |   |-- legacy.cpython-39.pyc
|           |   |   |   |   |   `-- wheel.cpython-39.pyc
|           |   |   |   |   |-- editable_legacy.py
|           |   |   |   |   |-- legacy.py
|           |   |   |   |   `-- wheel.py
|           |   |   |   `-- prepare.py
|           |   |   |-- pyproject.py
|           |   |   |-- req
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- constructors.cpython-39.pyc
|           |   |   |   |   |-- req_file.cpython-39.pyc
|           |   |   |   |   |-- req_install.cpython-39.pyc
|           |   |   |   |   |-- req_set.cpython-39.pyc
|           |   |   |   |   |-- req_tracker.cpython-39.pyc
|           |   |   |   |   `-- req_uninstall.cpython-39.pyc
|           |   |   |   |-- constructors.py
|           |   |   |   |-- req_file.py
|           |   |   |   |-- req_install.py
|           |   |   |   |-- req_set.py
|           |   |   |   |-- req_tracker.py
|           |   |   |   `-- req_uninstall.py
|           |   |   |-- resolution
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   `-- base.cpython-39.pyc
|           |   |   |   |-- base.py
|           |   |   |   |-- legacy
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   `-- resolver.cpython-39.pyc
|           |   |   |   |   `-- resolver.py
|           |   |   |   `-- resolvelib
|           |   |   |       |-- __init__.py
|           |   |   |       |-- __pycache__
|           |   |   |       |   |-- __init__.cpython-39.pyc
|           |   |   |       |   |-- base.cpython-39.pyc
|           |   |   |       |   |-- candidates.cpython-39.pyc
|           |   |   |       |   |-- factory.cpython-39.pyc
|           |   |   |       |   |-- found_candidates.cpython-39.pyc
|           |   |   |       |   |-- provider.cpython-39.pyc
|           |   |   |       |   |-- reporter.cpython-39.pyc
|           |   |   |       |   |-- requirements.cpython-39.pyc
|           |   |   |       |   `-- resolver.cpython-39.pyc
|           |   |   |       |-- base.py
|           |   |   |       |-- candidates.py
|           |   |   |       |-- factory.py
|           |   |   |       |-- found_candidates.py
|           |   |   |       |-- provider.py
|           |   |   |       |-- reporter.py
|           |   |   |       |-- requirements.py
|           |   |   |       `-- resolver.py
|           |   |   |-- self_outdated_check.py
|           |   |   |-- utils
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- appdirs.cpython-39.pyc
|           |   |   |   |   |-- compat.cpython-39.pyc
|           |   |   |   |   |-- compatibility_tags.cpython-39.pyc
|           |   |   |   |   |-- datetime.cpython-39.pyc
|           |   |   |   |   |-- deprecation.cpython-39.pyc
|           |   |   |   |   |-- direct_url_helpers.cpython-39.pyc
|           |   |   |   |   |-- distutils_args.cpython-39.pyc
|           |   |   |   |   |-- encoding.cpython-39.pyc
|           |   |   |   |   |-- entrypoints.cpython-39.pyc
|           |   |   |   |   |-- filesystem.cpython-39.pyc
|           |   |   |   |   |-- filetypes.cpython-39.pyc
|           |   |   |   |   |-- glibc.cpython-39.pyc
|           |   |   |   |   |-- hashes.cpython-39.pyc
|           |   |   |   |   |-- inject_securetransport.cpython-39.pyc
|           |   |   |   |   |-- logging.cpython-39.pyc
|           |   |   |   |   |-- misc.cpython-39.pyc
|           |   |   |   |   |-- models.cpython-39.pyc
|           |   |   |   |   |-- packaging.cpython-39.pyc
|           |   |   |   |   |-- parallel.cpython-39.pyc
|           |   |   |   |   |-- pkg_resources.cpython-39.pyc
|           |   |   |   |   |-- setuptools_build.cpython-39.pyc
|           |   |   |   |   |-- subprocess.cpython-39.pyc
|           |   |   |   |   |-- temp_dir.cpython-39.pyc
|           |   |   |   |   |-- unpacking.cpython-39.pyc
|           |   |   |   |   |-- urls.cpython-39.pyc
|           |   |   |   |   |-- virtualenv.cpython-39.pyc
|           |   |   |   |   `-- wheel.cpython-39.pyc
|           |   |   |   |-- appdirs.py
|           |   |   |   |-- compat.py
|           |   |   |   |-- compatibility_tags.py
|           |   |   |   |-- datetime.py
|           |   |   |   |-- deprecation.py
|           |   |   |   |-- direct_url_helpers.py
|           |   |   |   |-- distutils_args.py
|           |   |   |   |-- encoding.py
|           |   |   |   |-- entrypoints.py
|           |   |   |   |-- filesystem.py
|           |   |   |   |-- filetypes.py
|           |   |   |   |-- glibc.py
|           |   |   |   |-- hashes.py
|           |   |   |   |-- inject_securetransport.py
|           |   |   |   |-- logging.py
|           |   |   |   |-- misc.py
|           |   |   |   |-- models.py
|           |   |   |   |-- packaging.py
|           |   |   |   |-- parallel.py
|           |   |   |   |-- pkg_resources.py
|           |   |   |   |-- setuptools_build.py
|           |   |   |   |-- subprocess.py
|           |   |   |   |-- temp_dir.py
|           |   |   |   |-- unpacking.py
|           |   |   |   |-- urls.py
|           |   |   |   |-- virtualenv.py
|           |   |   |   `-- wheel.py
|           |   |   |-- vcs
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- bazaar.cpython-39.pyc
|           |   |   |   |   |-- git.cpython-39.pyc
|           |   |   |   |   |-- mercurial.cpython-39.pyc
|           |   |   |   |   |-- subversion.cpython-39.pyc
|           |   |   |   |   `-- versioncontrol.cpython-39.pyc
|           |   |   |   |-- bazaar.py
|           |   |   |   |-- git.py
|           |   |   |   |-- mercurial.py
|           |   |   |   |-- subversion.py
|           |   |   |   `-- versioncontrol.py
|           |   |   `-- wheel_builder.py
|           |   |-- _vendor
|           |   |   |-- __init__.py
|           |   |   |-- __pycache__
|           |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |-- appdirs.cpython-39.pyc
|           |   |   |   |-- distro.cpython-39.pyc
|           |   |   |   |-- pyparsing.cpython-39.pyc
|           |   |   |   `-- six.cpython-39.pyc
|           |   |   |-- appdirs.py
|           |   |   |-- cachecontrol
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- _cmd.cpython-39.pyc
|           |   |   |   |   |-- adapter.cpython-39.pyc
|           |   |   |   |   |-- cache.cpython-39.pyc
|           |   |   |   |   |-- compat.cpython-39.pyc
|           |   |   |   |   |-- controller.cpython-39.pyc
|           |   |   |   |   |-- filewrapper.cpython-39.pyc
|           |   |   |   |   |-- heuristics.cpython-39.pyc
|           |   |   |   |   |-- serialize.cpython-39.pyc
|           |   |   |   |   `-- wrapper.cpython-39.pyc
|           |   |   |   |-- _cmd.py
|           |   |   |   |-- adapter.py
|           |   |   |   |-- cache.py
|           |   |   |   |-- caches
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   |-- file_cache.cpython-39.pyc
|           |   |   |   |   |   `-- redis_cache.cpython-39.pyc
|           |   |   |   |   |-- file_cache.py
|           |   |   |   |   `-- redis_cache.py
|           |   |   |   |-- compat.py
|           |   |   |   |-- controller.py
|           |   |   |   |-- filewrapper.py
|           |   |   |   |-- heuristics.py
|           |   |   |   |-- serialize.py
|           |   |   |   `-- wrapper.py
|           |   |   |-- certifi
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __main__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- __main__.cpython-39.pyc
|           |   |   |   |   `-- core.cpython-39.pyc
|           |   |   |   |-- cacert.pem
|           |   |   |   `-- core.py
|           |   |   |-- chardet
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- big5freq.cpython-39.pyc
|           |   |   |   |   |-- big5prober.cpython-39.pyc
|           |   |   |   |   |-- chardistribution.cpython-39.pyc
|           |   |   |   |   |-- charsetgroupprober.cpython-39.pyc
|           |   |   |   |   |-- charsetprober.cpython-39.pyc
|           |   |   |   |   |-- codingstatemachine.cpython-39.pyc
|           |   |   |   |   |-- compat.cpython-39.pyc
|           |   |   |   |   |-- cp949prober.cpython-39.pyc
|           |   |   |   |   |-- enums.cpython-39.pyc
|           |   |   |   |   |-- escprober.cpython-39.pyc
|           |   |   |   |   |-- escsm.cpython-39.pyc
|           |   |   |   |   |-- eucjpprober.cpython-39.pyc
|           |   |   |   |   |-- euckrfreq.cpython-39.pyc
|           |   |   |   |   |-- euckrprober.cpython-39.pyc
|           |   |   |   |   |-- euctwfreq.cpython-39.pyc
|           |   |   |   |   |-- euctwprober.cpython-39.pyc
|           |   |   |   |   |-- gb2312freq.cpython-39.pyc
|           |   |   |   |   |-- gb2312prober.cpython-39.pyc
|           |   |   |   |   |-- hebrewprober.cpython-39.pyc
|           |   |   |   |   |-- jisfreq.cpython-39.pyc
|           |   |   |   |   |-- jpcntx.cpython-39.pyc
|           |   |   |   |   |-- langbulgarianmodel.cpython-39.pyc
|           |   |   |   |   |-- langgreekmodel.cpython-39.pyc
|           |   |   |   |   |-- langhebrewmodel.cpython-39.pyc
|           |   |   |   |   |-- langhungarianmodel.cpython-39.pyc
|           |   |   |   |   |-- langrussianmodel.cpython-39.pyc
|           |   |   |   |   |-- langthaimodel.cpython-39.pyc
|           |   |   |   |   |-- langturkishmodel.cpython-39.pyc
|           |   |   |   |   |-- latin1prober.cpython-39.pyc
|           |   |   |   |   |-- mbcharsetprober.cpython-39.pyc
|           |   |   |   |   |-- mbcsgroupprober.cpython-39.pyc
|           |   |   |   |   |-- mbcssm.cpython-39.pyc
|           |   |   |   |   |-- sbcharsetprober.cpython-39.pyc
|           |   |   |   |   |-- sbcsgroupprober.cpython-39.pyc
|           |   |   |   |   |-- sjisprober.cpython-39.pyc
|           |   |   |   |   |-- universaldetector.cpython-39.pyc
|           |   |   |   |   |-- utf8prober.cpython-39.pyc
|           |   |   |   |   `-- version.cpython-39.pyc
|           |   |   |   |-- big5freq.py
|           |   |   |   |-- big5prober.py
|           |   |   |   |-- chardistribution.py
|           |   |   |   |-- charsetgroupprober.py
|           |   |   |   |-- charsetprober.py
|           |   |   |   |-- cli
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   `-- chardetect.cpython-39.pyc
|           |   |   |   |   `-- chardetect.py
|           |   |   |   |-- codingstatemachine.py
|           |   |   |   |-- compat.py
|           |   |   |   |-- cp949prober.py
|           |   |   |   |-- enums.py
|           |   |   |   |-- escprober.py
|           |   |   |   |-- escsm.py
|           |   |   |   |-- eucjpprober.py
|           |   |   |   |-- euckrfreq.py
|           |   |   |   |-- euckrprober.py
|           |   |   |   |-- euctwfreq.py
|           |   |   |   |-- euctwprober.py
|           |   |   |   |-- gb2312freq.py
|           |   |   |   |-- gb2312prober.py
|           |   |   |   |-- hebrewprober.py
|           |   |   |   |-- jisfreq.py
|           |   |   |   |-- jpcntx.py
|           |   |   |   |-- langbulgarianmodel.py
|           |   |   |   |-- langgreekmodel.py
|           |   |   |   |-- langhebrewmodel.py
|           |   |   |   |-- langhungarianmodel.py
|           |   |   |   |-- langrussianmodel.py
|           |   |   |   |-- langthaimodel.py
|           |   |   |   |-- langturkishmodel.py
|           |   |   |   |-- latin1prober.py
|           |   |   |   |-- mbcharsetprober.py
|           |   |   |   |-- mbcsgroupprober.py
|           |   |   |   |-- mbcssm.py
|           |   |   |   |-- metadata
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   `-- languages.cpython-39.pyc
|           |   |   |   |   `-- languages.py
|           |   |   |   |-- sbcharsetprober.py
|           |   |   |   |-- sbcsgroupprober.py
|           |   |   |   |-- sjisprober.py
|           |   |   |   |-- universaldetector.py
|           |   |   |   |-- utf8prober.py
|           |   |   |   `-- version.py
|           |   |   |-- colorama
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- ansi.cpython-39.pyc
|           |   |   |   |   |-- ansitowin32.cpython-39.pyc
|           |   |   |   |   |-- initialise.cpython-39.pyc
|           |   |   |   |   |-- win32.cpython-39.pyc
|           |   |   |   |   `-- winterm.cpython-39.pyc
|           |   |   |   |-- ansi.py
|           |   |   |   |-- ansitowin32.py
|           |   |   |   |-- initialise.py
|           |   |   |   |-- win32.py
|           |   |   |   `-- winterm.py
|           |   |   |-- distlib
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- compat.cpython-39.pyc
|           |   |   |   |   |-- database.cpython-39.pyc
|           |   |   |   |   |-- index.cpython-39.pyc
|           |   |   |   |   |-- locators.cpython-39.pyc
|           |   |   |   |   |-- manifest.cpython-39.pyc
|           |   |   |   |   |-- markers.cpython-39.pyc
|           |   |   |   |   |-- metadata.cpython-39.pyc
|           |   |   |   |   |-- resources.cpython-39.pyc
|           |   |   |   |   |-- scripts.cpython-39.pyc
|           |   |   |   |   |-- util.cpython-39.pyc
|           |   |   |   |   |-- version.cpython-39.pyc
|           |   |   |   |   `-- wheel.cpython-39.pyc
|           |   |   |   |-- _backport
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   |-- misc.cpython-39.pyc
|           |   |   |   |   |   |-- shutil.cpython-39.pyc
|           |   |   |   |   |   |-- sysconfig.cpython-39.pyc
|           |   |   |   |   |   `-- tarfile.cpython-39.pyc
|           |   |   |   |   |-- misc.py
|           |   |   |   |   |-- shutil.py
|           |   |   |   |   |-- sysconfig.cfg
|           |   |   |   |   |-- sysconfig.py
|           |   |   |   |   `-- tarfile.py
|           |   |   |   |-- compat.py
|           |   |   |   |-- database.py
|           |   |   |   |-- index.py
|           |   |   |   |-- locators.py
|           |   |   |   |-- manifest.py
|           |   |   |   |-- markers.py
|           |   |   |   |-- metadata.py
|           |   |   |   |-- resources.py
|           |   |   |   |-- scripts.py
|           |   |   |   |-- t32.exe
|           |   |   |   |-- t64.exe
|           |   |   |   |-- util.py
|           |   |   |   |-- version.py
|           |   |   |   |-- w32.exe
|           |   |   |   |-- w64.exe
|           |   |   |   `-- wheel.py
|           |   |   |-- distro.py
|           |   |   |-- html5lib
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- _ihatexml.cpython-39.pyc
|           |   |   |   |   |-- _inputstream.cpython-39.pyc
|           |   |   |   |   |-- _tokenizer.cpython-39.pyc
|           |   |   |   |   |-- _utils.cpython-39.pyc
|           |   |   |   |   |-- constants.cpython-39.pyc
|           |   |   |   |   |-- html5parser.cpython-39.pyc
|           |   |   |   |   `-- serializer.cpython-39.pyc
|           |   |   |   |-- _ihatexml.py
|           |   |   |   |-- _inputstream.py
|           |   |   |   |-- _tokenizer.py
|           |   |   |   |-- _trie
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   |-- _base.cpython-39.pyc
|           |   |   |   |   |   `-- py.cpython-39.pyc
|           |   |   |   |   |-- _base.py
|           |   |   |   |   `-- py.py
|           |   |   |   |-- _utils.py
|           |   |   |   |-- constants.py
|           |   |   |   |-- filters
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   |-- alphabeticalattributes.cpython-39.pyc
|           |   |   |   |   |   |-- base.cpython-39.pyc
|           |   |   |   |   |   |-- inject_meta_charset.cpython-39.pyc
|           |   |   |   |   |   |-- lint.cpython-39.pyc
|           |   |   |   |   |   |-- optionaltags.cpython-39.pyc
|           |   |   |   |   |   |-- sanitizer.cpython-39.pyc
|           |   |   |   |   |   `-- whitespace.cpython-39.pyc
|           |   |   |   |   |-- alphabeticalattributes.py
|           |   |   |   |   |-- base.py
|           |   |   |   |   |-- inject_meta_charset.py
|           |   |   |   |   |-- lint.py
|           |   |   |   |   |-- optionaltags.py
|           |   |   |   |   |-- sanitizer.py
|           |   |   |   |   `-- whitespace.py
|           |   |   |   |-- html5parser.py
|           |   |   |   |-- serializer.py
|           |   |   |   |-- treeadapters
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   |-- genshi.cpython-39.pyc
|           |   |   |   |   |   `-- sax.cpython-39.pyc
|           |   |   |   |   |-- genshi.py
|           |   |   |   |   `-- sax.py
|           |   |   |   |-- treebuilders
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   |-- base.cpython-39.pyc
|           |   |   |   |   |   |-- dom.cpython-39.pyc
|           |   |   |   |   |   |-- etree.cpython-39.pyc
|           |   |   |   |   |   `-- etree_lxml.cpython-39.pyc
|           |   |   |   |   |-- base.py
|           |   |   |   |   |-- dom.py
|           |   |   |   |   |-- etree.py
|           |   |   |   |   `-- etree_lxml.py
|           |   |   |   `-- treewalkers
|           |   |   |       |-- __init__.py
|           |   |   |       |-- __pycache__
|           |   |   |       |   |-- __init__.cpython-39.pyc
|           |   |   |       |   |-- base.cpython-39.pyc
|           |   |   |       |   |-- dom.cpython-39.pyc
|           |   |   |       |   |-- etree.cpython-39.pyc
|           |   |   |       |   |-- etree_lxml.cpython-39.pyc
|           |   |   |       |   `-- genshi.cpython-39.pyc
|           |   |   |       |-- base.py
|           |   |   |       |-- dom.py
|           |   |   |       |-- etree.py
|           |   |   |       |-- etree_lxml.py
|           |   |   |       `-- genshi.py
|           |   |   |-- idna
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- codec.cpython-39.pyc
|           |   |   |   |   |-- compat.cpython-39.pyc
|           |   |   |   |   |-- core.cpython-39.pyc
|           |   |   |   |   |-- idnadata.cpython-39.pyc
|           |   |   |   |   |-- intranges.cpython-39.pyc
|           |   |   |   |   |-- package_data.cpython-39.pyc
|           |   |   |   |   `-- uts46data.cpython-39.pyc
|           |   |   |   |-- codec.py
|           |   |   |   |-- compat.py
|           |   |   |   |-- core.py
|           |   |   |   |-- idnadata.py
|           |   |   |   |-- intranges.py
|           |   |   |   |-- package_data.py
|           |   |   |   `-- uts46data.py
|           |   |   |-- msgpack
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- _version.cpython-39.pyc
|           |   |   |   |   |-- exceptions.cpython-39.pyc
|           |   |   |   |   |-- ext.cpython-39.pyc
|           |   |   |   |   `-- fallback.cpython-39.pyc
|           |   |   |   |-- _version.py
|           |   |   |   |-- exceptions.py
|           |   |   |   |-- ext.py
|           |   |   |   `-- fallback.py
|           |   |   |-- packaging
|           |   |   |   |-- __about__.py
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __about__.cpython-39.pyc
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- _compat.cpython-39.pyc
|           |   |   |   |   |-- _structures.cpython-39.pyc
|           |   |   |   |   |-- _typing.cpython-39.pyc
|           |   |   |   |   |-- markers.cpython-39.pyc
|           |   |   |   |   |-- requirements.cpython-39.pyc
|           |   |   |   |   |-- specifiers.cpython-39.pyc
|           |   |   |   |   |-- tags.cpython-39.pyc
|           |   |   |   |   |-- utils.cpython-39.pyc
|           |   |   |   |   `-- version.cpython-39.pyc
|           |   |   |   |-- _compat.py
|           |   |   |   |-- _structures.py
|           |   |   |   |-- _typing.py
|           |   |   |   |-- markers.py
|           |   |   |   |-- requirements.py
|           |   |   |   |-- specifiers.py
|           |   |   |   |-- tags.py
|           |   |   |   |-- utils.py
|           |   |   |   `-- version.py
|           |   |   |-- pep517
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- build.cpython-39.pyc
|           |   |   |   |   |-- check.cpython-39.pyc
|           |   |   |   |   |-- colorlog.cpython-39.pyc
|           |   |   |   |   |-- compat.cpython-39.pyc
|           |   |   |   |   |-- dirtools.cpython-39.pyc
|           |   |   |   |   |-- envbuild.cpython-39.pyc
|           |   |   |   |   |-- meta.cpython-39.pyc
|           |   |   |   |   `-- wrappers.cpython-39.pyc
|           |   |   |   |-- build.py
|           |   |   |   |-- check.py
|           |   |   |   |-- colorlog.py
|           |   |   |   |-- compat.py
|           |   |   |   |-- dirtools.py
|           |   |   |   |-- envbuild.py
|           |   |   |   |-- in_process
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   `-- _in_process.cpython-39.pyc
|           |   |   |   |   `-- _in_process.py
|           |   |   |   |-- meta.py
|           |   |   |   `-- wrappers.py
|           |   |   |-- pkg_resources
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   `-- py31compat.cpython-39.pyc
|           |   |   |   `-- py31compat.py
|           |   |   |-- progress
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- bar.cpython-39.pyc
|           |   |   |   |   |-- counter.cpython-39.pyc
|           |   |   |   |   `-- spinner.cpython-39.pyc
|           |   |   |   |-- bar.py
|           |   |   |   |-- counter.py
|           |   |   |   `-- spinner.py
|           |   |   |-- pyparsing.py
|           |   |   |-- requests
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- __version__.cpython-39.pyc
|           |   |   |   |   |-- _internal_utils.cpython-39.pyc
|           |   |   |   |   |-- adapters.cpython-39.pyc
|           |   |   |   |   |-- api.cpython-39.pyc
|           |   |   |   |   |-- auth.cpython-39.pyc
|           |   |   |   |   |-- certs.cpython-39.pyc
|           |   |   |   |   |-- compat.cpython-39.pyc
|           |   |   |   |   |-- cookies.cpython-39.pyc
|           |   |   |   |   |-- exceptions.cpython-39.pyc
|           |   |   |   |   |-- help.cpython-39.pyc
|           |   |   |   |   |-- hooks.cpython-39.pyc
|           |   |   |   |   |-- models.cpython-39.pyc
|           |   |   |   |   |-- packages.cpython-39.pyc
|           |   |   |   |   |-- sessions.cpython-39.pyc
|           |   |   |   |   |-- status_codes.cpython-39.pyc
|           |   |   |   |   |-- structures.cpython-39.pyc
|           |   |   |   |   `-- utils.cpython-39.pyc
|           |   |   |   |-- __version__.py
|           |   |   |   |-- _internal_utils.py
|           |   |   |   |-- adapters.py
|           |   |   |   |-- api.py
|           |   |   |   |-- auth.py
|           |   |   |   |-- certs.py
|           |   |   |   |-- compat.py
|           |   |   |   |-- cookies.py
|           |   |   |   |-- exceptions.py
|           |   |   |   |-- help.py
|           |   |   |   |-- hooks.py
|           |   |   |   |-- models.py
|           |   |   |   |-- packages.py
|           |   |   |   |-- sessions.py
|           |   |   |   |-- status_codes.py
|           |   |   |   |-- structures.py
|           |   |   |   `-- utils.py
|           |   |   |-- resolvelib
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- providers.cpython-39.pyc
|           |   |   |   |   |-- reporters.cpython-39.pyc
|           |   |   |   |   |-- resolvers.cpython-39.pyc
|           |   |   |   |   `-- structs.cpython-39.pyc
|           |   |   |   |-- compat
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   `-- collections_abc.cpython-39.pyc
|           |   |   |   |   `-- collections_abc.py
|           |   |   |   |-- providers.py
|           |   |   |   |-- reporters.py
|           |   |   |   |-- resolvers.py
|           |   |   |   `-- structs.py
|           |   |   |-- six.py
|           |   |   |-- tenacity
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- _asyncio.cpython-39.pyc
|           |   |   |   |   |-- _utils.cpython-39.pyc
|           |   |   |   |   |-- after.cpython-39.pyc
|           |   |   |   |   |-- before.cpython-39.pyc
|           |   |   |   |   |-- before_sleep.cpython-39.pyc
|           |   |   |   |   |-- compat.cpython-39.pyc
|           |   |   |   |   |-- nap.cpython-39.pyc
|           |   |   |   |   |-- retry.cpython-39.pyc
|           |   |   |   |   |-- stop.cpython-39.pyc
|           |   |   |   |   |-- tornadoweb.cpython-39.pyc
|           |   |   |   |   `-- wait.cpython-39.pyc
|           |   |   |   |-- _asyncio.py
|           |   |   |   |-- _utils.py
|           |   |   |   |-- after.py
|           |   |   |   |-- before.py
|           |   |   |   |-- before_sleep.py
|           |   |   |   |-- compat.py
|           |   |   |   |-- nap.py
|           |   |   |   |-- retry.py
|           |   |   |   |-- stop.py
|           |   |   |   |-- tornadoweb.py
|           |   |   |   `-- wait.py
|           |   |   |-- toml
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- decoder.cpython-39.pyc
|           |   |   |   |   |-- encoder.cpython-39.pyc
|           |   |   |   |   |-- ordered.cpython-39.pyc
|           |   |   |   |   `-- tz.cpython-39.pyc
|           |   |   |   |-- decoder.py
|           |   |   |   |-- encoder.py
|           |   |   |   |-- ordered.py
|           |   |   |   `-- tz.py
|           |   |   |-- urllib3
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- _collections.cpython-39.pyc
|           |   |   |   |   |-- _version.cpython-39.pyc
|           |   |   |   |   |-- connection.cpython-39.pyc
|           |   |   |   |   |-- connectionpool.cpython-39.pyc
|           |   |   |   |   |-- exceptions.cpython-39.pyc
|           |   |   |   |   |-- fields.cpython-39.pyc
|           |   |   |   |   |-- filepost.cpython-39.pyc
|           |   |   |   |   |-- poolmanager.cpython-39.pyc
|           |   |   |   |   |-- request.cpython-39.pyc
|           |   |   |   |   `-- response.cpython-39.pyc
|           |   |   |   |-- _collections.py
|           |   |   |   |-- _version.py
|           |   |   |   |-- connection.py
|           |   |   |   |-- connectionpool.py
|           |   |   |   |-- contrib
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   |-- _appengine_environ.cpython-39.pyc
|           |   |   |   |   |   |-- appengine.cpython-39.pyc
|           |   |   |   |   |   |-- ntlmpool.cpython-39.pyc
|           |   |   |   |   |   |-- pyopenssl.cpython-39.pyc
|           |   |   |   |   |   |-- securetransport.cpython-39.pyc
|           |   |   |   |   |   `-- socks.cpython-39.pyc
|           |   |   |   |   |-- _appengine_environ.py
|           |   |   |   |   |-- _securetransport
|           |   |   |   |   |   |-- __init__.py
|           |   |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   |   |-- bindings.cpython-39.pyc
|           |   |   |   |   |   |   `-- low_level.cpython-39.pyc
|           |   |   |   |   |   |-- bindings.py
|           |   |   |   |   |   `-- low_level.py
|           |   |   |   |   |-- appengine.py
|           |   |   |   |   |-- ntlmpool.py
|           |   |   |   |   |-- pyopenssl.py
|           |   |   |   |   |-- securetransport.py
|           |   |   |   |   `-- socks.py
|           |   |   |   |-- exceptions.py
|           |   |   |   |-- fields.py
|           |   |   |   |-- filepost.py
|           |   |   |   |-- packages
|           |   |   |   |   |-- __init__.py
|           |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   `-- six.cpython-39.pyc
|           |   |   |   |   |-- backports
|           |   |   |   |   |   |-- __init__.py
|           |   |   |   |   |   |-- __pycache__
|           |   |   |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |   |   `-- makefile.cpython-39.pyc
|           |   |   |   |   |   `-- makefile.py
|           |   |   |   |   |-- six.py
|           |   |   |   |   `-- ssl_match_hostname
|           |   |   |   |       |-- __init__.py
|           |   |   |   |       |-- __pycache__
|           |   |   |   |       |   |-- __init__.cpython-39.pyc
|           |   |   |   |       |   `-- _implementation.cpython-39.pyc
|           |   |   |   |       `-- _implementation.py
|           |   |   |   |-- poolmanager.py
|           |   |   |   |-- request.py
|           |   |   |   |-- response.py
|           |   |   |   `-- util
|           |   |   |       |-- __init__.py
|           |   |   |       |-- __pycache__
|           |   |   |       |   |-- __init__.cpython-39.pyc
|           |   |   |       |   |-- connection.cpython-39.pyc
|           |   |   |       |   |-- proxy.cpython-39.pyc
|           |   |   |       |   |-- queue.cpython-39.pyc
|           |   |   |       |   |-- request.cpython-39.pyc
|           |   |   |       |   |-- response.cpython-39.pyc
|           |   |   |       |   |-- retry.cpython-39.pyc
|           |   |   |       |   |-- ssl_.cpython-39.pyc
|           |   |   |       |   |-- ssltransport.cpython-39.pyc
|           |   |   |       |   |-- timeout.cpython-39.pyc
|           |   |   |       |   |-- url.cpython-39.pyc
|           |   |   |       |   `-- wait.cpython-39.pyc
|           |   |   |       |-- connection.py
|           |   |   |       |-- proxy.py
|           |   |   |       |-- queue.py
|           |   |   |       |-- request.py
|           |   |   |       |-- response.py
|           |   |   |       |-- retry.py
|           |   |   |       |-- ssl_.py
|           |   |   |       |-- ssltransport.py
|           |   |   |       |-- timeout.py
|           |   |   |       |-- url.py
|           |   |   |       `-- wait.py
|           |   |   |-- vendor.txt
|           |   |   `-- webencodings
|           |   |       |-- __init__.py
|           |   |       |-- __pycache__
|           |   |       |   |-- __init__.cpython-39.pyc
|           |   |       |   |-- labels.cpython-39.pyc
|           |   |       |   |-- mklabels.cpython-39.pyc
|           |   |       |   |-- tests.cpython-39.pyc
|           |   |       |   `-- x_user_defined.cpython-39.pyc
|           |   |       |-- labels.py
|           |   |       |-- mklabels.py
|           |   |       |-- tests.py
|           |   |       `-- x_user_defined.py
|           |   `-- py.typed
|           |-- pip-21.1.3.dist-info
|           |   |-- INSTALLER
|           |   |-- LICENSE.txt
|           |   |-- METADATA
|           |   |-- RECORD
|           |   |-- REQUESTED
|           |   |-- WHEEL
|           |   |-- entry_points.txt
|           |   `-- top_level.txt
|           |-- pkg_resources
|           |   |-- __init__.py
|           |   |-- __pycache__
|           |   |   `-- __init__.cpython-39.pyc
|           |   |-- _vendor
|           |   |   |-- __init__.py
|           |   |   |-- __pycache__
|           |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |-- appdirs.cpython-39.pyc
|           |   |   |   `-- pyparsing.cpython-39.pyc
|           |   |   |-- appdirs.py
|           |   |   |-- packaging
|           |   |   |   |-- __about__.py
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __about__.cpython-39.pyc
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- _compat.cpython-39.pyc
|           |   |   |   |   |-- _structures.cpython-39.pyc
|           |   |   |   |   |-- _typing.cpython-39.pyc
|           |   |   |   |   |-- markers.cpython-39.pyc
|           |   |   |   |   |-- requirements.cpython-39.pyc
|           |   |   |   |   |-- specifiers.cpython-39.pyc
|           |   |   |   |   |-- tags.cpython-39.pyc
|           |   |   |   |   |-- utils.cpython-39.pyc
|           |   |   |   |   `-- version.cpython-39.pyc
|           |   |   |   |-- _compat.py
|           |   |   |   |-- _structures.py
|           |   |   |   |-- _typing.py
|           |   |   |   |-- markers.py
|           |   |   |   |-- requirements.py
|           |   |   |   |-- specifiers.py
|           |   |   |   |-- tags.py
|           |   |   |   |-- utils.py
|           |   |   |   `-- version.py
|           |   |   `-- pyparsing.py
|           |   |-- extern
|           |   |   |-- __init__.py
|           |   |   `-- __pycache__
|           |   |       `-- __init__.cpython-39.pyc
|           |   `-- tests
|           |       `-- data
|           |           `-- my-test-package-source
|           |               |-- __pycache__
|           |               |   `-- setup.cpython-39.pyc
|           |               `-- setup.py
|           |-- setuptools
|           |   |-- __init__.py
|           |   |-- __pycache__
|           |   |   |-- __init__.cpython-39.pyc
|           |   |   |-- _deprecation_warning.cpython-39.pyc
|           |   |   |-- _imp.cpython-39.pyc
|           |   |   |-- archive_util.cpython-39.pyc
|           |   |   |-- build_meta.cpython-39.pyc
|           |   |   |-- config.cpython-39.pyc
|           |   |   |-- dep_util.cpython-39.pyc
|           |   |   |-- depends.cpython-39.pyc
|           |   |   |-- dist.cpython-39.pyc
|           |   |   |-- errors.cpython-39.pyc
|           |   |   |-- extension.cpython-39.pyc
|           |   |   |-- glob.cpython-39.pyc
|           |   |   |-- installer.cpython-39.pyc
|           |   |   |-- launch.cpython-39.pyc
|           |   |   |-- lib2to3_ex.cpython-39.pyc
|           |   |   |-- monkey.cpython-39.pyc
|           |   |   |-- msvc.cpython-39.pyc
|           |   |   |-- namespaces.cpython-39.pyc
|           |   |   |-- package_index.cpython-39.pyc
|           |   |   |-- py34compat.cpython-39.pyc
|           |   |   |-- sandbox.cpython-39.pyc
|           |   |   |-- ssl_support.cpython-39.pyc
|           |   |   |-- unicode_utils.cpython-39.pyc
|           |   |   |-- version.cpython-39.pyc
|           |   |   |-- wheel.cpython-39.pyc
|           |   |   `-- windows_support.cpython-39.pyc
|           |   |-- _deprecation_warning.py
|           |   |-- _distutils
|           |   |   |-- __init__.py
|           |   |   |-- __pycache__
|           |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |-- _msvccompiler.cpython-39.pyc
|           |   |   |   |-- archive_util.cpython-39.pyc
|           |   |   |   |-- bcppcompiler.cpython-39.pyc
|           |   |   |   |-- ccompiler.cpython-39.pyc
|           |   |   |   |-- cmd.cpython-39.pyc
|           |   |   |   |-- config.cpython-39.pyc
|           |   |   |   |-- core.cpython-39.pyc
|           |   |   |   |-- cygwinccompiler.cpython-39.pyc
|           |   |   |   |-- debug.cpython-39.pyc
|           |   |   |   |-- dep_util.cpython-39.pyc
|           |   |   |   |-- dir_util.cpython-39.pyc
|           |   |   |   |-- dist.cpython-39.pyc
|           |   |   |   |-- errors.cpython-39.pyc
|           |   |   |   |-- extension.cpython-39.pyc
|           |   |   |   |-- fancy_getopt.cpython-39.pyc
|           |   |   |   |-- file_util.cpython-39.pyc
|           |   |   |   |-- filelist.cpython-39.pyc
|           |   |   |   |-- log.cpython-39.pyc
|           |   |   |   |-- msvc9compiler.cpython-39.pyc
|           |   |   |   |-- msvccompiler.cpython-39.pyc
|           |   |   |   |-- py35compat.cpython-39.pyc
|           |   |   |   |-- py38compat.cpython-39.pyc
|           |   |   |   |-- spawn.cpython-39.pyc
|           |   |   |   |-- sysconfig.cpython-39.pyc
|           |   |   |   |-- text_file.cpython-39.pyc
|           |   |   |   |-- unixccompiler.cpython-39.pyc
|           |   |   |   |-- util.cpython-39.pyc
|           |   |   |   |-- version.cpython-39.pyc
|           |   |   |   `-- versionpredicate.cpython-39.pyc
|           |   |   |-- _msvccompiler.py
|           |   |   |-- archive_util.py
|           |   |   |-- bcppcompiler.py
|           |   |   |-- ccompiler.py
|           |   |   |-- cmd.py
|           |   |   |-- command
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- bdist.cpython-39.pyc
|           |   |   |   |   |-- bdist_dumb.cpython-39.pyc
|           |   |   |   |   |-- bdist_msi.cpython-39.pyc
|           |   |   |   |   |-- bdist_rpm.cpython-39.pyc
|           |   |   |   |   |-- bdist_wininst.cpython-39.pyc
|           |   |   |   |   |-- build.cpython-39.pyc
|           |   |   |   |   |-- build_clib.cpython-39.pyc
|           |   |   |   |   |-- build_ext.cpython-39.pyc
|           |   |   |   |   |-- build_py.cpython-39.pyc
|           |   |   |   |   |-- build_scripts.cpython-39.pyc
|           |   |   |   |   |-- check.cpython-39.pyc
|           |   |   |   |   |-- clean.cpython-39.pyc
|           |   |   |   |   |-- config.cpython-39.pyc
|           |   |   |   |   |-- install.cpython-39.pyc
|           |   |   |   |   |-- install_data.cpython-39.pyc
|           |   |   |   |   |-- install_egg_info.cpython-39.pyc
|           |   |   |   |   |-- install_headers.cpython-39.pyc
|           |   |   |   |   |-- install_lib.cpython-39.pyc
|           |   |   |   |   |-- install_scripts.cpython-39.pyc
|           |   |   |   |   |-- py37compat.cpython-39.pyc
|           |   |   |   |   |-- register.cpython-39.pyc
|           |   |   |   |   |-- sdist.cpython-39.pyc
|           |   |   |   |   `-- upload.cpython-39.pyc
|           |   |   |   |-- bdist.py
|           |   |   |   |-- bdist_dumb.py
|           |   |   |   |-- bdist_msi.py
|           |   |   |   |-- bdist_rpm.py
|           |   |   |   |-- bdist_wininst.py
|           |   |   |   |-- build.py
|           |   |   |   |-- build_clib.py
|           |   |   |   |-- build_ext.py
|           |   |   |   |-- build_py.py
|           |   |   |   |-- build_scripts.py
|           |   |   |   |-- check.py
|           |   |   |   |-- clean.py
|           |   |   |   |-- config.py
|           |   |   |   |-- install.py
|           |   |   |   |-- install_data.py
|           |   |   |   |-- install_egg_info.py
|           |   |   |   |-- install_headers.py
|           |   |   |   |-- install_lib.py
|           |   |   |   |-- install_scripts.py
|           |   |   |   |-- py37compat.py
|           |   |   |   |-- register.py
|           |   |   |   |-- sdist.py
|           |   |   |   `-- upload.py
|           |   |   |-- config.py
|           |   |   |-- core.py
|           |   |   |-- cygwinccompiler.py
|           |   |   |-- debug.py
|           |   |   |-- dep_util.py
|           |   |   |-- dir_util.py
|           |   |   |-- dist.py
|           |   |   |-- errors.py
|           |   |   |-- extension.py
|           |   |   |-- fancy_getopt.py
|           |   |   |-- file_util.py
|           |   |   |-- filelist.py
|           |   |   |-- log.py
|           |   |   |-- msvc9compiler.py
|           |   |   |-- msvccompiler.py
|           |   |   |-- py35compat.py
|           |   |   |-- py38compat.py
|           |   |   |-- spawn.py
|           |   |   |-- sysconfig.py
|           |   |   |-- text_file.py
|           |   |   |-- unixccompiler.py
|           |   |   |-- util.py
|           |   |   |-- version.py
|           |   |   `-- versionpredicate.py
|           |   |-- _imp.py
|           |   |-- _vendor
|           |   |   |-- __init__.py
|           |   |   |-- __pycache__
|           |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |-- ordered_set.cpython-39.pyc
|           |   |   |   `-- pyparsing.cpython-39.pyc
|           |   |   |-- ordered_set.py
|           |   |   |-- packaging
|           |   |   |   |-- __about__.py
|           |   |   |   |-- __init__.py
|           |   |   |   |-- __pycache__
|           |   |   |   |   |-- __about__.cpython-39.pyc
|           |   |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |   |-- _compat.cpython-39.pyc
|           |   |   |   |   |-- _structures.cpython-39.pyc
|           |   |   |   |   |-- _typing.cpython-39.pyc
|           |   |   |   |   |-- markers.cpython-39.pyc
|           |   |   |   |   |-- requirements.cpython-39.pyc
|           |   |   |   |   |-- specifiers.cpython-39.pyc
|           |   |   |   |   |-- tags.cpython-39.pyc
|           |   |   |   |   |-- utils.cpython-39.pyc
|           |   |   |   |   `-- version.cpython-39.pyc
|           |   |   |   |-- _compat.py
|           |   |   |   |-- _structures.py
|           |   |   |   |-- _typing.py
|           |   |   |   |-- markers.py
|           |   |   |   |-- requirements.py
|           |   |   |   |-- specifiers.py
|           |   |   |   |-- tags.py
|           |   |   |   |-- utils.py
|           |   |   |   `-- version.py
|           |   |   `-- pyparsing.py
|           |   |-- archive_util.py
|           |   |-- build_meta.py
|           |   |-- cli-32.exe
|           |   |-- cli-64.exe
|           |   |-- cli.exe
|           |   |-- command
|           |   |   |-- __init__.py
|           |   |   |-- __pycache__
|           |   |   |   |-- __init__.cpython-39.pyc
|           |   |   |   |-- alias.cpython-39.pyc
|           |   |   |   |-- bdist_egg.cpython-39.pyc
|           |   |   |   |-- bdist_rpm.cpython-39.pyc
|           |   |   |   |-- build_clib.cpython-39.pyc
|           |   |   |   |-- build_ext.cpython-39.pyc
|           |   |   |   |-- build_py.cpython-39.pyc
|           |   |   |   |-- develop.cpython-39.pyc
|           |   |   |   |-- dist_info.cpython-39.pyc
|           |   |   |   |-- easy_install.cpython-39.pyc
|           |   |   |   |-- egg_info.cpython-39.pyc
|           |   |   |   |-- install.cpython-39.pyc
|           |   |   |   |-- install_egg_info.cpython-39.pyc
|           |   |   |   |-- install_lib.cpython-39.pyc
|           |   |   |   |-- install_scripts.cpython-39.pyc
|           |   |   |   |-- py36compat.cpython-39.pyc
|           |   |   |   |-- register.cpython-39.pyc
|           |   |   |   |-- rotate.cpython-39.pyc
|           |   |   |   |-- saveopts.cpython-39.pyc
|           |   |   |   |-- sdist.cpython-39.pyc
|           |   |   |   |-- setopt.cpython-39.pyc
|           |   |   |   |-- test.cpython-39.pyc
|           |   |   |   |-- upload.cpython-39.pyc
|           |   |   |   `-- upload_docs.cpython-39.pyc
|           |   |   |-- alias.py
|           |   |   |-- bdist_egg.py
|           |   |   |-- bdist_rpm.py
|           |   |   |-- build_clib.py
|           |   |   |-- build_ext.py
|           |   |   |-- build_py.py
|           |   |   |-- develop.py
|           |   |   |-- dist_info.py
|           |   |   |-- easy_install.py
|           |   |   |-- egg_info.py
|           |   |   |-- install.py
|           |   |   |-- install_egg_info.py
|           |   |   |-- install_lib.py
|           |   |   |-- install_scripts.py
|           |   |   |-- launcher\ manifest.xml
|           |   |   |-- py36compat.py
|           |   |   |-- register.py
|           |   |   |-- rotate.py
|           |   |   |-- saveopts.py
|           |   |   |-- sdist.py
|           |   |   |-- setopt.py
|           |   |   |-- test.py
|           |   |   |-- upload.py
|           |   |   `-- upload_docs.py
|           |   |-- config.py
|           |   |-- dep_util.py
|           |   |-- depends.py
|           |   |-- dist.py
|           |   |-- errors.py
|           |   |-- extension.py
|           |   |-- extern
|           |   |   |-- __init__.py
|           |   |   `-- __pycache__
|           |   |       `-- __init__.cpython-39.pyc
|           |   |-- glob.py
|           |   |-- gui-32.exe
|           |   |-- gui-64.exe
|           |   |-- gui.exe
|           |   |-- installer.py
|           |   |-- launch.py
|           |   |-- lib2to3_ex.py
|           |   |-- monkey.py
|           |   |-- msvc.py
|           |   |-- namespaces.py
|           |   |-- package_index.py
|           |   |-- py34compat.py
|           |   |-- sandbox.py
|           |   |-- script\ (dev).tmpl
|           |   |-- script.tmpl
|           |   |-- ssl_support.py
|           |   |-- unicode_utils.py
|           |   |-- version.py
|           |   |-- wheel.py
|           |   `-- windows_support.py
|           `-- setuptools-56.0.0.dist-info
|               |-- INSTALLER
|               |-- LICENSE
|               |-- METADATA
|               |-- RECORD
|               |-- REQUESTED
|               |-- WHEEL
|               |-- dependency_links.txt
|               |-- entry_points.txt
|               `-- top_level.txt
|-- lib64 -> lib
|-- main.py
|-- pyvenv.cfg
|-- src
`-- tools
    `-- __init__.py

149 directories, 1103 files
```
