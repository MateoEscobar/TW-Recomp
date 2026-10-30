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

// Function: sub_0044EEB0
// Address: 0x44eeb0 - 0x44f0d0
void sub_0044EEB0_0x44eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EEB0_0x44eeb0");
#endif

    switch (ctx->pc) {
        case 0x44f038u: goto label_44f038;
        default: break;
    }

    ctx->pc = 0x44eeb0u;

    // 0x44eeb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x44eeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x44eeb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44eeb8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x44eeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x44eebc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x44eebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x44eec0: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x44eec0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
    // 0x44eec4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x44eec4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x44eec8: 0x34e70100  ori         $a3, $a3, 0x100
    ctx->pc = 0x44eec8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)256);
    // 0x44eecc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x44eeccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x44eed0: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x44eed0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x44eed4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x44eed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x44eed8: 0x70e23b89  pcpyld      $a3, $a3, $v0
    ctx->pc = 0x44eed8u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x44eedc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x44eedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x44eee0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x44eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x44eee4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x44eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x44eee8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x44eee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x44eeec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44eeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x44eef0: 0x3c064b00  lui         $a2, 0x4B00
    ctx->pc = 0x44eef0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19200 << 16));
    // 0x44eef4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x44eef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x44eef8: 0x34c64b00  ori         $a2, $a2, 0x4B00
    ctx->pc = 0x44eef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19200);
    // 0x44eefc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x44eefcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x44ef00: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x44ef00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x44ef04: 0x70c63389  pcpyld      $a2, $a2, $a2
    ctx->pc = 0x44ef04u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x44ef08: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x44ef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x44ef0c: 0x3c0c0400  lui         $t4, 0x400
    ctx->pc = 0x44ef0cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1024 << 16));
    // 0x44ef10: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x44ef10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x44ef14: 0x34088800  ori         $t0, $zero, 0x8800
    ctx->pc = 0x44ef14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x44ef18: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x44ef18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x44ef1c: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x44ef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x44ef20: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x44ef20u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x44ef24: 0x8c9e0124  lw          $fp, 0x124($a0)
    ctx->pc = 0x44ef24u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x44ef28: 0x3409b800  ori         $t1, $zero, 0xB800
    ctx->pc = 0x44ef28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47104);
    // 0x44ef2c: 0x94b7c  dsll32      $t1, $t1, 13
    ctx->pc = 0x44ef2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 13));
    // 0x44ef30: 0x8c8200fc  lw          $v0, 0xFC($a0)
    ctx->pc = 0x44ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x44ef34: 0x340ba000  ori         $t3, $zero, 0xA000
    ctx->pc = 0x44ef34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x44ef38: 0xb5b7c  dsll32      $t3, $t3, 13
    ctx->pc = 0x44ef38u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 13));
    // 0x44ef3c: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x44ef3cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x44ef40: 0x240d0005  addiu       $t5, $zero, 0x5
    ctx->pc = 0x44ef40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x44ef44: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x44ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x44ef48: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x44ef48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x44ef4c: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x44ef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x44ef50: 0xdc970090  ld          $s7, 0x90($a0)
    ctx->pc = 0x44ef50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x44ef54: 0xdc960098  ld          $s6, 0x98($a0)
    ctx->pc = 0x44ef54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x44ef58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x44ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x44ef5c: 0xdc9500a0  ld          $s5, 0xA0($a0)
    ctx->pc = 0x44ef5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x44ef60: 0xdc9400a8  ld          $s4, 0xA8($a0)
    ctx->pc = 0x44ef60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x44ef64: 0x78910040  lq          $s1, 0x40($a0)
    ctx->pc = 0x44ef64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x44ef68: 0x78900050  lq          $s0, 0x50($a0)
    ctx->pc = 0x44ef68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x44ef6c: 0x78990060  lq          $t9, 0x60($a0)
    ctx->pc = 0x44ef6cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x44ef70: 0x78980070  lq          $t8, 0x70($a0)
    ctx->pc = 0x44ef70u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x44ef74: 0x8c820128  lw          $v0, 0x128($a0)
    ctx->pc = 0x44ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x44ef78: 0xdc9300b0  ld          $s3, 0xB0($a0)
    ctx->pc = 0x44ef78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x44ef7c: 0x788f0080  lq          $t7, 0x80($a0)
    ctx->pc = 0x44ef7cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x44ef80: 0x3c21018  mult        $v0, $fp, $v0
    ctx->pc = 0x44ef80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44ef84: 0x7dc70000  sq          $a3, 0x0($t6)
    ctx->pc = 0x44ef84u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 7));
    // 0x44ef88: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x44ef88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x44ef8c: 0x7dc60000  sq          $a2, 0x0($t6)
    ctx->pc = 0x44ef8cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 6));
    // 0x44ef90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x44ef94: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x44ef94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x44ef98: 0x8c8500fc  lw          $a1, 0xFC($a0)
    ctx->pc = 0x44ef98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x44ef9c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x44ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x44efa0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x44efa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x44efa4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x44efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x44efa8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x44efa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x44efac: 0x71232389  pcpyld      $a0, $t1, $v1
    ctx->pc = 0x44efacu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x44efb0: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x44efb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x44efb4: 0x71631b89  pcpyld      $v1, $t3, $v1
    ctx->pc = 0x44efb4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x44efb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x44efb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x44efbc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x44efbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x44efc0: 0x71024389  pcpyld      $t0, $t0, $v0
    ctx->pc = 0x44efc0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x44efc4: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x44efc4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x44efc8: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x44efc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x44efcc: 0x7dd10000  sq          $s1, 0x0($t6)
    ctx->pc = 0x44efccu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 17));
    // 0x44efd0: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x44efd0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x44efd4: 0x237882d  daddu       $s1, $s1, $s7
    ctx->pc = 0x44efd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 23));
    // 0x44efd8: 0x7dd00000  sq          $s0, 0x0($t6)
    ctx->pc = 0x44efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 16));
    // 0x44efdc: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x44efdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x44efe0: 0x216802d  daddu       $s0, $s0, $s6
    ctx->pc = 0x44efe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 22));
    // 0x44efe4: 0x7dd90000  sq          $t9, 0x0($t6)
    ctx->pc = 0x44efe4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 25));
    // 0x44efe8: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x44efe8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x44efec: 0x335c82d  daddu       $t9, $t9, $s5
    ctx->pc = 0x44efecu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 21));
    // 0x44eff0: 0x7dd80000  sq          $t8, 0x0($t6)
    ctx->pc = 0x44eff0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 24));
    // 0x44eff4: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x44eff4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x44eff8: 0x314c02d  daddu       $t8, $t8, $s4
    ctx->pc = 0x44eff8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 20));
    // 0x44effc: 0x564d0005  bnel        $s2, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x44EFFCu;
    {
        const bool branch_taken_0x44effc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 13));
        if (branch_taken_0x44effc) {
            ctx->pc = 0x44F000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44EFFCu;
            // 0x44f000: 0x7dc30000  sq          $v1, 0x0($t6) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44F014u;
            goto label_44f014;
        }
    }
    ctx->pc = 0x44F004u;
    // 0x44f004: 0x7dcf0000  sq          $t7, 0x0($t6)
    ctx->pc = 0x44f004u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 15));
    // 0x44f008: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x44f008u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x44f00c: 0x1f3782d  daddu       $t7, $t7, $s3
    ctx->pc = 0x44f00cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 19));
    // 0x44f010: 0x7dc30000  sq          $v1, 0x0($t6)
    ctx->pc = 0x44f010u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 3));
