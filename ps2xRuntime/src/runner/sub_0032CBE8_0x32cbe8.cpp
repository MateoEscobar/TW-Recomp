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

// Function: sub_0032CBE8
// Address: 0x32cbe8 - 0x32cc48
void sub_0032CBE8_0x32cbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CBE8_0x32cbe8");
#endif

    switch (ctx->pc) {
        case 0x32cc30u: goto label_32cc30;
        default: break;
    }

    ctx->pc = 0x32cbe8u;

    // 0x32cbe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32cbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32cbec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32cbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32cbf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32cbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32cbf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32cbf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cbf8: 0x2404011c  addiu       $a0, $zero, 0x11C
    ctx->pc = 0x32cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x32cbfc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x32cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x32cc00: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x32cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x32cc04: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32CC04u;
    {
        const bool branch_taken_0x32cc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x32CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC04u;
        // 0x32cc08: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cc04) {
            ctx->pc = 0x32CC24u;
            goto label_32cc24;
        }
    }
    ctx->pc = 0x32CC0Cu;
    // 0x32cc0c: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x32cc0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x32cc10: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x32cc10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x32cc14: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x32cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x32cc18: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x32cc18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x32cc1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32CC1Cu;
    {
        const bool branch_taken_0x32cc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC1Cu;
        // 0x32cc20: 0xfe030010  sd          $v1, 0x10($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cc1c) {
            ctx->pc = 0x32CC34u;
            goto label_32cc34;
        }
    }
    ctx->pc = 0x32CC24u;
label_32cc24:
    // 0x32cc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32cc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc28: 0xc0cacd0  jal         func_32B340
    ctx->pc = 0x32CC28u;
    SET_GPR_U32(ctx, 31, 0x32CC30u);
    ctx->pc = 0x32CC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CC28u;
    // 0x32cc2c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B340u, 0x32CC28u, 0x32CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC30u;
label_32cc30:
    // 0x32cc30: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x32cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_32cc34:
    // 0x32cc34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32cc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cc38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x32CC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC3Cu;
        // 0x32cc40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CC44u;
    // 0x32cc44: 0x0  nop
    ctx->pc = 0x32cc44u;
    // NOP
    ctx->pc = 0x32cc48u;
}
