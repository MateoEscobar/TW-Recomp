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

// Function: sub_00127CD8
// Address: 0x127cd8 - 0x127d48
void sub_00127CD8_0x127cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127CD8_0x127cd8");
#endif

    switch (ctx->pc) {
        case 0x127cf0u: goto label_127cf0;
        default: break;
    }

    ctx->pc = 0x127cd8u;

    // 0x127cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x127cdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x127cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x127ce0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x127ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x127ce8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x127CE8u;
    SET_GPR_U32(ctx, 31, 0x127CF0u);
    ctx->pc = 0x127CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127CE8u;
    // 0x127cec: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x127CE8u, 0x127CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127CF0u;
label_127cf0:
    // 0x127cf0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x127CF0u;
    {
        const bool branch_taken_0x127cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127cf0) {
            ctx->pc = 0x127CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127CF0u;
            // 0x127cf4: 0x26020180  addiu       $v0, $s0, 0x180 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127D34u;
            goto label_127d34;
        }
    }
    ctx->pc = 0x127CF8u;
    // 0x127cf8: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x127cf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x127cfc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x127cfcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x127d00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x127D00u;
    {
        const bool branch_taken_0x127d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D00u;
        // 0x127d04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d00) {
            ctx->pc = 0x127D30u;
            goto label_127d30;
        }
    }
    ctx->pc = 0x127D08u;
    // 0x127d08: 0x96030444  lhu         $v1, 0x444($s0)
    ctx->pc = 0x127d08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1092)));
    // 0x127d0c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x127D0Cu;
    {
        const bool branch_taken_0x127d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x127D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D0Cu;
        // 0x127d10: 0x26020180  addiu       $v0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d0c) {
            ctx->pc = 0x127D34u;
            goto label_127d34;
        }
    }
    ctx->pc = 0x127D14u;
    // 0x127d14: 0x8e030314  lw          $v1, 0x314($s0)
    ctx->pc = 0x127d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x127d18: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x127d18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x127d1c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x127d1cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x127d20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127D20u;
    {
        const bool branch_taken_0x127d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D20u;
        // 0x127d24: 0x26020180  addiu       $v0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d20) {
            ctx->pc = 0x127D34u;
            goto label_127d34;
        }
    }
    ctx->pc = 0x127D28u;
    // 0x127d28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x127D28u;
    {
        const bool branch_taken_0x127d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D28u;
        // 0x127d2c: 0x260202d0  addiu       $v0, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d28) {
            ctx->pc = 0x127D34u;
            goto label_127d34;
        }
    }
    ctx->pc = 0x127D30u;
label_127d30:
    // 0x127d30: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x127d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_127d34:
    // 0x127d34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x127d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x127D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D3Cu;
        // 0x127d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127D44u;
    // 0x127d44: 0x0  nop
    ctx->pc = 0x127d44u;
    // NOP
    ctx->pc = 0x127d48u;
}
