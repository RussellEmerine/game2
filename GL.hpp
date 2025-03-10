#pragma once

/*
 *
 * Function prototypes/pointers for OpenGL 3.3 core, with minimal namespace pollution.
 * Call init_GL() after you have created a context.
 *
 * On Windows, OpenGL 1.0 & 1.1 are prototypes, the rest are pointers
 *  initialized by init_GL(). This is because the 1.1/1.0 entries are
 *  the only ones provided directly by OpenGL32.dll 
 *
 * On Linux, all are prototypes.
 *
 * On MacOS, all are prototypes.
 *
 * This file has been automatically generated from glcorearb.h by make-GL.py
 *
 */

void init_GL(); //will throw on failure.

extern "C" {

#include <stdint.h>

#ifdef _WIN32
#define APIENTRY __stdcall //see: https://docs.microsoft.com/en-us/windows/win32/winprog/windows-data-types
#define APIENTRYFP APIENTRY * //these are function pointers on windows
#else
#define APIENTRY
#define APIENTRYFP
#endif

//this is how khronos_ssize_t gets defined in khrplatform.h:
#ifdef _WIN64
typedef signed   long long int khronos_ssize_t;
#else
typedef signed long int khronos_ssize_t;
#endif

#define GLAPI extern

/*
** Copyright (c) 2013-2018 The Khronos Group Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and/or associated documentation files (the
** "Materials"), to deal in the Materials without restriction, including
** without limitation the rights to use, copy, modify, merge, publish,
** distribute, sublicense, and/or sell copies of the Materials, and to
** permit persons to whom the Materials are furnished to do so, subject to
** the following conditions:
**
** The above copyright notice and this permission notice shall be included
** in all copies or substantial portions of the Materials.
**
** THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
** CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
** TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
** MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
*/

// from GL_VERSION_1_0:
typedef void GLvoid;
typedef unsigned int GLenum;
typedef float GLfloat;
typedef int GLint;
typedef int GLsizei;
typedef unsigned int GLbitfield;
typedef double GLdouble;
typedef unsigned int GLuint;
typedef unsigned char GLboolean;
typedef uint8_t GLubyte;
#define GL_DEPTH_BUFFER_BIT               0x00000100
#define GL_STENCIL_BUFFER_BIT             0x00000400
#define GL_COLOR_BUFFER_BIT               0x00004000
#define GL_FALSE                          0
#define GL_TRUE                           1
#define GL_POINTS                         0x0000
#define GL_LINES                          0x0001
#define GL_LINE_LOOP                      0x0002
#define GL_LINE_STRIP                     0x0003
#define GL_TRIANGLES                      0x0004
#define GL_TRIANGLE_STRIP                 0x0005
#define GL_TRIANGLE_FAN                   0x0006
#define GL_QUADS                          0x0007
#define GL_NEVER                          0x0200
#define GL_LESS                           0x0201
#define GL_EQUAL                          0x0202
#define GL_LEQUAL                         0x0203
#define GL_GREATER                        0x0204
#define GL_NOTEQUAL                       0x0205
#define GL_GEQUAL                         0x0206
#define GL_ALWAYS                         0x0207
#define GL_ZERO                           0
#define GL_ONE                            1
#define GL_SRC_COLOR                      0x0300
#define GL_ONE_MINUS_SRC_COLOR            0x0301
#define GL_SRC_ALPHA                      0x0302
#define GL_ONE_MINUS_SRC_ALPHA            0x0303
#define GL_DST_ALPHA                      0x0304
#define GL_ONE_MINUS_DST_ALPHA            0x0305
#define GL_DST_COLOR                      0x0306
#define GL_ONE_MINUS_DST_COLOR            0x0307
#define GL_SRC_ALPHA_SATURATE             0x0308
#define GL_NONE                           0
#define GL_FRONT_LEFT                     0x0400
#define GL_FRONT_RIGHT                    0x0401
#define GL_BACK_LEFT                      0x0402
#define GL_BACK_RIGHT                     0x0403
#define GL_FRONT                          0x0404
#define GL_BACK                           0x0405
#define GL_LEFT                           0x0406
#define GL_RIGHT                          0x0407
#define GL_FRONT_AND_BACK                 0x0408
#define GL_NO_ERROR                       0
#define GL_INVALID_ENUM                   0x0500
#define GL_INVALID_VALUE                  0x0501
#define GL_INVALID_OPERATION              0x0502
#define GL_OUT_OF_MEMORY                  0x0505
#define GL_CW                             0x0900
#define GL_CCW                            0x0901
#define GL_POINT_SIZE                     0x0B11
#define GL_POINT_SIZE_RANGE               0x0B12
#define GL_POINT_SIZE_GRANULARITY         0x0B13
#define GL_LINE_SMOOTH                    0x0B20
#define GL_LINE_WIDTH                     0x0B21
#define GL_LINE_WIDTH_RANGE               0x0B22
#define GL_LINE_WIDTH_GRANULARITY         0x0B23
#define GL_POLYGON_MODE                   0x0B40
#define GL_POLYGON_SMOOTH                 0x0B41
#define GL_CULL_FACE                      0x0B44
#define GL_CULL_FACE_MODE                 0x0B45
#define GL_FRONT_FACE                     0x0B46
#define GL_DEPTH_RANGE                    0x0B70
#define GL_DEPTH_TEST                     0x0B71
#define GL_DEPTH_WRITEMASK                0x0B72
#define GL_DEPTH_CLEAR_VALUE              0x0B73
#define GL_DEPTH_FUNC                     0x0B74
#define GL_STENCIL_TEST                   0x0B90
#define GL_STENCIL_CLEAR_VALUE            0x0B91
#define GL_STENCIL_FUNC                   0x0B92
#define GL_STENCIL_VALUE_MASK             0x0B93
#define GL_STENCIL_FAIL                   0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL        0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS        0x0B96
#define GL_STENCIL_REF                    0x0B97
#define GL_STENCIL_WRITEMASK              0x0B98
#define GL_VIEWPORT                       0x0BA2
#define GL_DITHER                         0x0BD0
#define GL_BLEND_DST                      0x0BE0
#define GL_BLEND_SRC                      0x0BE1
#define GL_BLEND                          0x0BE2
#define GL_LOGIC_OP_MODE                  0x0BF0
#define GL_DRAW_BUFFER                    0x0C01
#define GL_READ_BUFFER                    0x0C02
#define GL_SCISSOR_BOX                    0x0C10
#define GL_SCISSOR_TEST                   0x0C11
#define GL_COLOR_CLEAR_VALUE              0x0C22
#define GL_COLOR_WRITEMASK                0x0C23
#define GL_DOUBLEBUFFER                   0x0C32
#define GL_STEREO                         0x0C33
#define GL_LINE_SMOOTH_HINT               0x0C52
#define GL_POLYGON_SMOOTH_HINT            0x0C53
#define GL_UNPACK_SWAP_BYTES              0x0CF0
#define GL_UNPACK_LSB_FIRST               0x0CF1
#define GL_UNPACK_ROW_LENGTH              0x0CF2
#define GL_UNPACK_SKIP_ROWS               0x0CF3
#define GL_UNPACK_SKIP_PIXELS             0x0CF4
#define GL_UNPACK_ALIGNMENT               0x0CF5
#define GL_PACK_SWAP_BYTES                0x0D00
#define GL_PACK_LSB_FIRST                 0x0D01
#define GL_PACK_ROW_LENGTH                0x0D02
#define GL_PACK_SKIP_ROWS                 0x0D03
#define GL_PACK_SKIP_PIXELS               0x0D04
#define GL_PACK_ALIGNMENT                 0x0D05
#define GL_MAX_TEXTURE_SIZE               0x0D33
#define GL_MAX_VIEWPORT_DIMS              0x0D3A
#define GL_SUBPIXEL_BITS                  0x0D50
#define GL_TEXTURE_1D                     0x0DE0
#define GL_TEXTURE_2D                     0x0DE1
#define GL_TEXTURE_WIDTH                  0x1000
#define GL_TEXTURE_HEIGHT                 0x1001
#define GL_TEXTURE_BORDER_COLOR           0x1004
#define GL_DONT_CARE                      0x1100
#define GL_FASTEST                        0x1101
#define GL_NICEST                         0x1102
#define GL_BYTE                           0x1400
#define GL_UNSIGNED_BYTE                  0x1401
#define GL_SHORT                          0x1402
#define GL_UNSIGNED_SHORT                 0x1403
#define GL_INT                            0x1404
#define GL_UNSIGNED_INT                   0x1405
#define GL_FLOAT                          0x1406
#define GL_STACK_OVERFLOW                 0x0503
#define GL_STACK_UNDERFLOW                0x0504
#define GL_CLEAR                          0x1500
#define GL_AND                            0x1501
#define GL_AND_REVERSE                    0x1502
#define GL_COPY                           0x1503
#define GL_AND_INVERTED                   0x1504
#define GL_NOOP                           0x1505
#define GL_XOR                            0x1506
#define GL_OR                             0x1507
#define GL_NOR                            0x1508
#define GL_EQUIV                          0x1509
#define GL_INVERT                         0x150A
#define GL_OR_REVERSE                     0x150B
#define GL_COPY_INVERTED                  0x150C
#define GL_OR_INVERTED                    0x150D
#define GL_NAND                           0x150E
#define GL_SET                            0x150F
#define GL_TEXTURE                        0x1702
#define GL_COLOR                          0x1800
#define GL_DEPTH                          0x1801
#define GL_STENCIL                        0x1802
#define GL_STENCIL_INDEX                  0x1901
#define GL_DEPTH_COMPONENT                0x1902
#define GL_RED                            0x1903
#define GL_GREEN                          0x1904
#define GL_BLUE                           0x1905
#define GL_ALPHA                          0x1906
#define GL_RGB                            0x1907
#define GL_RGBA                           0x1908
#define GL_POINT                          0x1B00
#define GL_LINE                           0x1B01
#define GL_FILL                           0x1B02
#define GL_KEEP                           0x1E00
#define GL_REPLACE                        0x1E01
#define GL_INCR                           0x1E02
#define GL_DECR                           0x1E03
#define GL_VENDOR                         0x1F00
#define GL_RENDERER                       0x1F01
#define GL_VERSION                        0x1F02
#define GL_EXTENSIONS                     0x1F03
#define GL_NEAREST                        0x2600
#define GL_LINEAR                         0x2601
#define GL_NEAREST_MIPMAP_NEAREST         0x2700
#define GL_LINEAR_MIPMAP_NEAREST          0x2701
#define GL_NEAREST_MIPMAP_LINEAR          0x2702
#define GL_LINEAR_MIPMAP_LINEAR           0x2703
#define GL_TEXTURE_MAG_FILTER             0x2800
#define GL_TEXTURE_MIN_FILTER             0x2801
#define GL_TEXTURE_WRAP_S                 0x2802
#define GL_TEXTURE_WRAP_T                 0x2803
#define GL_REPEAT                         0x2901
GLAPI void APIENTRY glCullFace(GLenum mode);
GLAPI void APIENTRY glFrontFace(GLenum mode);
GLAPI void APIENTRY glHint(GLenum target, GLenum mode);
GLAPI void APIENTRY glLineWidth(GLfloat width);
GLAPI void APIENTRY glPointSize(GLfloat size);
GLAPI void APIENTRY glPolygonMode(GLenum face, GLenum mode);
GLAPI void APIENTRY glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void APIENTRY glTexParameterf(GLenum target, GLenum pname, GLfloat param);
GLAPI void APIENTRY glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params);
GLAPI void APIENTRY glTexParameteri(GLenum target, GLenum pname, GLint param);
GLAPI void APIENTRY glTexParameteriv(GLenum target, GLenum pname, const GLint *params);
GLAPI void APIENTRY
glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type,
             const void *pixels);
