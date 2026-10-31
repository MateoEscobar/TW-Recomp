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

// Function: sub_004CB290
// Address: 0x4cb290 - 0x4cb4a8
void sub_004CB290_0x4cb290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CB290_0x4cb290");
#endif

    switch (ctx->pc) {
        case 0x4cb2e8u: goto label_4cb2e8;
        default: break;
    }

    ctx->pc = 0x4cb290u;

    // 0x4cb290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4cb290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4cb294: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cb294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cb298: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cb298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cb29c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x4cb29cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb2a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cb2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cb2a4: 0x245228a0  addiu       $s2, $v0, 0x28A0
    ctx->pc = 0x4cb2a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4cb2a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cb2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4cb2ac: 0x3c130053  lui         $s3, 0x53
    ctx->pc = 0x4cb2acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)83 << 16));
    // 0x4cb2b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cb2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4cb2b4: 0x266f2860  addiu       $t7, $s3, 0x2860
    ctx->pc = 0x4cb2b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 10336));
    // 0x4cb2b8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4cb2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4cb2bc: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x4cb2bcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb2c0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4cb2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4cb2c4: 0x3c160053  lui         $s6, 0x53
    ctx->pc = 0x4cb2c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)83 << 16));
    // 0x4cb2c8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4cb2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4cb2cc: 0x3c170053  lui         $s7, 0x53
    ctx->pc = 0x4cb2ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)83 << 16));
    // 0x4cb2d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cb2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cb2d4: 0x265e0c00  addiu       $fp, $s2, 0xC00
    ctx->pc = 0x4cb2d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 3072));
    // 0x4cb2d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cb2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cb2dc: 0x3c150053  lui         $s5, 0x53
    ctx->pc = 0x4cb2dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
    // 0x4cb2e0: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x4cb2e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
    // 0x4cb2e4: 0x8df10010  lw          $s1, 0x10($t7)
    ctx->pc = 0x4cb2e4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x532870u));
