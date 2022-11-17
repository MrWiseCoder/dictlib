utils_dir=$(scr_dir)/lng/cdev/mylibs/utils
utils_src=$(utils_dir)/utils.c


all:
	gcc -I $(utils_dir) -o main main.c test_dict.c dict.c $(utils_src)

