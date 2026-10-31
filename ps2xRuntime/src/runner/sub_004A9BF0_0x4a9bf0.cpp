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

// Function: sub_004A9BF0
// Address: 0x4a9bf0 - 0x4a9c38
void sub_004A9BF0_0x4a9bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9BF0_0x4a9bf0");
#endif

    ctx->pc = 0x4a9bf0u;

    // 0x4a9bf0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x4A9BF0u;
    {
        const bool branch_taken_0x4a9bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9BF0u;
        // 0x4a9bf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9bf0) {
            ctx->pc = 0x4A9C30u;
            goto label_4a9c30;
        }
    }
    ctx->pc = 0x4A9BF8u;
    // 0x4a9bf8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x4a9bf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a9bfc: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x4a9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x4a9c00: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A9C00u;
    {
        const bool branch_taken_0x4a9c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9C00u;
        // 0x4a9c04: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9c00) {
            ctx->pc = 0x4A9C2Cu;
            goto label_4a9c2c;
        }
    }
    ctx->pc = 0x4A9C08u;
    // 0x4a9c08: 0x2442c531  addiu       $v0, $v0, -0x3ACF
    ctx->pc = 0x4a9c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
    // 0x4a9c0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a9c10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4a9c10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a9c14: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x4a9c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x4a9c18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9C18u;
    {
        const bool branch_taken_0x4a9c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9C18u;
        // 0x4a9c1c: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9c18) {
            ctx->pc = 0x4A9C30u;
            goto label_4a9c30;
        }
    }
    ctx->pc = 0x4A9C20u;
    // 0x4a9c20: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x4a9c20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x4a9c24: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A9C24u;
    {
        const bool branch_taken_0x4a9c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a9c24) {
            ctx->pc = 0x4A9C30u;
            goto label_4a9c30;
        }
    }
    ctx->pc = 0x4A9C2Cu;
label_4a9c2c:
    // 0x4a9c2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a9c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a9c30:
    // 0x4a9c30: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9C30u;
        // 0x4a9c34: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9C38u;
}
