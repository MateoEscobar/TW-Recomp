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

// Function: sub_002DD1D8
// Address: 0x2dd1d8 - 0x2dd210
void sub_002DD1D8_0x2dd1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD1D8_0x2dd1d8");
#endif

    switch (ctx->pc) {
        case 0x2dd1f4u: goto label_2dd1f4;
        case 0x2dd1fcu: goto label_2dd1fc;
        default: break;
    }

    ctx->pc = 0x2dd1d8u;

    // 0x2dd1d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dd1dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd1e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dd1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dd1e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dd1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dd1e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2dd1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd1ec: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2DD1ECu;
    SET_GPR_U32(ctx, 31, 0x2DD1F4u);
    ctx->pc = 0x2DD1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD1ECu;
    // 0x2dd1f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DD1ECu, 0x2DD1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD1F4u;
label_2dd1f4:
    // 0x2dd1f4: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2DD1F4u;
    SET_GPR_U32(ctx, 31, 0x2DD1FCu);
    ctx->pc = 0x2DD1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD1F4u;
    // 0x2dd1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2DD1F4u, 0x2DD1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD1FCu;
label_2dd1fc:
    // 0x2dd1fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dd1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd204: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD204u;
        // 0x2dd208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD20Cu;
    // 0x2dd20c: 0x0  nop
    ctx->pc = 0x2dd20cu;
    // NOP
    ctx->pc = 0x2dd210u;
}
