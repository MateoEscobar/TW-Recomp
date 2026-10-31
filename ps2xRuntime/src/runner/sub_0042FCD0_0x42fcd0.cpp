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

// Function: sub_0042FCD0
// Address: 0x42fcd0 - 0x430088
void sub_0042FCD0_0x42fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042FCD0_0x42fcd0");
#endif

    ctx->pc = 0x42fcd0u;

    // 0x42fcd0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42fcd4: 0x8c8261d8  lw          $v0, 0x61D8($a0)
    ctx->pc = 0x42fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5161D8u));
    // 0x42fcd8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FCD8u;
    {
        const bool branch_taken_0x42fcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FCD8u;
        // 0x42fcdc: 0x248561d8  addiu       $a1, $a0, 0x61D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fcd8) {
            ctx->pc = 0x42FCFCu;
            goto label_42fcfc;
        }
    }
    ctx->pc = 0x42FCE0u;
    // 0x42fce0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FCE0u;
    {
        const bool branch_taken_0x42fce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FCE0u;
        // 0x42fce4: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fce0) {
            ctx->pc = 0x42FCFCu;
            goto label_42fcfc;
        }
    }
    ctx->pc = 0x42FCE8u;
    // 0x42fce8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42fcec: 0x2463c390  addiu       $v1, $v1, -0x3C70
    ctx->pc = 0x42fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951824));
    // 0x42fcf0: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42fcf4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42fcf8: 0xac8361d8  sw          $v1, 0x61D8($a0)
    ctx->pc = 0x42fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25048), GPR_U32(ctx, 3));
label_42fcfc:
    // 0x42fcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x42FCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FCFCu;
        // 0x42fd00: 0x248261d8  addiu       $v0, $a0, 0x61D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FD04u;
    // 0x42fd04: 0x0  nop
    ctx->pc = 0x42fd04u;
    // NOP
    // 0x42fd08: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42fd0c: 0x8c8261e0  lw          $v0, 0x61E0($a0)
    ctx->pc = 0x42fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5161E0u));
    // 0x42fd10: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FD10u;
    {
        const bool branch_taken_0x42fd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FD10u;
        // 0x42fd14: 0x248561e0  addiu       $a1, $a0, 0x61E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fd10) {
            ctx->pc = 0x42FD34u;
            goto label_42fd34;
        }
    }
    ctx->pc = 0x42FD18u;
    // 0x42fd18: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FD18u;
    {
        const bool branch_taken_0x42fd18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FD18u;
        // 0x42fd1c: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fd18) {
            ctx->pc = 0x42FD34u;
            goto label_42fd34;
        }
    }
    ctx->pc = 0x42FD20u;
    // 0x42fd20: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42fd24: 0x2463c398  addiu       $v1, $v1, -0x3C68
    ctx->pc = 0x42fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951832));
    // 0x42fd28: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42fd2c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42fd30: 0xac8361e0  sw          $v1, 0x61E0($a0)
    ctx->pc = 0x42fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25056), GPR_U32(ctx, 3));
label_42fd34:
    // 0x42fd34: 0x3e00008  jr          $ra
    ctx->pc = 0x42FD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FD34u;
        // 0x42fd38: 0x248261e0  addiu       $v0, $a0, 0x61E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FD3Cu;
    // 0x42fd3c: 0x0  nop
    ctx->pc = 0x42fd3cu;
    // NOP
    // 0x42fd40: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42fd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42fd44: 0x8c8261e8  lw          $v0, 0x61E8($a0)
    ctx->pc = 0x42fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5161E8u));
    // 0x42fd48: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FD48u;
    {
        const bool branch_taken_0x42fd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FD48u;
        // 0x42fd4c: 0x248561e8  addiu       $a1, $a0, 0x61E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fd48) {
            ctx->pc = 0x42FD6Cu;
            goto label_42fd6c;
        }
    }
    ctx->pc = 0x42FD50u;
    // 0x42fd50: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FD50u;
    {
        const bool branch_taken_0x42fd50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FD50u;
        // 0x42fd54: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fd50) {
            ctx->pc = 0x42FD6Cu;
            goto label_42fd6c;
        }
    }
    ctx->pc = 0x42FD58u;
    // 0x42fd58: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42fd5c: 0x2463c3a0  addiu       $v1, $v1, -0x3C60
    ctx->pc = 0x42fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951840));
    // 0x42fd60: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42fd64: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42fd68: 0xac8361e8  sw          $v1, 0x61E8($a0)
    ctx->pc = 0x42fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25064), GPR_U32(ctx, 3));
