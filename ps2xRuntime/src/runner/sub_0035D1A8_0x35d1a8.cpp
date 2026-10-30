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

// Function: sub_0035D1A8
// Address: 0x35d1a8 - 0x35d218
void sub_0035D1A8_0x35d1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D1A8_0x35d1a8");
#endif

    switch (ctx->pc) {
        case 0x35d1c8u: goto label_35d1c8;
        case 0x35d1d0u: goto label_35d1d0;
        case 0x35d1e4u: goto label_35d1e4;
        case 0x35d1f0u: goto label_35d1f0;
        case 0x35d1fcu: goto label_35d1fc;
        default: break;
    }

    ctx->pc = 0x35d1a8u;

    // 0x35d1a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35d1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35d1ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d1b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35d1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35d1b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35d1bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d1c0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D1C0u;
    SET_GPR_U32(ctx, 31, 0x35D1C8u);
    ctx->pc = 0x35D1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D1C0u;
    // 0x35d1c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D1C0u, 0x35D1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D1C8u;
label_35d1c8:
    // 0x35d1c8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35D1C8u;
    SET_GPR_U32(ctx, 31, 0x35D1D0u);
    ctx->pc = 0x35D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D1C8u;
    // 0x35d1cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35D1C8u, 0x35D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D1D0u;
label_35d1d0:
    // 0x35d1d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35d1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1dc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35D1DCu;
    SET_GPR_U32(ctx, 31, 0x35D1E4u);
    ctx->pc = 0x35D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D1DCu;
    // 0x35d1e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35D1DCu, 0x35D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D1E4u;
label_35d1e4:
    // 0x35d1e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35d1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1e8: 0xc08e6e0  jal         func_239B80
    ctx->pc = 0x35D1E8u;
    SET_GPR_U32(ctx, 31, 0x35D1F0u);
    ctx->pc = 0x35D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D1E8u;
    // 0x35d1ec: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B80u, 0x35D1E8u, 0x35D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D1F0u;
label_35d1f0:
    // 0x35d1f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1f4: 0xc102562  jal         func_409588
    ctx->pc = 0x35D1F4u;
    SET_GPR_U32(ctx, 31, 0x35D1FCu);
    ctx->pc = 0x35D1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D1F4u;
    // 0x35d1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35D1F4u, 0x35D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D1FCu;
label_35d1fc:
    // 0x35d1fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35d1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d20c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D20Cu;
        // 0x35d210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D214u;
    // 0x35d214: 0x0  nop
    ctx->pc = 0x35d214u;
    // NOP
    ctx->pc = 0x35d218u;
}
