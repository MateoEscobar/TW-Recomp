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

// Function: sub_00111C30
// Address: 0x111c30 - 0x111c80
void sub_00111C30_0x111c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111C30_0x111c30");
#endif

    switch (ctx->pc) {
        case 0x111c48u: goto label_111c48;
        default: break;
    }

    ctx->pc = 0x111c30u;

    // 0x111c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111c34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x111c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x111c38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111c40: 0xc044630  jal         func_1118C0
    ctx->pc = 0x111C40u;
    SET_GPR_U32(ctx, 31, 0x111C48u);
    ctx->pc = 0x111C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C40u;
    // 0x111c44: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1118C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1118C0u, 0x111C40u, 0x111C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C48u;
label_111c48:
    // 0x111c48: 0xae0001dc  sw          $zero, 0x1DC($s0)
    ctx->pc = 0x111c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
    // 0x111c4c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x111c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x111c50: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x111c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x111c54: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x111c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x111c58: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x111c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x111c5c: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x111c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
    // 0x111c60: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x111c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x111c64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x111c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x111C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C6Cu;
        // 0x111c70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111C74u;
    // 0x111c74: 0x0  nop
    ctx->pc = 0x111c74u;
    // NOP
    // 0x111c78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x111c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x111c7c: 0x0  nop
    ctx->pc = 0x111c7cu;
    // NOP
    ctx->pc = 0x111c80u;
}