label_42fd6c:
    // 0x42fd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x42FD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FD6Cu;
        // 0x42fd70: 0x248261e8  addiu       $v0, $a0, 0x61E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25064));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FD74u;
    // 0x42fd74: 0x0  nop
    ctx->pc = 0x42fd74u;
    // NOP
    // 0x42fd78: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42fd7c: 0x8c8261f0  lw          $v0, 0x61F0($a0)
    ctx->pc = 0x42fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5161F0u));
    // 0x42fd80: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FD80u;
    {
        const bool branch_taken_0x42fd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FD80u;
        // 0x42fd84: 0x248561f0  addiu       $a1, $a0, 0x61F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fd80) {
            ctx->pc = 0x42FDA4u;
            goto label_42fda4;
        }
    }
    ctx->pc = 0x42FD88u;
    // 0x42fd88: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FD88u;
    {
        const bool branch_taken_0x42fd88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FD88u;
        // 0x42fd8c: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fd88) {
            ctx->pc = 0x42FDA4u;
            goto label_42fda4;
        }
    }
    ctx->pc = 0x42FD90u;
    // 0x42fd90: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42fd94: 0x2463c3a8  addiu       $v1, $v1, -0x3C58
    ctx->pc = 0x42fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951848));
    // 0x42fd98: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42fd9c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42fda0: 0xac8361f0  sw          $v1, 0x61F0($a0)
    ctx->pc = 0x42fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25072), GPR_U32(ctx, 3));
label_42fda4:
    // 0x42fda4: 0x3e00008  jr          $ra
    ctx->pc = 0x42FDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FDA4u;
        // 0x42fda8: 0x248261f0  addiu       $v0, $a0, 0x61F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FDACu;
    // 0x42fdac: 0x0  nop
    ctx->pc = 0x42fdacu;
    // NOP
    // 0x42fdb0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42fdb4: 0x8c8261f8  lw          $v0, 0x61F8($a0)
    ctx->pc = 0x42fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5161F8u));
    // 0x42fdb8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FDB8u;
    {
        const bool branch_taken_0x42fdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FDB8u;
        // 0x42fdbc: 0x248561f8  addiu       $a1, $a0, 0x61F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fdb8) {
            ctx->pc = 0x42FDDCu;
            goto label_42fddc;
        }
    }
    ctx->pc = 0x42FDC0u;
    // 0x42fdc0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FDC0u;
    {
        const bool branch_taken_0x42fdc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FDC0u;
        // 0x42fdc4: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fdc0) {
            ctx->pc = 0x42FDDCu;
            goto label_42fddc;
        }
    }
    ctx->pc = 0x42FDC8u;
    // 0x42fdc8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42fdcc: 0x2463c3b0  addiu       $v1, $v1, -0x3C50
    ctx->pc = 0x42fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951856));
    // 0x42fdd0: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42fdd4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42fdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42fdd8: 0xac8361f8  sw          $v1, 0x61F8($a0)
    ctx->pc = 0x42fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25080), GPR_U32(ctx, 3));
label_42fddc:
    // 0x42fddc: 0x3e00008  jr          $ra
    ctx->pc = 0x42FDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FDDCu;
        // 0x42fde0: 0x248261f8  addiu       $v0, $a0, 0x61F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FDE4u;
    // 0x42fde4: 0x0  nop
    ctx->pc = 0x42fde4u;
    // NOP
    // 0x42fde8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42fdec: 0x8c826200  lw          $v0, 0x6200($a0)
    ctx->pc = 0x42fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x516200u));
    // 0x42fdf0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FDF0u;
    {
        const bool branch_taken_0x42fdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FDF0u;
        // 0x42fdf4: 0x24856200  addiu       $a1, $a0, 0x6200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fdf0) {
            ctx->pc = 0x42FE14u;
            goto label_42fe14;
        }
    }
    ctx->pc = 0x42FDF8u;
    // 0x42fdf8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FDF8u;
    {
        const bool branch_taken_0x42fdf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FDF8u;
        // 0x42fdfc: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fdf8) {
            ctx->pc = 0x42FE14u;
            goto label_42fe14;
        }
    }
    ctx->pc = 0x42FE00u;
    // 0x42fe00: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42fe04: 0x2463c3b8  addiu       $v1, $v1, -0x3C48
    ctx->pc = 0x42fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951864));
    // 0x42fe08: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42fe0c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42fe10: 0xac836200  sw          $v1, 0x6200($a0)
    ctx->pc = 0x42fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25088), GPR_U32(ctx, 3));
