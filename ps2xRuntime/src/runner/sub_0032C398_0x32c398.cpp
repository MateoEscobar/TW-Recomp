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

// Function: sub_0032C398
// Address: 0x32c398 - 0x32c440
void sub_0032C398_0x32c398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C398_0x32c398");
#endif

    switch (ctx->pc) {
        case 0x32c3c0u: goto label_32c3c0;
        case 0x32c3d0u: goto label_32c3d0;
        case 0x32c3e0u: goto label_32c3e0;
        case 0x32c3e8u: goto label_32c3e8;
        case 0x32c3f8u: goto label_32c3f8;
        case 0x32c418u: goto label_32c418;
        default: break;
    }

    ctx->pc = 0x32c398u;

    // 0x32c398: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32c398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32c39c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x32c39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x32c3a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32c3a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c3a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x32c3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x32c3a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x32c3ac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x32c3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x32c3b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x32c3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x32c3b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c3b8: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x32C3B8u;
    SET_GPR_U32(ctx, 31, 0x32C3C0u);
    ctx->pc = 0x32C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C3B8u;
    // 0x32c3bc: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x32C3B8u, 0x32C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C3C0u;
label_32c3c0:
    // 0x32c3c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32c3c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c3c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32c3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c3c8: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C3C8u;
    SET_GPR_U32(ctx, 31, 0x32C3D0u);
    ctx->pc = 0x32C3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C3C8u;
    // 0x32c3cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C3C8u, 0x32C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C3D0u;
label_32c3d0:
    // 0x32c3d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32c3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c3d4: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x32c3d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32c3d8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32C3D8u;
    {
        const bool branch_taken_0x32c3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3D8u;
        // 0x32c3dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c3d8) {
            ctx->pc = 0x32C410u;
            goto label_32c410;
        }
    }
    ctx->pc = 0x32C3E0u;
label_32c3e0:
    // 0x32c3e0: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C3E0u;
    SET_GPR_U32(ctx, 31, 0x32C3E8u);
    ctx->pc = 0x32C3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C3E0u;
    // 0x32c3e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C3E0u, 0x32C3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C3E8u;
label_32c3e8:
    // 0x32c3e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32c3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c3ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32c3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c3f0: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x32C3F0u;
    SET_GPR_U32(ctx, 31, 0x32C3F8u);
    ctx->pc = 0x32C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C3F0u;
    // 0x32c3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x32C3F0u, 0x32C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C3F8u;
label_32c3f8:
    // 0x32c3f8: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x32C3F8u;
    {
        const bool branch_taken_0x32c3f8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x32c3f8) {
            ctx->pc = 0x32C3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C3F8u;
            // 0x32c3fc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C400u;
            goto label_32c400;
        }
    }
    ctx->pc = 0x32C400u;
label_32c400:
    // 0x32c400: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32c400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x32c404: 0x292102a  slt         $v0, $s4, $s2
    ctx->pc = 0x32c404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x32c408: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x32C408u;
    {
        const bool branch_taken_0x32c408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C408u;
        // 0x32c40c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c408) {
            ctx->pc = 0x32C3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c3e0;
        }
    }
    ctx->pc = 0x32C410u;
label_32c410:
    // 0x32c410: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32C410u;
    SET_GPR_U32(ctx, 31, 0x32C418u);
    ctx->pc = 0x32C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C410u;
    // 0x32c414: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32C410u, 0x32C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C418u;
label_32c418:
    // 0x32c418: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x32c418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32c41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c420: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x32c420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32c424: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32c424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c428: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x32c428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c42c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x32c42cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c434: 0x3e00008  jr          $ra
    ctx->pc = 0x32C434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C434u;
        // 0x32c438: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C43Cu;
    // 0x32c43c: 0x0  nop
    ctx->pc = 0x32c43cu;
    // NOP
    ctx->pc = 0x32c440u;
}
