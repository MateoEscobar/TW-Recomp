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

// Function: sub_0016C3A8
// Address: 0x16c3a8 - 0x16c470
void sub_0016C3A8_0x16c3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C3A8_0x16c3a8");
#endif

    switch (ctx->pc) {
        case 0x16c3dcu: goto label_16c3dc;
        case 0x16c3f8u: goto label_16c3f8;
        case 0x16c400u: goto label_16c400;
        case 0x16c430u: goto label_16c430;
        case 0x16c43cu: goto label_16c43c;
        default: break;
    }

    ctx->pc = 0x16c3a8u;

    // 0x16c3a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16c3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16c3ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16c3acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16c3b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16c3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16c3b4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16c3b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16c3b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x16c3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x16c3bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x16c3bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c3c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16c3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16c3c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x16c3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x16c3c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x16c3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x16c3cc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x16c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x16c3d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c3d4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16C3D4u;
    SET_GPR_U32(ctx, 31, 0x16C3DCu);
    ctx->pc = 0x16C3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C3D4u;
    // 0x16c3d8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16C3D4u, 0x16C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C3DCu;
label_16c3dc:
    // 0x16c3dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16c3dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c3e0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x16c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x16c3e4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16C3E4u;
    {
        const bool branch_taken_0x16c3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3E4u;
        // 0x16c3e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3e4) {
            ctx->pc = 0x16C44Cu;
            goto label_16c44c;
        }
    }
    ctx->pc = 0x16C3ECu;
    // 0x16c3ec: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x16c3ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c3f0: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x16c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x16c3f4: 0x0  nop
    ctx->pc = 0x16c3f4u;
    // NOP
label_16c3f8:
    // 0x16c3f8: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16C3F8u;
    SET_GPR_U32(ctx, 31, 0x16C400u);
    ctx->pc = 0x16C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C3F8u;
    // 0x16c3fc: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16C3F8u, 0x16C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C400u;
label_16c400:
    // 0x16c400: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16c400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c404: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16c404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16c408: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x16C408u;
    {
        const bool branch_taken_0x16c408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c408) {
            ctx->pc = 0x16C40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C408u;
            // 0x16c40c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C440u;
            goto label_16c440;
        }
    }
    ctx->pc = 0x16C410u;
    // 0x16c410: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x16c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16c414: 0x5454000a  bnel        $v0, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x16C414u;
    {
        const bool branch_taken_0x16c414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x16c414) {
            ctx->pc = 0x16C418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C414u;
            // 0x16c418: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C440u;
            goto label_16c440;
        }
    }
    ctx->pc = 0x16C41Cu;
    // 0x16c41c: 0x16750005  bne         $s3, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C41Cu;
    {
        const bool branch_taken_0x16c41c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x16C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C41Cu;
        // 0x16c420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c41c) {
            ctx->pc = 0x16C434u;
            goto label_16c434;
        }
    }
    ctx->pc = 0x16C424u;
    // 0x16c424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16c424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c428: 0xc05a432  jal         func_1690C8
    ctx->pc = 0x16C428u;
    SET_GPR_U32(ctx, 31, 0x16C430u);
    ctx->pc = 0x16C42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C428u;
    // 0x16c42c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1690C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1690C8u, 0x16C428u, 0x16C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C430u;
label_16c430:
    // 0x16c430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c434:
    // 0x16c434: 0xc05a432  jal         func_1690C8
    ctx->pc = 0x16C434u;
    SET_GPR_U32(ctx, 31, 0x16C43Cu);
    ctx->pc = 0x16C438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C434u;
    // 0x16c438: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1690C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1690C8u, 0x16C434u, 0x16C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C43Cu;
label_16c43c:
    // 0x16c43c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16c43cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16c440:
    // 0x16c440: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x16c440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x16c444: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x16C444u;
    {
        const bool branch_taken_0x16c444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C444u;
        // 0x16c448: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c444) {
            ctx->pc = 0x16C3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c3f8;
        }
    }
    ctx->pc = 0x16C44Cu;
label_16c44c:
    // 0x16c44c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x16c44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16c450: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x16c450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16c454: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16c454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c458: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16c458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c45c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x16c45cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c460: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x16c460u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c468: 0x3e00008  jr          $ra
    ctx->pc = 0x16C468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C468u;
        // 0x16c46c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C470u;
}
