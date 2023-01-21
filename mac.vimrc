syntax on
:colorscheme habamax
:nnoremap <F5> :<C-U>make %:r && ./%:r<CR>
:nnoremap <F6> :terminal <CR>
:nnoremap <F7> :Explore <CR>
set tabstop = 4
set nu rnu
set ts=4
set sw=4
set si
cd ~Documents/vimws

inoremap { {}<Left>
inoremap {<CR> {<CR>}<Esc>O
inoremap {{ {
inoremap {} {}
set showmatch
"Change directory depending on preferred file saving location
