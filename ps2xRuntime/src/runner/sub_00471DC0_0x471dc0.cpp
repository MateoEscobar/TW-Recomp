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

// Function: sub_00471DC0
// Address: 0x471dc0 - 0x471e90
void sub_00471DC0_0x471dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471DC0_0x471dc0");
#endif

    switch (ctx->pc) {
        case 0x471e00u: goto label_471e00;
        case 0x471e50u: goto label_471e50;
        default: break;
    }

    ctx->pc = 0x471dc0u;

    // 0x471dc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x471dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x471dc4: 0x8f8388f8  lw          $v1, -0x7708($gp)
    ctx->pc = 0x471dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
    // 0x471dc8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x471dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x471dcc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x471dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x471dd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x471dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x471dd4: 0x2442ad1c  addiu       $v0, $v0, -0x52E4
    ctx->pc = 0x471dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946076));
    // 0x471dd8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x471dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x471ddc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x471ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x471de0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x471de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x471de4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x471de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x471de8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x471de8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x471dec: 0x12120020  beq         $s0, $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x471DECu;
    {
        const bool branch_taken_0x471dec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x471DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471DECu;
        // 0x471df0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471dec) {
            ctx->pc = 0x471E70u;
            goto label_471e70;
        }
    }
    ctx->pc = 0x471DF4u;
    // 0x471df4: 0x3c130047  lui         $s3, 0x47
    ctx->pc = 0x471df4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)71 << 16));
    // 0x471df8: 0x8e03fff8  lw          $v1, -0x8($s0)
    ctx->pc = 0x471df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x471dfc: 0x0  nop
    ctx->pc = 0x471dfcu;
    // NOP
label_471e00:
    // 0x471e00: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x471e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x471e04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x471e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x471e08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x471E08u;
    {
        const bool branch_taken_0x471e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x471E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471E08u;
        // 0x471e0c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471e08) {
            ctx->pc = 0x471E38u;
            goto label_471e38;
        }
    }
    ctx->pc = 0x471E10u;
    // 0x471e10: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x471e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x471e14: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x471E14u;
    {
        const bool branch_taken_0x471e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x471e14) {
            ctx->pc = 0x471E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471E14u;
            // 0x471e18: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471E68u;
            goto label_471e68;
        }
    }
    ctx->pc = 0x471E1Cu;
    // 0x471e1c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x471e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x471e20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x471e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x471e24: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x471e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x471e28: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x471E28u;
    {
        const bool branch_taken_0x471e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x471E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471E28u;
        // 0x471e2c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471e28) {
            ctx->pc = 0x471E64u;
            goto label_471e64;
        }
    }
    ctx->pc = 0x471E30u;
    // 0x471e30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x471E30u;
    {
        const bool branch_taken_0x471e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471E30u;
        // 0x471e34: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471e30) {
            ctx->pc = 0x471E78u;
            goto label_471e78;
        }
    }
    ctx->pc = 0x471E38u;
label_471e38:
    // 0x471e38: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x471e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x471e3c: 0x26651f18  addiu       $a1, $s3, 0x1F18
    ctx->pc = 0x471e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 7960));
    // 0x471e40: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x471e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x471e44: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x471e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471e48: 0xc11c72c  jal         func_471CB0
    ctx->pc = 0x471E48u;
    SET_GPR_U32(ctx, 31, 0x471E50u);
    ctx->pc = 0x471E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471E48u;
    // 0x471e4c: 0x8e04fff8  lw          $a0, -0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471CB0u, 0x471E48u, 0x471E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471E50u;
label_471e50:
    // 0x471e50: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x471e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x471e54: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x471E54u;
    {
        const bool branch_taken_0x471e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x471e54) {
            ctx->pc = 0x471E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471E54u;
            // 0x471e58: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471E68u;
            goto label_471e68;
        }
    }
    ctx->pc = 0x471E5Cu;
    // 0x471e5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x471E5Cu;
    {
        const bool branch_taken_0x471e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471E5Cu;
        // 0x471e60: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471e5c) {
            ctx->pc = 0x471E74u;
            goto label_471e74;
        }
    }
    ctx->pc = 0x471E64u;
label_471e64:
    // 0x471e64: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x471e64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_471e68:
    // 0x471e68: 0x5612ffe5  bnel        $s0, $s2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x471E68u;
    {
        const bool branch_taken_0x471e68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x471e68) {
            ctx->pc = 0x471E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471E68u;
            // 0x471e6c: 0x8e03fff8  lw          $v1, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471e00;
        }
    }
    ctx->pc = 0x471E70u;
label_471e70:
    // 0x471e70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x471e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471e74:
    // 0x471e74: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x471e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_471e78:
    // 0x471e78: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x471e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x471e7c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x471e7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x471e80: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x471e80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x471e84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x471e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x471e88: 0x3e00008  jr          $ra
    ctx->pc = 0x471E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471E88u;
        // 0x471e8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471E90u;
}