label_42fe14:
    // 0x42fe14: 0x3e00008  jr          $ra
    ctx->pc = 0x42FE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FE14u;
        // 0x42fe18: 0x24826200  addiu       $v0, $a0, 0x6200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FE1Cu;
    // 0x42fe1c: 0x0  nop
    ctx->pc = 0x42fe1cu;
    // NOP
    // 0x42fe20: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42fe24: 0x8c826208  lw          $v0, 0x6208($a0)
    ctx->pc = 0x42fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x516208u));
    // 0x42fe28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FE28u;
    {
        const bool branch_taken_0x42fe28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FE28u;
        // 0x42fe2c: 0x24856208  addiu       $a1, $a0, 0x6208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fe28) {
            ctx->pc = 0x42FE4Cu;
            goto label_42fe4c;
        }
    }
    ctx->pc = 0x42FE30u;
    // 0x42fe30: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FE30u;
    {
        const bool branch_taken_0x42fe30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FE30u;
        // 0x42fe34: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fe30) {
            ctx->pc = 0x42FE4Cu;
            goto label_42fe4c;
        }
    }
    ctx->pc = 0x42FE38u;
    // 0x42fe38: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42fe3c: 0x2463c3c0  addiu       $v1, $v1, -0x3C40
    ctx->pc = 0x42fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951872));
    // 0x42fe40: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42fe44: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42fe48: 0xac836208  sw          $v1, 0x6208($a0)
    ctx->pc = 0x42fe48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25096), GPR_U32(ctx, 3));
label_42fe4c:
    // 0x42fe4c: 0x3e00008  jr          $ra
    ctx->pc = 0x42FE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FE4Cu;
        // 0x42fe50: 0x24826208  addiu       $v0, $a0, 0x6208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FE54u;
    // 0x42fe54: 0x0  nop
    ctx->pc = 0x42fe54u;
    // NOP
    // 0x42fe58: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42fe5c: 0x8c826210  lw          $v0, 0x6210($a0)
    ctx->pc = 0x42fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x516210u));
    // 0x42fe60: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FE60u;
    {
        const bool branch_taken_0x42fe60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FE60u;
        // 0x42fe64: 0x24856210  addiu       $a1, $a0, 0x6210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fe60) {
            ctx->pc = 0x42FE84u;
            goto label_42fe84;
        }
    }
    ctx->pc = 0x42FE68u;
    // 0x42fe68: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FE68u;
    {
        const bool branch_taken_0x42fe68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FE68u;
        // 0x42fe6c: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fe68) {
            ctx->pc = 0x42FE84u;
            goto label_42fe84;
        }
    }
    ctx->pc = 0x42FE70u;
    // 0x42fe70: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42fe74: 0x2463c3c8  addiu       $v1, $v1, -0x3C38
    ctx->pc = 0x42fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951880));
    // 0x42fe78: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42fe7c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42fe80: 0xac836210  sw          $v1, 0x6210($a0)
    ctx->pc = 0x42fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25104), GPR_U32(ctx, 3));
label_42fe84:
    // 0x42fe84: 0x3e00008  jr          $ra
    ctx->pc = 0x42FE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FE84u;
        // 0x42fe88: 0x24826210  addiu       $v0, $a0, 0x6210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FE8Cu;
    // 0x42fe8c: 0x0  nop
    ctx->pc = 0x42fe8cu;
    // NOP
    // 0x42fe90: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42fe94: 0x8c826218  lw          $v0, 0x6218($a0)
    ctx->pc = 0x42fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x516218u));
    // 0x42fe98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FE98u;
    {
        const bool branch_taken_0x42fe98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FE98u;
        // 0x42fe9c: 0x24856218  addiu       $a1, $a0, 0x6218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fe98) {
            ctx->pc = 0x42FEBCu;
            goto label_42febc;
        }
    }
    ctx->pc = 0x42FEA0u;
    // 0x42fea0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FEA0u;
    {
        const bool branch_taken_0x42fea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FEA0u;
        // 0x42fea4: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fea0) {
            ctx->pc = 0x42FEBCu;
            goto label_42febc;
        }
    }
    ctx->pc = 0x42FEA8u;
    // 0x42fea8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42feac: 0x2463c3d0  addiu       $v1, $v1, -0x3C30
    ctx->pc = 0x42feacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951888));
    // 0x42feb0: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42feb4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42feb8: 0xac836218  sw          $v1, 0x6218($a0)
    ctx->pc = 0x42feb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25112), GPR_U32(ctx, 3));
