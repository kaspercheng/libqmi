# SPDX-License-Identifier: GPL-2.0-or-later
# Copyright (C) 2019 - 2021 Iñigo Martinez <inigomartinez@gmail.com>

libhelpers = static_library(
  'helpers',
  sources: 'qmicli-helpers.c',
  dependencies: libqmi_glib_dep,
)

libhelpers_dep = declare_dependency(
  include_directories: '.',
  dependencies: libqmi_glib_dep,
  link_with: libhelpers,
)

sources = files(
  'qmicli.c',
  'qmicli-dms.c',
  'qmicli-dpm.c',
  'qmicli-dsd.c',
  'qmicli-gas.c',
  'qmicli-gms.c',
  'qmicli-link-management.c',
  'qmicli-loc.c',
  'qmicli-nas.c',
  'qmicli-pbm.c',
  'qmicli-pdc.c',
  'qmicli-qmiwwan.c',
  'qmicli-qos.c',
  'qmicli-sar.c',
  'qmicli-uim.c',
  'qmicli-voice.c',
  'qmicli-wda.c',
  'qmicli-wds.c',
  'qmicli-wms.c',
)

deps = [
  libhelpers_dep,
  mbim_glib_dep,
]

qmicli = executable(
  'qmicli',
  sources: sources,
  include_directories: top_inc,
  dependencies: deps,
  install: true,
)

if enable_bash_completion
  install_data(
    'qmicli',
    install_dir: bash_completion_completionsdir,
  )
endif

subdir('test')
