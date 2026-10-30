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

// Function: sub_001D53F8
// Address: 0x1d53f8 - 0x1d5450
void sub_001D53F8_0x1d53f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D53F8_0x1d53f8");
#endif

    switch (ctx->pc) {
        case 0x1d5428u: goto label_1d5428;
        case 0x1d5430u: goto label_1d5430;
        case 0x1d5440u: goto label_1d5440;
        default: break;
    }

    ctx->pc = 0x1d53f8u;

    // 0x1d53f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d53f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d53fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d53fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d5400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5408: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d5408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d540c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1D540Cu;
    {
        const bool branch_taken_0x1d540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d540c) {
            ctx->pc = 0x1D5410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D540Cu;
            // 0x1d5410: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5444u;
            goto label_1d5444;
        }
    }
    ctx->pc = 0x1D5414u;
    // 0x1d5414: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d5414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d5418: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d5418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d541c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d541cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1d5420: 0xc073462  jal         func_1CD188
    ctx->pc = 0x1D5420u;
    SET_GPR_U32(ctx, 31, 0x1D5428u);
    ctx->pc = 0x1D5424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5420u;
    // 0x1d5424: 0x26100120  addiu       $s0, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1D5420u, 0x1D5428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5428u;
label_1d5428:
    // 0x1d5428: 0xc073460  jal         func_1CD180
    ctx->pc = 0x1D5428u;
    SET_GPR_U32(ctx, 31, 0x1D5430u);
    ctx->pc = 0x1D542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5428u;
    // 0x1d542c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD180u, 0x1D5428u, 0x1D5430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5430u;
label_1d5430:
    // 0x1d5430: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5430u;
    {
        const bool branch_taken_0x1d5430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5430) {
            ctx->pc = 0x1D5434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5430u;
            // 0x1d5434: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5444u;
            goto label_1d5444;
        }
    }
    ctx->pc = 0x1D5438u;
    // 0x1d5438: 0xc073462  jal         func_1CD188
    ctx->pc = 0x1D5438u;
    SET_GPR_U32(ctx, 31, 0x1D5440u);
    ctx->pc = 0x1D543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5438u;
    // 0x1d543c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1D5438u, 0x1D5440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5440u;
label_1d5440:
    // 0x1d5440: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d5440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5444:
    // 0x1d5444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5448: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5448u;
        // 0x1d544c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5450u;
}