label_42febc:
    // 0x42febc: 0x3e00008  jr          $ra
    ctx->pc = 0x42FEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FEBCu;
        // 0x42fec0: 0x24826218  addiu       $v0, $a0, 0x6218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FEC4u;
    // 0x42fec4: 0x0  nop
    ctx->pc = 0x42fec4u;
    // NOP
    // 0x42fec8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42fec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42fecc: 0x8c826220  lw          $v0, 0x6220($a0)
    ctx->pc = 0x42feccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x516220u));
    // 0x42fed0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FED0u;
    {
        const bool branch_taken_0x42fed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FED0u;
        // 0x42fed4: 0x24856220  addiu       $a1, $a0, 0x6220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fed0) {
            ctx->pc = 0x42FEF4u;
            goto label_42fef4;
        }
    }
    ctx->pc = 0x42FED8u;
    // 0x42fed8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FED8u;
    {
        const bool branch_taken_0x42fed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FED8u;
        // 0x42fedc: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fed8) {
            ctx->pc = 0x42FEF4u;
            goto label_42fef4;
        }
    }
    ctx->pc = 0x42FEE0u;
    // 0x42fee0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42fee4: 0x2463c3d8  addiu       $v1, $v1, -0x3C28
    ctx->pc = 0x42fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951896));
    // 0x42fee8: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42feec: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42feecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42fef0: 0xac836220  sw          $v1, 0x6220($a0)
    ctx->pc = 0x42fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25120), GPR_U32(ctx, 3));
label_42fef4:
    // 0x42fef4: 0x3e00008  jr          $ra
    ctx->pc = 0x42FEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FEF4u;
        // 0x42fef8: 0x24826220  addiu       $v0, $a0, 0x6220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FEFCu;
    // 0x42fefc: 0x0  nop
    ctx->pc = 0x42fefcu;
    // NOP
    // 0x42ff00: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42ff04: 0x8c826228  lw          $v0, 0x6228($a0)
    ctx->pc = 0x42ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x516228u));
    // 0x42ff08: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FF08u;
    {
        const bool branch_taken_0x42ff08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FF08u;
        // 0x42ff0c: 0x24856228  addiu       $a1, $a0, 0x6228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ff08) {
            ctx->pc = 0x42FF2Cu;
            goto label_42ff2c;
        }
    }
    ctx->pc = 0x42FF10u;
    // 0x42ff10: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FF10u;
    {
        const bool branch_taken_0x42ff10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FF10u;
        // 0x42ff14: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ff10) {
            ctx->pc = 0x42FF2Cu;
            goto label_42ff2c;
        }
    }
    ctx->pc = 0x42FF18u;
    // 0x42ff18: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42ff1c: 0x2463c3e0  addiu       $v1, $v1, -0x3C20
    ctx->pc = 0x42ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951904));
    // 0x42ff20: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42ff24: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42ff28: 0xac836228  sw          $v1, 0x6228($a0)
    ctx->pc = 0x42ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25128), GPR_U32(ctx, 3));
