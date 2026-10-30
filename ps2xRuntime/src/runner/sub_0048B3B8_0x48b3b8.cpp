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

// Function: sub_0048B3B8
// Address: 0x48b3b8 - 0x48b500
void sub_0048B3B8_0x48b3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B3B8_0x48b3b8");
#endif

    switch (ctx->pc) {
        case 0x48b420u: goto label_48b420;
        case 0x48b498u: goto label_48b498;
        case 0x48b4acu: goto label_48b4ac;
        case 0x48b4d0u: goto label_48b4d0;
        default: break;
    }

    ctx->pc = 0x48b3b8u;

label_48b3b8:
    // 0x48b3b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x48b3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x48b3bc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x48b3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x48b3c0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x48b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x48b3c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48b3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b3c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48b3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x48b3cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48b3ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b3d0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x48b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x48b3d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x48b3d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b3d8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x48b3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x48b3dc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x48b3dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b3e0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x48b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x48b3e4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x48b3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x48b3e8: 0x12800039  beqz        $s4, . + 4 + (0x39 << 2)
    ctx->pc = 0x48B3E8u;
    {
        const bool branch_taken_0x48b3e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B3E8u;
        // 0x48b3ec: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b3e8) {
            ctx->pc = 0x48B4D0u;
            goto label_48b4d0;
        }
    }
    ctx->pc = 0x48B3F0u;
    // 0x48b3f0: 0x1aa00034  blez        $s5, . + 4 + (0x34 << 2)
    ctx->pc = 0x48B3F0u;
    {
        const bool branch_taken_0x48b3f0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x48B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B3F0u;
        // 0x48b3f4: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b3f0) {
            ctx->pc = 0x48B4C4u;
            goto label_48b4c4;
        }
    }
    ctx->pc = 0x48B3F8u;
    // 0x48b3f8: 0xa2600018  sb          $zero, 0x18($s3)
    ctx->pc = 0x48b3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x48b3fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x48b3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b400: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x48b400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x48b404: 0x26b6ffff  addiu       $s6, $s5, -0x1
    ctx->pc = 0x48b404u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x48b408: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x48b408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x48b40c: 0x2672001c  addiu       $s2, $s3, 0x1C
    ctx->pc = 0x48b40cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x48b410: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x48b410u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x48b414: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x48b414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x48b418: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x48b418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x48b41c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x48b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_48b420:
    // 0x48b420: 0x8f828668  lw          $v0, -0x7998($gp)
    ctx->pc = 0x48b420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48b424: 0x1120c3  sra         $a0, $s1, 3
    ctx->pc = 0x48b424u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 3));
    // 0x48b428: 0x112883  sra         $a1, $s1, 2
    ctx->pc = 0x48b428u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 2));
    // 0x48b42c: 0x113043  sra         $a2, $s1, 1
    ctx->pc = 0x48b42cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 1));
    // 0x48b430: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x48b430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x48b434: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x48b434u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48b438: 0x92090001  lbu         $t1, 0x1($s0)
    ctx->pc = 0x48b438u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x48b43c: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x48b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x48b440: 0x920a0002  lbu         $t2, 0x2($s0)
    ctx->pc = 0x48b440u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x48b444: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x48b444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x48b448: 0x92080003  lbu         $t0, 0x3($s0)
    ctx->pc = 0x48b448u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x48b44c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x48b44cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x48b450: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x48b450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x48b454: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x48b454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x48b458: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x48b458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x48b45c: 0x452804  sllv        $a1, $a1, $v0
    ctx->pc = 0x48b45cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x48b460: 0x463004  sllv        $a2, $a2, $v0
    ctx->pc = 0x48b460u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x48b464: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x48b464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x48b468: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x48b468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x48b46c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x48b46cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x48b470: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x48b470u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x48b474: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x48b474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x48b478: 0xa3a70000  sb          $a3, 0x0($sp)
    ctx->pc = 0x48b478u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x48b47c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x48b47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b480: 0xa3a90001  sb          $t1, 0x1($sp)
    ctx->pc = 0x48b480u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x48b484: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x48b484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b488: 0xa3aa0002  sb          $t2, 0x2($sp)
    ctx->pc = 0x48b488u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 10));
    // 0x48b48c: 0xa3a80003  sb          $t0, 0x3($sp)
    ctx->pc = 0x48b48cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x48b490: 0xc122cee  jal         func_48B3B8
    ctx->pc = 0x48B490u;
    SET_GPR_U32(ctx, 31, 0x48B498u);
    ctx->pc = 0x48B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B490u;
    // 0x48b494: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B3B8u;
    goto label_48b3b8;
    ctx->pc = 0x48B498u;
label_48b498:
    // 0x48b498: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48B498u;
    {
        const bool branch_taken_0x48b498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B498u;
        // 0x48b49c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b498) {
            ctx->pc = 0x48B4ACu;
            goto label_48b4ac;
        }
    }
    ctx->pc = 0x48B4A0u;
    // 0x48b4a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x48b4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b4a4: 0xc122538  jal         func_4894E0
    ctx->pc = 0x48B4A4u;
    SET_GPR_U32(ctx, 31, 0x48B4ACu);
    ctx->pc = 0x48B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B4A4u;
    // 0x48b4a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4894E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4894E0u, 0x48B4A4u, 0x48B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B4ACu;
label_48b4ac:
    // 0x48b4ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x48b4acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x48b4b0: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x48b4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x48b4b4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x48B4B4u;
    {
        const bool branch_taken_0x48b4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B4B4u;
        // 0x48b4b8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b4b4) {
            ctx->pc = 0x48B420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b420;
        }
    }
    ctx->pc = 0x48B4BCu;
    // 0x48b4bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48B4BCu;
    {
        const bool branch_taken_0x48b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B4BCu;
        // 0x48b4c0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b4bc) {
            ctx->pc = 0x48B4D4u;
            goto label_48b4d4;
        }
    }
    ctx->pc = 0x48B4C4u;
label_48b4c4:
    // 0x48b4c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x48b4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b4c8: 0xc1224f4  jal         func_4893D0
    ctx->pc = 0x48B4C8u;
    SET_GPR_U32(ctx, 31, 0x48B4D0u);
    ctx->pc = 0x48B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B4C8u;
    // 0x48b4cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4893D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4893D0u, 0x48B4C8u, 0x48B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B4D0u;
label_48b4d0:
    // 0x48b4d0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x48b4d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_48b4d4:
    // 0x48b4d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x48b4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x48b4d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x48b4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48b4dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x48b4dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48b4e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x48b4e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48b4e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48b4e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48b4e8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x48b4e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48b4ec: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x48b4ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48b4f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48b4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x48B4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B4F4u;
        // 0x48b4f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B4FCu;
    // 0x48b4fc: 0x0  nop
    ctx->pc = 0x48b4fcu;
    // NOP
    ctx->pc = 0x48b500u;
}