label_4cb2e8:
    // 0x4cb2e8: 0x3c070053  lui         $a3, 0x53
    ctx->pc = 0x4cb2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)83 << 16));
    // 0x4cb2ec: 0x8deb0008  lw          $t3, 0x8($t7)
    ctx->pc = 0x4cb2ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x4cb2f0: 0x24e730a0  addiu       $a3, $a3, 0x30A0
    ctx->pc = 0x4cb2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12448));
    // 0x4cb2f4: 0x8df00014  lw          $s0, 0x14($t7)
    ctx->pc = 0x4cb2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
    // 0x4cb2f8: 0x3c080053  lui         $t0, 0x53
    ctx->pc = 0x4cb2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)83 << 16));
    // 0x4cb2fc: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x4cb2fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cb300: 0x25082ca0  addiu       $t0, $t0, 0x2CA0
    ctx->pc = 0x4cb300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11424));
    // 0x4cb304: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4cb304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cb308: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x4cb308u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x4cb30c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x4cb30cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cb310: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cb310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4cb314: 0x8ee52840  lw          $a1, 0x2840($s7)
    ctx->pc = 0x4cb314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10304)));
    // 0x4cb318: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x4cb318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4cb31c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4cb31cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4cb320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cb320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cb324: 0x883821  addu        $a3, $a0, $t0
    ctx->pc = 0x4cb324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x4cb328: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4cb328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cb32c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4cb32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cb330: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4cb330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4cb334: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4cb334u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cb338: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x4cb338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x4cb33c: 0x8c4e0000  lw          $t6, 0x0($v0)
    ctx->pc = 0x4cb33cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cb340: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4cb340u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4cb344: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x4cb344u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cb348: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x4cb348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x4cb34c: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x4cb34cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cb350: 0x1c81821  addu        $v1, $t6, $t0
    ctx->pc = 0x4cb350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x4cb354: 0x8ea42848  lw          $a0, 0x2848($s5)
    ctx->pc = 0x4cb354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10312)));
    // 0x4cb358: 0x1c91021  addu        $v0, $t6, $t1
    ctx->pc = 0x4cb358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
    // 0x4cb35c: 0x8ecc2844  lw          $t4, 0x2844($s6)
    ctx->pc = 0x4cb35cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10308)));
    // 0x4cb360: 0x1ca2821  addu        $a1, $t6, $t2
    ctx->pc = 0x4cb360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x4cb364: 0xadeb0008  sw          $t3, 0x8($t7)
    ctx->pc = 0x4cb364u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 11));
    // 0x4cb368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cb368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cb36c: 0x8e86284c  lw          $a2, 0x284C($s4)
    ctx->pc = 0x4cb36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10316)));
    // 0x4cb370: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cb370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4cb374: 0x8de70018  lw          $a3, 0x18($t7)
    ctx->pc = 0x4cb374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x4cb378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4cb378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4cb37c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x4cb37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x4cb380: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4cb380u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4cb384: 0x94440400  lhu         $a0, 0x400($v0)
    ctx->pc = 0x4cb384u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
    // 0x4cb388: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4cb388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4cb38c: 0x94660400  lhu         $a2, 0x400($v1)
    ctx->pc = 0x4cb38cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1024)));
    // 0x4cb390: 0x330d0001  andi        $t5, $t8, 0x1
    ctx->pc = 0x4cb390u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4cb394: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x4cb394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cb398: 0x94a30400  lhu         $v1, 0x400($a1)
    ctx->pc = 0x4cb398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1024)));
    // 0x4cb39c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4cb39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4cb3a0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x4cb3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x4cb3a4: 0x8e6b2860  lw          $t3, 0x2860($s3)
    ctx->pc = 0x4cb3a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10336)));
    // 0x4cb3a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4cb3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4cb3ac: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4cb3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4cb3b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4cb3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4cb3b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4cb3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4cb3b8: 0xa5630000  sh          $v1, 0x0($t3)
    ctx->pc = 0x4cb3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cb3bc: 0xade70018  sw          $a3, 0x18($t7)
    ctx->pc = 0x4cb3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 7));
    // 0x4cb3c0: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x4cb3c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x4cb3c4: 0x8de3000c  lw          $v1, 0xC($t7)
    ctx->pc = 0x4cb3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x4cb3c8: 0x8ee42840  lw          $a0, 0x2840($s7)
    ctx->pc = 0x4cb3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10304)));
    // 0x4cb3cc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4cb3ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cb3d0: 0x8ea52848  lw          $a1, 0x2848($s5)
    ctx->pc = 0x4cb3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10312)));
    // 0x4cb3d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4cb3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4cb3d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cb3dc: 0x8ec72844  lw          $a3, 0x2844($s6)
    ctx->pc = 0x4cb3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10308)));
    // 0x4cb3e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4cb3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4cb3e4: 0x8de6001c  lw          $a2, 0x1C($t7)
    ctx->pc = 0x4cb3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x4cb3e8: 0x8c4e0000  lw          $t6, 0x0($v0)
    ctx->pc = 0x4cb3e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cb3ec: 0x8e82284c  lw          $v0, 0x284C($s4)
    ctx->pc = 0x4cb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10316)));
    // 0x4cb3f0: 0x1c94821  addu        $t1, $t6, $t1
    ctx->pc = 0x4cb3f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
    // 0x4cb3f4: 0x1c84021  addu        $t0, $t6, $t0
    ctx->pc = 0x4cb3f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x4cb3f8: 0x1ca5021  addu        $t2, $t6, $t2
    ctx->pc = 0x4cb3f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x4cb3fc: 0xade3000c  sw          $v1, 0xC($t7)
    ctx->pc = 0x4cb3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 3));
    // 0x4cb400: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x4cb400u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4cb404: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4cb404u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4cb408: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x4cb408u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x4cb40c: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x4cb40cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x4cb410: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4cb410u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4cb414: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x4cb414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x4cb418: 0x95050400  lhu         $a1, 0x400($t0)
    ctx->pc = 0x4cb418u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1024)));
    // 0x4cb41c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4cb41cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cb420: 0x95240400  lhu         $a0, 0x400($t1)
    ctx->pc = 0x4cb420u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 1024)));
    // 0x4cb424: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4cb424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4cb428: 0x95430400  lhu         $v1, 0x400($t2)
    ctx->pc = 0x4cb428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 1024)));
    // 0x4cb42c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x4cb42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x4cb430: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4cb430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4cb434: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4cb434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4cb438: 0x8de50004  lw          $a1, 0x4($t7)
    ctx->pc = 0x4cb438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x4cb43c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4cb43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4cb440: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4cb440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4cb444: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4cb444u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cb448: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x4cb448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4cb44c: 0xade6001c  sw          $a2, 0x1C($t7)
    ctx->pc = 0x4cb44cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 6));
    // 0x4cb450: 0xae6b2860  sw          $t3, 0x2860($s3)
    ctx->pc = 0x4cb450u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10336), GPR_U32(ctx, 11));
    // 0x4cb454: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CB454u;
    {
        const bool branch_taken_0x4cb454 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB454u;
        // 0x4cb458: 0xade40004  sw          $a0, 0x4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb454) {
            ctx->pc = 0x4CB46Cu;
            goto label_4cb46c;
        }
    }
    ctx->pc = 0x4CB45Cu;
    // 0x4cb45c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x4cb45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4cb460: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x4cb460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4cb464: 0xade20010  sw          $v0, 0x10($t7)
    ctx->pc = 0x4cb464u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 2));
    // 0x4cb468: 0xade30014  sw          $v1, 0x14($t7)
    ctx->pc = 0x4cb468u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 3));
label_4cb46c:
    // 0x4cb46c: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4cb46cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4cb470: 0x5720ff9d  bnel        $t9, $zero, . + 4 + (-0x63 << 2)
    ctx->pc = 0x4CB470u;
    {
        const bool branch_taken_0x4cb470 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cb470) {
            ctx->pc = 0x4CB474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CB470u;
            // 0x4cb474: 0x8df10010  lw          $s1, 0x10($t7) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CB2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cb2e8;
        }
    }
    ctx->pc = 0x4CB478u;
    // 0x4cb478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cb478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cb47c: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x4cb47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cb480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cb484: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cb484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cb488: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cb488u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cb48c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cb48cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cb490: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cb490u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cb494: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cb494u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cb498: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cb498u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cb49c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cb49cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cb4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4CB4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB4A0u;
        // 0x4cb4a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CB4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CB4A8u;
}