label_42ff2c:
    // 0x42ff2c: 0x3e00008  jr          $ra
    ctx->pc = 0x42FF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FF2Cu;
        // 0x42ff30: 0x24826228  addiu       $v0, $a0, 0x6228 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FF34u;
    // 0x42ff34: 0x0  nop
    ctx->pc = 0x42ff34u;
    // NOP
    // 0x42ff38: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42ff3c: 0x8c826230  lw          $v0, 0x6230($a0)
    ctx->pc = 0x42ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x516230u));
    // 0x42ff40: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FF40u;
    {
        const bool branch_taken_0x42ff40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FF40u;
        // 0x42ff44: 0x24856230  addiu       $a1, $a0, 0x6230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ff40) {
            ctx->pc = 0x42FF64u;
            goto label_42ff64;
        }
    }
    ctx->pc = 0x42FF48u;
    // 0x42ff48: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FF48u;
    {
        const bool branch_taken_0x42ff48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FF48u;
        // 0x42ff4c: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ff48) {
            ctx->pc = 0x42FF64u;
            goto label_42ff64;
        }
    }
    ctx->pc = 0x42FF50u;
    // 0x42ff50: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42ff54: 0x2463c3e8  addiu       $v1, $v1, -0x3C18
    ctx->pc = 0x42ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951912));
    // 0x42ff58: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42ff5c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42ff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42ff60: 0xac836230  sw          $v1, 0x6230($a0)
    ctx->pc = 0x42ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25136), GPR_U32(ctx, 3));
label_42ff64:
    // 0x42ff64: 0x3e00008  jr          $ra
    ctx->pc = 0x42FF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FF64u;
        // 0x42ff68: 0x24826230  addiu       $v0, $a0, 0x6230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FF6Cu;
    // 0x42ff6c: 0x0  nop
    ctx->pc = 0x42ff6cu;
    // NOP
    // 0x42ff70: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42ff74: 0x8c826238  lw          $v0, 0x6238($a0)
    ctx->pc = 0x42ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x516238u));
    // 0x42ff78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FF78u;
    {
        const bool branch_taken_0x42ff78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FF78u;
        // 0x42ff7c: 0x24856238  addiu       $a1, $a0, 0x6238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ff78) {
            ctx->pc = 0x42FF9Cu;
            goto label_42ff9c;
        }
    }
    ctx->pc = 0x42FF80u;
    // 0x42ff80: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FF80u;
    {
        const bool branch_taken_0x42ff80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FF80u;
        // 0x42ff84: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ff80) {
            ctx->pc = 0x42FF9Cu;
            goto label_42ff9c;
        }
    }
    ctx->pc = 0x42FF88u;
    // 0x42ff88: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42ff8c: 0x2463c3f0  addiu       $v1, $v1, -0x3C10
    ctx->pc = 0x42ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951920));
    // 0x42ff90: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42ff94: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42ff98: 0xac836238  sw          $v1, 0x6238($a0)
    ctx->pc = 0x42ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25144), GPR_U32(ctx, 3));
label_42ff9c:
    // 0x42ff9c: 0x3e00008  jr          $ra
    ctx->pc = 0x42FF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FF9Cu;
        // 0x42ffa0: 0x24826238  addiu       $v0, $a0, 0x6238 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FFA4u;
    // 0x42ffa4: 0x0  nop
    ctx->pc = 0x42ffa4u;
    // NOP
    // 0x42ffa8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42ffac: 0x8c826240  lw          $v0, 0x6240($a0)
    ctx->pc = 0x42ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x516240u));
    // 0x42ffb0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FFB0u;
    {
        const bool branch_taken_0x42ffb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FFB0u;
        // 0x42ffb4: 0x24856240  addiu       $a1, $a0, 0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ffb0) {
            ctx->pc = 0x42FFD4u;
            goto label_42ffd4;
        }
    }
    ctx->pc = 0x42FFB8u;
    // 0x42ffb8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FFB8u;
    {
        const bool branch_taken_0x42ffb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FFB8u;
        // 0x42ffbc: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ffb8) {
            ctx->pc = 0x42FFD4u;
            goto label_42ffd4;
        }
    }
    ctx->pc = 0x42FFC0u;
    // 0x42ffc0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42ffc4: 0x2463c3f8  addiu       $v1, $v1, -0x3C08
    ctx->pc = 0x42ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951928));
    // 0x42ffc8: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x42ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x42ffcc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x42ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x42ffd0: 0xac836240  sw          $v1, 0x6240($a0)
    ctx->pc = 0x42ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25152), GPR_U32(ctx, 3));
