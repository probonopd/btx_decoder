void init_xfont(void);
void default_colors(void);
void xputc(int c, int set, int x, int y, int xdouble, int ydouble, int underline, int diacrit, int fg, int bg);
void xcursor(int x, int y);
void define_fullrow_bg(int row, int index);
void free_DRCS(void);
void define_raw_DRC(int c, char *data, int bits);
void define_color(unsigned int index, unsigned int r, unsigned int g, unsigned int b);
void define_DCLUT(int entry, int index);
