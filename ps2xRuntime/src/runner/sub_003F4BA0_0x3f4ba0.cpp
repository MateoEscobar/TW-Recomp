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

// Function: sub_003F4BA0
// Address: 0x3f4ba0 - 0x3f4bd0
void sub_003F4BA0_0x3f4ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4BA0_0x3f4ba0");
#endif

    switch (ctx->pc) {
        case 0x3f4bb8u: goto label_3f4bb8;
        default: break;
    }

    ctx->pc = 0x3f4ba0u;

    // 0x3f4ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f4ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f4ba4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f4ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f4ba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f4ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4bac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f4bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f4bb0: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F4BB0u;
    SET_GPR_U32(ctx, 31, 0x3F4BB8u);
    ctx->pc = 0x3F4BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4BB0u;
    // 0x3f4bb4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F4BB0u, 0x3F4BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4BB8u;
label_3f4bb8:
    // 0x3f4bb8: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3f4bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x3f4bbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f4bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f4bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f4bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f4bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F4BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4BC4u;
        // 0x3f4bc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F4BCCu;
    // 0x3f4bcc: 0x0  nop
    ctx->pc = 0x3f4bccu;
    // NOP
    ctx->pc = 0x3f4bd0u;
}
