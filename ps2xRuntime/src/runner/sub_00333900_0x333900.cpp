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

// Function: sub_00333900
// Address: 0x333900 - 0x333938
void sub_00333900_0x333900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333900_0x333900");
#endif

    switch (ctx->pc) {
        case 0x333918u: goto label_333918;
        default: break;
    }

    ctx->pc = 0x333900u;

    // 0x333900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x333900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x333904: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x333904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x333908: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x333908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33390c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33390cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333910: 0xc0cce0c  jal         func_333830
    ctx->pc = 0x333910u;
    SET_GPR_U32(ctx, 31, 0x333918u);
    ctx->pc = 0x333914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333910u;
    // 0x333914: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333830u, 0x333910u, 0x333918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333918u;
label_333918:
    // 0x333918: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x333918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x33391c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33391cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333920: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x333920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333928: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x333928u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x33392c: 0x3e00008  jr          $ra
    ctx->pc = 0x33392Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33392Cu;
        // 0x333930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33392Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333934u;
    // 0x333934: 0x0  nop
    ctx->pc = 0x333934u;
    // NOP
    ctx->pc = 0x333938u;
}