label_44f014:
    // 0x44f014: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44f014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x44f018: 0x27c3fffe  addiu       $v1, $fp, -0x2
    ctx->pc = 0x44f018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x44f01c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x44f01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x44f020: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x44F020u;
    {
        const bool branch_taken_0x44f020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x44F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F020u;
        // 0x44f024: 0x25ce0010  addiu       $t6, $t6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f020) {
            ctx->pc = 0x44F08Cu;
            goto label_44f08c;
        }
    }
    ctx->pc = 0x44F028u;
    // 0x44f028: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44f028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x44f02c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x44f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x44f030: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x44f030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x44f034: 0x0  nop
    ctx->pc = 0x44f034u;
    // NOP
label_44f038:
    // 0x44f038: 0x7dd10000  sq          $s1, 0x0($t6)
    ctx->pc = 0x44f038u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 17));
    // 0x44f03c: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x44f03cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x44f040: 0x237882d  daddu       $s1, $s1, $s7
    ctx->pc = 0x44f040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 23));
    // 0x44f044: 0x7dd00000  sq          $s0, 0x0($t6)
    ctx->pc = 0x44f044u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 16));
    // 0x44f048: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x44f048u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x44f04c: 0x216802d  daddu       $s0, $s0, $s6
    ctx->pc = 0x44f04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 22));
    // 0x44f050: 0x7dd90000  sq          $t9, 0x0($t6)
    ctx->pc = 0x44f050u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 25));
    // 0x44f054: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x44f054u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x44f058: 0x335c82d  daddu       $t9, $t9, $s5
    ctx->pc = 0x44f058u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 21));
    // 0x44f05c: 0x7dd80000  sq          $t8, 0x0($t6)
    ctx->pc = 0x44f05cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 24));
    // 0x44f060: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x44f060u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x44f064: 0x314c02d  daddu       $t8, $t8, $s4
    ctx->pc = 0x44f064u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 20));
    // 0x44f068: 0x56450005  bnel        $s2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44F068u;
    {
        const bool branch_taken_0x44f068 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        if (branch_taken_0x44f068) {
            ctx->pc = 0x44F06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44F068u;
            // 0x44f06c: 0x7dc40000  sq          $a0, 0x0($t6) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44F080u;
            goto label_44f080;
        }
    }
    ctx->pc = 0x44F070u;
    // 0x44f070: 0x7dcf0000  sq          $t7, 0x0($t6)
    ctx->pc = 0x44f070u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 15));
    // 0x44f074: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x44f074u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x44f078: 0x1f3782d  daddu       $t7, $t7, $s3
    ctx->pc = 0x44f078u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 19));
    // 0x44f07c: 0x7dc40000  sq          $a0, 0x0($t6)
    ctx->pc = 0x44f07cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 4));
label_44f080:
    // 0x44f080: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x44f080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x44f084: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x44F084u;
    {
        const bool branch_taken_0x44f084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x44F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F084u;
        // 0x44f088: 0x25ce0010  addiu       $t6, $t6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f084) {
            ctx->pc = 0x44F038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44f038;
        }
    }
    ctx->pc = 0x44F08Cu;
label_44f08c:
    // 0x44f08c: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x44f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x44f090: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x44f090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x44f094: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x44f094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x44f098: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x44f098u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x44f09c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x44f09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x44f0a0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x44f0a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x44f0a4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x44f0a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44f0a8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x44f0a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44f0ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44f0acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44f0b0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x44f0b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44f0b4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x44f0b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f0b8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x44f0b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f0bc: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x44f0bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f0c0: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x44f0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x44f0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x44F0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F0C4u;
        // 0x44f0c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F0CCu;
    // 0x44f0cc: 0x0  nop
    ctx->pc = 0x44f0ccu;
    // NOP
    ctx->pc = 0x44f0d0u;
}
