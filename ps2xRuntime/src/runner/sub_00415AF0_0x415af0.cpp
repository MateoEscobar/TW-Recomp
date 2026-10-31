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

// Function: sub_00415AF0
// Address: 0x415af0 - 0x415b68
void sub_00415AF0_0x415af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415AF0_0x415af0");
#endif

    switch (ctx->pc) {
        case 0x415b18u: goto label_415b18;
        default: break;
    }

    ctx->pc = 0x415af0u;

    // 0x415af0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x415af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x415af4: 0x8c624854  lw          $v0, 0x4854($v1)
    ctx->pc = 0x415af4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x514854u));
    // 0x415af8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x415AF8u;
    {
        const bool branch_taken_0x415af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415AF8u;
        // 0x415afc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415af8) {
            ctx->pc = 0x415B5Cu;
            goto label_415b5c;
        }
    }
    ctx->pc = 0x415B00u;
    // 0x415b00: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x415b00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415b04: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x415b04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x415b08: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x415b08u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x415b0c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x415b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x415b10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x415b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415b14: 0x0  nop
    ctx->pc = 0x415b14u;
    // NOP
label_415b18:
    // 0x415b18: 0x8d024860  lw          $v0, 0x4860($t0)
    ctx->pc = 0x415b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18528)));
    // 0x415b1c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x415b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x415b20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x415b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x415b24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x415b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x415b28: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x415B28u;
    {
        const bool branch_taken_0x415b28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x415B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415B28u;
        // 0x415b2c: 0x8d424854  lw          $v0, 0x4854($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 18516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415b28) {
            ctx->pc = 0x415B4Cu;
            goto label_415b4c;
        }
    }
    ctx->pc = 0x415B30u;
    // 0x415b30: 0x8d22485c  lw          $v0, 0x485C($t1)
    ctx->pc = 0x415b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 18524)));
    // 0x415b34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x415b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x415b38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x415b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x415b3c: 0x8ce34858  lw          $v1, 0x4858($a3)
    ctx->pc = 0x415b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18520)));
    // 0x415b40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x415b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x415b44: 0x3e00008  jr          $ra
    ctx->pc = 0x415B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415B44u;
        // 0x415b48: 0xace34858  sw          $v1, 0x4858($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 18520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415B4Cu;
label_415b4c:
    // 0x415b4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x415b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x415b50: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x415b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x415b54: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x415B54u;
    {
        const bool branch_taken_0x415b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415B54u;
        // 0x415b58: 0x24c600f0  addiu       $a2, $a2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415b54) {
            ctx->pc = 0x415B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415b18;
        }
    }
    ctx->pc = 0x415B5Cu;
label_415b5c:
    // 0x415b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x415B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415B5Cu;
        // 0x415b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415B64u;
    // 0x415b64: 0x0  nop
    ctx->pc = 0x415b64u;
    // NOP
    ctx->pc = 0x415b68u;
}
