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

// Function: sub_00435CB0
// Address: 0x435cb0 - 0x435d30
void sub_00435CB0_0x435cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435CB0_0x435cb0");
#endif

    switch (ctx->pc) {
        case 0x435cc8u: goto label_435cc8;
        case 0x435ce8u: goto label_435ce8;
        default: break;
    }

    ctx->pc = 0x435cb0u;

    // 0x435cb0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x435cb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x435cb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x435CB4u;
    {
        const bool branch_taken_0x435cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x435CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435CB4u;
        // 0x435cb8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435cb4) {
            ctx->pc = 0x435CC8u;
            goto label_435cc8;
        }
    }
    ctx->pc = 0x435CBCu;
    // 0x435cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x435CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435CBCu;
        // 0x435cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435CC4u;
    // 0x435cc4: 0x0  nop
    ctx->pc = 0x435cc4u;
    // NOP
label_435cc8:
    // 0x435cc8: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x435cc8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x435ccc: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x435CCCu;
    {
        const bool branch_taken_0x435ccc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x435ccc) {
            ctx->pc = 0x435CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435CCCu;
            // 0x435cd0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435D10u;
            goto label_435d10;
        }
    }
    ctx->pc = 0x435CD4u;
    // 0x435cd4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x435cd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x435cd8: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x435CD8u;
    {
        const bool branch_taken_0x435cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x435cd8) {
            ctx->pc = 0x435CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435CD8u;
            // 0x435cdc: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435D04u;
            goto label_435d04;
        }
    }
    ctx->pc = 0x435CE0u;
    // 0x435ce0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x435ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435ce4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x435ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_435ce8:
    // 0x435ce8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x435ce8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x435cec: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x435CECu;
    {
        const bool branch_taken_0x435cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x435cec) {
            ctx->pc = 0x435CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435CECu;
            // 0x435cf0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435D10u;
            goto label_435d10;
        }
    }
    ctx->pc = 0x435CF4u;
    // 0x435cf4: 0x0  nop
    ctx->pc = 0x435cf4u;
    // NOP
    // 0x435cf8: 0x54c2fffb  bnel        $a2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x435CF8u;
    {
        const bool branch_taken_0x435cf8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x435cf8) {
            ctx->pc = 0x435CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435CF8u;
            // 0x435cfc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435ce8;
        }
    }
    ctx->pc = 0x435D00u;
    // 0x435d00: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x435d00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_435d04:
    // 0x435d04: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x435D04u;
    {
        const bool branch_taken_0x435d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x435d04) {
            ctx->pc = 0x435D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435D04u;
            // 0x435d08: 0x80630000  lb          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435D20u;
            goto label_435d20;
        }
    }
    ctx->pc = 0x435D0Cu;
    // 0x435d0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x435d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_435d10:
    // 0x435d10: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x435d10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x435d14: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x435D14u;
    {
        const bool branch_taken_0x435d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x435d14) {
            ctx->pc = 0x435D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435D14u;
            // 0x435d18: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435cc8;
        }
    }
    ctx->pc = 0x435D1Cu;
    // 0x435d1c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x435d1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_435d20:
    // 0x435d20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x435d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435d24: 0x3e00008  jr          $ra
    ctx->pc = 0x435D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435D24u;
        // 0x435d28: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435D2Cu;
    // 0x435d2c: 0x0  nop
    ctx->pc = 0x435d2cu;
    // NOP
    ctx->pc = 0x435d30u;
}
