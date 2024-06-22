#!/bin/bash
set -euo pipefail

log() {
    echo "~~~~~ $@" >&2
}

do_with_log() {
    log "Running: $@"
    "$@"
}


. venv/bin/activate

do_with_log pytest

do_with_log python seavey/lex.py examples/dictobject.c >/dev/null

do_with_log python seavey/bnf.py seavey/grammars/c.bnf >/dev/null
