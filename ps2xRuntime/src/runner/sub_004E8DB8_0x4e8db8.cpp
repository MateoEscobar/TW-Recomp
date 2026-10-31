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

// Function: sub_004E8DB8
// Address: 0x4e8db8 - 0x4e8f68
void sub_004E8DB8_0x4e8db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8DB8_0x4e8db8");
#endif

    switch (ctx->pc) {
        case 0x4e8e0cu: goto label_4e8e0c;
        case 0x4e8e40u: goto label_4e8e40;
        case 0x4e8e98u: goto label_4e8e98;
        case 0x4e8ec8u: goto label_4e8ec8;
        case 0x4e8f24u: goto label_4e8f24;
        case 0x4e8f38u: goto label_4e8f38;
        case 0x4e8f48u: goto label_4e8f48;
        default: break;
    }

    ctx->pc = 0x4e8db8u;

    // 0x4e8db8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e8db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e8dbc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4e8dbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8dc0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e8dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4e8dc4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e8dc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8dc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e8dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e8dcc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e8dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e8dd0: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4e8dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e8dd4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e8dd8: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E8DD8u;
    {
        const bool branch_taken_0x4e8dd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E8DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8DD8u;
        // 0x4e8ddc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8dd8) {
            ctx->pc = 0x4E8E14u;
            goto label_4e8e14;
        }
    }
    ctx->pc = 0x4E8DE0u;
    // 0x4e8de0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4e8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4e8de4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E8DE4u;
    {
        const bool branch_taken_0x4e8de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8de4) {
            ctx->pc = 0x4E8DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8DE4u;
            // 0x4e8de8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8E04u;
            goto label_4e8e04;
        }
    }
    ctx->pc = 0x4E8DECu;
    // 0x4e8dec: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e8decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e8df0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4e8df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4e8df4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e8df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e8df8: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4E8DF8u;
    {
        const bool branch_taken_0x4e8df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8df8) {
            ctx->pc = 0x4E8F30u;
            goto label_4e8f30;
        }
    }
    ctx->pc = 0x4E8E00u;
    // 0x4e8e00: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e8e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e8e04:
    // 0x4e8e04: 0xc13a318  jal         func_4E8C60
    ctx->pc = 0x4E8E04u;
    SET_GPR_U32(ctx, 31, 0x4E8E0Cu);
    ctx->pc = 0x4E8E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8E04u;
    // 0x4e8e08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8C60u, 0x4E8E04u, 0x4E8E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8E0Cu;
label_4e8e0c:
    // 0x4e8e0c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4E8E0Cu;
    {
        const bool branch_taken_0x4e8e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8E0Cu;
        // 0x4e8e10: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8e0c) {
            ctx->pc = 0x4E8F4Cu;
            goto label_4e8f4c;
        }
    }
    ctx->pc = 0x4E8E14u;
label_4e8e14:
    // 0x4e8e14: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4E8E14u;
    {
        const bool branch_taken_0x4e8e14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e8e14) {
            ctx->pc = 0x4E8E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8E14u;
            // 0x4e8e18: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8E48u;
            goto label_4e8e48;
        }
    }
    ctx->pc = 0x4E8E1Cu;
    // 0x4e8e1c: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4e8e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4e8e20: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e8e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e8e24: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e8e28: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e8e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e8e2c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4E8E2Cu;
    {
        const bool branch_taken_0x4e8e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E8E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8E2Cu;
        // 0x4e8e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8e2c) {
            ctx->pc = 0x4E8F1Cu;
            goto label_4e8f1c;
        }
    }
    ctx->pc = 0x4E8E34u;
    // 0x4e8e34: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e8e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8e38: 0xc13a318  jal         func_4E8C60
    ctx->pc = 0x4E8E38u;
    SET_GPR_U32(ctx, 31, 0x4E8E40u);
    ctx->pc = 0x4E8E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8E38u;
    // 0x4e8e3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8C60u, 0x4E8E38u, 0x4E8E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8E40u;
