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

// Function: sub_0046DC30
// Address: 0x46dc30 - 0x46dc80
void sub_0046DC30_0x46dc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046DC30_0x46dc30");
#endif

    switch (ctx->pc) {
        case 0x46dc64u: goto label_46dc64;
        default: break;
    }

    ctx->pc = 0x46dc30u;

    // 0x46dc30: 0x8f8288ec  lw          $v0, -0x7714($gp)
    ctx->pc = 0x46dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936812)));
    // 0x46dc34: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46dc34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46dc38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46dc3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x46dc40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46dc44: 0xaf8288ec  sw          $v0, -0x7714($gp)
    ctx->pc = 0x46dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936812), GPR_U32(ctx, 2));
    // 0x46dc48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x46DC48u;
    {
        const bool branch_taken_0x46dc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DC48u;
        // 0x46dc4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dc48) {
            ctx->pc = 0x46DC68u;
            goto label_46dc68;
        }
    }
    ctx->pc = 0x46DC50u;
    // 0x46dc50: 0x8f848500  lw          $a0, -0x7B00($gp)
    ctx->pc = 0x46dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935808)));
    // 0x46dc54: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x46DC54u;
    {
        const bool branch_taken_0x46dc54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DC54u;
        // 0x46dc58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dc54) {
            ctx->pc = 0x46DC6Cu;
            goto label_46dc6c;
        }
    }
    ctx->pc = 0x46DC5Cu;
    // 0x46dc5c: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x46DC5Cu;
    SET_GPR_U32(ctx, 31, 0x46DC64u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x46DC5Cu, 0x46DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DC64u;
label_46dc64:
    // 0x46dc64: 0xaf808500  sw          $zero, -0x7B00($gp)
    ctx->pc = 0x46dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935808), GPR_U32(ctx, 0));
label_46dc68:
    // 0x46dc68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46dc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46dc6c:
    // 0x46dc6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46dc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46dc70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46dc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46dc74: 0x3e00008  jr          $ra
    ctx->pc = 0x46DC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DC74u;
        // 0x46dc78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46DC7Cu;
    // 0x46dc7c: 0x0  nop
    ctx->pc = 0x46dc7cu;
    // NOP
    ctx->pc = 0x46dc80u;
}
