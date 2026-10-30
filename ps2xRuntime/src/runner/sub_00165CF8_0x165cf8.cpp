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

// Function: sub_00165CF8
// Address: 0x165cf8 - 0x165d40
void sub_00165CF8_0x165cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165CF8_0x165cf8");
#endif

    switch (ctx->pc) {
        case 0x165d28u: goto label_165d28;
        default: break;
    }

    ctx->pc = 0x165cf8u;

    // 0x165cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165cfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x165cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x165d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d08: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x165D08u;
    {
        const bool branch_taken_0x165d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D08u;
        // 0x165d0c: 0xae000608  sw          $zero, 0x608($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d08) {
            ctx->pc = 0x165D2Cu;
            goto label_165d2c;
        }
    }
    ctx->pc = 0x165D10u;
    // 0x165d10: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x165d10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x165d14: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x165D14u;
    {
        const bool branch_taken_0x165d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d14) {
            ctx->pc = 0x165D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165D14u;
            // 0x165d18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165D30u;
            goto label_165d30;
        }
    }
    ctx->pc = 0x165D1Cu;
    // 0x165d1c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x165d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x165d20: 0xc050fda  jal         func_143F68
    ctx->pc = 0x165D20u;
    SET_GPR_U32(ctx, 31, 0x165D28u);
    ctx->pc = 0x165D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165D20u;
    // 0x165d24: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x165D20u, 0x165D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D28u;
label_165d28:
    // 0x165d28: 0xae020608  sw          $v0, 0x608($s0)
    ctx->pc = 0x165d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 2));
label_165d2c:
    // 0x165d2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x165d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_165d30:
    // 0x165d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165d34: 0x3e00008  jr          $ra
    ctx->pc = 0x165D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D34u;
        // 0x165d38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165D3Cu;
    // 0x165d3c: 0x0  nop
    ctx->pc = 0x165d3cu;
    // NOP
    ctx->pc = 0x165d40u;
}