label_4e8e40:
    // 0x4e8e40: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4E8E40u;
    {
        const bool branch_taken_0x4e8e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8E40u;
        // 0x4e8e44: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8e40) {
            ctx->pc = 0x4E8F4Cu;
            goto label_4e8f4c;
        }
    }
    ctx->pc = 0x4E8E48u;
label_4e8e48:
    // 0x4e8e48: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e8e4c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E8E4Cu;
    {
        const bool branch_taken_0x4e8e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E8E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8E4Cu;
        // 0x4e8e50: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8e4c) {
            ctx->pc = 0x4E8E70u;
            goto label_4e8e70;
        }
    }
    ctx->pc = 0x4E8E54u;
    // 0x4e8e54: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4e8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4e8e58: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4e8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e8e5c: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E8E5Cu;
    {
        const bool branch_taken_0x4e8e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4e8e5c) {
            ctx->pc = 0x4E8E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8E5Cu;
            // 0x4e8e60: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8E74u;
            goto label_4e8e74;
        }
    }
    ctx->pc = 0x4E8E64u;
    // 0x4e8e64: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4e8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e8e68: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4E8E68u;
    {
        const bool branch_taken_0x4e8e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8E68u;
        // 0x4e8e6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8e68) {
            ctx->pc = 0x4E8EE0u;
            goto label_4e8ee0;
        }
    }
    ctx->pc = 0x4E8E70u;
label_4e8e70:
    // 0x4e8e70: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e8e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e8e74:
    // 0x4e8e74: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e8e78: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4E8E78u;
    {
        const bool branch_taken_0x4e8e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8e78) {
            ctx->pc = 0x4E8E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8E78u;
            // 0x4e8e7c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8EB8u;
            goto label_4e8eb8;
        }
    }
    ctx->pc = 0x4E8E80u;
    // 0x4e8e80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e8e80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8e84: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e8e88: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4E8E88u;
    {
        const bool branch_taken_0x4e8e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8e88) {
            ctx->pc = 0x4E8E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8E88u;
            // 0x4e8e8c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8EE0u;
            goto label_4e8ee0;
        }
    }
    ctx->pc = 0x4E8E90u;
    // 0x4e8e90: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e8e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e8e94: 0x0  nop
    ctx->pc = 0x4e8e94u;
    // NOP
label_4e8e98:
    // 0x4e8e98: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e8e9c: 0x0  nop
    ctx->pc = 0x4e8e9cu;
    // NOP
    // 0x4e8ea0: 0x0  nop
    ctx->pc = 0x4e8ea0u;
    // NOP
    // 0x4e8ea4: 0x0  nop
    ctx->pc = 0x4e8ea4u;
    // NOP
    // 0x4e8ea8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E8EA8u;
    {
        const bool branch_taken_0x4e8ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8ea8) {
            ctx->pc = 0x4E8EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8EA8u;
            // 0x4e8eac: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e8e98;
        }
    }
    ctx->pc = 0x4E8EB0u;
    // 0x4e8eb0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E8EB0u;
    {
        const bool branch_taken_0x4e8eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8EB0u;
        // 0x4e8eb4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8eb0) {
            ctx->pc = 0x4E8EE0u;
            goto label_4e8ee0;
        }
    }
    ctx->pc = 0x4E8EB8u;
label_4e8eb8:
    // 0x4e8eb8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e8eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e8ebc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E8EBCu;
    {
        const bool branch_taken_0x4e8ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E8EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8EBCu;
        // 0x4e8ec0: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8ebc) {
            ctx->pc = 0x4E8EE0u;
            goto label_4e8ee0;
        }
    }
    ctx->pc = 0x4E8EC4u;
    // 0x4e8ec4: 0x0  nop
    ctx->pc = 0x4e8ec4u;
    // NOP
