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

// Function: sub_00237C38
// Address: 0x237c38 - 0x237c78
void sub_00237C38_0x237c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237C38_0x237c38");
#endif

    switch (ctx->pc) {
        case 0x237c4cu: goto label_237c4c;
        case 0x237c54u: goto label_237c54;
        case 0x237c64u: goto label_237c64;
        default: break;
    }

    ctx->pc = 0x237c38u;

    // 0x237c38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237c3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237c40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237c44: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237C44u;
    SET_GPR_U32(ctx, 31, 0x237C4Cu);
    ctx->pc = 0x237C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C44u;
    // 0x237c48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237C44u, 0x237C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C4Cu;
label_237c4c:
    // 0x237c4c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237C4Cu;
    SET_GPR_U32(ctx, 31, 0x237C54u);
    ctx->pc = 0x237C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C4Cu;
    // 0x237c50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237C4Cu, 0x237C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C54u;
label_237c54:
    // 0x237c54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237C54u;
    {
        const bool branch_taken_0x237c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C54u;
        // 0x237c58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c54) {
            ctx->pc = 0x237C6Cu;
            goto label_237c6c;
        }
    }
    ctx->pc = 0x237C5Cu;
    // 0x237c5c: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x237C5Cu;
    SET_GPR_U32(ctx, 31, 0x237C64u);
    ctx->pc = 0x237C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C5Cu;
    // 0x237c60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x237C5Cu, 0x237C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C64u;
label_237c64:
    // 0x237c64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x237C64u;
    {
        const bool branch_taken_0x237c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C64u;
        // 0x237c68: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c64) {
            ctx->pc = 0x237C70u;
            goto label_237c70;
        }
    }
    ctx->pc = 0x237C6Cu;
label_237c6c:
    // 0x237c6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x237c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237c70:
    // 0x237c70: 0x3e00008  jr          $ra
    ctx->pc = 0x237C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C70u;
        // 0x237c74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237C78u;
}
