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

// Function: sub_001A9D78
// Address: 0x1a9d78 - 0x1a9e90
void sub_001A9D78_0x1a9d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9D78_0x1a9d78");
#endif

    ctx->pc = 0x1a9d78u;

    // 0x1a9d78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a9d7c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9D7Cu;
    {
        const bool branch_taken_0x1a9d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D7Cu;
        // 0x1a9d80: 0x8ca90014  lw          $t1, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d7c) {
            ctx->pc = 0x1A9D90u;
            goto label_1a9d90;
        }
    }
    ctx->pc = 0x1A9D84u;
    // 0x1a9d84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1a9d88: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D88u;
        // 0x1a9d8c: 0xc440d354  lwc1        $f0, -0x2CAC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9D90u;
label_1a9d90:
    // 0x1a9d90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9d94: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A9D94u;
    {
        const bool branch_taken_0x1a9d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9d94) {
            ctx->pc = 0x1A9D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9D94u;
            // 0x1a9d98: 0x8ca80000  lw          $t0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9DECu;
            goto label_1a9dec;
        }
    }
    ctx->pc = 0x1A9D9Cu;
    // 0x1a9d9c: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a9d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a9da0: 0x25260001  addiu       $a2, $t1, 0x1
    ctx->pc = 0x1a9da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1a9da4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x1a9da4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a9da8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a9dac: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1a9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a9db0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a9db0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1a9db4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1a9db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a9db8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A9DB8u;
    {
        const bool branch_taken_0x1a9db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DB8u;
        // 0x1a9dbc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9db8) {
            ctx->pc = 0x1A9DE8u;
            goto label_1a9de8;
        }
    }
    ctx->pc = 0x1A9DC0u;
    // 0x1a9dc0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1a9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a9dc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a9dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9dc8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9dcc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9DCCu;
    {
        const bool branch_taken_0x1a9dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DCCu;
        // 0x1a9dd0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9dcc) {
            ctx->pc = 0x1A9DDCu;
            goto label_1a9ddc;
        }
    }
    ctx->pc = 0x1A9DD4u;
    // 0x1a9dd4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9DD4u;
    {
        const bool branch_taken_0x1a9dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9dd4) {
            ctx->pc = 0x1A9DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9DD4u;
            // 0x1a9dd8: 0x8ca80000  lw          $t0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9DECu;
            goto label_1a9dec;
        }
    }
    ctx->pc = 0x1A9DDCu;
label_1a9ddc:
    // 0x1a9ddc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a9ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1a9de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DE0u;
        // 0x1a9de4: 0xc440d350  lwc1        $f0, -0x2CB0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9DE8u;
label_1a9de8:
    // 0x1a9de8: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1a9de8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a9dec:
    // 0x1a9dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9df0: 0x15020023  bne         $t0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A9DF0u;
    {
        const bool branch_taken_0x1a9df0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DF0u;
        // 0x1a9df4: 0x25260001  addiu       $a2, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9df0) {
            ctx->pc = 0x1A9E80u;
            goto label_1a9e80;
        }
    }
    ctx->pc = 0x1A9DF8u;
    // 0x1a9df8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a9dfc: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x1a9dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a9e00: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a9e04: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1a9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a9e08: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a9e08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1a9e0c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1a9e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a9e10: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A9E10u;
    {
        const bool branch_taken_0x1a9e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E10u;
        // 0x1a9e14: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e10) {
            ctx->pc = 0x1A9E80u;
            goto label_1a9e80;
        }
    }
    ctx->pc = 0x1A9E18u;
    // 0x1a9e18: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1a9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a9e1c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a9e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9e20: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1a9e20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a9e24: 0x54e8000d  bnel        $a3, $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A9E24u;
    {
        const bool branch_taken_0x1a9e24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1a9e24) {
            ctx->pc = 0x1A9E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9E24u;
            // 0x1a9e28: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9E5Cu;
            goto label_1a9e5c;
        }
    }
    ctx->pc = 0x1A9E2Cu;
    // 0x1a9e2c: 0x8c82018c  lw          $v0, 0x18C($a0)
    ctx->pc = 0x1a9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x1a9e30: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a9e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a9e34: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9E34u;
    {
        const bool branch_taken_0x1a9e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9e34) {
            ctx->pc = 0x1A9E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9E34u;
            // 0x1a9e38: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9E5Cu;
            goto label_1a9e5c;
        }
    }
    ctx->pc = 0x1A9E3Cu;
    // 0x1a9e3c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a9e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a9e40: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1a9e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a9e44: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9E44u;
    {
        const bool branch_taken_0x1a9e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a9e44) {
            ctx->pc = 0x1A9E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9E44u;
            // 0x1a9e48: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9E5Cu;
            goto label_1a9e5c;
        }
    }
    ctx->pc = 0x1A9E4Cu;
    // 0x1a9e4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1a9e50: 0xac87018c  sw          $a3, 0x18C($a0)
    ctx->pc = 0x1a9e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 396), GPR_U32(ctx, 7));
    // 0x1a9e54: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E54u;
        // 0x1a9e58: 0xc440d358  lwc1        $f0, -0x2CA8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9E5Cu;
label_1a9e5c:
    // 0x1a9e5c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9E5Cu;
    {
        const bool branch_taken_0x1a9e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E5Cu;
        // 0x1a9e60: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e5c) {
            ctx->pc = 0x1A9E6Cu;
            goto label_1a9e6c;
        }
    }
    ctx->pc = 0x1A9E64u;
    // 0x1a9e64: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9E64u;
    {
        const bool branch_taken_0x1a9e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9e64) {
            ctx->pc = 0x1A9E80u;
            goto label_1a9e80;
        }
    }
    ctx->pc = 0x1A9E6Cu;
label_1a9e6c:
    // 0x1a9e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9e70: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a9e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1a9e74: 0xac82018c  sw          $v0, 0x18C($a0)
    ctx->pc = 0x1a9e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 396), GPR_U32(ctx, 2));
    // 0x1a9e78: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E78u;
        // 0x1a9e7c: 0xc460d350  lwc1        $f0, -0x2CB0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9E80u;
label_1a9e80:
    // 0x1a9e80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a9e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9e84: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9E8Cu;
    // 0x1a9e8c: 0x0  nop
    ctx->pc = 0x1a9e8cu;
    // NOP
    ctx->pc = 0x1a9e90u;
}
