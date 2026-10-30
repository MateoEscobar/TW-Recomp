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

// Function: sub_0042CD50
// Address: 0x42cd50 - 0x42ce28
void sub_0042CD50_0x42cd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042CD50_0x42cd50");
#endif

    switch (ctx->pc) {
        case 0x42cd88u: goto label_42cd88;
        default: break;
    }

    ctx->pc = 0x42cd50u;

    // 0x42cd50: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x42cd50u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cd54: 0x11a00032  beqz        $t5, . + 4 + (0x32 << 2)
    ctx->pc = 0x42CD54u;
    {
        const bool branch_taken_0x42cd54 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CD54u;
        // 0x42cd58: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cd54) {
            ctx->pc = 0x42CE20u;
            goto label_42ce20;
        }
    }
    ctx->pc = 0x42CD5Cu;
    // 0x42cd5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x42cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x42cd60: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x42cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x42cd64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42cd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x42cd68: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x42CD68u;
    {
        const bool branch_taken_0x42cd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CD68u;
        // 0x42cd6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cd68) {
            ctx->pc = 0x42CE04u;
            goto label_42ce04;
        }
    }
    ctx->pc = 0x42CD70u;
    // 0x42cd70: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x42cd70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x42cd74: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x42cd74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x42cd78: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x42cd78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42cd7c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x42cd7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x42cd80: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x42cd80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cd84: 0x0  nop
    ctx->pc = 0x42cd84u;
    // NOP
label_42cd88:
    // 0x42cd88: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x42cd88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x42cd8c: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x42cd8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x42cd90: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x42CD90u;
    {
        const bool branch_taken_0x42cd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42cd90) {
            ctx->pc = 0x42CDDCu;
            goto label_42cddc;
        }
    }
    ctx->pc = 0x42CD98u;
    // 0x42cd98: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x42cd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x42cd9c: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x42cd9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x42cda0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x42CDA0u;
    {
        const bool branch_taken_0x42cda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42cda0) {
            ctx->pc = 0x42CDDCu;
            goto label_42cddc;
        }
    }
    ctx->pc = 0x42CDA8u;
    // 0x42cda8: 0x110b000a  beq         $t0, $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x42CDA8u;
    {
        const bool branch_taken_0x42cda8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        ctx->pc = 0x42CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CDA8u;
        // 0x42cdac: 0x10c1018  mult        $v0, $t0, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cda8) {
            ctx->pc = 0x42CDD4u;
            goto label_42cdd4;
        }
    }
    ctx->pc = 0x42CDB0u;
    // 0x42cdb0: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x42cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x42cdb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x42cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x42cdb8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x42cdb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x42cdbc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x42CDBCu;
    {
        const bool branch_taken_0x42cdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42cdbc) {
            ctx->pc = 0x42CDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42CDBCu;
            // 0x42cdc0: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42CDF8u;
            goto label_42cdf8;
        }
    }
    ctx->pc = 0x42CDC4u;
    // 0x42cdc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42cdc8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x42cdc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x42cdcc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x42CDCCu;
    {
        const bool branch_taken_0x42cdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42cdcc) {
            ctx->pc = 0x42CDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42CDCCu;
            // 0x42cdd0: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42CDF8u;
            goto label_42cdf8;
        }
    }
    ctx->pc = 0x42CDD4u;
label_42cdd4:
    // 0x42cdd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x42CDD4u;
    {
        const bool branch_taken_0x42cdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CDD4u;
        // 0x42cdd8: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cdd4) {
            ctx->pc = 0x42CDF4u;
            goto label_42cdf4;
        }
    }
    ctx->pc = 0x42CDDCu;
label_42cddc:
    // 0x42cddc: 0x5020006  bltzl       $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42CDDCu;
    {
        const bool branch_taken_0x42cddc = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x42cddc) {
            ctx->pc = 0x42CDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42CDDCu;
            // 0x42cde0: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42CDF8u;
            goto label_42cdf8;
        }
    }
    ctx->pc = 0x42CDE4u;
    // 0x42cde4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x42cde8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x42cde8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x42cdec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42CDECu;
    {
        const bool branch_taken_0x42cdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CDECu;
        // 0x42cdf0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cdec) {
            ctx->pc = 0x42CE08u;
            goto label_42ce08;
        }
    }
    ctx->pc = 0x42CDF4u;
label_42cdf4:
    // 0x42cdf4: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x42cdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_42cdf8:
    // 0x42cdf8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x42cdfc: 0x1449ffe2  bne         $v0, $t1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x42CDFCu;
    {
        const bool branch_taken_0x42cdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x42CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CDFCu;
        // 0x42ce00: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cdfc) {
            ctx->pc = 0x42CD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42cd88;
        }
    }
    ctx->pc = 0x42CE04u;
label_42ce04:
    // 0x42ce04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42ce08:
    // 0x42ce08: 0x11020005  beq         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42CE08u;
    {
        const bool branch_taken_0x42ce08 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x42CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CE08u;
        // 0x42ce0c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ce08) {
            ctx->pc = 0x42CE20u;
            goto label_42ce20;
        }
    }
    ctx->pc = 0x42CE10u;
    // 0x42ce10: 0x1031018  mult        $v0, $t0, $v1
    ctx->pc = 0x42ce10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x42ce14: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x42ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x42ce18: 0x3e00008  jr          $ra
    ctx->pc = 0x42CE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CE18u;
        // 0x42ce1c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42CE20u;
label_42ce20:
    // 0x42ce20: 0x3e00008  jr          $ra
    ctx->pc = 0x42CE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CE20u;
        // 0x42ce24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42CE28u;
}
