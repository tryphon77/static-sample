SPRITE static "sheet.png" 32 32
    generate_static_sprite: True
    
    all:
        hotspot: (CENTER, CENTER)
        time: 1
    
    # 0: small bullet (8x8)
    # 1: blast (8x8)
    # 2: loading beam subframe 1 (8x8)
    # 3: loading beam subframe 2 (8x8)

    0, 1, 2, 3:
        rects: 
        - (-4, -4, 8, 8)
        cellsize: (8, 8)

    # 4: loading beam 1 (24x48)
    4:
        cellsize: (24, 48)
        transforms:
        - copy 2 at (15, -7)
        - copy 2 at (12, -14)
        - copy 2 at (5, -21)
    #    - hmirror 1 at (-15, 7)
    #    - vmirror 1 at (-12, 14)
    #    - hvmirror 1 at (-5, -21)

    # 5: loading beam 2 (24x48)
    5:
        cellsize: (24, 48)
        transforms:
        - copy 2 at (15, 7)
        - copy 2 at (12, 14)
        - copy 2 at (5, 21)

    # 6: loading beam 3 (24x48)
    6:
        cellsize: (24, 48)
        transforms:
        - copy 2 at (13, -6)
        - copy 2 at (10, -12)
        - copy 2 at (4, -18)

    # 7: loading beam 4 (24x48)
    7:
        cellsize: (24, 48)
        transforms:
        - copy 2 at (13, 6)
        - copy 2 at (10, 12)
        - copy 2 at (4, 18)

    # 8: loading beam 5 (24x48)
    8:
        cellsize: (24, 48)
        transforms:
        - copy 2 at (8, -5)
        - copy 2 at (4, -10)
        - copy 2 at (1, -15)

    # 9: loading beam 6 (24x48)
    9:
        cellsize: (24, 48)
        transforms:
        - copy 2 at (8, 5)
        - copy 2 at (4, 10)
        - copy 2 at (1, 15)

    # 10: loading beam 7 (24x48)
    10:
        cellsize: (24, 48)
        transforms:
        - copy 3 at (9, -4)
        - copy 3 at (6, -8)
        - copy 3 at (2, -12)

    # 11: loading beam 8 (24x48)
    11:
        cellsize: (24, 48)
        transforms:
        - copy 3 at (9, 4)
        - copy 3 at (6, 8)
        - copy 3 at (2, 12)

    # 12: loading beam 9 (24x48)
    12:
        cellsize: (24, 48)
        transforms:
        - copy 3 at (6, -3)
        - copy 3 at (4, -6)
        - copy 3 at (1, -9)

    # 13: loading beam 10 (24x48)
    13:
        cellsize: (24, 48)
        transforms:
        - copy 3 at (6, 3)
        - copy 3 at (4, 6)
        - copy 3 at (1, 9)

    # 14: loading beam 11 (24x48)
    14:
        cellsize: (24, 48)
        transforms:
        - copy 3 at (3, -2)
        - copy 3 at (2, -4)
        - copy 3 at (0, -6)

    # 15: loading beam 12 (24x48)
    15:
        cellsize: (24, 48)
        transforms:
        - copy 3 at (3, 2)
        - copy 3 at (2, 4)
        - copy 3 at (0, 6)

    # 16: megabeam start (16x16) = ultrabeam small ball (16x16)
    # 17: megabeam start (16x16) = ultrabeam big ball (16x16)

    # 18: megabeam part1 (16x16)
    # 19: megabeam part2 (16x16)
    # 20: megabeam part3 (16x16)
    # 21: megabeam part4 (16x16)
    # 22: megabeam part5 (16x16)

    16, 17, 18, 19, 20, 21, 22:
        cellsize: (16, 16)
    
    16, 17:
        rects:
        - (-8, -8, 8, 8)
        transforms:
        - hmirror at (0, 0)
        - vmirror at (0, 0)
        - hvmirror at (0, 0)

    # 18: megabeam level 1 = part1 (16x16)

    # 23: megabeam level 2 = part2 + part5 (32x16)
    # 24: megabeam level 3 = part2 + part3 + part5 (48x16)
    # 25: megabeam level 4 = part2 + part3 + part4 + part5 (64x16)

    # 26: speed up 1 = ultrabeam start (16x8)

    26:
        cellsize: (16, 8)
        hotspot: (LEFT, CENTER)

    # 27: speed up 1 = ultrabeam start (16x8 -> 16x16)

    27:
        cellsize: (16, 16)
        hotspot: (LEFT, CENTER)

    # 28: speed up 2 = ultrabeam start (32x16 -> 32x32)
    28:
        cellsize: (32, 32)
        hotspot: (LEFT, CENTER)
        transforms:
        - vmirror

    # 29: ultrabeam hit 1 (8x8 -> 16x16)
    29:
        cellsize: (16, 16)
        transforms:
        - hmirror
        - vmirror
        - hvmirror

    # 30: ultrabeam hit 2 (16x16 -> 32x32)
    30:
        cellsize: (32, 32)
        transforms:
        - hmirror
        - vmirror
        - hvmirror

    # 31: ultrabeam hit 3 (24x24 -> 48x48)
    # 32: ultrabeam hit 3 (24x24 -> 48x48)
    31, 32:
        cellsize: (48, 48)
        transforms: 
        - hmirror
        - vmirror
        - hvmirror

    animations:
        bullet:
            frames:  0, 0
            timings: 1, 0
        
        blast:
            frames:  1, 0
            timings: 1, 0
        
        loading:
            frames:  4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0
            timings: 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
        
        megabeam_start:
            frames:  16, 17, 16, 0
            timings: 2, 2, 2
        
        megabeam_level_1:
            frames:  18, 0
            timings: 1, 1
            
        megabeam_part_1:
            frames:  19, 0
            timings: 1, 1
            
        megabeam_part_2:
            frames:  20, 0
            timings: 1, 1
            
        megabeam_part_3:
            frames:  21, 0
            timings: 1, 1
        
        megabeam_part_4:
            frames:  22, 0
            timings: 1, 1
        
        ultrabeam_start:
            frames: 27, 28, 27, 26, 0
            timings: 2, 8, 8, 2
        
        ultrabeam_big:
            frames: 17, 0
            timings: 1, 0

        ultrabeam_small:
            frames: 16, 0
            timings: 1, 0
        
        ultrabeam_hit:
            frames: 29, 30, 31, 32, 0
            timings: 2, 2, 2, 2