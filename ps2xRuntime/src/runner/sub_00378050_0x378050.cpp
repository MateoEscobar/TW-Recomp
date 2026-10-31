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

// Function: sub_00378050
// Address: 0x378050 - 0x378088
void sub_00378050_0x378050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378050_0x378050");
#endif

    switch (ctx->pc) {
        case 0x378064u: goto label_378064;
        case 0x37806cu: goto label_37806c;
        case 0x378074u: goto label_378074;
        default: break;
    }

    ctx->pc = 0x378050u;

    // 0x378050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x378050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x378054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x378054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37805c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37805Cu;
    SET_GPR_U32(ctx, 31, 0x378064u);
    ctx->pc = 0x378060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37805Cu;
    // 0x378060: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37805Cu, 0x378064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378064u;
label_378064:
    // 0x378064: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378064u;
    SET_GPR_U32(ctx, 31, 0x37806Cu);
    ctx->pc = 0x378068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378064u;
    // 0x378068: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378064u, 0x37806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37806Cu;
label_37806c:
    // 0x37806c: 0xc0e5ada  jal         func_396B68
    ctx->pc = 0x37806Cu;
    SET_GPR_U32(ctx, 31, 0x378074u);
    ctx->pc = 0x378070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37806Cu;
    // 0x378070: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396B68u, 0x37806Cu, 0x378074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378074u;
label_378074:
    // 0x378074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378078: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37807c: 0x3e00008  jr          $ra
    ctx->pc = 0x37807Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37807Cu;
        // 0x378080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37807Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378084u;
    // 0x378084: 0x0  nop
    ctx->pc = 0x378084u;
    // NOP
    ctx->pc = 0x378088u;
}
