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

// Function: sub_00435D30
// Address: 0x435d30 - 0x435da8
void sub_00435D30_0x435d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435D30_0x435d30");
#endif

    switch (ctx->pc) {
        case 0x435d48u: goto label_435d48;
        case 0x435d50u: goto label_435d50;
        case 0x435d70u: goto label_435d70;
        default: break;
    }

    ctx->pc = 0x435d30u;

    // 0x435d30: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x435d30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x435d34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x435D34u;
    {
        const bool branch_taken_0x435d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x435D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435D34u;
        // 0x435d38: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435d34) {
            ctx->pc = 0x435D50u;
            goto label_435d50;
        }
    }
    ctx->pc = 0x435D3Cu;
    // 0x435d3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x435d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435d40: 0x3e00008  jr          $ra
    ctx->pc = 0x435D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435D40u;
        // 0x435d44: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435D48u;
label_435d48:
    // 0x435d48: 0x3e00008  jr          $ra
    ctx->pc = 0x435D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435D48u;
        // 0x435d4c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435D50u;
label_435d50:
    // 0x435d50: 0x0  nop
    ctx->pc = 0x435d50u;
    // NOP
    // 0x435d54: 0x0  nop
    ctx->pc = 0x435d54u;
    // NOP
    // 0x435d58: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x435D58u;
    {
        const bool branch_taken_0x435d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x435D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435D58u;
        // 0x435d5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435d58) {
            ctx->pc = 0x435D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435d48;
        }
    }
    ctx->pc = 0x435D60u;
    // 0x435d60: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x435d60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x435d64: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x435D64u;
    {
        const bool branch_taken_0x435d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x435d64) {
            ctx->pc = 0x435D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435D64u;
            // 0x435d68: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435D90u;
            goto label_435d90;
        }
    }
    ctx->pc = 0x435D6Cu;
    // 0x435d6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x435d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_435d70:
    // 0x435d70: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x435d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x435d74: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x435d74u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x435d78: 0x10c0fff3  beqz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x435D78u;
    {
        const bool branch_taken_0x435d78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x435D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435D78u;
        // 0x435d7c: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435d78) {
            ctx->pc = 0x435D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435d48;
        }
    }
    ctx->pc = 0x435D80u;
    // 0x435d80: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x435d80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x435d84: 0x50c3fffa  beql        $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x435D84u;
    {
        const bool branch_taken_0x435d84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x435d84) {
            ctx->pc = 0x435D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435D84u;
            // 0x435d88: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435d70;
        }
    }
    ctx->pc = 0x435D8Cu;
    // 0x435d8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x435d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_435d90:
    // 0x435d90: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x435d90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x435d94: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x435D94u;
    {
        const bool branch_taken_0x435d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x435d94) {
            ctx->pc = 0x435D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435D94u;
            // 0x435d98: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435d50;
        }
    }
    ctx->pc = 0x435D9Cu;
    // 0x435d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x435D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435D9Cu;
        // 0x435da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435DA4u;
    // 0x435da4: 0x0  nop
    ctx->pc = 0x435da4u;
    // NOP
    ctx->pc = 0x435da8u;
}