label_4e8ec8:
    // 0x4e8ec8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e8ecc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e8eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e8ed0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e8ed4: 0x0  nop
    ctx->pc = 0x4e8ed4u;
    // NOP
    // 0x4e8ed8: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E8ED8u;
    {
        const bool branch_taken_0x4e8ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8ED8u;
        // 0x4e8edc: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8ed8) {
            ctx->pc = 0x4E8EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e8ec8;
        }
    }
    ctx->pc = 0x4E8EE0u;
label_4e8ee0:
    // 0x4e8ee0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4e8ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e8ee4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e8ee8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e8eec: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4e8eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4e8ef0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E8EF0u;
    {
        const bool branch_taken_0x4e8ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8EF0u;
        // 0x4e8ef4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8ef0) {
            ctx->pc = 0x4E8F04u;
            goto label_4e8f04;
        }
    }
    ctx->pc = 0x4E8EF8u;
    // 0x4e8ef8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e8efc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4e8efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4e8f00: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4e8f00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e8f04:
    // 0x4e8f04: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4E8F04u;
    {
        const bool branch_taken_0x4e8f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8F04u;
        // 0x4e8f08: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8f04) {
            ctx->pc = 0x4E8F40u;
            goto label_4e8f40;
        }
    }
    ctx->pc = 0x4E8F0Cu;
    // 0x4e8f0c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e8f10: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E8F10u;
    {
        const bool branch_taken_0x4e8f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8f10) {
            ctx->pc = 0x4E8F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8F10u;
            // 0x4e8f14: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8F2Cu;
            goto label_4e8f2c;
        }
    }
    ctx->pc = 0x4E8F18u;
    // 0x4e8f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e8f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e8f1c:
    // 0x4e8f1c: 0xc13a224  jal         func_4E8890
    ctx->pc = 0x4E8F1Cu;
    SET_GPR_U32(ctx, 31, 0x4E8F24u);
    ctx->pc = 0x4E8F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8F1Cu;
    // 0x4e8f20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8890u, 0x4E8F1Cu, 0x4E8F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8F24u;
label_4e8f24:
    // 0x4e8f24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E8F24u;
    {
        const bool branch_taken_0x4e8f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8F24u;
        // 0x4e8f28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8f24) {
            ctx->pc = 0x4E8F54u;
            goto label_4e8f54;
        }
    }
    ctx->pc = 0x4E8F2Cu;
label_4e8f2c:
    // 0x4e8f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e8f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e8f30:
    // 0x4e8f30: 0xc13a224  jal         func_4E8890
    ctx->pc = 0x4E8F30u;
    SET_GPR_U32(ctx, 31, 0x4E8F38u);
    ctx->pc = 0x4E8F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8F30u;
    // 0x4e8f34: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8890u, 0x4E8F30u, 0x4E8F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8F38u;
label_4e8f38:
    // 0x4e8f38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E8F38u;
    {
        const bool branch_taken_0x4e8f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8F38u;
        // 0x4e8f3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8f38) {
            ctx->pc = 0x4E8F54u;
            goto label_4e8f54;
        }
    }
    ctx->pc = 0x4E8F40u;
label_4e8f40:
    // 0x4e8f40: 0xc13a318  jal         func_4E8C60
    ctx->pc = 0x4E8F40u;
    SET_GPR_U32(ctx, 31, 0x4E8F48u);
    ctx->pc = 0x4E8F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8F40u;
    // 0x4e8f44: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8C60u, 0x4E8F40u, 0x4E8F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8F48u;
label_4e8f48:
    // 0x4e8f48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4e8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e8f4c:
    // 0x4e8f4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e8f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e8f50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e8f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e8f54:
    // 0x4e8f54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e8f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e8f58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e8f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e8f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E8F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8F5Cu;
        // 0x4e8f60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E8F64u;
    // 0x4e8f64: 0x0  nop
    ctx->pc = 0x4e8f64u;
    // NOP
    ctx->pc = 0x4e8f68u;
}