label_42ffd4:
    // 0x42ffd4: 0x3e00008  jr          $ra
    ctx->pc = 0x42FFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FFD4u;
        // 0x42ffd8: 0x24826240  addiu       $v0, $a0, 0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FFDCu;
    // 0x42ffdc: 0x0  nop
    ctx->pc = 0x42ffdcu;
    // NOP
    // 0x42ffe0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x42ffe4: 0x8c826248  lw          $v0, 0x6248($a0)
    ctx->pc = 0x42ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x516248u));
    // 0x42ffe8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42FFE8u;
    {
        const bool branch_taken_0x42ffe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FFE8u;
        // 0x42ffec: 0x24856248  addiu       $a1, $a0, 0x6248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ffe8) {
            ctx->pc = 0x43000Cu;
            goto label_43000c;
        }
    }
    ctx->pc = 0x42FFF0u;
    // 0x42fff0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42FFF0u;
    {
        const bool branch_taken_0x42fff0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FFF0u;
        // 0x42fff4: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fff0) {
            ctx->pc = 0x43000Cu;
            goto label_43000c;
        }
    }
    ctx->pc = 0x42FFF8u;
    // 0x42fff8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42fffc: 0x2463c400  addiu       $v1, $v1, -0x3C00
    ctx->pc = 0x42fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951936));
    // 0x430000: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x430000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x430004: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x430004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x430008: 0xac836248  sw          $v1, 0x6248($a0)
    ctx->pc = 0x430008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25160), GPR_U32(ctx, 3));
label_43000c:
    // 0x43000c: 0x3e00008  jr          $ra
    ctx->pc = 0x43000Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43000Cu;
        // 0x430010: 0x24826248  addiu       $v0, $a0, 0x6248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43000Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430014u;
    // 0x430014: 0x0  nop
    ctx->pc = 0x430014u;
    // NOP
    // 0x430018: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x430018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x43001c: 0x8c826250  lw          $v0, 0x6250($a0)
    ctx->pc = 0x43001cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x516250u));
    // 0x430020: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x430020u;
    {
        const bool branch_taken_0x430020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430020u;
        // 0x430024: 0x24856250  addiu       $a1, $a0, 0x6250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430020) {
            ctx->pc = 0x430044u;
            goto label_430044;
        }
    }
    ctx->pc = 0x430028u;
    // 0x430028: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x430028u;
    {
        const bool branch_taken_0x430028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430028u;
        // 0x43002c: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430028) {
            ctx->pc = 0x430044u;
            goto label_430044;
        }
    }
    ctx->pc = 0x430030u;
    // 0x430030: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x430030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x430034: 0x2463c408  addiu       $v1, $v1, -0x3BF8
    ctx->pc = 0x430034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951944));
    // 0x430038: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x430038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x43003c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x43003cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x430040: 0xac836250  sw          $v1, 0x6250($a0)
    ctx->pc = 0x430040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25168), GPR_U32(ctx, 3));
label_430044:
    // 0x430044: 0x3e00008  jr          $ra
    ctx->pc = 0x430044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430044u;
        // 0x430048: 0x24826250  addiu       $v0, $a0, 0x6250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43004Cu;
    // 0x43004c: 0x0  nop
    ctx->pc = 0x43004cu;
    // NOP
    // 0x430050: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x430050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x430054: 0x8c826258  lw          $v0, 0x6258($a0)
    ctx->pc = 0x430054u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x516258u));
    // 0x430058: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x430058u;
    {
        const bool branch_taken_0x430058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430058u;
        // 0x43005c: 0x24856258  addiu       $a1, $a0, 0x6258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430058) {
            ctx->pc = 0x43007Cu;
            goto label_43007c;
        }
    }
    ctx->pc = 0x430060u;
    // 0x430060: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x430060u;
    {
        const bool branch_taken_0x430060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x430064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430060u;
        // 0x430064: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430060) {
            ctx->pc = 0x43007Cu;
            goto label_43007c;
        }
    }
    ctx->pc = 0x430068u;
    // 0x430068: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x430068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x43006c: 0x2463c410  addiu       $v1, $v1, -0x3BF0
    ctx->pc = 0x43006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951952));
    // 0x430070: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x430070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x430074: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x430074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x430078: 0xac836258  sw          $v1, 0x6258($a0)
    ctx->pc = 0x430078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25176), GPR_U32(ctx, 3));
label_43007c:
    // 0x43007c: 0x3e00008  jr          $ra
    ctx->pc = 0x43007Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43007Cu;
        // 0x430080: 0x24826258  addiu       $v0, $a0, 0x6258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43007Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430084u;
    // 0x430084: 0x0  nop
    ctx->pc = 0x430084u;
    // NOP
    ctx->pc = 0x430088u;
}
