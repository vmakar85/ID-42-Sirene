#ifndef BITMAPS_H
#define BITMAPS_H


///////////////// Menu bitmaps ////////////////////
///////////////////////////////////////////////////

const unsigned char PROGMEM TEAMarg[] = //128,48
{
  //         ########                                                                                       ########
  //         ###########                                                                                   ##      ##
  //         ####    ##################                                                                   ##  #### ###
  //         #### ##    ################ ####################           #############         ######     ##  ##  # ####
  //         #### #####                #######################       ##################      ########   ##  ###  # #####
  //         #### ##  ######  ######## ##                   ###     ####            ####     ##     ## ##  ####### #  ###
  // ####### ####  #  ####### #####  #  # #################  ##    ###   ##########   ###   ##  ###  ###  ###  ### #   ### ##########
  //         ##### ##########  ####  ## #  ################# ##   ###  ##############   ##  ## #####  #  ###    ## ##  ###
  //         ##### ########### ######## #   ################  #   ##  #################  ####  ######   ####    ## ########
  // ##### # #####             ########     ################# #  ##  #######    ######## #### ######## ######  ### ########  # # ####
  // #  #    ###### ####################    ################# #  ## #######      #######  ##  #################### ########      #  #
  // #  # #  ###### ####################     #######          # ##  ######       ####  ## ## #################  ## ######## # #  #  #
  // ####    ######  #  ################     ##############   # ## #######       ####  ## #  #################  ## ########      ####
  // ####  # ####### #  #################  # ##############   ###  ######       ######### # ###################### ########  # # ####
  // ####    ####### ####################  # ###############  ### #######       ########    #####################  ########      ####
  // #### #   ######        #########      # ###############  ##  ######       #########   ###################### ######### # #  ####
  // ####     #####          ########     ##  ############## ### ######################    ###################### #########     #####
  // ##### #  #####          #########    ### ########        #  ######################   ####################### ########   #  #####
  // #####     ###            ########    ### ###############   ######################    ####################### ########      #####
  // ###### #  ###         #  #########  #### ################  #######      #########   ######## ############### ########  # # #####
  // ######    ##          #   ########  ####  ################  ######      ########    #######  ############### ########      #####
  // ####### #  #         ###  ######### ##### ################# #####       ########   ########   ###### ####### ######## # # ######
  // #######    #         ###   ########  #### #  ############## #####      ########    #######    #####  ####### ########     ######
  // ######## # ######## #####  ##  ##### #### #  ########                  ###  ###    #######     ###   ######  ########  #  ######
  // ########          # #####   #  ##### #### #####             #         ####  ##                 ##    ###  # #########     ######
  // #  ###### # # # # ########  #####    ####                ## #         ########           ##          ###  # ######### # # ###  #
  // #  ######          #######           ####                ## #     ###                     #            #### #########     ###  #
  // ########## # # # # #########         # ##                   #     ###             ##      ##             ## #########  # #######
  //                    ########         ## ##                   #    ####             ##       #                ########
  //         ###         #######         #  ##              ######    ####            ####      ##  #    #       ########
  // ######### ######    ######         ##   #       #####################            # ##       #  ##  ####      #######   #########
  //       ##   ##       ######         #    ################            ############## ######################     ######
  //      ##     ##   ## #####         ## ## #########                   ############    #######################    #####
  //     ## ##    ##  ##  ####         #  ##                                                  ##     #############   #### ##
  //     #  ##     #      ###         ##          ########    ##########      #########       ##     ##### #########  ### ##
  //     ##       ##      ###     #####          ##########   ###########    ###########           ######      ##########
  //      ##   # ##       #############         ############  ############   ###########          ####            #######   ###
  //       ##   ##   ###  ########  ####        ############  #####  #####  #####   ####       ## ####    ###               # #
  //        ## ##    # #            ####        #####   ####  #####   ####  ####               ##  ##     # #               ###
  //         ###     ###             ##         #####   ####  #####   ###   ####   ######                 ###
  //                                            ############  ##########    #####  ######
  //                                            ###########      ########      ########
  //                                            ########### #### ## ##### #### ######## ####
  //                                            #####   ### #  # ##  #### #  # ######## #  #
  //                                            #####   ### #### ##   ### #### ######## ####
  //
  //
  //
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x3B, 0xFB, 0x93, 0x96, 0xF6, 0xE6, 0xEC, 0xEC, 0xEC, 0xEC, 0xCC, 0x0C, 0x6C, 0xEC, 0xEC, 0xEC, 0xEC, 0x2C, 0x2C, 0xEC, 0x8C, 0x38, 0xF0, 0x18, 0x58, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0x98, 0x38, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x30, 0xB0, 0x98, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0x98, 0xB8, 0x30, 0x70, 0x60, 0xC0, 0x80, 0x00, 0x00, 0xC0, 0xF0, 0x38, 0x98, 0xD8, 0xD8, 0xD8, 0x98, 0x30, 0x60, 0xC0, 0x60, 0x30, 0x98, 0xCC, 0xE6, 0x73, 0x39, 0x3D, 0x65, 0xE5, 0xFD, 0x01, 0xFF, 0x9E, 0x1C, 0x38, 0xF0, 0xE0, 0xC0, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0xFE, 0xF2, 0xF2, 0xFE, 0x02, 0x88, 0x22, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xE1, 0x0D, 0x7D, 0x4D, 0x4D, 0x7D, 0x7D, 0x7D, 0x7D, 0xFD, 0xFD, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7C, 0x61, 0x00, 0x00, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xC7, 0x06, 0x00, 0xFF, 0xE0, 0x78, 0x1E, 0xC7, 0xF1, 0xFC, 0xFE, 0xFF, 0xFF, 0x7F, 0x1F, 0x07, 0x03, 0x01, 0x01, 0x01, 0x81, 0xE3, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xFE, 0x38, 0x03, 0x3F, 0x8F, 0xE3, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xE4, 0xE6, 0xFF, 0x3F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x88, 0x22, 0x88, 0x22, 0x00, 0xFE, 0xF2, 0xF2, 0xFE,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0xE2, 0x88, 0x20, 0x83, 0x1F, 0xFF, 0x8F, 0x83, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0xE0, 0xF8, 0xE0, 0x83, 0x0F, 0x3F, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFE, 0xF8, 0xE0, 0x80, 0x38, 0xFF, 0xFF, 0xFE, 0xE0, 0x0F, 0xFF, 0x3F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFD, 0xFD, 0xFD, 0x7D, 0x7D, 0x7C, 0x79, 0x73, 0x61, 0x0C, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x1F, 0x07, 0x07, 0x07, 0x07, 0x07, 0xC7, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0x3F, 0x0F, 0x03, 0x00, 0xE0, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x0F, 0x07, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x20, 0x88, 0x22, 0x08, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x4F, 0x49, 0x49, 0x4F, 0x4F, 0x4F, 0xCF, 0xCF, 0x6E, 0x28, 0x62, 0xC8, 0xC2, 0x48, 0x42, 0x48, 0x02, 0x08, 0x03, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x38, 0x08, 0x03, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0xC1, 0x70, 0x1F, 0x07, 0x3F, 0xFF, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0x60, 0x66, 0x66, 0x60, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x70, 0x7C, 0x7C, 0xFC, 0x80, 0x83, 0x83, 0x83, 0x83, 0x82, 0x82, 0x83, 0x83, 0x80, 0x80, 0x80, 0xE0, 0x38, 0xF8, 0xE0, 0x80, 0x80, 0x80, 0x80, 0x82, 0x8E, 0xB8, 0xE0, 0x80, 0x80, 0xE1, 0xC1, 0x80, 0x80, 0xC0, 0xE0, 0xC3, 0xC3, 0x87, 0x84, 0x0C, 0x0F, 0x00, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x02, 0x48, 0x42, 0x48, 0x4F, 0x4F, 0x4F, 0x49, 0x49, 0x4F,
  0x00, 0x00, 0x00, 0x00, 0x0E, 0x1B, 0x31, 0x66, 0xC6, 0x80, 0xD0, 0x60, 0x31, 0x1B, 0x0E, 0x00, 0xE0, 0xA3, 0xE3, 0x00, 0x01, 0x3F, 0x3F, 0x3F, 0x33, 0x30, 0x30, 0x30, 0x30, 0x18, 0x18, 0x78, 0xF8, 0xFC, 0x67, 0x01, 0x00, 0x03, 0x03, 0x00, 0x01, 0x01, 0x01, 0xF1, 0xF9, 0xFD, 0xFD, 0xFD, 0x3D, 0x3C, 0x3C, 0xFC, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x1C, 0x1C, 0x3C, 0xFC, 0xFC, 0xF8, 0x71, 0x01, 0x01, 0xE1, 0xF9, 0xFD, 0xFD, 0x3D, 0x1D, 0x1D, 0x9D, 0xBD, 0xBC, 0xBC, 0xB8, 0x80, 0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x67, 0x61, 0x01, 0x31, 0x79, 0x79, 0x3F, 0x0F, 0x0F, 0x0F, 0x07, 0xE3, 0xA7, 0xE7, 0x07, 0x07, 0x0F, 0x0E, 0x0E, 0x1C, 0x1C, 0x19, 0x1B, 0x1F, 0x1F, 0x1F, 0x00, 0x06, 0x06, 0x70, 0x50, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x07, 0x07, 0x07, 0x1F, 0x1F, 0x1F, 0x01, 0x1C, 0x14, 0x15, 0x1D, 0x01, 0x1F, 0x1F, 0x03, 0x07, 0x0F, 0x1F, 0x1F, 0x1E, 0x00, 0x1C, 0x14, 0x15, 0x1D, 0x01, 0x1F, 0x1F, 0x1E, 0x1E, 0x1F, 0x1F, 0x1F, 0x1F, 0x01, 0x1D, 0x14, 0x14, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
PROGMEM const unsigned char titleScreen[] = {
// width, height 128, 64,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xE0, 0x70, 0x70, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x70, 0x70, 0xE0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0xA0, 0x50, 0xA8, 0x54, 0xAA, 0x54, 0xAA, 0x55, 0xAA, 0x55, 0x2A, 0x55, 0x2A, 0x55, 0x2A, 0x55, 0x2A, 0x55, 0x2A, 0x55, 0x2A, 0x05, 0x00, 0x00, 0x00, 0x40, 0xA8, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x54, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xFF, 0x7F, 0xFF, 0x40, 0x00, 0x00, 0x00, 0x3C, 0x86, 0x13, 0xC1, 0x13, 0xC5, 0x0A, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x3E, 0xC3, 0xCF, 0x3E, 0x00, 0x00, 0x00, 0x06, 0xFF, 0x06, 0xFF, 0xF1, 0xFF, 0x80, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x8A, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x54, 0xAA, 0x55, 0xAA, 0x15, 0x8A, 0x15, 0x0A, 0x05, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0xFF, 0x3F, 0xFF, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0xFF, 0x1F, 0xFF, 0xF8, 0x07, 0x00, 0x00, 0x00, 0x03, 0x1F, 0xFF, 0xFF, 0x7E, 0x1E, 0xDF, 0xDF, 0x00, 0x00, 0x00, 0xFF, 0x01, 0xFF, 0xFF, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xA0, 0x50, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x41, 0x80, 0x41, 0x80, 0x41, 0x80, 0x41, 0x80, 0x41, 0x80, 0x41, 0x00, 0x01, 0x00, 0x01, 0x80, 0x41, 0xA0, 0x51, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xC0, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xFC, 0xFC, 0xFC, 0x38, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xDC, 0xDC, 0xDC, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x82, 0x85, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x85, 0x82, 0x80, 0x80, 0x80, 0x88, 0x95, 0x8A, 0x95, 0x8A, 0x15, 0x0A, 0x05, 0x0A, 0x05, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x9F, 0x80, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9F, 0x9F, 0x8F, 0x87, 0x80, 0x80, 0x9F, 0x9F, 0x9F, 0x9F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x9F, 0x9F, 0x9F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x07, 0x04, 0x04, 0xFC, 0x80, 0xFC, 0x04, 0x04, 0xFF, 0x80, 0x94, 0x94, 0x94, 0x9C, 0xFF, 0x80, 0xEC, 0xEC, 0xEC, 0x80, 0xFF, 0x80, 0x80, 0xFE, 0x11, 0xFE, 0x80, 0x80, 0xFF, 0x00, 0xFE, 0x82, 0xDA, 0xDA, 0x82, 0xFE, 0xA0, 0xFE, 0x82, 0xDA, 0xDA, 0xA2, 0xFE, 0xA0, 0xFE, 0x82, 0xBA, 0xAA, 0x8A, 0xFE, 0xA0, 0xE0, 0x00, 0xFF, 0x80, 0x80, 0x9C, 0x94, 0x84, 0xFF, 0x80, 0xEC, 0xEC, 0xEC, 0x80, 0xFF, 0x80, 0x80, 0xFE, 0x11, 0xFE, 0x80, 0x80, 0xFF, 0x80, 0x94, 0x94, 0x94, 0x9C, 0xFF, 0x90, 0x94, 0x94, 0x94, 0x84, 0xFF, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x07, 0x0E, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x0E, 0x07, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


PROGMEM const unsigned char qrcode[] = {
// width, height 64, 64,
0xFF, 0xFF, 0xFF, 0x07, 0x07, 0xE7, 0xE7, 0x67, 0x67, 0x67, 0x67, 0x67, 0x67, 0xE7, 0xE7, 0x07, 0x07, 0xFF, 0xFF, 0x9F, 0x9F, 0x07, 0x07, 0x7F, 0x7F, 0x1F, 0x1F, 0x9F, 0x9F, 0x87, 0x87, 0x9F, 0x9F, 0x1F, 0x1F, 0x7F, 0x7F, 0x9F, 0x9F, 0xE7, 0xE7, 0x67, 0x67, 0xE7, 0xE7, 0xFF, 0xFF, 0x07, 0x07, 0xE7, 0xE7, 0x67, 0x67, 0x67, 0x67, 0x67, 0x67, 0xE7, 0xE7, 0x07, 0x07, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7F, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0x19, 0x19, 0xF8, 0xF8, 0x06, 0x06, 0xF8, 0xF8, 0x67, 0x67, 0xE1, 0xE1, 0x79, 0x79, 0x9E, 0x9E, 0x06, 0x06, 0x81, 0x81, 0x61, 0x61, 0xE6, 0xE6, 0x01, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7F, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xE6, 0xE6, 0xE6, 0xE6, 0x66, 0x66, 0x86, 0x86, 0x66, 0x66, 0x1E, 0x1E, 0x66, 0x66, 0x67, 0x67, 0x66, 0x66, 0x07, 0x07, 0xE6, 0xE6, 0x7F, 0x7F, 0x60, 0x60, 0xE7, 0xE7, 0x06, 0x06, 0x61, 0x61, 0x1E, 0x1E, 0xE7, 0xE7, 0x9E, 0x9E, 0x81, 0x81, 0x98, 0x98, 0x87, 0x87, 0x9E, 0x9E, 0x86, 0x86, 0x1E, 0x1E, 0xE6, 0xE6, 0xFE, 0xFE, 0xE6, 0xE6, 0x9E, 0x9E, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x61, 0x61, 0x87, 0x87, 0x80, 0x80, 0xE7, 0xE7, 0x66, 0x66, 0x78, 0x78, 0x66, 0x66, 0x78, 0x78, 0xF8, 0xF8, 0xE0, 0xE0, 0x99, 0x99, 0xE0, 0xE0, 0x9E, 0x9E, 0x87, 0x87, 0x66, 0x66, 0x60, 0x60, 0x80, 0x80, 0xE7, 0xE7, 0xF9, 0xF9, 0x81, 0x81, 0x79, 0x79, 0x1F, 0x1F, 0x9F, 0x9F, 0x81, 0x81, 0x98, 0x98, 0xE7, 0xE7, 0x07, 0x07, 0xF9, 0xF9, 0x9F, 0x9F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xE1, 0xE1, 0x87, 0x87, 0xE1, 0xE1, 0xF8, 0xF8, 0xE6, 0xE6, 0x66, 0x66, 0x98, 0x98, 0x61, 0x61, 0xE7, 0xE7, 0x81, 0x81, 0x7F, 0x7F, 0x61, 0x61, 0x87, 0x87, 0x60, 0x60, 0x7E, 0x7E, 0x19, 0x19, 0x87, 0x87, 0x9F, 0x9F, 0x99, 0x99, 0x98, 0x98, 0x9E, 0x9E, 0x1F, 0x1F, 0x79, 0x79, 0x9F, 0x9F, 0x1F, 0x1F, 0x06, 0x06, 0xF9, 0xF9, 0x9F, 0x9F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x60, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x79, 0x79, 0x66, 0x66, 0xF9, 0xF9, 0x00, 0x00, 0x9F, 0x9F, 0xF9, 0xF9, 0xE0, 0xE0, 0x9E, 0x9E, 0x1F, 0x1F, 0x7E, 0x7E, 0x60, 0x60, 0x1E, 0x1E, 0x87, 0x87, 0x9F, 0x9F, 0x19, 0x19, 0x07, 0x07, 0xE7, 0xE7, 0x66, 0x66, 0xE0, 0xE0, 0x01, 0x01, 0x1E, 0x1E, 0x06, 0x06, 0x81, 0x81, 0x87, 0x87, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0x06, 0x06, 0x07, 0x07, 0xE1, 0xE1, 0x7F, 0x7F, 0x61, 0x61, 0xF8, 0xF8, 0xE6, 0xE6, 0x78, 0x78, 0x18, 0x18, 0x87, 0x87, 0x7F, 0x7F, 0x98, 0x98, 0xE0, 0xE0, 0x07, 0x07, 0x66, 0x66, 0x07, 0x07, 0x60, 0x60, 0x00, 0x00, 0x66, 0x66, 0x07, 0x07, 0x87, 0x87, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xE7, 0xE7, 0xE6, 0xE6, 0xE6, 0xE6, 0xE6, 0xE6, 0xE7, 0xE7, 0xE0, 0xE0, 0xFF, 0xFF, 0xE0, 0xE0, 0xFE, 0xFE, 0xE7, 0xE7, 0xE0, 0xE0, 0xFE, 0xFE, 0xFF, 0xFF, 0xF9, 0xF9, 0xF8, 0xF8, 0xF8, 0xF8, 0xE7, 0xE7, 0xE6, 0xE6, 0xE7, 0xE7, 0xF9, 0xF9, 0xFE, 0xFE, 0xF8, 0xF8, 0xE0, 0xE0, 0xE6, 0xE6, 0xE0, 0xE0, 0xE6, 0xE6, 0xF8, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};


PROGMEM const unsigned char info[] = {
// width, height 96, 24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x41, 0x5D, 0x55, 0x57, 0x7F, 0x41, 0x6D, 0x6D, 0x51, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x05, 0x7D, 0x41, 0x7D, 0x05, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x5D, 0x5D, 0x63, 0x3E, 0x00, 0x7F, 0x41, 0x5D, 0x55, 0x49, 0x7F, 0x11, 0x77, 0x47, 0x71, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x00, 0x7F, 0x41, 0x75, 0x15, 0x1D, 0x7F, 0x41, 0x7F, 0x51, 0x55, 0x55, 0x45, 0x7F, 0x41, 0x77, 0x77, 0x41, 0x7F, 0x00, 0x7F, 0x41, 0x5D, 0x55, 0x57, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x5F, 0x50, 0x50, 0x7F, 0x41, 0x5F, 0x50, 0x50, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x5D, 0x5D, 0x63, 0x3E, 0x00, 0x7F, 0x41, 0x5F, 0x68, 0x5F, 0x41, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x41, 0x5D, 0x5D, 0x63, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x41, 0x5D, 0x5D, 0x63, 0x3E, 0x00, 0x7F, 0x41, 0x7D, 0x13, 0x7D, 0x41, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x11, 0x77, 0x47, 0x71, 0x1F, 0x00, 0x7F, 0x41, 0x7D, 0x13, 0x7D, 0x41, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x11, 0x77, 0x47, 0x71, 0x1F, 0x00, 0x7F, 0x41, 0x5D, 0x5D, 0x41, 0x7F, 0x05, 0x7D, 0x41, 0x7D, 0x05, 0x7F, 0x41, 0x77, 0x77, 0x41, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x6D, 0x6D, 0x51, 0x7F, 0x51, 0x55, 0x55, 0x45, 0x7F
};


PROGMEM const unsigned char menuText[] = {
// width, height
20, 8,
// HELP
0x7F, 0x41, 0x77, 0x77, 0x41, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x5F, 0x5F, 0x7F, 0x41, 0x75, 0x75, 0x71, 0x7F, 
// PLAY
0x7F, 0x41, 0x75, 0x75, 0x71, 0x7F, 0x41, 0x5F, 0x5F, 0x7F, 0x41, 0x75, 0x75, 0x41, 0x7F, 0x71, 0x77, 0x47, 0x71, 0x7F, 
// INFO
0x7F, 0x5D, 0x41, 0x5D, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x41, 0x75, 0x75, 0x7D, 0x7F, 0x41, 0x5D, 0x5D, 0x41, 0x7F, 
// CONF
0x7F, 0x41, 0x5D, 0x5D, 0x5D, 0x7F, 0x41, 0x5D, 0x5D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x41, 0x75, 0x75, 0x7F, 
// SFX
0x7F, 0x51, 0x55, 0x55, 0x45, 0x7F, 0x41, 0x75, 0x75, 0x7D, 0x7F, 0x49, 0x77, 0x77, 0x49, 0x7F, 0x00, 0x00, 0x00, 0x00, 
// OFF
0x7F, 0x41, 0x5D, 0x5D, 0x41, 0x7F, 0x41, 0x75, 0x75, 0x7D, 0x7F, 0x41, 0x75, 0x75, 0x7D, 0x7F, 0x00, 0x00, 0x00, 0x00, 
// ON
0x7F, 0x41, 0x5D, 0x5D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};



//////// player bitmaps //////////////////////
//////////////////////////////////////////////


PROGMEM const unsigned char mermaid_plus_mask[] = {
// width, height
16, 16,
// frame 0
0x40, 0xE8, 0x68, 0xFC, 0xE8, 0xFC, 0xD8, 0xFC, 0xF0, 0xFC, 0xBC, 0xFE, 0x5E, 0xFF, 0xEE, 0xFF, 
0x8E, 0xFF, 0xF6, 0xFF, 0xFA, 0xFF, 0x8A, 0xFF, 0x26, 0xFF, 0x66, 0xFF, 0xE0, 0xF6, 0x40, 0xE0, 
0x00, 0x00, 0x00, 0x04, 0x04, 0x2F, 0x25, 0x7F, 0x35, 0x7F, 0x46, 0xFF, 0xC2, 0xF7, 0xF2, 0xFF, 
0xEF, 0xFF, 0xEC, 0xFF, 0x72, 0xFF, 0x0C, 0x7F, 0x0C, 0x1E, 0x00, 0x0E, 0x04, 0x0F, 0x04, 0x0E, 
// frame 1
0x00, 0x70, 0x70, 0xF8, 0xC0, 0xF0, 0xE0, 0xF0, 0xF0, 0xFC, 0xBC, 0xFE, 0x5E, 0xFF, 0xEE, 0xFF, 
0x8E, 0xFF, 0xF6, 0xFF, 0xFA, 0xFF, 0x8A, 0xFF, 0x66, 0xFF, 0xC3, 0xE7, 0xC0, 0xE3, 0x60, 0xF0, 
0x00, 0x00, 0x00, 0x04, 0x04, 0x4F, 0x45, 0xEF, 0x65, 0xFF, 0x87, 0xEF, 0x82, 0xF7, 0xF2, 0xFF, 
0xEF, 0xFF, 0xEC, 0xFF, 0x72, 0xFF, 0x0C, 0x7F, 0x0C, 0x1E, 0x00, 0x0D, 0x04, 0x0F, 0x04, 0x0E, 
// frame 2
0x00, 0x60, 0x60, 0xF0, 0xC0, 0xE0, 0xC0, 0xF0, 0xF0, 0xFC, 0xBC, 0xFE, 0x5E, 0xFF, 0xEE, 0xFF, 
0x8E, 0xFF, 0xF6, 0xFF, 0xFA, 0xFF, 0x8A, 0xFF, 0x44, 0xEE, 0x86, 0xCF, 0x80, 0xC6, 0xC0, 0xE0, 
0x00, 0x00, 0x00, 0x80, 0x80, 0xC9, 0xC9, 0xFF, 0xC9, 0xFF, 0x8D, 0xDF, 0x86, 0xFF, 0xF2, 0xFF, 
0xEF, 0xFF, 0xEC, 0xFF, 0x72, 0xFF, 0x0C, 0x7F, 0x0C, 0x1F, 0x01, 0x0F, 0x09, 0x1F, 0x00, 0x09, 
// frame 3
0x00, 0xE0, 0xC0, 0xE0, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xFE, 0xDE, 0xFF, 0x2F, 0xFF, 0x77, 0xFF, 
0xC7, 0xFF, 0x7B, 0xFF, 0x7D, 0xFF, 0x45, 0xFF, 0xA2, 0xFF, 0xCC, 0xFE, 0x80, 0xCC, 0x00, 0x80, 
0x00, 0x00, 0x00, 0x41, 0x41, 0xE3, 0xC1, 0xEB, 0xC9, 0xFF, 0x4C, 0xFF, 0x46, 0xFF, 0x7B, 0xFF, 
0x77, 0xFF, 0x76, 0xFF, 0x39, 0x7F, 0x06, 0x3F, 0x06, 0x0F, 0x01, 0x0F, 0x08, 0x1D, 0x00, 0x08, 
// frame 4
0x40, 0xE0, 0xC0, 0xE0, 0x60, 0xF0, 0xE0, 0xF0, 0xF0, 0xFE, 0xDE, 0xFF, 0x2F, 0xFF, 0x77, 0xFF, 
0xC7, 0xFF, 0x7B, 0xFF, 0x7D, 0xFF, 0x45, 0xFF, 0x22, 0xFF, 0xCC, 0xFE, 0x80, 0xCC, 0x00, 0x80, 
0x00, 0x00, 0x00, 0xC1, 0x41, 0xE3, 0x61, 0xFB, 0x68, 0xFD, 0x4C, 0xFF, 0x46, 0xFF, 0x7B, 0xFF, 
0x77, 0xFF, 0x76, 0xFF, 0x39, 0x7F, 0x06, 0x3F, 0x06, 0x0F, 0x00, 0x0F, 0x08, 0x1D, 0x00, 0x08, 
// frame 5
0x60, 0xF0, 0xB0, 0xF8, 0xD0, 0xF8, 0xD0, 0xF8, 0xF0, 0xFE, 0xDE, 0xFF, 0x2F, 0xFF, 0x77, 0xFF, 
0xC7, 0xFF, 0x7B, 0xFF, 0x7D, 0xFF, 0x45, 0xFF, 0x22, 0xFF, 0xE6, 0xFF, 0xC0, 0xE6, 0x00, 0xC0, 
0x00, 0x01, 0x01, 0x03, 0x01, 0x27, 0x24, 0x7F, 0x74, 0xFF, 0x46, 0xFF, 0x43, 0xFF, 0x79, 0xFF, 
0x77, 0xFF, 0x76, 0xFF, 0x39, 0x7F, 0x06, 0x3F, 0x06, 0x0F, 0x00, 0x07, 0x04, 0x0F, 0x00, 0x04, 
};

PROGMEM const unsigned char trident_plus_mask[] = {
// width, height
16, 8,
0x00, 0x08, 0x08, 0x1C, 0x08, 0x1C, 0x08, 0x1C, 0x08, 0x1C, 0x08, 0x1C, 0x08, 0x1C, 0x08, 0x3E, 
0x3E, 0x7F, 0x6B, 0xFF, 0x49, 0xFF, 0x49, 0xFF, 0x2A, 0x7F, 0x2A, 0x7F, 0x08, 0x3E, 0x00, 0x08, 
};

PROGMEM const unsigned char bubbles_plus_mask[] = {
// width, height
8, 8,
// frame 0
0x3C, 0x7E, 0x42, 0xFF, 0x8D, 0xDF, 0x85, 0xCF, 
0x81, 0xC7, 0x81, 0xC3, 0x42, 0xFF, 0x3C, 0x7E, 
// frame 1
0x06, 0x0F, 0x09, 0x0F, 0x09, 0x0F, 0x06, 0x0F, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// frame 2
0x02, 0x07, 0x05, 0x07, 0x02, 0x07, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

PROGMEM const unsigned char seaShell_plus_mask[] = {
// width, height
8, 8,
// frame 0
0x24, 0x7E, 0x1C, 0x7E, 0x2C, 0x7E, 0x30, 0x7C, 
0x18, 0x3C, 0x08, 0x3C, 0x10, 0x38, 0x10, 0x38, 
// frame 1
0x20, 0x70, 0x30, 0x78, 0x60, 0xF8, 0xD8, 0xFC, 
0x30, 0xFC, 0x0C, 0x3E, 0x02, 0x0F, 0x00, 0x03, 
// frame 2
0x08, 0x1C, 0x0C, 0x1F, 0x07, 0x3F, 0x36, 0x7F, 
0x18, 0x7E, 0x60, 0xF8, 0x40, 0xE0, 0x00, 0xC0, 
};

PROGMEM const unsigned char magic_plus_mask[] = {
// width, height
8, 8,
// frame 0
0x08, 0x5E, 0x5A, 0xFF, 0x7E, 0xFF, 0xE7, 0xFF, 
0x81, 0xE7, 0x81, 0xDB, 0x18, 0xBD, 0x18, 0x3C, 
// frame 1
0x4A, 0xFF, 0x7E, 0xFF, 0xE7, 0xFF, 0x81, 0xE7, 
0x81, 0xFF, 0xBD, 0xFF, 0x7E, 0xFF, 0x3C, 0x7E, 
// frame 2
0x10, 0x7A, 0x42, 0xF7, 0xC3, 0xEF, 0x89, 0xFF, 
0xBD, 0xFF, 0x66, 0xFF, 0x42, 0xE7, 0x24, 0x7E, 
// frame 3
0x42, 0xEF, 0x08, 0x7E, 0x2C, 0x7F, 0x7E, 0xFF, 
0xC3, 0xFF, 0x42, 0xE7, 0x00, 0x5A, 0x18, 0x3C, 
};


//////// pirate bitmaps //////////////////////
//////////////////////////////////////////////

PROGMEM const unsigned char pirateshipBowsprit[] = {
// width, height
16, 8,
0x01, 0x01, 0x02, 0x02, 0x06, 0x04, 0x0C, 0x0C, 0x18, 0x18, 0x18, 0x30, 0x70, 0xF0, 0xF0, 0x00
};

PROGMEM const unsigned char pirateshipCrowsnest[] = {
// width, height
8, 8,
0x08, 0x28, 0x68, 0x6B, 0x6B, 0x68, 0x28, 0x08
};

PROGMEM const unsigned char pirateshipSail[] = {
// width, height
32, 16,
0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0xB0, 0xB0, 0xB0, 0xB0, 0x30, 0x30, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0x68, 0x6C, 0xEC, 0xEC, 0xEC, 0xEC, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0x06, 0x00, 
0x00, 0x00, 0x1F, 0x7F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3E, 0x7F, 0x0D, 0x50, 0x00, 0x4C, 0x0C, 0x61, 0x3E, 0x3E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x07, 0x0F, 0x1F, 0x01, 0x02, 0x00
};

PROGMEM const unsigned char pirateshipShip[] = {
// width, height
48, 32,
0xF0, 0xF0, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0F, 0x11, 0x03, 0x06, 0x0E, 0x03, 0x77, 0x6F, 0x5F, 0x1F, 0x03, 0x06, 0x02, 0x07, 0x0F, 0x1F, 0x1F, 0x3F, 0x20, 0x00, 0x02, 0xDE, 0xC2, 0xC2, 0xDE, 0xC2, 0xC2, 0xDE, 0xC2, 0xC2, 0xDE, 0xC2, 
0x07, 0x3F, 0xF8, 0xC5, 0x3D, 0x7D, 0xFB, 0xFB, 0xFB, 0xF6, 0xF6, 0xF6, 0xEC, 0xCC, 0xBC, 0x7C, 0xE0, 0xC0, 0xC6, 0x86, 0x82, 0x80, 0xAF, 0xAF, 0xAF, 0xA9, 0xA6, 0x86, 0x86, 0x86, 0x82, 0x86, 0x80, 0xC0, 0xF0, 0x3C, 0x0F, 0xF3, 0xFC, 0x06, 0x42, 0xFA, 0x42, 0x46, 0xFE, 0xFE, 0xFE, 0x01, 
0x00, 0x00, 0x01, 0x0F, 0x7E, 0xF0, 0x8E, 0x7D, 0x7B, 0xFB, 0xF7, 0xF7, 0xEF, 0xEF, 0xEF, 0xDF, 0x06, 0x66, 0x95, 0x95, 0x65, 0xDD, 0x05, 0x65, 0x95, 0x95, 0x65, 0xDD, 0x05, 0x65, 0x95, 0x95, 0x65, 0xDD, 0xDC, 0xDF, 0x00, 0xDF, 0xDF, 0xD8, 0xD8, 0xDF, 0xD8, 0xD8, 0xDF, 0xDF, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0E, 0x19, 0x36, 0x2E, 0x5D, 0x5D, 0xBB, 0xBB, 0xFB, 0x76, 0x76, 0x76, 0xF6, 0xEE, 0xEF, 0xEE, 0xEE, 0xAE, 0x8E, 0x0E, 0x0F, 0x2E, 0x2E, 0xAE, 0xEE, 0xEE, 0xEF, 0xF7, 0xF7, 0xF6, 0x76, 0x7A, 0x3A, 0x1A, 0x0C, 0x64, 0x70, 0x78, 0x00, 0x00, 0x00
};




#endif
