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

// Function: sub_0043C5B0
// Address: 0x43c5b0 - 0x43c610
void sub_0043C5B0_0x43c5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043C5B0_0x43c5b0");
#endif

    switch (ctx->pc) {
        case 0x43c5d0u: goto label_43c5d0;
        case 0x43c5e0u: goto label_43c5e0;
        case 0x43c5e8u: goto label_43c5e8;
        case 0x43c5f8u: goto label_43c5f8;
        default: break;
    }

    ctx->pc = 0x43c5b0u;

    // 0x43c5b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43c5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43c5b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x43c5b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x43c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x43c5bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x43c5bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c5c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43c5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c5c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43c5c8: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x43C5C8u;
    SET_GPR_U32(ctx, 31, 0x43C5D0u);
    ctx->pc = 0x43C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C5C8u;
    // 0x43c5cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x43C5C8u, 0x43C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C5D0u;
label_43c5d0:
    // 0x43c5d0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x43C5D0u;
    {
        const bool branch_taken_0x43c5d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x43C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C5D0u;
        // 0x43c5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c5d0) {
            ctx->pc = 0x43C5F0u;
            goto label_43c5f0;
        }
    }
    ctx->pc = 0x43C5D8u;
    // 0x43c5d8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43C5D8u;
    SET_GPR_U32(ctx, 31, 0x43C5E0u);
    ctx->pc = 0x43C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C5D8u;
    // 0x43c5dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43C5D8u, 0x43C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C5E0u;
label_43c5e0:
    // 0x43c5e0: 0xc10f184  jal         func_43C610
    ctx->pc = 0x43C5E0u;
    SET_GPR_U32(ctx, 31, 0x43C5E8u);
    ctx->pc = 0x43C5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C5E0u;
    // 0x43c5e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C610u, 0x43C5E0u, 0x43C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C5E8u;
label_43c5e8:
    // 0x43c5e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x43C5E8u;
    {
        const bool branch_taken_0x43c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C5E8u;
        // 0x43c5ec: 0x2102f  dsubu       $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c5e8) {
            ctx->pc = 0x43C5F8u;
            goto label_43c5f8;
        }
    }
    ctx->pc = 0x43C5F0u;
label_43c5f0:
    // 0x43c5f0: 0xc10f184  jal         func_43C610
    ctx->pc = 0x43C5F0u;
    SET_GPR_U32(ctx, 31, 0x43C5F8u);
    ctx->pc = 0x43C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C5F0u;
    // 0x43c5f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C610u, 0x43C5F0u, 0x43C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C5F8u;
label_43c5f8:
    // 0x43c5f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43c5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43c5fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43c5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43c600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43c600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43c604: 0x3e00008  jr          $ra
    ctx->pc = 0x43C604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C604u;
        // 0x43c608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43C604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43C60Cu;
    // 0x43c60c: 0x0  nop
    ctx->pc = 0x43c60cu;
    // NOP
    ctx->pc = 0x43c610u;
}
