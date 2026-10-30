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

// Function: sub_00198428
// Address: 0x198428 - 0x198458
void sub_00198428_0x198428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198428_0x198428");
#endif

    switch (ctx->pc) {
        case 0x198448u: goto label_198448;
        default: break;
    }

    ctx->pc = 0x198428u;

    // 0x198428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19842c: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x19842cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x198430: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x198434: 0x24a583d0  addiu       $a1, $a1, -0x7C30
    ctx->pc = 0x198434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935504));
    // 0x198438: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x198438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19843c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x19843cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x198440: 0xc120f80  jal         func_483E00
    ctx->pc = 0x198440u;
    SET_GPR_U32(ctx, 31, 0x198448u);
    ctx->pc = 0x198444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198440u;
    // 0x198444: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483E00u, 0x198440u, 0x198448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198448u;
label_198448:
    // 0x198448: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x198448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19844c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19844cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198450: 0x3e00008  jr          $ra
    ctx->pc = 0x198450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198450u;
        // 0x198454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198458u;
}
