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

// Function: sub_00149B08
// Address: 0x149b08 - 0x149b58
void sub_00149B08_0x149b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149B08_0x149b08");
#endif

    switch (ctx->pc) {
        case 0x149b2cu: goto label_149b2c;
        case 0x149b48u: goto label_149b48;
        default: break;
    }

    ctx->pc = 0x149b08u;

    // 0x149b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149b0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x149b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149b10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149b14: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x149b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x149b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149b1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b20: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149b24: 0xc1135c6  jal         func_44D718
    ctx->pc = 0x149B24u;
    SET_GPR_U32(ctx, 31, 0x149B2Cu);
    ctx->pc = 0x149B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B24u;
    // 0x149b28: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D718u, 0x149B24u, 0x149B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B2Cu;
label_149b2c:
    // 0x149b2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149b30: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x149B30u;
    {
        const bool branch_taken_0x149b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x149B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B30u;
        // 0x149b34: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b30) {
            ctx->pc = 0x149B40u;
            goto label_149b40;
        }
    }
    ctx->pc = 0x149B38u;
    // 0x149b38: 0x24429b58  addiu       $v0, $v0, -0x64A8
    ctx->pc = 0x149b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941528));
    // 0x149b3c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x149b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_149b40:
    // 0x149b40: 0xc0525c8  jal         func_149720
    ctx->pc = 0x149B40u;
    SET_GPR_U32(ctx, 31, 0x149B48u);
    ctx->pc = 0x149B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B40u;
    // 0x149b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149720u, 0x149B40u, 0x149B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B48u;
label_149b48:
    // 0x149b48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149b50: 0x3e00008  jr          $ra
    ctx->pc = 0x149B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B50u;
        // 0x149b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149B58u;
}