GLAPI void APIENTRY
glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border,
             GLenum format, GLenum type, const void *pixels);
GLAPI void APIENTRY glDrawBuffer(GLenum buf);
GLAPI void APIENTRY glClear(GLbitfield mask);
GLAPI void APIENTRY glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLAPI void APIENTRY glClearStencil(GLint s);
GLAPI void APIENTRY glClearDepth(GLdouble depth);
GLAPI void APIENTRY glStencilMask(GLuint mask);
GLAPI void APIENTRY glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
GLAPI void APIENTRY glDepthMask(GLboolean flag);
GLAPI void APIENTRY glDisable(GLenum cap);
GLAPI void APIENTRY glEnable(GLenum cap);
GLAPI void APIENTRY glFinish(void);
GLAPI void APIENTRY glFlush(void);
GLAPI void APIENTRY glBlendFunc(GLenum sfactor, GLenum dfactor);
GLAPI void APIENTRY glLogicOp(GLenum opcode);
GLAPI void APIENTRY glStencilFunc(GLenum func, GLint ref, GLuint mask);
GLAPI void APIENTRY glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
GLAPI void APIENTRY glDepthFunc(GLenum func);
GLAPI void APIENTRY glPixelStoref(GLenum pname, GLfloat param);
GLAPI void APIENTRY glPixelStorei(GLenum pname, GLint param);
GLAPI void APIENTRY glReadBuffer(GLenum src);
GLAPI void APIENTRY
glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
GLAPI void APIENTRY glGetBooleanv(GLenum pname, GLboolean *data);
GLAPI void APIENTRY glGetDoublev(GLenum pname, GLdouble *data);
GLAPI GLenum APIENTRY glGetError(void);
GLAPI void APIENTRY glGetFloatv(GLenum pname, GLfloat *data);
GLAPI void APIENTRY glGetIntegerv(GLenum pname, GLint *data);
GLAPI const GLubyte *APIENTRY glGetString(GLenum name);
GLAPI void APIENTRY glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
GLAPI void APIENTRY glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params);
GLAPI void APIENTRY glGetTexParameteriv(GLenum target, GLenum pname, GLint *params);
GLAPI void APIENTRY glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params);
GLAPI void APIENTRY glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params);
GLAPI GLboolean APIENTRY glIsEnabled(GLenum cap);
GLAPI void APIENTRY glDepthRange(GLdouble n, GLdouble f);
GLAPI void APIENTRY glViewport(GLint x, GLint y, GLsizei width, GLsizei height);

// from GL_VERSION_1_1:
typedef float GLclampf;
typedef double GLclampd;
#define GL_COLOR_LOGIC_OP                 0x0BF2
#define GL_POLYGON_OFFSET_UNITS           0x2A00
#define GL_POLYGON_OFFSET_POINT           0x2A01
#define GL_POLYGON_OFFSET_LINE            0x2A02
#define GL_POLYGON_OFFSET_FILL            0x8037
#define GL_POLYGON_OFFSET_FACTOR          0x8038
#define GL_TEXTURE_BINDING_1D             0x8068
#define GL_TEXTURE_BINDING_2D             0x8069
#define GL_TEXTURE_INTERNAL_FORMAT        0x1003
#define GL_TEXTURE_RED_SIZE               0x805C
#define GL_TEXTURE_GREEN_SIZE             0x805D
#define GL_TEXTURE_BLUE_SIZE              0x805E
#define GL_TEXTURE_ALPHA_SIZE             0x805F
#define GL_DOUBLE                         0x140A
#define GL_PROXY_TEXTURE_1D               0x8063
#define GL_PROXY_TEXTURE_2D               0x8064
#define GL_R3_G3_B2                       0x2A10
#define GL_RGB4                           0x804F
#define GL_RGB5                           0x8050
#define GL_RGB8                           0x8051
#define GL_RGB10                          0x8052
#define GL_RGB12                          0x8053
#define GL_RGB16                          0x8054
#define GL_RGBA2                          0x8055
#define GL_RGBA4                          0x8056
#define GL_RGB5_A1                        0x8057
#define GL_RGBA8                          0x8058
#define GL_RGB10_A2                       0x8059
#define GL_RGBA12                         0x805A
#define GL_RGBA16                         0x805B
#define GL_VERTEX_ARRAY                   0x8074
GLAPI void APIENTRY glDrawArrays(GLenum mode, GLint first, GLsizei count);
GLAPI void APIENTRY glDrawElements(GLenum mode, GLsizei count, GLenum type, const void *indices);
GLAPI void APIENTRY glGetPointerv(GLenum pname, void **params);
GLAPI void APIENTRY glPolygonOffset(GLfloat factor, GLfloat units);
GLAPI void APIENTRY
glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
GLAPI void APIENTRY
glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height,
                 GLint border);
GLAPI void APIENTRY glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
GLAPI void APIENTRY
glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width,
                    GLsizei height);
GLAPI void APIENTRY
glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type,
                const void *pixels);
GLAPI void APIENTRY
glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format,
                GLenum type, const void *pixels);
GLAPI void APIENTRY glBindTexture(GLenum target, GLuint texture);
GLAPI void APIENTRY glDeleteTextures(GLsizei n, const GLuint *textures);
GLAPI void APIENTRY glGenTextures(GLsizei n, GLuint *textures);
GLAPI GLboolean APIENTRY glIsTexture(GLuint texture);

// from GL_VERSION_1_2:
#define GL_UNSIGNED_BYTE_3_3_2            0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4         0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1         0x8034
#define GL_UNSIGNED_INT_8_8_8_8           0x8035
#define GL_UNSIGNED_INT_10_10_10_2        0x8036
#define GL_TEXTURE_BINDING_3D             0x806A
#define GL_PACK_SKIP_IMAGES               0x806B
#define GL_PACK_IMAGE_HEIGHT              0x806C
#define GL_UNPACK_SKIP_IMAGES             0x806D
#define GL_UNPACK_IMAGE_HEIGHT            0x806E
#define GL_TEXTURE_3D                     0x806F
#define GL_PROXY_TEXTURE_3D               0x8070
#define GL_TEXTURE_DEPTH                  0x8071
#define GL_TEXTURE_WRAP_R                 0x8072
#define GL_MAX_3D_TEXTURE_SIZE            0x8073
#define GL_UNSIGNED_BYTE_2_3_3_REV        0x8362
#define GL_UNSIGNED_SHORT_5_6_5           0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV       0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV     0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV     0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV       0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV    0x8368
#define GL_BGR                            0x80E0
#define GL_BGRA                           0x80E1
#define GL_MAX_ELEMENTS_VERTICES          0x80E8
#define GL_MAX_ELEMENTS_INDICES           0x80E9
#define GL_CLAMP_TO_EDGE                  0x812F
#define GL_TEXTURE_MIN_LOD                0x813A
#define GL_TEXTURE_MAX_LOD                0x813B
#define GL_TEXTURE_BASE_LEVEL             0x813C
#define GL_TEXTURE_MAX_LEVEL              0x813D
#define GL_SMOOTH_POINT_SIZE_RANGE        0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY  0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE        0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY  0x0B23
#define GL_ALIASED_LINE_WIDTH_RANGE       0x846E
GLAPI void (APIENTRYFP glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type,
                                            const void *indices);
