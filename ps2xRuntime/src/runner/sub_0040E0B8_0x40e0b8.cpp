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

// Function: sub_0040E0B8
// Address: 0x40e0b8 - 0x40e100
void sub_0040E0B8_0x40e0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040E0B8_0x40e0b8");
#endif

    switch (ctx->pc) {
        case 0x40e0d0u: goto label_40e0d0;
        case 0x40e0d8u: goto label_40e0d8;
        case 0x40e0ecu: goto label_40e0ec;
        default: break;
    }

    ctx->pc = 0x40e0b8u;

    // 0x40e0b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40e0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40e0bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40e0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40e0c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40e0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40e0c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40e0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40e0c8: 0xc103a34  jal         func_40E8D0
    ctx->pc = 0x40E0C8u;
    SET_GPR_U32(ctx, 31, 0x40E0D0u);
    ctx->pc = 0x40E0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E0C8u;
    // 0x40e0cc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40E0C8u, 0x40E0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E0D0u;
label_40e0d0:
    // 0x40e0d0: 0xc1048fa  jal         func_4123E8
    ctx->pc = 0x40E0D0u;
    SET_GPR_U32(ctx, 31, 0x40E0D8u);
    ctx->pc = 0x40E0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E0D0u;
    // 0x40e0d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123E8u, 0x40E0D0u, 0x40E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E0D8u;
label_40e0d8:
    // 0x40e0d8: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x40e0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x40e0dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40E0DCu;
    {
        const bool branch_taken_0x40e0dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E0DCu;
        // 0x40e0e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e0dc) {
            ctx->pc = 0x40E0F0u;
            goto label_40e0f0;
        }
    }
    ctx->pc = 0x40E0E4u;
    // 0x40e0e4: 0xc1048fa  jal         func_4123E8
    ctx->pc = 0x40E0E4u;
    SET_GPR_U32(ctx, 31, 0x40E0ECu);
    ctx->pc = 0x4123E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123E8u, 0x40E0E4u, 0x40E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E0ECu;
label_40e0ec:
    // 0x40e0ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40e0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40e0f0:
    // 0x40e0f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40e0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40e0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x40E0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E0F4u;
        // 0x40e0f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40E0FCu;
    // 0x40e0fc: 0x0  nop
    ctx->pc = 0x40e0fcu;
    // NOP
    ctx->pc = 0x40e100u;
}
