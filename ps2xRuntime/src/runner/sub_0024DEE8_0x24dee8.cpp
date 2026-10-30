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

// Function: sub_0024DEE8
// Address: 0x24dee8 - 0x24df40
void sub_0024DEE8_0x24dee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DEE8_0x24dee8");
#endif

    switch (ctx->pc) {
        case 0x24df10u: goto label_24df10;
        case 0x24df24u: goto label_24df24;
        default: break;
    }

    ctx->pc = 0x24dee8u;

    // 0x24dee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24dee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24deec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x24deecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24def0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24def0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24def4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24def4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24def8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24def8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24defc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24defcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24df00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DF00u;
    {
        const bool branch_taken_0x24df00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF00u;
        // 0x24df04: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df00) {
            ctx->pc = 0x24DF10u;
            goto label_24df10;
        }
    }
    ctx->pc = 0x24DF08u;
    // 0x24df08: 0xc0941c2  jal         func_250708
    ctx->pc = 0x24DF08u;
    SET_GPR_U32(ctx, 31, 0x24DF10u);
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x24DF08u, 0x24DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF10u;
label_24df10:
    // 0x24df10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24df10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24df14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24df18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df1c: 0xc093efe  jal         func_24FBF8
    ctx->pc = 0x24DF1Cu;
    SET_GPR_U32(ctx, 31, 0x24DF24u);
    ctx->pc = 0x24DF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF1Cu;
    // 0x24df20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FBF8u, 0x24DF1Cu, 0x24DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF24u;
label_24df24:
    // 0x24df24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24df24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24df28: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x24df28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24df2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24df2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24df30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24df30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24df34: 0x3e00008  jr          $ra
    ctx->pc = 0x24DF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF34u;
        // 0x24df38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DF3Cu;
    // 0x24df3c: 0x0  nop
    ctx->pc = 0x24df3cu;
    // NOP
    ctx->pc = 0x24df40u;
}
