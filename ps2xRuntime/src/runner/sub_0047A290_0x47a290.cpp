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

// Function: sub_0047A290
// Address: 0x47a290 - 0x47a3b0
void sub_0047A290_0x47a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A290_0x47a290");
#endif

    switch (ctx->pc) {
        case 0x47a2e0u: goto label_47a2e0;
        case 0x47a30cu: goto label_47a30c;
        case 0x47a320u: goto label_47a320;
        case 0x47a368u: goto label_47a368;
        default: break;
    }

    ctx->pc = 0x47a290u;

    // 0x47a290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x47a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x47a294: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x47a294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x47a298: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x47a298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x47a29c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x47a29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a2a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47a2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47a2a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47a2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a2a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x47a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x47a2ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x47a2acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a2b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47a2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47a2b4: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x47A2B4u;
    {
        const bool branch_taken_0x47a2b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A2B4u;
        // 0x47a2b8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a2b4) {
            ctx->pc = 0x47A2FCu;
            goto label_47a2fc;
        }
    }
    ctx->pc = 0x47A2BCu;
    // 0x47a2bc: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x47A2BCu;
    {
        const bool branch_taken_0x47a2bc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x47A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A2BCu;
        // 0x47a2c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a2bc) {
            ctx->pc = 0x47A394u;
            goto label_47a394;
        }
    }
    ctx->pc = 0x47A2C4u;
    // 0x47a2c4: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x47a2c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x47a2c8: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x47A2C8u;
    {
        const bool branch_taken_0x47a2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A2C8u;
        // 0x47a2cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a2c8) {
            ctx->pc = 0x47A394u;
            goto label_47a394;
        }
    }
    ctx->pc = 0x47A2D0u;
    // 0x47a2d0: 0x5a600031  blezl       $s3, . + 4 + (0x31 << 2)
    ctx->pc = 0x47A2D0u;
    {
        const bool branch_taken_0x47a2d0 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x47a2d0) {
            ctx->pc = 0x47A2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47A2D0u;
            // 0x47a2d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47A398u;
            goto label_47a398;
        }
    }
    ctx->pc = 0x47A2D8u;
    // 0x47a2d8: 0xc129c4c  jal         func_4A7130
    ctx->pc = 0x47A2D8u;
    SET_GPR_U32(ctx, 31, 0x47A2E0u);
    ctx->pc = 0x47A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A2D8u;
    // 0x47a2dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7130u, 0x47A2D8u, 0x47A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A2E0u;
label_47a2e0:
    // 0x47a2e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47a2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a2e4: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47A2E4u;
    {
        const bool branch_taken_0x47a2e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a2e4) {
            ctx->pc = 0x47A2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47A2E4u;
            // 0x47a2e8: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47A304u;
            goto label_47a304;
        }
    }
    ctx->pc = 0x47A2ECu;
    // 0x47a2ec: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x47a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x47a2f0: 0x3042001c  andi        $v0, $v0, 0x1C
    ctx->pc = 0x47a2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28);
    // 0x47a2f4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x47A2F4u;
    {
        const bool branch_taken_0x47a2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A2F4u;
        // 0x47a2f8: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a2f4) {
            ctx->pc = 0x47A370u;
            goto label_47a370;
        }
    }
    ctx->pc = 0x47A2FCu;
label_47a2fc:
    // 0x47a2fc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x47A2FCu;
    {
        const bool branch_taken_0x47a2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A2FCu;
        // 0x47a300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a2fc) {
            ctx->pc = 0x47A394u;
            goto label_47a394;
        }
    }
    ctx->pc = 0x47A304u;
label_47a304:
    // 0x47a304: 0xc129c4e  jal         func_4A7138
    ctx->pc = 0x47A304u;
    SET_GPR_U32(ctx, 31, 0x47A30Cu);
    ctx->pc = 0x47A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A304u;
    // 0x47a308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7138u, 0x47A304u, 0x47A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A30Cu;
label_47a30c:
    // 0x47a30c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47a30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a310: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x47A310u;
    {
        const bool branch_taken_0x47a310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A310u;
        // 0x47a314: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a310) {
            ctx->pc = 0x47A358u;
            goto label_47a358;
        }
    }
    ctx->pc = 0x47A318u;
    // 0x47a318: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x47a318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a31c: 0x0  nop
    ctx->pc = 0x47a31cu;
    // NOP
label_47a320:
    // 0x47a320: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x47a320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x47a324: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x47a324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x47a328: 0x2c82000b  sltiu       $v0, $a0, 0xB
    ctx->pc = 0x47a328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x47a32c: 0x0  nop
    ctx->pc = 0x47a32cu;
    // NOP
    // 0x47a330: 0x0  nop
    ctx->pc = 0x47a330u;
    // NOP
    // 0x47a334: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x47A334u;
    {
        const bool branch_taken_0x47a334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A334u;
        // 0x47a338: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a334) {
            ctx->pc = 0x47A320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a320;
        }
    }
    ctx->pc = 0x47A33Cu;
    // 0x47a33c: 0x24030114  addiu       $v1, $zero, 0x114
    ctx->pc = 0x47a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x47a340: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x47a340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47a344: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x47a344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x47a348: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47a348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47a34c: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x47a34cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x47a350: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x47a350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x47a354: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x47a354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
label_47a358:
    // 0x47a358: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x47A358u;
    {
        const bool branch_taken_0x47a358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A358u;
        // 0x47a35c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a358) {
            ctx->pc = 0x47A394u;
            goto label_47a394;
        }
    }
    ctx->pc = 0x47A360u;
    // 0x47a360: 0xc129c4c  jal         func_4A7130
    ctx->pc = 0x47A360u;
    SET_GPR_U32(ctx, 31, 0x47A368u);
    ctx->pc = 0x47A364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A360u;
    // 0x47a364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7130u, 0x47A360u, 0x47A368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A368u;
label_47a368:
    // 0x47a368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47a368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a36c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x47a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47a370:
    // 0x47a370: 0x2502018  mult        $a0, $s2, $s0
    ctx->pc = 0x47a370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x47a374: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x47a374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x47a378: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x47a378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x47a37c: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x47a37cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x47a380: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x47a380u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x47a384: 0xacb0003c  sw          $s0, 0x3C($a1)
    ctx->pc = 0x47a384u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 16));
    // 0x47a388: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47a388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a38c: 0xaca40034  sw          $a0, 0x34($a1)
    ctx->pc = 0x47a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 4));
    // 0x47a390: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x47a390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
label_47a394:
    // 0x47a394: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x47a394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47a398:
    // 0x47a398: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x47a398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47a39c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47a39cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47a3a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x47a3a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47a3a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47a3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47a3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x47A3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A3A8u;
        // 0x47a3ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A3B0u;
}
