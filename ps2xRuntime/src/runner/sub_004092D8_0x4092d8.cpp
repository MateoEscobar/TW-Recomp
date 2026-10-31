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

// Function: sub_004092D8
// Address: 0x4092d8 - 0x409318
void sub_004092D8_0x4092d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004092D8_0x4092d8");
#endif

    switch (ctx->pc) {
        case 0x4092f4u: goto label_4092f4;
        default: break;
    }

    ctx->pc = 0x4092d8u;

    // 0x4092d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4092d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4092dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4092dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4092e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4092e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4092e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4092e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4092e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4092e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4092ec: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x4092ECu;
    SET_GPR_U32(ctx, 31, 0x4092F4u);
    ctx->pc = 0x4092F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4092ECu;
    // 0x4092f0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x4092ECu, 0x4092F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4092F4u;
label_4092f4:
    // 0x4092f4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4092f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4092f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4092f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4092fc: 0x202880a  movz        $s1, $s0, $v0
    ctx->pc = 0x4092fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    // 0x409300: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x409300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409304: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x409304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x409308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40930c: 0x3e00008  jr          $ra
    ctx->pc = 0x40930Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40930Cu;
        // 0x409310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40930Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409314u;
    // 0x409314: 0x0  nop
    ctx->pc = 0x409314u;
    // NOP
    ctx->pc = 0x409318u;
}
