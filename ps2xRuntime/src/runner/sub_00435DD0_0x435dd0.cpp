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

// Function: sub_00435DD0
// Address: 0x435dd0 - 0x435e70
void sub_00435DD0_0x435dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435DD0_0x435dd0");
#endif

    switch (ctx->pc) {
        case 0x435decu: goto label_435dec;
        case 0x435e00u: goto label_435e00;
        case 0x435e30u: goto label_435e30;
        case 0x435e40u: goto label_435e40;
        default: break;
    }

    ctx->pc = 0x435dd0u;

    // 0x435dd0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x435DD0u;
    {
        const bool branch_taken_0x435dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x435DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435DD0u;
        // 0x435dd4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435dd0) {
            ctx->pc = 0x435DECu;
            goto label_435dec;
        }
    }
    ctx->pc = 0x435DD8u;
    // 0x435dd8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x435dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x435ddc: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x435DDCu;
    {
        const bool branch_taken_0x435ddc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x435ddc) {
            ctx->pc = 0x435DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435DDCu;
            // 0x435de0: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435DF0u;
            goto label_435df0;
        }
    }
    ctx->pc = 0x435DE4u;
    // 0x435de4: 0x3e00008  jr          $ra
    ctx->pc = 0x435DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435DE4u;
        // 0x435de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435DECu;
label_435dec:
    // 0x435dec: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x435decu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_435df0:
    // 0x435df0: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x435df0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x435df4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x435df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x435df8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x435DF8u;
    {
        const bool branch_taken_0x435df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x435DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435DF8u;
        // 0x435dfc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435df8) {
            ctx->pc = 0x435E18u;
            goto label_435e18;
        }
    }
    ctx->pc = 0x435E00u;
label_435e00:
    // 0x435e00: 0x5103fffa  beql        $t0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x435E00u;
    {
        const bool branch_taken_0x435e00 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x435e00) {
            ctx->pc = 0x435E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435E00u;
            // 0x435e04: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435DECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435dec;
        }
    }
    ctx->pc = 0x435E08u;
    // 0x435e08: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x435e08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x435e0c: 0x0  nop
    ctx->pc = 0x435e0cu;
    // NOP
    // 0x435e10: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x435E10u;
    {
        const bool branch_taken_0x435e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x435E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435E10u;
        // 0x435e14: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435e10) {
            ctx->pc = 0x435E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435e00;
        }
    }
    ctx->pc = 0x435E18u;
label_435e18:
    // 0x435e18: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x435E18u;
    {
        const bool branch_taken_0x435e18 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x435E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435E18u;
        // 0x435e1c: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435e18) {
            ctx->pc = 0x435E2Cu;
            goto label_435e2c;
        }
    }
    ctx->pc = 0x435E20u;
    // 0x435e20: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x435e20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x435e24: 0x3e00008  jr          $ra
    ctx->pc = 0x435E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435E24u;
        // 0x435e28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435E2Cu;
label_435e2c:
    // 0x435e2c: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x435e2cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_435e30:
    // 0x435e30: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x435e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435e34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x435e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x435e38: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x435e38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x435e3c: 0x0  nop
    ctx->pc = 0x435e3cu;
    // NOP
label_435e40:
    // 0x435e40: 0x14680006  bne         $v1, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x435E40u;
    {
        const bool branch_taken_0x435e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x435E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435E40u;
        // 0x435e44: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435e40) {
            ctx->pc = 0x435E5Cu;
            goto label_435e5c;
        }
    }
    ctx->pc = 0x435E48u;
    // 0x435e48: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x435E48u;
    {
        const bool branch_taken_0x435e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x435e48) {
            ctx->pc = 0x435E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435E48u;
            // 0x435e4c: 0xa080ffff  sb          $zero, -0x1($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435E54u;
            goto label_435e54;
        }
    }
    ctx->pc = 0x435E50u;
    // 0x435e50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x435e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_435e54:
    // 0x435e54: 0x3e00008  jr          $ra
    ctx->pc = 0x435E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435E54u;
        // 0x435e58: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435E5Cu;
label_435e5c:
    // 0x435e5c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x435E5Cu;
    {
        const bool branch_taken_0x435e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x435e5c) {
            ctx->pc = 0x435E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435E5Cu;
            // 0x435e60: 0x80e30000  lb          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435e40;
        }
    }
    ctx->pc = 0x435E64u;
    // 0x435e64: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x435E64u;
    {
        const bool branch_taken_0x435e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435E64u;
        // 0x435e68: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435e64) {
            ctx->pc = 0x435E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435e30;
        }
    }
    ctx->pc = 0x435E6Cu;
    // 0x435e6c: 0x0  nop
    ctx->pc = 0x435e6cu;
    // NOP
    ctx->pc = 0x435e70u;
}
