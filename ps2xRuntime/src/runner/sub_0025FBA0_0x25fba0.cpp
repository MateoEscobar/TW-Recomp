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

// Function: sub_0025FBA0
// Address: 0x25fba0 - 0x25fbd0
void sub_0025FBA0_0x25fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FBA0_0x25fba0");
#endif

    switch (ctx->pc) {
        case 0x25fbb8u: goto label_25fbb8;
        default: break;
    }

    ctx->pc = 0x25fba0u;

    // 0x25fba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25fba4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25fba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fbac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25fbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25fbb0: 0xc0973cc  jal         func_25CF30
    ctx->pc = 0x25FBB0u;
    SET_GPR_U32(ctx, 31, 0x25FBB8u);
    ctx->pc = 0x25FBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBB0u;
    // 0x25fbb4: 0x8c5000d4  lw          $s0, 0xD4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CF30u, 0x25FBB0u, 0x25FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBB8u;
label_25fbb8:
    // 0x25fbb8: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x25fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x25fbbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fbc0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x25fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x25fbc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25fbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x25FBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBC8u;
        // 0x25fbcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FBD0u;
}
