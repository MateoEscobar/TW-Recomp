#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100408
// Address: 0x100408 - 0x100a80
void sub_00100408_0x100408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100408_0x100408");
#endif

    ctx->pc = 0x100408u;

    // 0x100408: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x100408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x10040c: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x10040cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x100410: 0x3c013def  lui         $at, 0x3DEF
    ctx->pc = 0x100410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15855 << 16));
    // 0x100414: 0x3421f6c0  ori         $at, $at, 0xF6C0
    ctx->pc = 0x100414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63168);
    // 0x100418: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10041c: 0x3c0134b1  lui         $at, 0x34B1
    ctx->pc = 0x10041cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13489 << 16));
    // 0x100420: 0x34212adb  ori         $at, $at, 0x2ADB
    ctx->pc = 0x100420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10971);
    // 0x100424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100428: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x100428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x10042c: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x10042cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
    // 0x100430: 0x3421064a  ori         $at, $at, 0x64A
    ctx->pc = 0x100430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1610);
    // 0x100434: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100438: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x100438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x10043c: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x10043cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x100440: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x100440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
    // 0x100444: 0x34210663  ori         $at, $at, 0x663
    ctx->pc = 0x100444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1635);
    // 0x100448: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10044c: 0xe521000c  swc1        $f1, 0xC($t1)
    ctx->pc = 0x10044cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x100450: 0x3c01bef1  lui         $at, 0xBEF1
    ctx->pc = 0x100450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48881 << 16));
    // 0x100454: 0x3421222e  ori         $at, $at, 0x222E
    ctx->pc = 0x100454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8750);
    // 0x100458: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10045c: 0x3c013ef1  lui         $at, 0x3EF1
    ctx->pc = 0x10045cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16113 << 16));
    // 0x100460: 0x34212212  ori         $at, $at, 0x2212
    ctx->pc = 0x100460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8722);
    // 0x100464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100468: 0xe4820070  swc1        $f2, 0x70($a0)
    ctx->pc = 0x100468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x10046c: 0x3c01b574  lui         $at, 0xB574
    ctx->pc = 0x10046cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46452 << 16));
    // 0x100470: 0x342146b9  ori         $at, $at, 0x46B9
    ctx->pc = 0x100470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18105);
    // 0x100474: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100478: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x100478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x10047c: 0xe5230004  swc1        $f3, 0x4($t1)
    ctx->pc = 0x10047cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x100480: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x100480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x100484: 0x3421b698  ori         $at, $at, 0xB698
    ctx->pc = 0x100484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46744);
    // 0x100488: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10048c: 0xe541000c  swc1        $f1, 0xC($t2)
    ctx->pc = 0x10048cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x100490: 0x3c01358c  lui         $at, 0x358C
    ctx->pc = 0x100490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13708 << 16));
    // 0x100494: 0x3421edba  ori         $at, $at, 0xEDBA
    ctx->pc = 0x100494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60858);
    // 0x100498: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10049c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x10049cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1004a0: 0x34218a5d  ori         $at, $at, 0x8A5D
    ctx->pc = 0x1004a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35421);
    // 0x1004a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1004a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1004a8: 0xe4820080  swc1        $f2, 0x80($a0)
    ctx->pc = 0x1004a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x1004ac: 0x3c013f74  lui         $at, 0x3F74
    ctx->pc = 0x1004acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16244 << 16));
    // 0x1004b0: 0x34215902  ori         $at, $at, 0x5902
    ctx->pc = 0x1004b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22786);
    // 0x1004b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1004b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1004b8: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x1004b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x1004bc: 0xe5430004  swc1        $f3, 0x4($t2)
    ctx->pc = 0x1004bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x1004c0: 0xe561000c  swc1        $f1, 0xC($t3)
    ctx->pc = 0x1004c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x1004c4: 0x3c0132ab  lui         $at, 0x32AB
    ctx->pc = 0x1004c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12971 << 16));
    // 0x1004c8: 0x3421cc77  ori         $at, $at, 0xCC77
    ctx->pc = 0x1004c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52343);
    // 0x1004cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1004ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1004d0: 0x3c01be98  lui         $at, 0xBE98
    ctx->pc = 0x1004d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48792 << 16));
    // 0x1004d4: 0x3421b62a  ori         $at, $at, 0xB62A
    ctx->pc = 0x1004d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46634);
    // 0x1004d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1004d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1004dc: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x1004dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x1004e0: 0x3c013ecf  lui         $at, 0x3ECF
    ctx->pc = 0x1004e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16079 << 16));
    // 0x1004e4: 0x342160c2  ori         $at, $at, 0x60C2
    ctx->pc = 0x1004e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24770);
    // 0x1004e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1004e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1004ec: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x1004ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x1004f0: 0xe5640008  swc1        $f4, 0x8($t3)
    ctx->pc = 0x1004f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x1004f4: 0x3c013f1b  lui         $at, 0x3F1B
    ctx->pc = 0x1004f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16155 << 16));
    // 0x1004f8: 0x3421ab47  ori         $at, $at, 0xAB47
    ctx->pc = 0x1004f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43847);
    // 0x1004fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1004fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100500: 0xe581000c  swc1        $f1, 0xC($t4)
    ctx->pc = 0x100500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x100504: 0x3c01bf13  lui         $at, 0xBF13
    ctx->pc = 0x100504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48915 << 16));
    // 0x100508: 0x3421f6f1  ori         $at, $at, 0xF6F1
    ctx->pc = 0x100508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63217);
    // 0x10050c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10050cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100510: 0x3c013eba  lui         $at, 0x3EBA
    ctx->pc = 0x100510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16058 << 16));
    // 0x100514: 0x3421195c  ori         $at, $at, 0x195C
    ctx->pc = 0x100514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6492);
    // 0x100518: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10051c: 0xe48200a0  swc1        $f2, 0xA0($a0)
    ctx->pc = 0x10051cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x100520: 0x3c013f44  lui         $at, 0x3F44
    ctx->pc = 0x100520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16196 << 16));
    // 0x100524: 0x34212a81  ori         $at, $at, 0x2A81
    ctx->pc = 0x100524u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10881);
    // 0x100528: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10052c: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x10052cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x100530: 0xe5830004  swc1        $f3, 0x4($t4)
    ctx->pc = 0x100530u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x100534: 0xe5a1000c  swc1        $f1, 0xC($t5)
    ctx->pc = 0x100534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
    // 0x100538: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x100538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x10053c: 0x34217bd4  ori         $at, $at, 0x7BD4
    ctx->pc = 0x10053cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31700);
    // 0x100540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100544: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x100544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x100548: 0x3c013f1b  lui         $at, 0x3F1B
    ctx->pc = 0x100548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16155 << 16));
    // 0x10054c: 0x3421c70c  ori         $at, $at, 0xC70C
    ctx->pc = 0x10054cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50956);
    // 0x100550: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100554: 0xe5a40008  swc1        $f4, 0x8($t5)
    ctx->pc = 0x100554u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x100558: 0xe5a00004  swc1        $f0, 0x4($t5)
    ctx->pc = 0x100558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x10055c: 0x3c013ece  lui         $at, 0x3ECE
    ctx->pc = 0x10055cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16078 << 16));
    // 0x100560: 0x3421fc36  ori         $at, $at, 0xFC36
    ctx->pc = 0x100560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64566);
    // 0x100564: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100568: 0xe5c1000c  swc1        $f1, 0xC($t6)
    ctx->pc = 0x100568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
    // 0x10056c: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x10056cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
    // 0x100570: 0x3421844e  ori         $at, $at, 0x844E
    ctx->pc = 0x100570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33870);
    // 0x100574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100578: 0xe48200c0  swc1        $f2, 0xC0($a0)
    ctx->pc = 0x100578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x10057c: 0x3c01beb8  lui         $at, 0xBEB8
    ctx->pc = 0x10057cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48824 << 16));
    // 0x100580: 0x342167f8  ori         $at, $at, 0x67F8
    ctx->pc = 0x100580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26616);
    // 0x100584: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100588: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x100588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x10058c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x10058cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x100590: 0x3421893a  ori         $at, $at, 0x893A
    ctx->pc = 0x100590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35130);
    // 0x100594: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100598: 0xe5c30004  swc1        $f3, 0x4($t6)
    ctx->pc = 0x100598u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x10059c: 0x3c01bb69  lui         $at, 0xBB69
    ctx->pc = 0x10059cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47977 << 16));
    // 0x1005a0: 0x3421fde0  ori         $at, $at, 0xFDE0
    ctx->pc = 0x1005a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64992);
    // 0x1005a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1005a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1005a8: 0xe5e1000c  swc1        $f1, 0xC($t7)
    ctx->pc = 0x1005a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x1005ac: 0x3c01bf1d  lui         $at, 0xBF1D
    ctx->pc = 0x1005acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48925 << 16));
    // 0x1005b0: 0x3421d97b  ori         $at, $at, 0xD97B
    ctx->pc = 0x1005b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55675);
    // 0x1005b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1005b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1005b8: 0x3c013bb1  lui         $at, 0x3BB1
    ctx->pc = 0x1005b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15281 << 16));
    // 0x1005bc: 0x342138dd  ori         $at, $at, 0x38DD
    ctx->pc = 0x1005bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14557);
    // 0x1005c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1005c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1005c4: 0xe48200d0  swc1        $f2, 0xD0($a0)
    ctx->pc = 0x1005c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x1005c8: 0x3c01b5cc  lui         $at, 0xB5CC
    ctx->pc = 0x1005c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46540 << 16));
    // 0x1005cc: 0x342102cd  ori         $at, $at, 0x2CD
    ctx->pc = 0x1005ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)717);
    // 0x1005d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1005d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1005d4: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x1005d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x1005d8: 0xe5e30004  swc1        $f3, 0x4($t7)
    ctx->pc = 0x1005d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x1005dc: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x1005dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
    // 0x1005e0: 0x3421450a  ori         $at, $at, 0x450A
    ctx->pc = 0x1005e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17674);
    // 0x1005e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1005e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1005e8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x1005e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1005ec: 0x3c01b513  lui         $at, 0xB513
    ctx->pc = 0x1005ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46355 << 16));
    // 0x1005f0: 0x3421a3b6  ori         $at, $at, 0xA3B6
    ctx->pc = 0x1005f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41910);
    // 0x1005f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1005f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1005f8: 0x3c013f2c  lui         $at, 0x3F2C
    ctx->pc = 0x1005f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16172 << 16));
    // 0x1005fc: 0x34215fe2  ori         $at, $at, 0x5FE2
    ctx->pc = 0x1005fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24546);
    // 0x100600: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100604: 0xe48200e0  swc1        $f2, 0xE0($a0)
    ctx->pc = 0x100604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x100608: 0x3c013f04  lui         $at, 0x3F04
    ctx->pc = 0x100608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16132 << 16));
    // 0x10060c: 0x3421c0cb  ori         $at, $at, 0xC0CB
    ctx->pc = 0x10060cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49355);
    // 0x100610: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100614: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x100614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x100618: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x100618u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x10061c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x10061cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x100620: 0x34215105  ori         $at, $at, 0x5105
    ctx->pc = 0x100620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20741);
    // 0x100624: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100628: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x100628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10062c: 0x3c013ef2  lui         $at, 0x3EF2
    ctx->pc = 0x10062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16114 << 16));
    // 0x100630: 0x3421d3db  ori         $at, $at, 0xD3DB
    ctx->pc = 0x100630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54235);
    // 0x100634: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100638: 0xe48200f0  swc1        $f2, 0xF0($a0)
    ctx->pc = 0x100638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
    // 0x10063c: 0x3c01bef6  lui         $at, 0xBEF6
    ctx->pc = 0x10063cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48886 << 16));
    // 0x100640: 0x342102e6  ori         $at, $at, 0x2E6
    ctx->pc = 0x100640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)742);
    // 0x100644: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x100644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x100648: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x100648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x10064c: 0x3c013dfb  lui         $at, 0x3DFB
    ctx->pc = 0x10064cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15867 << 16));
    // 0x100650: 0x34214394  ori         $at, $at, 0x4394
    ctx->pc = 0x100650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17300);
    // 0x100654: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100658: 0xe6040004  swc1        $f4, 0x4($s0)
    ctx->pc = 0x100658u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x10065c: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x10065cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
    // 0x100660: 0x3421b65c  ori         $at, $at, 0xB65C
    ctx->pc = 0x100660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46684);
    // 0x100664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100668: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x100668u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x10066c: 0x3c01bf43  lui         $at, 0xBF43
    ctx->pc = 0x10066cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48963 << 16));
    // 0x100670: 0x3421aa94  ori         $at, $at, 0xAA94
    ctx->pc = 0x100670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43668);
    // 0x100674: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100678: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x100678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x10067c: 0x3c01be03  lui         $at, 0xBE03
    ctx->pc = 0x10067cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48643 << 16));
    // 0x100680: 0x3421203d  ori         $at, $at, 0x203D
    ctx->pc = 0x100680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8253);
    // 0x100684: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100688: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x100688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x10068c: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x10068cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x100690: 0x34210c1c  ori         $at, $at, 0xC1C
    ctx->pc = 0x100690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3100);
    // 0x100694: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x100694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x100698: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x100698u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x10069c: 0x3c013d39  lui         $at, 0x3D39
    ctx->pc = 0x10069cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15673 << 16));
    // 0x1006a0: 0x34211d3d  ori         $at, $at, 0x1D3D
    ctx->pc = 0x1006a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7485);
    // 0x1006a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1006a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1006a8: 0xe649000c  swc1        $f9, 0xC($s2)
    ctx->pc = 0x1006a8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1006ac: 0x3c01bce7  lui         $at, 0xBCE7
    ctx->pc = 0x1006acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48359 << 16));
    // 0x1006b0: 0x3421449d  ori         $at, $at, 0x449D
    ctx->pc = 0x1006b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17565);
    // 0x1006b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1006b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1006b8: 0x3c013de3  lui         $at, 0x3DE3
    ctx->pc = 0x1006b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15843 << 16));
    // 0x1006bc: 0x3421aae2  ori         $at, $at, 0xAAE2
    ctx->pc = 0x1006bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43746);
    // 0x1006c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1006c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1006c4: 0xe4810110  swc1        $f1, 0x110($a0)
    ctx->pc = 0x1006c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x1006c8: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x1006c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x1006cc: 0x34213a6d  ori         $at, $at, 0x3A6D
    ctx->pc = 0x1006ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14957);
    // 0x1006d0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1006d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1006d4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1006d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1006d8: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1006d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1006dc: 0xe667000c  swc1        $f7, 0xC($s3)
    ctx->pc = 0x1006dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1006e0: 0x3c013df0  lui         $at, 0x3DF0
    ctx->pc = 0x1006e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15856 << 16));
    // 0x1006e4: 0x342188af  ori         $at, $at, 0x88AF
    ctx->pc = 0x1006e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34991);
    // 0x1006e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1006e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1006ec: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x1006ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x1006f0: 0x3421d959  ori         $at, $at, 0xD959
    ctx->pc = 0x1006f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55641);
    // 0x1006f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1006f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1006f8: 0xac800120  sw          $zero, 0x120($a0)
    ctx->pc = 0x1006f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
    // 0x1006fc: 0x3c013f37  lui         $at, 0x3F37
    ctx->pc = 0x1006fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16183 << 16));
    // 0x100700: 0x342159f6  ori         $at, $at, 0x59F6
    ctx->pc = 0x100700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23030);
    // 0x100704: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100708: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x100708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x10070c: 0xe6630004  swc1        $f3, 0x4($s3)
    ctx->pc = 0x10070cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x100710: 0x3c01bf31  lui         $at, 0xBF31
    ctx->pc = 0x100710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48945 << 16));
    // 0x100714: 0x3421f057  ori         $at, $at, 0xF057
    ctx->pc = 0x100714u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61527);
    // 0x100718: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10071c: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x10071cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x100720: 0x3c01bd68  lui         $at, 0xBD68
    ctx->pc = 0x100720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48488 << 16));
    // 0x100724: 0x34216445  ori         $at, $at, 0x6445
    ctx->pc = 0x100724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25669);
    // 0x100728: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x100728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x10072c: 0x3c013cd6  lui         $at, 0x3CD6
    ctx->pc = 0x10072cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15574 << 16));
    // 0x100730: 0x3421d610  ori         $at, $at, 0xD610
    ctx->pc = 0x100730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54800);
    // 0x100734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100738: 0xe4820130  swc1        $f2, 0x130($a0)
    ctx->pc = 0x100738u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 304), bits); }
    // 0x10073c: 0x3c013f75  lui         $at, 0x3F75
    ctx->pc = 0x10073cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16245 << 16));
    // 0x100740: 0x342151c3  ori         $at, $at, 0x51C3
    ctx->pc = 0x100740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20931);
    // 0x100744: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x100744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x100748: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x100748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x10074c: 0xe6880004  swc1        $f8, 0x4($s4)
    ctx->pc = 0x10074cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x100750: 0x3c01b9c8  lui         $at, 0xB9C8
    ctx->pc = 0x100750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47560 << 16));
    // 0x100754: 0x34210568  ori         $at, $at, 0x568
    ctx->pc = 0x100754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1384);
    // 0x100758: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10075c: 0xe6a6000c  swc1        $f6, 0xC($s5)
    ctx->pc = 0x10075cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x100760: 0x3c01be92  lui         $at, 0xBE92
    ctx->pc = 0x100760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48786 << 16));
    // 0x100764: 0x342158f1  ori         $at, $at, 0x58F1
    ctx->pc = 0x100764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22769);
    // 0x100768: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10076c: 0x3c0138ee  lui         $at, 0x38EE
    ctx->pc = 0x10076cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14574 << 16));
    // 0x100770: 0x3421ad47  ori         $at, $at, 0xAD47
    ctx->pc = 0x100770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44359);
    // 0x100774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100778: 0xe4810140  swc1        $f1, 0x140($a0)
    ctx->pc = 0x100778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
    // 0x10077c: 0x3c013f71  lui         $at, 0x3F71
    ctx->pc = 0x10077cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16241 << 16));
    // 0x100780: 0x34217193  ori         $at, $at, 0x7193
    ctx->pc = 0x100780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29075);
    // 0x100784: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x100784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x100788: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x100788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x10078c: 0xe6a20004  swc1        $f2, 0x4($s5)
    ctx->pc = 0x10078cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x100790: 0x3c01bda6  lui         $at, 0xBDA6
    ctx->pc = 0x100790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48550 << 16));
    // 0x100794: 0x34213172  ori         $at, $at, 0x3172
    ctx->pc = 0x100794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12658);
    // 0x100798: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10079c: 0xe6c4000c  swc1        $f4, 0xC($s6)
    ctx->pc = 0x10079cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x1007a0: 0x3c01bea5  lui         $at, 0xBEA5
    ctx->pc = 0x1007a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48805 << 16));
    // 0x1007a4: 0x342107ec  ori         $at, $at, 0x7EC
    ctx->pc = 0x1007a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2028);
    // 0x1007a8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1007a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1007ac: 0x3c01bb45  lui         $at, 0xBB45
    ctx->pc = 0x1007acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47941 << 16));
    // 0x1007b0: 0x3421fe51  ori         $at, $at, 0xFE51
    ctx->pc = 0x1007b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65105);
    // 0x1007b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1007b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1007b8: 0xe4810150  swc1        $f1, 0x150($a0)
    ctx->pc = 0x1007b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x1007bc: 0x3c013dfb  lui         $at, 0x3DFB
    ctx->pc = 0x1007bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15867 << 16));
    // 0x1007c0: 0x34214477  ori         $at, $at, 0x4477
    ctx->pc = 0x1007c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17527);
    // 0x1007c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1007c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1007c8: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x1007c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x1007cc: 0xe6c50004  swc1        $f5, 0x4($s6)
    ctx->pc = 0x1007ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x1007d0: 0x3c01bf1e  lui         $at, 0xBF1E
    ctx->pc = 0x1007d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48926 << 16));
    // 0x1007d4: 0x3421b656  ori         $at, $at, 0xB656
    ctx->pc = 0x1007d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46678);
    // 0x1007d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1007d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1007dc: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1007dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1007e0: 0x3c01bf43  lui         $at, 0xBF43
    ctx->pc = 0x1007e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48963 << 16));
    // 0x1007e4: 0x3421aa9a  ori         $at, $at, 0xAA9A
    ctx->pc = 0x1007e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43674);
    // 0x1007e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1007e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1007ec: 0x3c013e03  lui         $at, 0x3E03
    ctx->pc = 0x1007ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15875 << 16));
    // 0x1007f0: 0x34211fb2  ori         $at, $at, 0x1FB2
    ctx->pc = 0x1007f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8114);
    // 0x1007f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1007f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1007f8: 0xe4810160  swc1        $f1, 0x160($a0)
    ctx->pc = 0x1007f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 352), bits); }
    // 0x1007fc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1007fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x100800: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x100800u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x100804: 0x3c01bd39  lui         $at, 0xBD39
    ctx->pc = 0x100804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48441 << 16));
    // 0x100808: 0x34211d3d  ori         $at, $at, 0x1D3D
    ctx->pc = 0x100808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7485);
    // 0x10080c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10080cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100810: 0xe6e9000c  swc1        $f9, 0xC($s7)
    ctx->pc = 0x100810u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    // 0x100814: 0x3c01bce7  lui         $at, 0xBCE7
    ctx->pc = 0x100814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48359 << 16));
    // 0x100818: 0x34214468  ori         $at, $at, 0x4468
    ctx->pc = 0x100818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17512);
    // 0x10081c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10081cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100820: 0x3c01bde3  lui         $at, 0xBDE3
    ctx->pc = 0x100820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48611 << 16));
    // 0x100824: 0x3421aae4  ori         $at, $at, 0xAAE4
    ctx->pc = 0x100824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43748);
    // 0x100828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10082c: 0xe4810170  swc1        $f1, 0x170($a0)
    ctx->pc = 0x10082cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 368), bits); }
    // 0x100830: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x100830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x100834: 0xe6e20004  swc1        $f2, 0x4($s7)
    ctx->pc = 0x100834u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x100838: 0xe707000c  swc1        $f7, 0xC($t8)
    ctx->pc = 0x100838u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 12), bits); }
    // 0x10083c: 0x3c013df0  lui         $at, 0x3DF0
    ctx->pc = 0x10083cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15856 << 16));
    // 0x100840: 0x342188b3  ori         $at, $at, 0x88B3
    ctx->pc = 0x100840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34995);
    // 0x100844: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100848: 0x3c01b32b  lui         $at, 0xB32B
    ctx->pc = 0x100848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45867 << 16));
    // 0x10084c: 0x3421cc77  ori         $at, $at, 0xCC77
    ctx->pc = 0x10084cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52343);
    // 0x100850: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100854: 0xac800180  sw          $zero, 0x180($a0)
    ctx->pc = 0x100854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 0));
    // 0x100858: 0x3c013f37  lui         $at, 0x3F37
    ctx->pc = 0x100858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16183 << 16));
    // 0x10085c: 0x342159f5  ori         $at, $at, 0x59F5
    ctx->pc = 0x10085cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23029);
    // 0x100860: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100864: 0xe7000008  swc1        $f0, 0x8($t8)
    ctx->pc = 0x100864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 8), bits); }
    // 0x100868: 0xe7030004  swc1        $f3, 0x4($t8)
    ctx->pc = 0x100868u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4), bits); }
    // 0x10086c: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x10086cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x100870: 0x3421f058  ori         $at, $at, 0xF058
    ctx->pc = 0x100870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61528);
    // 0x100874: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100878: 0xe722000c  swc1        $f2, 0xC($t9)
    ctx->pc = 0x100878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 12), bits); }
    // 0x10087c: 0x3c01bcd6  lui         $at, 0xBCD6
    ctx->pc = 0x10087cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48342 << 16));
    // 0x100880: 0x3421d605  ori         $at, $at, 0xD605
    ctx->pc = 0x100880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54789);
    // 0x100884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100888: 0xe4810190  swc1        $f1, 0x190($a0)
    ctx->pc = 0x100888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 400), bits); }
    // 0x10088c: 0xe7200008  swc1        $f0, 0x8($t9)
    ctx->pc = 0x10088cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 8), bits); }
    // 0x100890: 0xe7280004  swc1        $f8, 0x4($t9)
    ctx->pc = 0x100890u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4), bits); }
    // 0x100894: 0x3c0139c8  lui         $at, 0x39C8
    ctx->pc = 0x100894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14792 << 16));
    // 0x100898: 0x34210568  ori         $at, $at, 0x568
    ctx->pc = 0x100898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1384);
    // 0x10089c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10089cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1008a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1008a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1008a4: 0x3c01be92  lui         $at, 0xBE92
    ctx->pc = 0x1008a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48786 << 16));
    // 0x1008a8: 0x342158f0  ori         $at, $at, 0x58F0
    ctx->pc = 0x1008a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22768);
    // 0x1008ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1008acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1008b0: 0xe446000c  swc1        $f6, 0xC($v0)
    ctx->pc = 0x1008b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1008b4: 0x3c01b8ee  lui         $at, 0xB8EE
    ctx->pc = 0x1008b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47342 << 16));
    // 0x1008b8: 0x3421a7e9  ori         $at, $at, 0xA7E9
    ctx->pc = 0x1008b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42985);
    // 0x1008bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1008bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1008c0: 0xe48101a0  swc1        $f1, 0x1A0($a0)
    ctx->pc = 0x1008c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x1008c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1008c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1008c8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1008c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1008cc: 0x3c013da6  lui         $at, 0x3DA6
    ctx->pc = 0x1008ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15782 << 16));
    // 0x1008d0: 0x34213172  ori         $at, $at, 0x3172
    ctx->pc = 0x1008d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12658);
    // 0x1008d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1008d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1008d8: 0x8fbe0000  lw          $fp, 0x0($sp)
    ctx->pc = 0x1008d8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1008dc: 0x3c013b45  lui         $at, 0x3B45
    ctx->pc = 0x1008dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15173 << 16));
    // 0x1008e0: 0x3421fefd  ori         $at, $at, 0xFEFD
    ctx->pc = 0x1008e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65277);
    // 0x1008e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1008e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1008e8: 0xe7c4000c  swc1        $f4, 0xC($fp)
    ctx->pc = 0x1008e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x1008ec: 0xe48001b0  swc1        $f0, 0x1B0($a0)
    ctx->pc = 0x1008ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 432), bits); }
    // 0x1008f0: 0xe7c10008  swc1        $f1, 0x8($fp)
    ctx->pc = 0x1008f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x1008f4: 0xe7c50004  swc1        $f5, 0x4($fp)
    ctx->pc = 0x1008f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x1008f8: 0x3c01bd8a  lui         $at, 0xBD8A
    ctx->pc = 0x1008f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48522 << 16));
    // 0x1008fc: 0x3421e88b  ori         $at, $at, 0xE88B
    ctx->pc = 0x1008fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59531);
    // 0x100900: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100904: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x100904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100908: 0x3c01bbd9  lui         $at, 0xBBD9
    ctx->pc = 0x100908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48089 << 16));
    // 0x10090c: 0x34212fb2  ori         $at, $at, 0x2FB2
    ctx->pc = 0x10090cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12210);
    // 0x100910: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100914: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x100914u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x100918: 0x3c01bdec  lui         $at, 0xBDEC
    ctx->pc = 0x100918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48620 << 16));
    // 0x10091c: 0x342152d8  ori         $at, $at, 0x52D8
    ctx->pc = 0x10091cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21208);
    // 0x100920: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100924: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x100924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x100928: 0x3421b0d4  ori         $at, $at, 0xB0D4
    ctx->pc = 0x100928u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45268);
    // 0x10092c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10092cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100930: 0xe48101c0  swc1        $f1, 0x1C0($a0)
    ctx->pc = 0x100930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 448), bits); }
    // 0x100934: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x100934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x100938: 0x3421da1f  ori         $at, $at, 0xDA1F
    ctx->pc = 0x100938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55839);
    // 0x10093c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x10093cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x100940: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x100940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x100944: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x100944u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x100948: 0xe4a4000c  swc1        $f4, 0xC($a1)
    ctx->pc = 0x100948u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x10094c: 0x3c013d0b  lui         $at, 0x3D0B
    ctx->pc = 0x10094cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15627 << 16));
    // 0x100950: 0x34213e24  ori         $at, $at, 0x3E24
    ctx->pc = 0x100950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15908);
    // 0x100954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100958: 0xac8001d0  sw          $zero, 0x1D0($a0)
    ctx->pc = 0x100958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 0));
    // 0x10095c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x10095cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x100960: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x100960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x100964: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x100964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x100968: 0x3421527d  ori         $at, $at, 0x527D
    ctx->pc = 0x100968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21117);
    // 0x10096c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x10096cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x100970: 0x8fbe0008  lw          $fp, 0x8($sp)
    ctx->pc = 0x100970u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100974: 0x3c01bb44  lui         $at, 0xBB44
    ctx->pc = 0x100974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47940 << 16));
    // 0x100978: 0x34212c14  ori         $at, $at, 0x2C14
    ctx->pc = 0x100978u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11284);
    // 0x10097c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10097cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100980: 0xe7c5000c  swc1        $f5, 0xC($fp)
    ctx->pc = 0x100980u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x100984: 0x3c01bc9f  lui         $at, 0xBC9F
    ctx->pc = 0x100984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48287 << 16));
    // 0x100988: 0x34210f2f  ori         $at, $at, 0xF2F
    ctx->pc = 0x100988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3887);
    // 0x10098c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10098cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100990: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x100990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
    // 0x100994: 0x34216438  ori         $at, $at, 0x6438
    ctx->pc = 0x100994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25656);
    // 0x100998: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10099c: 0xe48101e0  swc1        $f1, 0x1E0($a0)
    ctx->pc = 0x10099cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 480), bits); }
    // 0x1009a0: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x1009a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x1009a4: 0xe7c30004  swc1        $f3, 0x4($fp)
    ctx->pc = 0x1009a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x1009a8: 0x3c013d8a  lui         $at, 0x3D8A
    ctx->pc = 0x1009a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15754 << 16));
    // 0x1009ac: 0x3421e942  ori         $at, $at, 0xE942
    ctx->pc = 0x1009acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59714);
    // 0x1009b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1009b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1009b4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1009b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1009b8: 0x3c01bbd9  lui         $at, 0xBBD9
    ctx->pc = 0x1009b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48089 << 16));
    // 0x1009bc: 0x34212f1b  ori         $at, $at, 0x2F1B
    ctx->pc = 0x1009bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12059);
    // 0x1009c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1009c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1009c4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1009c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1009c8: 0x3c013dec  lui         $at, 0x3DEC
    ctx->pc = 0x1009c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15852 << 16));
    // 0x1009cc: 0x34215382  ori         $at, $at, 0x5382
    ctx->pc = 0x1009ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21378);
    // 0x1009d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1009d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1009d4: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1009d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1009d8: 0x3421b0d0  ori         $at, $at, 0xB0D0
    ctx->pc = 0x1009d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45264);
    // 0x1009dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1009dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1009e0: 0xe48101f0  swc1        $f1, 0x1F0($a0)
    ctx->pc = 0x1009e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 496), bits); }
    // 0x1009e4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1009e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1009e8: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x1009e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1009ec: 0x3c013d0b  lui         $at, 0x3D0B
    ctx->pc = 0x1009ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15627 << 16));
    // 0x1009f0: 0x34213e1f  ori         $at, $at, 0x3E1F
    ctx->pc = 0x1009f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15903);
    // 0x1009f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1009f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1009f8: 0x8fbe0010  lw          $fp, 0x10($sp)
    ctx->pc = 0x1009f8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1009fc: 0x3c01b22b  lui         $at, 0xB22B
    ctx->pc = 0x1009fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45611 << 16));
    // 0x100a00: 0x3421cc77  ori         $at, $at, 0xCC77
    ctx->pc = 0x100a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52343);
    // 0x100a04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100a08: 0xe7c4000c  swc1        $f4, 0xC($fp)
    ctx->pc = 0x100a08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x100a0c: 0xac800200  sw          $zero, 0x200($a0)
    ctx->pc = 0x100a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 0));
    // 0x100a10: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x100a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x100a14: 0xe7c20004  swc1        $f2, 0x4($fp)
    ctx->pc = 0x100a14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x100a18: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x100a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
    // 0x100a1c: 0x34212d97  ori         $at, $at, 0x2D97
    ctx->pc = 0x100a1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11671);
    // 0x100a20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100a24: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x100a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x100a28: 0x3c01bc9f  lui         $at, 0xBC9F
    ctx->pc = 0x100a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48287 << 16));
    // 0x100a2c: 0x34210f24  ori         $at, $at, 0xF24
    ctx->pc = 0x100a2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3876);
    // 0x100a30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100a34: 0xe445000c  swc1        $f5, 0xC($v0)
    ctx->pc = 0x100a34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x100a38: 0xe4810210  swc1        $f1, 0x210($a0)
    ctx->pc = 0x100a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 528), bits); }
    // 0x100a3c: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x100a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x100a40: 0x34216438  ori         $at, $at, 0x6438
    ctx->pc = 0x100a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25656);
    // 0x100a44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100a48: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x100a48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x100a4c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x100a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x100a50: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x100a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x100a54: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x100a54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x100a58: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x100a58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x100a5c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x100a5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x100a60: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x100a60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x100a64: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x100a64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x100a68: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x100a68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100a6c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x100a6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100a70: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x100a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x100a74: 0x3e00008  jr          $ra
    ctx->pc = 0x100A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A74u;
        // 0x100a78: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100A7Cu;
    // 0x100a7c: 0x0  nop
    ctx->pc = 0x100a7cu;
    // NOP
    ctx->pc = 0x100a80u;
}
