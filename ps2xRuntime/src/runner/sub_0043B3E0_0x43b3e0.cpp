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

// Function: sub_0043B3E0
// Address: 0x43b3e0 - 0x43b538
void sub_0043B3E0_0x43b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B3E0_0x43b3e0");
#endif

    switch (ctx->pc) {
        case 0x43b430u: goto label_43b430;
        case 0x43b450u: goto label_43b450;
        case 0x43b468u: goto label_43b468;
        case 0x43b4a8u: goto label_43b4a8;
        case 0x43b4e0u: goto label_43b4e0;
        case 0x43b50cu: goto label_43b50c;
        default: break;
    }

    ctx->pc = 0x43b3e0u;

    // 0x43b3e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x43b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x43b3e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x43b3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x43b3e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x43b3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x43b3ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x43b3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x43b3f0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x43b3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x43b3f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x43b3f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b3f8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x43b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x43b3fc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x43b3fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b400: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43b400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x43b404: 0x148943  sra         $s1, $s4, 5
    ctx->pc = 0x43b404u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 20), 5));
    // 0x43b408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43b408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43b40c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x43b40cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b410: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x43b410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x43b414: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x43b414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x43b418: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x43b418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x43b41c: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x43b41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x43b420: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x43b420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x43b424: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x43B424u;
    {
        const bool branch_taken_0x43b424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B424u;
        // 0x43b428: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b424) {
            ctx->pc = 0x43B448u;
            goto label_43b448;
        }
    }
    ctx->pc = 0x43B42Cu;
    // 0x43b42c: 0x0  nop
    ctx->pc = 0x43b42cu;
    // NOP
label_43b430:
    // 0x43b430: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x43b430u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x43b434: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x43b434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x43b438: 0x0  nop
    ctx->pc = 0x43b438u;
    // NOP
    // 0x43b43c: 0x0  nop
    ctx->pc = 0x43b43cu;
    // NOP
    // 0x43b440: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x43B440u;
    {
        const bool branch_taken_0x43b440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B440u;
        // 0x43b444: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b440) {
            ctx->pc = 0x43B430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b430;
        }
    }
    ctx->pc = 0x43B448u;
label_43b448:
    // 0x43b448: 0xc10eb0e  jal         func_43AC38
    ctx->pc = 0x43B448u;
    SET_GPR_U32(ctx, 31, 0x43B450u);
    ctx->pc = 0x43B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B448u;
    // 0x43b44c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AC38u, 0x43B448u, 0x43B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B450u;
label_43b450:
    // 0x43b450: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x43b450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b454: 0x3286001f  andi        $a2, $s4, 0x1F
    ctx->pc = 0x43b454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)31);
    // 0x43b458: 0x26430014  addiu       $v1, $s2, 0x14
    ctx->pc = 0x43b458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x43b45c: 0x1a200008  blez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x43B45Cu;
    {
        const bool branch_taken_0x43b45c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x43B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B45Cu;
        // 0x43b460: 0x26680014  addiu       $t0, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b45c) {
            ctx->pc = 0x43B480u;
            goto label_43b480;
        }
    }
    ctx->pc = 0x43B464u;
    // 0x43b464: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x43b464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43b468:
    // 0x43b468: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x43b468u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x43b46c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x43b46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x43b470: 0x0  nop
    ctx->pc = 0x43b470u;
    // NOP
    // 0x43b474: 0x0  nop
    ctx->pc = 0x43b474u;
    // NOP
    // 0x43b478: 0x14e0fffb  bnez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x43B478u;
    {
        const bool branch_taken_0x43b478 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B478u;
        // 0x43b47c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b478) {
            ctx->pc = 0x43B468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b468;
        }
    }
    ctx->pc = 0x43B480u;
label_43b480:
    // 0x43b480: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x43b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x43b484: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x43b484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43b488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x43b48c: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x43B48Cu;
    {
        const bool branch_taken_0x43b48c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B48Cu;
        // 0x43b490: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b48c) {
            ctx->pc = 0x43B4E0u;
            goto label_43b4e0;
        }
    }
    ctx->pc = 0x43B494u;
    // 0x43b494: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x43b494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43b498: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x43b498u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b49c: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x43b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x43b4a0: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x43b4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x43b4a4: 0x0  nop
    ctx->pc = 0x43b4a4u;
    // NOP
label_43b4a8:
    // 0x43b4a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x43b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x43b4ac: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x43b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x43b4b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43b4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43b4b4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x43b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x43b4b8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x43b4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x43b4bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x43b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x43b4c0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x43b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x43b4c4: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x43b4c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x43b4c8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x43B4C8u;
    {
        const bool branch_taken_0x43b4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B4C8u;
        // 0x43b4cc: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b4c8) {
            ctx->pc = 0x43B4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b4a8;
        }
    }
    ctx->pc = 0x43B4D0u;
    // 0x43b4d0: 0x123800b  movn        $s0, $t1, $v1
    ctx->pc = 0x43b4d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 9));
    // 0x43b4d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x43B4D4u;
    {
        const bool branch_taken_0x43b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B4D4u;
        // 0x43b4d8: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b4d4) {
            ctx->pc = 0x43B4F8u;
            goto label_43b4f8;
        }
    }
    ctx->pc = 0x43B4DCu;
    // 0x43b4dc: 0x0  nop
    ctx->pc = 0x43b4dcu;
    // NOP
label_43b4e0:
    // 0x43b4e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x43b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x43b4e4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x43b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x43b4e8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x43b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x43b4ec: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x43b4ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x43b4f0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x43B4F0u;
    {
        const bool branch_taken_0x43b4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B4F0u;
        // 0x43b4f4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b4f0) {
            ctx->pc = 0x43B4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b4e0;
        }
    }
    ctx->pc = 0x43B4F8u;
label_43b4f8:
    // 0x43b4f8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x43b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x43b4fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x43b4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b500: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x43b500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x43b504: 0xc10eb38  jal         func_43ACE0
    ctx->pc = 0x43B504u;
    SET_GPR_U32(ctx, 31, 0x43B50Cu);
    ctx->pc = 0x43B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B504u;
    // 0x43b508: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43ACE0u, 0x43B504u, 0x43B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B50Cu;
label_43b50c:
    // 0x43b50c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x43b50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b510: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x43b510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x43b514: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x43b514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43b518: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x43b518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43b51c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43b51cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43b520: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x43b520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43b524: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x43b524u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43b528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43b528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43b52c: 0x3e00008  jr          $ra
    ctx->pc = 0x43B52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B52Cu;
        // 0x43b530: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B534u;
    // 0x43b534: 0x0  nop
    ctx->pc = 0x43b534u;
    // NOP
    ctx->pc = 0x43b538u;
}
