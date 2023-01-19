# blender

## Installation

### brotli

You need to install brotli because we need freetype-harfbuzz
to have support for it, else blender will refuse to build.

`$ kiss b brotli && kiss i brotli`

### freetype/harfbuzz

You need to fork freetype-harfbuzz and enable brotli support.

`$ kiss fork freetype-harfbuzz`

Then:

`$ sed -i -E "/zlib/s/(abled)/\1 -Dbrotli=enabled/"`

To enable brotli support.