GLAPI void (APIENTRYFP glTexImage3D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height,
                                     GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
GLAPI void
(APIENTRYFP glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width,
                             GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
GLAPI void
(APIENTRYFP glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x,
                                 GLint y, GLsizei width, GLsizei height);

// from GL_VERSION_1_3:
#define GL_TEXTURE0                       0x84C0
#define GL_TEXTURE1                       0x84C1
#define GL_TEXTURE2                       0x84C2
#define GL_TEXTURE3                       0x84C3
#define GL_TEXTURE4                       0x84C4
#define GL_TEXTURE5                       0x84C5
#define GL_TEXTURE6                       0x84C6
#define GL_TEXTURE7                       0x84C7
#define GL_TEXTURE8                       0x84C8
#define GL_TEXTURE9                       0x84C9
#define GL_TEXTURE10                      0x84CA
#define GL_TEXTURE11                      0x84CB
#define GL_TEXTURE12                      0x84CC
#define GL_TEXTURE13                      0x84CD
#define GL_TEXTURE14                      0x84CE
#define GL_TEXTURE15                      0x84CF
#define GL_TEXTURE16                      0x84D0
#define GL_TEXTURE17                      0x84D1
#define GL_TEXTURE18                      0x84D2
#define GL_TEXTURE19                      0x84D3
#define GL_TEXTURE20                      0x84D4
#define GL_TEXTURE21                      0x84D5
#define GL_TEXTURE22                      0x84D6
#define GL_TEXTURE23                      0x84D7
#define GL_TEXTURE24                      0x84D8
#define GL_TEXTURE25                      0x84D9
#define GL_TEXTURE26                      0x84DA
#define GL_TEXTURE27                      0x84DB
#define GL_TEXTURE28                      0x84DC
#define GL_TEXTURE29                      0x84DD
#define GL_TEXTURE30                      0x84DE
#define GL_TEXTURE31                      0x84DF
#define GL_ACTIVE_TEXTURE                 0x84E0
#define GL_MULTISAMPLE                    0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE       0x809E
#define GL_SAMPLE_ALPHA_TO_ONE            0x809F
#define GL_SAMPLE_COVERAGE                0x80A0
#define GL_SAMPLE_BUFFERS                 0x80A8
#define GL_SAMPLES                        0x80A9
#define GL_SAMPLE_COVERAGE_VALUE          0x80AA
#define GL_SAMPLE_COVERAGE_INVERT         0x80AB
#define GL_TEXTURE_CUBE_MAP               0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP       0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X    0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X    0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y    0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y    0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z    0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z    0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP         0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE      0x851C
#define GL_COMPRESSED_RGB                 0x84ED
#define GL_COMPRESSED_RGBA                0x84EE
#define GL_TEXTURE_COMPRESSION_HINT       0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE  0x86A0
#define GL_TEXTURE_COMPRESSED             0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS     0x86A3
#define GL_CLAMP_TO_BORDER                0x812D
GLAPI void (APIENTRYFP glActiveTexture)(GLenum texture);
GLAPI void (APIENTRYFP glSampleCoverage)(GLfloat value, GLboolean invert);
GLAPI void
(APIENTRYFP glCompressedTexImage3D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height,
                                    GLsizei depth, GLint border, GLsizei imageSize, const void *data);
GLAPI void
(APIENTRYFP glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height,
                                    GLint border, GLsizei imageSize, const void *data);
GLAPI void
(APIENTRYFP glCompressedTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border,
                                    GLsizei imageSize, const void *data);
GLAPI void
(APIENTRYFP glCompressedTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset,
                                       GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize,
                                       const void *data);
GLAPI void
(APIENTRYFP glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width,
                                       GLsizei height, GLenum format, GLsizei imageSize, const void *data);
GLAPI void
(APIENTRYFP glCompressedTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format,
                                       GLsizei imageSize, const void *data);
GLAPI void (APIENTRYFP glGetCompressedTexImage)(GLenum target, GLint level, void *img);

// from GL_VERSION_1_4:
#define GL_BLEND_DST_RGB                  0x80C8
#define GL_BLEND_SRC_RGB                  0x80C9
#define GL_BLEND_DST_ALPHA                0x80CA
#define GL_BLEND_SRC_ALPHA                0x80CB
#define GL_POINT_FADE_THRESHOLD_SIZE      0x8128
#define GL_DEPTH_COMPONENT16              0x81A5
#define GL_DEPTH_COMPONENT24              0x81A6
#define GL_DEPTH_COMPONENT32              0x81A7
#define GL_MIRRORED_REPEAT                0x8370
#define GL_MAX_TEXTURE_LOD_BIAS           0x84FD
#define GL_TEXTURE_LOD_BIAS               0x8501
#define GL_INCR_WRAP                      0x8507
#define GL_DECR_WRAP                      0x8508
#define GL_TEXTURE_DEPTH_SIZE             0x884A
#define GL_TEXTURE_COMPARE_MODE           0x884C
#define GL_TEXTURE_COMPARE_FUNC           0x884D
#define GL_BLEND_COLOR                    0x8005
#define GL_BLEND_EQUATION                 0x8009
#define GL_CONSTANT_COLOR                 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR       0x8002
#define GL_CONSTANT_ALPHA                 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA       0x8004
#define GL_FUNC_ADD                       0x8006
#define GL_FUNC_REVERSE_SUBTRACT          0x800B
#define GL_FUNC_SUBTRACT                  0x800A
#define GL_MIN                            0x8007
#define GL_MAX                            0x8008
GLAPI void
(APIENTRYFP glBlendFuncSeparate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
GLAPI void (APIENTRYFP glMultiDrawArrays)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
GLAPI void (APIENTRYFP glMultiDrawElements)(GLenum mode, const GLsizei *count, GLenum type, const void *const *indices,
                                            GLsizei drawcount);
GLAPI void (APIENTRYFP glPointParameterf)(GLenum pname, GLfloat param);
GLAPI void (APIENTRYFP glPointParameterfv)(GLenum pname, const GLfloat *params);
GLAPI void (APIENTRYFP glPointParameteri)(GLenum pname, GLint param);
GLAPI void (APIENTRYFP glPointParameteriv)(GLenum pname, const GLint *params);
GLAPI void (APIENTRYFP glBlendColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLAPI void (APIENTRYFP glBlendEquation)(GLenum mode);

// from GL_VERSION_1_5:
typedef khronos_ssize_t GLsizeiptr;
typedef intptr_t GLintptr;
#define GL_BUFFER_SIZE                    0x8764
#define GL_BUFFER_USAGE                   0x8765
#define GL_QUERY_COUNTER_BITS             0x8864
#define GL_CURRENT_QUERY                  0x8865
#define GL_QUERY_RESULT                   0x8866
#define GL_QUERY_RESULT_AVAILABLE         0x8867
#define GL_ARRAY_BUFFER                   0x8892
#define GL_ELEMENT_ARRAY_BUFFER           0x8893
#define GL_ARRAY_BUFFER_BINDING           0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING   0x8895
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_READ_ONLY                      0x88B8
#define GL_WRITE_ONLY                     0x88B9
#define GL_READ_WRITE                     0x88BA
#define GL_BUFFER_ACCESS                  0x88BB
#define GL_BUFFER_MAPPED                  0x88BC
#define GL_BUFFER_MAP_POINTER             0x88BD
#define GL_STREAM_DRAW                    0x88E0
#define GL_STREAM_READ                    0x88E1
#define GL_STREAM_COPY                    0x88E2
#define GL_STATIC_DRAW                    0x88E4
#define GL_STATIC_READ                    0x88E5
#define GL_STATIC_COPY                    0x88E6
#define GL_DYNAMIC_DRAW                   0x88E8
#define GL_DYNAMIC_READ                   0x88E9
#define GL_DYNAMIC_COPY                   0x88EA
#define GL_SAMPLES_PASSED                 0x8914
#define GL_SRC1_ALPHA                     0x8589
GLAPI void (APIENTRYFP glGenQueries)(GLsizei n, GLuint *ids);
GLAPI void (APIENTRYFP glDeleteQueries)(GLsizei n, const GLuint *ids);
GLAPI GLboolean (APIENTRYFP glIsQuery)(GLuint id);
GLAPI void (APIENTRYFP glBeginQuery)(GLenum target, GLuint id);
GLAPI void (APIENTRYFP glEndQuery)(GLenum target);
GLAPI void (APIENTRYFP glGetQueryiv)(GLenum target, GLenum pname, GLint *params);
GLAPI void (APIENTRYFP glGetQueryObjectiv)(GLuint id, GLenum pname, GLint *params);
GLAPI void (APIENTRYFP glGetQueryObjectuiv)(GLuint id, GLenum pname, GLuint *params);
GLAPI void (APIENTRYFP glBindBuffer)(GLenum target, GLuint buffer);
GLAPI void (APIENTRYFP glDeleteBuffers)(GLsizei n, const GLuint *buffers);
GLAPI void (APIENTRYFP glGenBuffers)(GLsizei n, GLuint *buffers);
GLAPI GLboolean (APIENTRYFP glIsBuffer)(GLuint buffer);
GLAPI void (APIENTRYFP glBufferData)(GLenum target, GLsizeiptr size, const void *data, GLenum usage);
GLAPI void (APIENTRYFP glBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
GLAPI void (APIENTRYFP glGetBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, void *data);
GLAPI void *(APIENTRYFP glMapBuffer)(GLenum target, GLenum access);
GLAPI GLboolean (APIENTRYFP glUnmapBuffer)(GLenum target);
GLAPI void (APIENTRYFP glGetBufferParameteriv)(GLenum target, GLenum pname, GLint *params);
GLAPI void (APIENTRYFP glGetBufferPointerv)(GLenum target, GLenum pname, void **params);

// from GL_VERSION_2_0:
typedef char GLchar;
typedef int16_t GLshort;
typedef int8_t GLbyte;
typedef uint16_t GLushort;
#define GL_BLEND_EQUATION_RGB             0x8009
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED    0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE       0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE     0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE       0x8625
#define GL_CURRENT_VERTEX_ATTRIB          0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE      0x8642
#define GL_VERTEX_ATTRIB_ARRAY_POINTER    0x8645
#define GL_STENCIL_BACK_FUNC              0x8800
#define GL_STENCIL_BACK_FAIL              0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL   0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS   0x8803
#define GL_MAX_DRAW_BUFFERS               0x8824
#define GL_DRAW_BUFFER0                   0x8825
#define GL_DRAW_BUFFER1                   0x8826
#define GL_DRAW_BUFFER2                   0x8827
#define GL_DRAW_BUFFER3                   0x8828
#define GL_DRAW_BUFFER4                   0x8829
#define GL_DRAW_BUFFER5                   0x882A
#define GL_DRAW_BUFFER6                   0x882B
#define GL_DRAW_BUFFER7                   0x882C
#define GL_DRAW_BUFFER8                   0x882D
#define GL_DRAW_BUFFER9                   0x882E
#define GL_DRAW_BUFFER10                  0x882F
#define GL_DRAW_BUFFER11                  0x8830
#define GL_DRAW_BUFFER12                  0x8831
#define GL_DRAW_BUFFER13                  0x8832
#define GL_DRAW_BUFFER14                  0x8833
#define GL_DRAW_BUFFER15                  0x8834
#define GL_BLEND_EQUATION_ALPHA           0x883D
#define GL_MAX_VERTEX_ATTRIBS             0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_MAX_TEXTURE_IMAGE_UNITS        0x8872
#define GL_FRAGMENT_SHADER                0x8B30
#define GL_VERTEX_SHADER                  0x8B31
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS  0x8B4A
#define GL_MAX_VARYING_FLOATS             0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_SHADER_TYPE                    0x8B4F
#define GL_FLOAT_VEC2                     0x8B50
#define GL_FLOAT_VEC3                     0x8B51
#define GL_FLOAT_VEC4                     0x8B52
#define GL_INT_VEC2                       0x8B53
#define GL_INT_VEC3                       0x8B54
#define GL_INT_VEC4                       0x8B55
#define GL_BOOL                           0x8B56
#define GL_BOOL_VEC2                      0x8B57
#define GL_BOOL_VEC3                      0x8B58
#define GL_BOOL_VEC4                      0x8B59
#define GL_FLOAT_MAT2                     0x8B5A
#define GL_FLOAT_MAT3                     0x8B5B
#define GL_FLOAT_MAT4                     0x8B5C
#define GL_SAMPLER_1D                     0x8B5D
#define GL_SAMPLER_2D                     0x8B5E
#define GL_SAMPLER_3D                     0x8B5F
#define GL_SAMPLER_CUBE                   0x8B60
#define GL_SAMPLER_1D_SHADOW              0x8B61
#define GL_SAMPLER_2D_SHADOW              0x8B62
#define GL_DELETE_STATUS                  0x8B80
#define GL_COMPILE_STATUS                 0x8B81
#define GL_LINK_STATUS                    0x8B82
#define GL_VALIDATE_STATUS                0x8B83
#define GL_INFO_LOG_LENGTH                0x8B84
#define GL_ATTACHED_SHADERS               0x8B85
#define GL_ACTIVE_UNIFORMS                0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH      0x8B87
#define GL_SHADER_SOURCE_LENGTH           0x8B88
#define GL_ACTIVE_ATTRIBUTES              0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH    0x8B8A
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_SHADING_LANGUAGE_VERSION       0x8B8C
#define GL_CURRENT_PROGRAM                0x8B8D
#define GL_POINT_SPRITE_COORD_ORIGIN      0x8CA0
#define GL_LOWER_LEFT                     0x8CA1
#define GL_UPPER_LEFT                     0x8CA2
#define GL_STENCIL_BACK_REF               0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK        0x8CA4
#define GL_STENCIL_BACK_WRITEMASK         0x8CA5
GLAPI void (APIENTRYFP glBlendEquationSeparate)(GLenum modeRGB, GLenum modeAlpha);
GLAPI void (APIENTRYFP glDrawBuffers)(GLsizei n, const GLenum *bufs);
GLAPI void (APIENTRYFP glStencilOpSeparate)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
GLAPI void (APIENTRYFP glStencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask);
GLAPI void (APIENTRYFP glStencilMaskSeparate)(GLenum face, GLuint mask);
GLAPI void (APIENTRYFP glAttachShader)(GLuint program, GLuint shader);
GLAPI void (APIENTRYFP glBindAttribLocation)(GLuint program, GLuint index, const GLchar *name);
GLAPI void (APIENTRYFP glCompileShader)(GLuint shader);
GLAPI GLuint (APIENTRYFP glCreateProgram)(void);
GLAPI GLuint (APIENTRYFP glCreateShader)(GLenum type);
GLAPI void (APIENTRYFP glDeleteProgram)(GLuint program);
GLAPI void (APIENTRYFP glDeleteShader)(GLuint shader);
GLAPI void (APIENTRYFP glDetachShader)(GLuint program, GLuint shader);
GLAPI void (APIENTRYFP glDisableVertexAttribArray)(GLuint index);
GLAPI void (APIENTRYFP glEnableVertexAttribArray)(GLuint index);
GLAPI void (APIENTRYFP glGetActiveAttrib)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size,
                                          GLenum *type, GLchar *name);
GLAPI void (APIENTRYFP glGetActiveUniform)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size,
                                           GLenum *type, GLchar *name);
GLAPI void (APIENTRYFP glGetAttachedShaders)(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
GLAPI GLint (APIENTRYFP glGetAttribLocation)(GLuint program, const GLchar *name);
GLAPI void (APIENTRYFP glGetProgramiv)(GLuint program, GLenum pname, GLint *params);
GLAPI void (APIENTRYFP glGetProgramInfoLog)(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
GLAPI void (APIENTRYFP glGetShaderiv)(GLuint shader, GLenum pname, GLint *params);
GLAPI void (APIENTRYFP glGetShaderInfoLog)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
GLAPI void (APIENTRYFP glGetShaderSource)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
GLAPI GLint (APIENTRYFP glGetUniformLocation)(GLuint program, const GLchar *name);
GLAPI void (APIENTRYFP glGetUniformfv)(GLuint program, GLint location, GLfloat *params);
GLAPI void (APIENTRYFP glGetUniformiv)(GLuint program, GLint location, GLint *params);
GLAPI void (APIENTRYFP glGetVertexAttribdv)(GLuint index, GLenum pname, GLdouble *params);
GLAPI void (APIENTRYFP glGetVertexAttribfv)(GLuint index, GLenum pname, GLfloat *params);
GLAPI void (APIENTRYFP glGetVertexAttribiv)(GLuint index, GLenum pname, GLint *params);
GLAPI void (APIENTRYFP glGetVertexAttribPointerv)(GLuint index, GLenum pname, void **pointer);
GLAPI GLboolean (APIENTRYFP glIsProgram)(GLuint program);
GLAPI GLboolean (APIENTRYFP glIsShader)(GLuint shader);
GLAPI void (APIENTRYFP glLinkProgram)(GLuint program);
GLAPI void (APIENTRYFP glShaderSource)(GLuint shader, GLsizei count, const GLchar *const *string, const GLint *length);
GLAPI void (APIENTRYFP glUseProgram)(GLuint program);
GLAPI void (APIENTRYFP glUniform1f)(GLint location, GLfloat v0);
GLAPI void (APIENTRYFP glUniform2f)(GLint location, GLfloat v0, GLfloat v1);
GLAPI void (APIENTRYFP glUniform3f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
GLAPI void (APIENTRYFP glUniform4f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
GLAPI void (APIENTRYFP glUniform1i)(GLint location, GLint v0);
GLAPI void (APIENTRYFP glUniform2i)(GLint location, GLint v0, GLint v1);
GLAPI void (APIENTRYFP glUniform3i)(GLint location, GLint v0, GLint v1, GLint v2);
GLAPI void (APIENTRYFP glUniform4i)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
GLAPI void (APIENTRYFP glUniform1fv)(GLint location, GLsizei count, const GLfloat *value);
GLAPI void (APIENTRYFP glUniform2fv)(GLint location, GLsizei count, const GLfloat *value);
GLAPI void (APIENTRYFP glUniform3fv)(GLint location, GLsizei count, const GLfloat *value);
GLAPI void (APIENTRYFP glUniform4fv)(GLint location, GLsizei count, const GLfloat *value);
GLAPI void (APIENTRYFP glUniform1iv)(GLint location, GLsizei count, const GLint *value);
GLAPI void (APIENTRYFP glUniform2iv)(GLint location, GLsizei count, const GLint *value);
GLAPI void (APIENTRYFP glUniform3iv)(GLint location, GLsizei count, const GLint *value);
GLAPI void (APIENTRYFP glUniform4iv)(GLint location, GLsizei count, const GLint *value);
GLAPI void (APIENTRYFP glUniformMatrix2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void (APIENTRYFP glUniformMatrix3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void (APIENTRYFP glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void (APIENTRYFP glValidateProgram)(GLuint program);
GLAPI void (APIENTRYFP glVertexAttrib1d)(GLuint index, GLdouble x);
GLAPI void (APIENTRYFP glVertexAttrib1dv)(GLuint index, const GLdouble *v);
GLAPI void (APIENTRYFP glVertexAttrib1f)(GLuint index, GLfloat x);
GLAPI void (APIENTRYFP glVertexAttrib1fv)(GLuint index, const GLfloat *v);
GLAPI void (APIENTRYFP glVertexAttrib1s)(GLuint index, GLshort x);
GLAPI void (APIENTRYFP glVertexAttrib1sv)(GLuint index, const GLshort *v);
GLAPI void (APIENTRYFP glVertexAttrib2d)(GLuint index, GLdouble x, GLdouble y);
GLAPI void (APIENTRYFP glVertexAttrib2dv)(GLuint index, const GLdouble *v);
GLAPI void (APIENTRYFP glVertexAttrib2f)(GLuint index, GLfloat x, GLfloat y);
GLAPI void (APIENTRYFP glVertexAttrib2fv)(GLuint index, const GLfloat *v);
GLAPI void (APIENTRYFP glVertexAttrib2s)(GLuint index, GLshort x, GLshort y);
GLAPI void (APIENTRYFP glVertexAttrib2sv)(GLuint index, const GLshort *v);
GLAPI void (APIENTRYFP glVertexAttrib3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
GLAPI void (APIENTRYFP glVertexAttrib3dv)(GLuint index, const GLdouble *v);
GLAPI void (APIENTRYFP glVertexAttrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
GLAPI void (APIENTRYFP glVertexAttrib3fv)(GLuint index, const GLfloat *v);
GLAPI void (APIENTRYFP glVertexAttrib3s)(GLuint index, GLshort x, GLshort y, GLshort z);
GLAPI void (APIENTRYFP glVertexAttrib3sv)(GLuint index, const GLshort *v);
GLAPI void (APIENTRYFP glVertexAttrib4Nbv)(GLuint index, const GLbyte *v);
GLAPI void (APIENTRYFP glVertexAttrib4Niv)(GLuint index, const GLint *v);
GLAPI void (APIENTRYFP glVertexAttrib4Nsv)(GLuint index, const GLshort *v);
GLAPI void (APIENTRYFP glVertexAttrib4Nub)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
GLAPI void (APIENTRYFP glVertexAttrib4Nubv)(GLuint index, const GLubyte *v);
GLAPI void (APIENTRYFP glVertexAttrib4Nuiv)(GLuint index, const GLuint *v);
GLAPI void (APIENTRYFP glVertexAttrib4Nusv)(GLuint index, const GLushort *v);
GLAPI void (APIENTRYFP glVertexAttrib4bv)(GLuint index, const GLbyte *v);
GLAPI void (APIENTRYFP glVertexAttrib4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLAPI void (APIENTRYFP glVertexAttrib4dv)(GLuint index, const GLdouble *v);
GLAPI void (APIENTRYFP glVertexAttrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GLAPI void (APIENTRYFP glVertexAttrib4fv)(GLuint index, const GLfloat *v);
GLAPI void (APIENTRYFP glVertexAttrib4iv)(GLuint index, const GLint *v);
GLAPI void (APIENTRYFP glVertexAttrib4s)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
GLAPI void (APIENTRYFP glVertexAttrib4sv)(GLuint index, const GLshort *v);
GLAPI void (APIENTRYFP glVertexAttrib4ubv)(GLuint index, const GLubyte *v);
GLAPI void (APIENTRYFP glVertexAttrib4uiv)(GLuint index, const GLuint *v);
GLAPI void (APIENTRYFP glVertexAttrib4usv)(GLuint index, const GLushort *v);
GLAPI void
(APIENTRYFP glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride,
                                   const void *pointer);

// from GL_VERSION_2_1:
#define GL_PIXEL_PACK_BUFFER              0x88EB
#define GL_PIXEL_UNPACK_BUFFER            0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING      0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING    0x88EF
#define GL_FLOAT_MAT2x3                   0x8B65
#define GL_FLOAT_MAT2x4                   0x8B66
#define GL_FLOAT_MAT3x2                   0x8B67
#define GL_FLOAT_MAT3x4                   0x8B68
#define GL_FLOAT_MAT4x2                   0x8B69
#define GL_FLOAT_MAT4x3                   0x8B6A
#define GL_SRGB                           0x8C40
#define GL_SRGB8                          0x8C41
#define GL_SRGB_ALPHA                     0x8C42
#define GL_SRGB8_ALPHA8                   0x8C43
#define GL_COMPRESSED_SRGB                0x8C48
#define GL_COMPRESSED_SRGB_ALPHA          0x8C49
GLAPI void (APIENTRYFP glUniformMatrix2x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void (APIENTRYFP glUniformMatrix3x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void (APIENTRYFP glUniformMatrix2x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void (APIENTRYFP glUniformMatrix4x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void (APIENTRYFP glUniformMatrix3x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void (APIENTRYFP glUniformMatrix4x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);

// from GL_VERSION_3_0:
typedef uint16_t GLhalf;
#define GL_COMPARE_REF_TO_TEXTURE         0x884E
#define GL_CLIP_DISTANCE0                 0x3000
#define GL_CLIP_DISTANCE1                 0x3001
#define GL_CLIP_DISTANCE2                 0x3002
#define GL_CLIP_DISTANCE3                 0x3003
#define GL_CLIP_DISTANCE4                 0x3004
#define GL_CLIP_DISTANCE5                 0x3005
#define GL_CLIP_DISTANCE6                 0x3006
#define GL_CLIP_DISTANCE7                 0x3007
#define GL_MAX_CLIP_DISTANCES             0x0D32
#define GL_MAJOR_VERSION                  0x821B
#define GL_MINOR_VERSION                  0x821C
#define GL_NUM_EXTENSIONS                 0x821D
#define GL_CONTEXT_FLAGS                  0x821E
#define GL_COMPRESSED_RED                 0x8225
#define GL_COMPRESSED_RG                  0x8226
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x00000001
#define GL_RGBA32F                        0x8814
#define GL_RGB32F                         0x8815
#define GL_RGBA16F                        0x881A
#define GL_RGB16F                         0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER    0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS       0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET       0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET       0x8905
#define GL_CLAMP_READ_COLOR               0x891C
#define GL_FIXED_ONLY                     0x891D
#define GL_MAX_VARYING_COMPONENTS         0x8B4B
#define GL_TEXTURE_1D_ARRAY               0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY         0x8C19
#define GL_TEXTURE_2D_ARRAY               0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY         0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY       0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY       0x8C1D
#define GL_R11F_G11F_B10F                 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV   0x8C3B
#define GL_RGB9_E5                        0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV       0x8C3E
#define GL_TEXTURE_SHARED_SIZE            0x8C3F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS    0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#define GL_PRIMITIVES_GENERATED           0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#define GL_RASTERIZER_DISCARD             0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#define GL_INTERLEAVED_ATTRIBS            0x8C8C
#define GL_SEPARATE_ATTRIBS               0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER      0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#define GL_RGBA32UI                       0x8D70
#define GL_RGB32UI                        0x8D71
#define GL_RGBA16UI                       0x8D76
#define GL_RGB16UI                        0x8D77
#define GL_RGBA8UI                        0x8D7C
#define GL_RGB8UI                         0x8D7D
#define GL_RGBA32I                        0x8D82
#define GL_RGB32I                         0x8D83
#define GL_RGBA16I                        0x8D88
#define GL_RGB16I                         0x8D89
#define GL_RGBA8I                         0x8D8E
#define GL_RGB8I                          0x8D8F
#define GL_RED_INTEGER                    0x8D94
#define GL_GREEN_INTEGER                  0x8D95
#define GL_BLUE_INTEGER                   0x8D96
#define GL_RGB_INTEGER                    0x8D98
#define GL_RGBA_INTEGER                   0x8D99
#define GL_BGR_INTEGER                    0x8D9A
#define GL_BGRA_INTEGER                   0x8D9B
#define GL_SAMPLER_1D_ARRAY               0x8DC0
#define GL_SAMPLER_2D_ARRAY               0x8DC1
#define GL_SAMPLER_1D_ARRAY_SHADOW        0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW        0x8DC4
#define GL_SAMPLER_CUBE_SHADOW            0x8DC5
#define GL_UNSIGNED_INT_VEC2              0x8DC6
#define GL_UNSIGNED_INT_VEC3              0x8DC7
#define GL_UNSIGNED_INT_VEC4              0x8DC8
#define GL_INT_SAMPLER_1D                 0x8DC9
#define GL_INT_SAMPLER_2D                 0x8DCA
#define GL_INT_SAMPLER_3D                 0x8DCB
#define GL_INT_SAMPLER_CUBE               0x8DCC
#define GL_INT_SAMPLER_1D_ARRAY           0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY           0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_1D        0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D        0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D        0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE      0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY  0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY  0x8DD7
#define GL_QUERY_WAIT                     0x8E13
#define GL_QUERY_NO_WAIT                  0x8E14
#define GL_QUERY_BY_REGION_WAIT           0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT        0x8E16
#define GL_BUFFER_ACCESS_FLAGS            0x911F
#define GL_BUFFER_MAP_LENGTH              0x9120
#define GL_BUFFER_MAP_OFFSET              0x9121
#define GL_DEPTH_COMPONENT32F             0x8CAC
#define GL_DEPTH32F_STENCIL8              0x8CAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
#define GL_INVALID_FRAMEBUFFER_OPERATION  0x0506
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
#define GL_FRAMEBUFFER_DEFAULT            0x8218
#define GL_FRAMEBUFFER_UNDEFINED          0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT       0x821A
#define GL_MAX_RENDERBUFFER_SIZE          0x84E8
#define GL_DEPTH_STENCIL                  0x84F9
#define GL_UNSIGNED_INT_24_8              0x84FA
#define GL_DEPTH24_STENCIL8               0x88F0
#define GL_TEXTURE_STENCIL_SIZE           0x88F1
#define GL_TEXTURE_RED_TYPE               0x8C10
#define GL_TEXTURE_GREEN_TYPE             0x8C11
#define GL_TEXTURE_BLUE_TYPE              0x8C12
#define GL_TEXTURE_ALPHA_TYPE             0x8C13
#define GL_TEXTURE_DEPTH_TYPE             0x8C16
#define GL_UNSIGNED_NORMALIZED            0x8C17
#define GL_FRAMEBUFFER_BINDING            0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING       0x8CA6
#define GL_RENDERBUFFER_BINDING           0x8CA7
#define GL_READ_FRAMEBUFFER               0x8CA8
#define GL_DRAW_FRAMEBUFFER               0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING       0x8CAA
#define GL_RENDERBUFFER_SAMPLES           0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#define GL_FRAMEBUFFER_COMPLETE           0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED        0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS          0x8CDF
#define GL_COLOR_ATTACHMENT0              0x8CE0
#define GL_COLOR_ATTACHMENT1              0x8CE1
#define GL_COLOR_ATTACHMENT2              0x8CE2
#define GL_COLOR_ATTACHMENT3              0x8CE3
#define GL_COLOR_ATTACHMENT4              0x8CE4
#define GL_COLOR_ATTACHMENT5              0x8CE5
#define GL_COLOR_ATTACHMENT6              0x8CE6
#define GL_COLOR_ATTACHMENT7              0x8CE7
#define GL_COLOR_ATTACHMENT8              0x8CE8
#define GL_COLOR_ATTACHMENT9              0x8CE9
#define GL_COLOR_ATTACHMENT10             0x8CEA
#define GL_COLOR_ATTACHMENT11             0x8CEB
#define GL_COLOR_ATTACHMENT12             0x8CEC
#define GL_COLOR_ATTACHMENT13             0x8CED
#define GL_COLOR_ATTACHMENT14             0x8CEE
#define GL_COLOR_ATTACHMENT15             0x8CEF
#define GL_COLOR_ATTACHMENT16             0x8CF0
#define GL_COLOR_ATTACHMENT17             0x8CF1
#define GL_COLOR_ATTACHMENT18             0x8CF2
#define GL_COLOR_ATTACHMENT19             0x8CF3
#define GL_COLOR_ATTACHMENT20             0x8CF4
#define GL_COLOR_ATTACHMENT21             0x8CF5
#define GL_COLOR_ATTACHMENT22             0x8CF6
#define GL_COLOR_ATTACHMENT23             0x8CF7
#define GL_COLOR_ATTACHMENT24             0x8CF8
#define GL_COLOR_ATTACHMENT25             0x8CF9
#define GL_COLOR_ATTACHMENT26             0x8CFA
#define GL_COLOR_ATTACHMENT27             0x8CFB
#define GL_COLOR_ATTACHMENT28             0x8CFC
#define GL_COLOR_ATTACHMENT29             0x8CFD
#define GL_COLOR_ATTACHMENT30             0x8CFE
#define GL_COLOR_ATTACHMENT31             0x8CFF
#define GL_DEPTH_ATTACHMENT               0x8D00
#define GL_STENCIL_ATTACHMENT             0x8D20
#define GL_FRAMEBUFFER                    0x8D40
#define GL_RENDERBUFFER                   0x8D41
#define GL_RENDERBUFFER_WIDTH             0x8D42
#define GL_RENDERBUFFER_HEIGHT            0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT   0x8D44
#define GL_STENCIL_INDEX1                 0x8D46
#define GL_STENCIL_INDEX4                 0x8D47
#define GL_STENCIL_INDEX8                 0x8D48
#define GL_STENCIL_INDEX16                0x8D49
#define GL_RENDERBUFFER_RED_SIZE          0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE        0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE         0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE        0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE        0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE      0x8D55
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#define GL_MAX_SAMPLES                    0x8D57
#define GL_FRAMEBUFFER_SRGB               0x8DB9
#define GL_HALF_FLOAT                     0x140B
#define GL_MAP_READ_BIT                   0x0001
#define GL_MAP_WRITE_BIT                  0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT       0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT      0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT         0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT         0x0020
#define GL_COMPRESSED_RED_RGTC1           0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1    0x8DBC
#define GL_COMPRESSED_RG_RGTC2            0x8DBD
#define GL_COMPRESSED_SIGNED_RG_RGTC2     0x8DBE
#define GL_RG                             0x8227
#define GL_RG_INTEGER                     0x8228
#define GL_R8                             0x8229
#define GL_R16                            0x822A
#define GL_RG8                            0x822B
#define GL_RG16                           0x822C
#define GL_R16F                           0x822D
#define GL_R32F                           0x822E
#define GL_RG16F                          0x822F
#define GL_RG32F                          0x8230
#define GL_R8I                            0x8231
#define GL_R8UI                           0x8232
#define GL_R16I                           0x8233
#define GL_R16UI                          0x8234
#define GL_R32I                           0x8235
#define GL_R32UI                          0x8236
#define GL_RG8I                           0x8237
#define GL_RG8UI                          0x8238
#define GL_RG16I                          0x8239
#define GL_RG16UI                         0x823A
#define GL_RG32I                          0x823B
#define GL_RG32UI                         0x823C
#define GL_VERTEX_ARRAY_BINDING           0x85B5
GLAPI void (APIENTRYFP glColorMaski)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
GLAPI void (APIENTRYFP glGetBooleani_v)(GLenum target, GLuint index, GLboolean *data);
GLAPI void (APIENTRYFP glGetIntegeri_v)(GLenum target, GLuint index, GLint *data);
GLAPI void (APIENTRYFP glEnablei)(GLenum target, GLuint index);
GLAPI void (APIENTRYFP glDisablei)(GLenum target, GLuint index);
GLAPI GLboolean (APIENTRYFP glIsEnabledi)(GLenum target, GLuint index);
GLAPI void (APIENTRYFP glBeginTransformFeedback)(GLenum primitiveMode);
GLAPI void (APIENTRYFP glEndTransformFeedback)(void);
GLAPI void (APIENTRYFP glBindBufferRange)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLAPI void (APIENTRYFP glBindBufferBase)(GLenum target, GLuint index, GLuint buffer);
GLAPI void (APIENTRYFP glTransformFeedbackVaryings)(GLuint program, GLsizei count, const GLchar *const *varyings,
                                                    GLenum bufferMode);
GLAPI void (APIENTRYFP glGetTransformFeedbackVarying)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length,
                                                      GLsizei *size, GLenum *type, GLchar *name);
GLAPI void (APIENTRYFP glClampColor)(GLenum target, GLenum clamp);
GLAPI void (APIENTRYFP glBeginConditionalRender)(GLuint id, GLenum mode);
GLAPI void (APIENTRYFP glEndConditionalRender)(void);
GLAPI void
(APIENTRYFP glVertexAttribIPointer)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
GLAPI void (APIENTRYFP glGetVertexAttribIiv)(GLuint index, GLenum pname, GLint *params);
GLAPI void (APIENTRYFP glGetVertexAttribIuiv)(GLuint index, GLenum pname, GLuint *params);
GLAPI void (APIENTRYFP glVertexAttribI1i)(GLuint index, GLint x);
GLAPI void (APIENTRYFP glVertexAttribI2i)(GLuint index, GLint x, GLint y);
GLAPI void (APIENTRYFP glVertexAttribI3i)(GLuint index, GLint x, GLint y, GLint z);
GLAPI void (APIENTRYFP glVertexAttribI4i)(GLuint index, GLint x, GLint y, GLint z, GLint w);
GLAPI void (APIENTRYFP glVertexAttribI1ui)(GLuint index, GLuint x);
GLAPI void (APIENTRYFP glVertexAttribI2ui)(GLuint index, GLuint x, GLuint y);
GLAPI void (APIENTRYFP glVertexAttribI3ui)(GLuint index, GLuint x, GLuint y, GLuint z);
GLAPI void (APIENTRYFP glVertexAttribI4ui)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
GLAPI void (APIENTRYFP glVertexAttribI1iv)(GLuint index, const GLint *v);
GLAPI void (APIENTRYFP glVertexAttribI2iv)(GLuint index, const GLint *v);
GLAPI void (APIENTRYFP glVertexAttribI3iv)(GLuint index, const GLint *v);
GLAPI void (APIENTRYFP glVertexAttribI4iv)(GLuint index, const GLint *v);
GLAPI void (APIENTRYFP glVertexAttribI1uiv)(GLuint index, const GLuint *v);
GLAPI void (APIENTRYFP glVertexAttribI2uiv)(GLuint index, const GLuint *v);
GLAPI void (APIENTRYFP glVertexAttribI3uiv)(GLuint index, const GLuint *v);
GLAPI void (APIENTRYFP glVertexAttribI4uiv)(GLuint index, const GLuint *v);
GLAPI void (APIENTRYFP glVertexAttribI4bv)(GLuint index, const GLbyte *v);
GLAPI void (APIENTRYFP glVertexAttribI4sv)(GLuint index, const GLshort *v);
GLAPI void (APIENTRYFP glVertexAttribI4ubv)(GLuint index, const GLubyte *v);
GLAPI void (APIENTRYFP glVertexAttribI4usv)(GLuint index, const GLushort *v);
GLAPI void (APIENTRYFP glGetUniformuiv)(GLuint program, GLint location, GLuint *params);
GLAPI void (APIENTRYFP glBindFragDataLocation)(GLuint program, GLuint color, const GLchar *name);
GLAPI GLint (APIENTRYFP glGetFragDataLocation)(GLuint program, const GLchar *name);
GLAPI void (APIENTRYFP glUniform1ui)(GLint location, GLuint v0);
GLAPI void (APIENTRYFP glUniform2ui)(GLint location, GLuint v0, GLuint v1);
GLAPI void (APIENTRYFP glUniform3ui)(GLint location, GLuint v0, GLuint v1, GLuint v2);
GLAPI void (APIENTRYFP glUniform4ui)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
GLAPI void (APIENTRYFP glUniform1uiv)(GLint location, GLsizei count, const GLuint *value);
GLAPI void (APIENTRYFP glUniform2uiv)(GLint location, GLsizei count, const GLuint *value);
GLAPI void (APIENTRYFP glUniform3uiv)(GLint location, GLsizei count, const GLuint *value);
GLAPI void (APIENTRYFP glUniform4uiv)(GLint location, GLsizei count, const GLuint *value);
GLAPI void (APIENTRYFP glTexParameterIiv)(GLenum target, GLenum pname, const GLint *params);
GLAPI void (APIENTRYFP glTexParameterIuiv)(GLenum target, GLenum pname, const GLuint *params);
GLAPI void (APIENTRYFP glGetTexParameterIiv)(GLenum target, GLenum pname, GLint *params);
GLAPI void (APIENTRYFP glGetTexParameterIuiv)(GLenum target, GLenum pname, GLuint *params);
GLAPI void (APIENTRYFP glClearBufferiv)(GLenum buffer, GLint drawbuffer, const GLint *value);
GLAPI void (APIENTRYFP glClearBufferuiv)(GLenum buffer, GLint drawbuffer, const GLuint *value);
GLAPI void (APIENTRYFP glClearBufferfv)(GLenum buffer, GLint drawbuffer, const GLfloat *value);
GLAPI void (APIENTRYFP glClearBufferfi)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
GLAPI const GLubyte *(APIENTRYFP glGetStringi)(GLenum name, GLuint index);
GLAPI GLboolean (APIENTRYFP glIsRenderbuffer)(GLuint renderbuffer);
GLAPI void (APIENTRYFP glBindRenderbuffer)(GLenum target, GLuint renderbuffer);
GLAPI void (APIENTRYFP glDeleteRenderbuffers)(GLsizei n, const GLuint *renderbuffers);
GLAPI void (APIENTRYFP glGenRenderbuffers)(GLsizei n, GLuint *renderbuffers);
GLAPI void (APIENTRYFP glRenderbufferStorage)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void (APIENTRYFP glGetRenderbufferParameteriv)(GLenum target, GLenum pname, GLint *params);
GLAPI GLboolean (APIENTRYFP glIsFramebuffer)(GLuint framebuffer);
GLAPI void (APIENTRYFP glBindFramebuffer)(GLenum target, GLuint framebuffer);
GLAPI void (APIENTRYFP glDeleteFramebuffers)(GLsizei n, const GLuint *framebuffers);
GLAPI void (APIENTRYFP glGenFramebuffers)(GLsizei n, GLuint *framebuffers);
GLAPI GLenum (APIENTRYFP glCheckFramebufferStatus)(GLenum target);
GLAPI void
(APIENTRYFP glFramebufferTexture1D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLAPI void
(APIENTRYFP glFramebufferTexture2D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLAPI void
(APIENTRYFP glFramebufferTexture3D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level,
                                    GLint zoffset);
GLAPI void (APIENTRYFP glFramebufferRenderbuffer)(GLenum target, GLenum attachment, GLenum renderbuffertarget,
                                                  GLuint renderbuffer);
GLAPI void
(APIENTRYFP glGetFramebufferAttachmentParameteriv)(GLenum target, GLenum attachment, GLenum pname, GLint *params);
GLAPI void (APIENTRYFP glGenerateMipmap)(GLenum target);
GLAPI void (APIENTRYFP glBlitFramebuffer)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0,
                                          GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLAPI void
(APIENTRYFP glRenderbufferStorageMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width,
                                              GLsizei height);
GLAPI void
(APIENTRYFP glFramebufferTextureLayer)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
GLAPI void *(APIENTRYFP glMapBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
GLAPI void (APIENTRYFP glFlushMappedBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length);
GLAPI void (APIENTRYFP glBindVertexArray)(GLuint array);
GLAPI void (APIENTRYFP glDeleteVertexArrays)(GLsizei n, const GLuint *arrays);
GLAPI void (APIENTRYFP glGenVertexArrays)(GLsizei n, GLuint *arrays);
GLAPI GLboolean (APIENTRYFP glIsVertexArray)(GLuint array);

// from GL_VERSION_3_1:
#define GL_SAMPLER_2D_RECT                0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW         0x8B64
#define GL_SAMPLER_BUFFER                 0x8DC2
#define GL_INT_SAMPLER_2D_RECT            0x8DCD
#define GL_INT_SAMPLER_BUFFER             0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT   0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_BUFFER    0x8DD8
#define GL_TEXTURE_BUFFER                 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE        0x8C2B
#define GL_TEXTURE_BINDING_BUFFER         0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
#define GL_TEXTURE_RECTANGLE              0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE      0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE        0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE     0x84F8
#define GL_R8_SNORM                       0x8F94
#define GL_RG8_SNORM                      0x8F95
#define GL_RGB8_SNORM                     0x8F96
#define GL_RGBA8_SNORM                    0x8F97
#define GL_R16_SNORM                      0x8F98
#define GL_RG16_SNORM                     0x8F99
#define GL_RGB16_SNORM                    0x8F9A
#define GL_RGBA16_SNORM                   0x8F9B
#define GL_SIGNED_NORMALIZED              0x8F9C
#define GL_PRIMITIVE_RESTART              0x8F9D
#define GL_PRIMITIVE_RESTART_INDEX        0x8F9E
#define GL_COPY_READ_BUFFER               0x8F36
#define GL_COPY_WRITE_BUFFER              0x8F37
#define GL_UNIFORM_BUFFER                 0x8A11
#define GL_UNIFORM_BUFFER_BINDING         0x8A28
#define GL_UNIFORM_BUFFER_START           0x8A29
#define GL_UNIFORM_BUFFER_SIZE            0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS      0x8A2B
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS    0x8A2C
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS    0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS    0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS    0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE         0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS          0x8A36
#define GL_UNIFORM_TYPE                   0x8A37
#define GL_UNIFORM_SIZE                   0x8A38
#define GL_UNIFORM_NAME_LENGTH            0x8A39
#define GL_UNIFORM_BLOCK_INDEX            0x8A3A
#define GL_UNIFORM_OFFSET                 0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE           0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE          0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR           0x8A3E
#define GL_UNIFORM_BLOCK_BINDING          0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE        0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH      0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS  0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#define GL_INVALID_INDEX                  0xFFFFFFFFu
GLAPI void (APIENTRYFP glDrawArraysInstanced)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
GLAPI void (APIENTRYFP glDrawElementsInstanced)(GLenum mode, GLsizei count, GLenum type, const void *indices,
                                                GLsizei instancecount);
GLAPI void (APIENTRYFP glTexBuffer)(GLenum target, GLenum internalformat, GLuint buffer);
GLAPI void (APIENTRYFP glPrimitiveRestartIndex)(GLuint index);
GLAPI void
(APIENTRYFP glCopyBufferSubData)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset,
                                 GLsizeiptr size);
GLAPI void (APIENTRYFP glGetUniformIndices)(GLuint program, GLsizei uniformCount, const GLchar *const *uniformNames,
                                            GLuint *uniformIndices);
GLAPI void
(APIENTRYFP glGetActiveUniformsiv)(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname,
                                   GLint *params);
GLAPI void (APIENTRYFP glGetActiveUniformName)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length,
                                               GLchar *uniformName);
GLAPI GLuint (APIENTRYFP glGetUniformBlockIndex)(GLuint program, const GLchar *uniformBlockName);
GLAPI void
(APIENTRYFP glGetActiveUniformBlockiv)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
GLAPI void
(APIENTRYFP glGetActiveUniformBlockName)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length,
                                         GLchar *uniformBlockName);
GLAPI void (APIENTRYFP glUniformBlockBinding)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);

// from GL_VERSION_3_2:
typedef struct __GLsync *GLsync;
typedef uint64_t GLuint64;
typedef int64_t GLint64;
#define GL_CONTEXT_CORE_PROFILE_BIT       0x00000001
#define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT 0x00000002
#define GL_LINES_ADJACENCY                0x000A
#define GL_LINE_STRIP_ADJACENCY           0x000B
#define GL_TRIANGLES_ADJACENCY            0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY       0x000D
#define GL_PROGRAM_POINT_SIZE             0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS 0x8DA8
#define GL_GEOMETRY_SHADER                0x8DD9
#define GL_GEOMETRY_VERTICES_OUT          0x8916
#define GL_GEOMETRY_INPUT_TYPE            0x8917
#define GL_GEOMETRY_OUTPUT_TYPE           0x8918
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES   0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS 0x8DE1
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS   0x9122
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS  0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS 0x9124
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS  0x9125
#define GL_CONTEXT_PROFILE_MASK           0x9126
#define GL_DEPTH_CLAMP                    0x864F
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION        0x8E4D
#define GL_LAST_VERTEX_CONVENTION         0x8E4E
#define GL_PROVOKING_VERTEX               0x8E4F
#define GL_TEXTURE_CUBE_MAP_SEAMLESS      0x884F
#define GL_MAX_SERVER_WAIT_TIMEOUT        0x9111
#define GL_OBJECT_TYPE                    0x9112
#define GL_SYNC_CONDITION                 0x9113
#define GL_SYNC_STATUS                    0x9114
#define GL_SYNC_FLAGS                     0x9115
#define GL_SYNC_FENCE                     0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE     0x9117
#define GL_UNSIGNALED                     0x9118
#define GL_SIGNALED                       0x9119
#define GL_ALREADY_SIGNALED               0x911A
#define GL_TIMEOUT_EXPIRED                0x911B
#define GL_CONDITION_SATISFIED            0x911C
#define GL_WAIT_FAILED                    0x911D
#define GL_TIMEOUT_IGNORED                0xFFFFFFFFFFFFFFFFull
#define GL_SYNC_FLUSH_COMMANDS_BIT        0x00000001
#define GL_SAMPLE_POSITION                0x8E50
#define GL_SAMPLE_MASK                    0x8E51
#define GL_SAMPLE_MASK_VALUE              0x8E52
#define GL_MAX_SAMPLE_MASK_WORDS          0x8E59
#define GL_TEXTURE_2D_MULTISAMPLE         0x9100
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE   0x9101
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY   0x9102
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9103
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
#define GL_TEXTURE_SAMPLES                0x9106
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
#define GL_SAMPLER_2D_MULTISAMPLE         0x9108
#define GL_INT_SAMPLER_2D_MULTISAMPLE     0x9109
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY   0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D
#define GL_MAX_COLOR_TEXTURE_SAMPLES      0x910E
#define GL_MAX_DEPTH_TEXTURE_SAMPLES      0x910F
#define GL_MAX_INTEGER_SAMPLES            0x9110
GLAPI void
(APIENTRYFP glDrawElementsBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
GLAPI void (APIENTRYFP glDrawRangeElementsBaseVertex)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type,
                                                      const void *indices, GLint basevertex);
GLAPI void (APIENTRYFP glDrawElementsInstancedBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void *indices,
                                                          GLsizei instancecount, GLint basevertex);
GLAPI void
(APIENTRYFP glMultiDrawElementsBaseVertex)(GLenum mode, const GLsizei *count, GLenum type, const void *const *indices,
                                           GLsizei drawcount, const GLint *basevertex);
GLAPI void (APIENTRYFP glProvokingVertex)(GLenum mode);
GLAPI GLsync (APIENTRYFP glFenceSync)(GLenum condition, GLbitfield flags);
GLAPI GLboolean (APIENTRYFP glIsSync)(GLsync sync);
GLAPI void (APIENTRYFP glDeleteSync)(GLsync sync);
GLAPI GLenum (APIENTRYFP glClientWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout);
GLAPI void (APIENTRYFP glWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout);
GLAPI void (APIENTRYFP glGetInteger64v)(GLenum pname, GLint64 *data);
GLAPI void (APIENTRYFP glGetSynciv)(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
GLAPI void (APIENTRYFP glGetInteger64i_v)(GLenum target, GLuint index, GLint64 *data);
GLAPI void (APIENTRYFP glGetBufferParameteri64v)(GLenum target, GLenum pname, GLint64 *params);
GLAPI void (APIENTRYFP glFramebufferTexture)(GLenum target, GLenum attachment, GLuint texture, GLint level);
GLAPI void (APIENTRYFP glTexImage2DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width,
                                                GLsizei height, GLboolean fixedsamplelocations);
GLAPI void (APIENTRYFP glTexImage3DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width,
                                                GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
GLAPI void (APIENTRYFP glGetMultisamplefv)(GLenum pname, GLuint index, GLfloat *val);
GLAPI void (APIENTRYFP glSampleMaski)(GLuint maskNumber, GLbitfield mask);

// from GL_VERSION_3_3:
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR    0x88FE
#define GL_SRC1_COLOR                     0x88F9
#define GL_ONE_MINUS_SRC1_COLOR           0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA           0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS   0x88FC
#define GL_ANY_SAMPLES_PASSED             0x8C2F
#define GL_SAMPLER_BINDING                0x8919
#define GL_RGB10_A2UI                     0x906F
#define GL_TEXTURE_SWIZZLE_R              0x8E42
#define GL_TEXTURE_SWIZZLE_G              0x8E43
#define GL_TEXTURE_SWIZZLE_B              0x8E44
#define GL_TEXTURE_SWIZZLE_A              0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA           0x8E46
#define GL_TIME_ELAPSED                   0x88BF
#define GL_TIMESTAMP                      0x8E28
#define GL_INT_2_10_10_10_REV             0x8D9F
GLAPI void
(APIENTRYFP glBindFragDataLocationIndexed)(GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
GLAPI GLint (APIENTRYFP glGetFragDataIndex)(GLuint program, const GLchar *name);
GLAPI void (APIENTRYFP glGenSamplers)(GLsizei count, GLuint *samplers);
GLAPI void (APIENTRYFP glDeleteSamplers)(GLsizei count, const GLuint *samplers);
GLAPI GLboolean (APIENTRYFP glIsSampler)(GLuint sampler);
GLAPI void (APIENTRYFP glBindSampler)(GLuint unit, GLuint sampler);
GLAPI void (APIENTRYFP glSamplerParameteri)(GLuint sampler, GLenum pname, GLint param);
GLAPI void (APIENTRYFP glSamplerParameteriv)(GLuint sampler, GLenum pname, const GLint *param);
GLAPI void (APIENTRYFP glSamplerParameterf)(GLuint sampler, GLenum pname, GLfloat param);
GLAPI void (APIENTRYFP glSamplerParameterfv)(GLuint sampler, GLenum pname, const GLfloat *param);
GLAPI void (APIENTRYFP glSamplerParameterIiv)(GLuint sampler, GLenum pname, const GLint *param);
GLAPI void (APIENTRYFP glSamplerParameterIuiv)(GLuint sampler, GLenum pname, const GLuint *param);
GLAPI void (APIENTRYFP glGetSamplerParameteriv)(GLuint sampler, GLenum pname, GLint *params);
GLAPI void (APIENTRYFP glGetSamplerParameterIiv)(GLuint sampler, GLenum pname, GLint *params);
GLAPI void (APIENTRYFP glGetSamplerParameterfv)(GLuint sampler, GLenum pname, GLfloat *params);
GLAPI void (APIENTRYFP glGetSamplerParameterIuiv)(GLuint sampler, GLenum pname, GLuint *params);
GLAPI void (APIENTRYFP glQueryCounter)(GLuint id, GLenum target);
GLAPI void (APIENTRYFP glGetQueryObjecti64v)(GLuint id, GLenum pname, GLint64 *params);
GLAPI void (APIENTRYFP glGetQueryObjectui64v)(GLuint id, GLenum pname, GLuint64 *params);
GLAPI void (APIENTRYFP glVertexAttribDivisor)(GLuint index, GLuint divisor);
GLAPI void (APIENTRYFP glVertexAttribP1ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLAPI void (APIENTRYFP glVertexAttribP1uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
GLAPI void (APIENTRYFP glVertexAttribP2ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLAPI void (APIENTRYFP glVertexAttribP2uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
GLAPI void (APIENTRYFP glVertexAttribP3ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLAPI void (APIENTRYFP glVertexAttribP3uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
GLAPI void (APIENTRYFP glVertexAttribP4ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLAPI void (APIENTRYFP glVertexAttribP4uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);

}
