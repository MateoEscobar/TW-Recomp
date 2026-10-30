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

// Function: sub_00443CD8
// Address: 0x443cd8 - 0x443d60
void sub_00443CD8_0x443cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443CD8_0x443cd8");
#endif

    switch (ctx->pc) {
        case 0x443d08u: goto label_443d08;
        default: break;
    }

    ctx->pc = 0x443cd8u;

    // 0x443cd8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x443cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443cdc: 0x3c090052  lui         $t1, 0x52
    ctx->pc = 0x443cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)82 << 16));
    // 0x443ce0: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x443ce0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x443ce4: 0x25259ea0  addiu       $a1, $t1, -0x6160
    ctx->pc = 0x443ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942368));
    // 0x443ce8: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x443ce8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x443cec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x443cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443cf0: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x443cf0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x443cf4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x443cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x443cf8: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x443cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x519EB8u));
    // 0x443cfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x443CFCu;
    {
        const bool branch_taken_0x443cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443CFCu;
        // 0x443d00: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443cfc) {
            ctx->pc = 0x443D0Cu;
            goto label_443d0c;
        }
    }
    ctx->pc = 0x443D04u;
    // 0x443d04: 0x0  nop
    ctx->pc = 0x443d04u;
    // NOP
label_443d08:
    // 0x443d08: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x443d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_443d0c:
    // 0x443d0c: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x443D0Cu;
    {
        const bool branch_taken_0x443d0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x443d0c) {
            ctx->pc = 0x443D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443D0Cu;
            // 0x443d10: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443D38u;
            goto label_443d38;
        }
    }
    ctx->pc = 0x443D14u;
    // 0x443d14: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x443d14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x443d18: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x443d18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x443d1c: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x443d1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x443d20: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x443d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x443d24: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x443d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x443d28: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x443d28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x443d2c: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x443D2Cu;
    {
        const bool branch_taken_0x443d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x443d2c) {
            ctx->pc = 0x443D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443D2Cu;
            // 0x443d30: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_443d08;
        }
    }
    ctx->pc = 0x443D34u;
    // 0x443d34: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x443d34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_443d38:
    // 0x443d38: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x443D38u;
    {
        const bool branch_taken_0x443d38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x443D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443D38u;
        // 0x443d3c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443d38) {
            ctx->pc = 0x443D44u;
            goto label_443d44;
        }
    }
    ctx->pc = 0x443D40u;
    // 0x443d40: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x443d40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_443d44:
    // 0x443d44: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x443D44u;
    {
        const bool branch_taken_0x443d44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x443D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443D44u;
        // 0x443d48: 0x25229ea0  addiu       $v0, $t1, -0x6160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443d44) {
            ctx->pc = 0x443D54u;
            goto label_443d54;
        }
    }
    ctx->pc = 0x443D4Cu;
    // 0x443d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x443D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443D4Cu;
        // 0x443d50: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443D54u;
label_443d54:
    // 0x443d54: 0x3e00008  jr          $ra
    ctx->pc = 0x443D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443D54u;
        // 0x443d58: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443D5Cu;
    // 0x443d5c: 0x0  nop
    ctx->pc = 0x443d5cu;
    // NOP
    ctx->pc = 0x443d60u;
}
