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

// Function: sub_004E2DF0
// Address: 0x4e2df0 - 0x4e2fa0
void sub_004E2DF0_0x4e2df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2DF0_0x4e2df0");
#endif

    switch (ctx->pc) {
        case 0x4e2e44u: goto label_4e2e44;
        case 0x4e2e78u: goto label_4e2e78;
        case 0x4e2ed0u: goto label_4e2ed0;
        case 0x4e2f00u: goto label_4e2f00;
        case 0x4e2f5cu: goto label_4e2f5c;
        case 0x4e2f70u: goto label_4e2f70;
        case 0x4e2f80u: goto label_4e2f80;
        default: break;
    }

    ctx->pc = 0x4e2df0u;

    // 0x4e2df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e2df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e2df4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4e2df4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2df8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e2df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4e2dfc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e2dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2e00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e2e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e2e04: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e2e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e2e08: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4e2e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e2e0c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e2e10: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E2E10u;
    {
        const bool branch_taken_0x4e2e10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2E10u;
        // 0x4e2e14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2e10) {
            ctx->pc = 0x4E2E4Cu;
            goto label_4e2e4c;
        }
    }
    ctx->pc = 0x4E2E18u;
    // 0x4e2e18: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4e2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4e2e1c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E2E1Cu;
    {
        const bool branch_taken_0x4e2e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2e1c) {
            ctx->pc = 0x4E2E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2E1Cu;
            // 0x4e2e20: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2E3Cu;
            goto label_4e2e3c;
        }
    }
    ctx->pc = 0x4E2E24u;
    // 0x4e2e24: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e2e28: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4e2e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4e2e2c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e2e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e2e30: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4E2E30u;
    {
        const bool branch_taken_0x4e2e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2e30) {
            ctx->pc = 0x4E2F68u;
            goto label_4e2f68;
        }
    }
    ctx->pc = 0x4E2E38u;
    // 0x4e2e38: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e2e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e2e3c:
    // 0x4e2e3c: 0xc138b26  jal         func_4E2C98
    ctx->pc = 0x4E2E3Cu;
    SET_GPR_U32(ctx, 31, 0x4E2E44u);
    ctx->pc = 0x4E2E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2E3Cu;
    // 0x4e2e40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2C98u, 0x4E2E3Cu, 0x4E2E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2E44u;
label_4e2e44:
    // 0x4e2e44: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4E2E44u;
    {
        const bool branch_taken_0x4e2e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2E44u;
        // 0x4e2e48: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2e44) {
            ctx->pc = 0x4E2F84u;
            goto label_4e2f84;
        }
    }
    ctx->pc = 0x4E2E4Cu;
label_4e2e4c:
    // 0x4e2e4c: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4E2E4Cu;
    {
        const bool branch_taken_0x4e2e4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e2e4c) {
            ctx->pc = 0x4E2E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2E4Cu;
            // 0x4e2e50: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2E80u;
            goto label_4e2e80;
        }
    }
    ctx->pc = 0x4E2E54u;
    // 0x4e2e54: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4e2e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4e2e58: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e2e5c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e2e60: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e2e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e2e64: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4E2E64u;
    {
        const bool branch_taken_0x4e2e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2E64u;
        // 0x4e2e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2e64) {
            ctx->pc = 0x4E2F54u;
            goto label_4e2f54;
        }
    }
    ctx->pc = 0x4E2E6Cu;
    // 0x4e2e6c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e2e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2e70: 0xc138b26  jal         func_4E2C98
    ctx->pc = 0x4E2E70u;
    SET_GPR_U32(ctx, 31, 0x4E2E78u);
    ctx->pc = 0x4E2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2E70u;
    // 0x4e2e74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2C98u, 0x4E2E70u, 0x4E2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2E78u;
label_4e2e78:
    // 0x4e2e78: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4E2E78u;
    {
        const bool branch_taken_0x4e2e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2E78u;
        // 0x4e2e7c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2e78) {
            ctx->pc = 0x4E2F84u;
            goto label_4e2f84;
        }
    }
    ctx->pc = 0x4E2E80u;
label_4e2e80:
    // 0x4e2e80: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e2e84: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E2E84u;
    {
        const bool branch_taken_0x4e2e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2E84u;
        // 0x4e2e88: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2e84) {
            ctx->pc = 0x4E2EA8u;
            goto label_4e2ea8;
        }
    }
    ctx->pc = 0x4E2E8Cu;
    // 0x4e2e8c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4e2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4e2e90: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4e2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e2e94: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E2E94u;
    {
        const bool branch_taken_0x4e2e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4e2e94) {
            ctx->pc = 0x4E2E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2E94u;
            // 0x4e2e98: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2EACu;
            goto label_4e2eac;
        }
    }
    ctx->pc = 0x4E2E9Cu;
    // 0x4e2e9c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4e2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e2ea0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4E2EA0u;
    {
        const bool branch_taken_0x4e2ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2EA0u;
        // 0x4e2ea4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2ea0) {
            ctx->pc = 0x4E2F18u;
            goto label_4e2f18;
        }
    }
    ctx->pc = 0x4E2EA8u;
label_4e2ea8:
    // 0x4e2ea8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e2ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e2eac:
    // 0x4e2eac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e2eb0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4E2EB0u;
    {
        const bool branch_taken_0x4e2eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2eb0) {
            ctx->pc = 0x4E2EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2EB0u;
            // 0x4e2eb4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2EF0u;
            goto label_4e2ef0;
        }
    }
    ctx->pc = 0x4E2EB8u;
    // 0x4e2eb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e2eb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2ebc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e2ec0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4E2EC0u;
    {
        const bool branch_taken_0x4e2ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2ec0) {
            ctx->pc = 0x4E2EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2EC0u;
            // 0x4e2ec4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2F18u;
            goto label_4e2f18;
        }
    }
    ctx->pc = 0x4E2EC8u;
    // 0x4e2ec8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e2ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e2ecc: 0x0  nop
    ctx->pc = 0x4e2eccu;
    // NOP
label_4e2ed0:
    // 0x4e2ed0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e2ed4: 0x0  nop
    ctx->pc = 0x4e2ed4u;
    // NOP
    // 0x4e2ed8: 0x0  nop
    ctx->pc = 0x4e2ed8u;
    // NOP
    // 0x4e2edc: 0x0  nop
    ctx->pc = 0x4e2edcu;
    // NOP
    // 0x4e2ee0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E2EE0u;
    {
        const bool branch_taken_0x4e2ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2ee0) {
            ctx->pc = 0x4E2EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2EE0u;
            // 0x4e2ee4: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e2ed0;
        }
    }
    ctx->pc = 0x4E2EE8u;
    // 0x4e2ee8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E2EE8u;
    {
        const bool branch_taken_0x4e2ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2EE8u;
        // 0x4e2eec: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2ee8) {
            ctx->pc = 0x4E2F18u;
            goto label_4e2f18;
        }
    }
    ctx->pc = 0x4E2EF0u;
label_4e2ef0:
    // 0x4e2ef0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e2ef4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E2EF4u;
    {
        const bool branch_taken_0x4e2ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2EF4u;
        // 0x4e2ef8: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2ef4) {
            ctx->pc = 0x4E2F18u;
            goto label_4e2f18;
        }
    }
    ctx->pc = 0x4E2EFCu;
    // 0x4e2efc: 0x0  nop
    ctx->pc = 0x4e2efcu;
    // NOP
label_4e2f00:
    // 0x4e2f00: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e2f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e2f04: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e2f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e2f08: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e2f0c: 0x0  nop
    ctx->pc = 0x4e2f0cu;
    // NOP
    // 0x4e2f10: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E2F10u;
    {
        const bool branch_taken_0x4e2f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E2F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2F10u;
        // 0x4e2f14: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2f10) {
            ctx->pc = 0x4E2F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e2f00;
        }
    }
    ctx->pc = 0x4E2F18u;
label_4e2f18:
    // 0x4e2f18: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4e2f18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2f1c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e2f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e2f20: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e2f24: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4e2f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4e2f28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E2F28u;
    {
        const bool branch_taken_0x4e2f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2F28u;
        // 0x4e2f2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2f28) {
            ctx->pc = 0x4E2F3Cu;
            goto label_4e2f3c;
        }
    }
    ctx->pc = 0x4E2F30u;
    // 0x4e2f30: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e2f34: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4e2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4e2f38: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4e2f38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e2f3c:
    // 0x4e2f3c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4E2F3Cu;
    {
        const bool branch_taken_0x4e2f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2F3Cu;
        // 0x4e2f40: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2f3c) {
            ctx->pc = 0x4E2F78u;
            goto label_4e2f78;
        }
    }
    ctx->pc = 0x4E2F44u;
    // 0x4e2f44: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e2f48: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E2F48u;
    {
        const bool branch_taken_0x4e2f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2f48) {
            ctx->pc = 0x4E2F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2F48u;
            // 0x4e2f4c: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2F64u;
            goto label_4e2f64;
        }
    }
    ctx->pc = 0x4E2F50u;
    // 0x4e2f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2f54:
    // 0x4e2f54: 0xc138a32  jal         func_4E28C8
    ctx->pc = 0x4E2F54u;
    SET_GPR_U32(ctx, 31, 0x4E2F5Cu);
    ctx->pc = 0x4E2F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2F54u;
    // 0x4e2f58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E28C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E28C8u, 0x4E2F54u, 0x4E2F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2F5Cu;
label_4e2f5c:
    // 0x4e2f5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E2F5Cu;
    {
        const bool branch_taken_0x4e2f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2F5Cu;
        // 0x4e2f60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2f5c) {
            ctx->pc = 0x4E2F8Cu;
            goto label_4e2f8c;
        }
    }
    ctx->pc = 0x4E2F64u;
label_4e2f64:
    // 0x4e2f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2f68:
    // 0x4e2f68: 0xc138a32  jal         func_4E28C8
    ctx->pc = 0x4E2F68u;
    SET_GPR_U32(ctx, 31, 0x4E2F70u);
    ctx->pc = 0x4E2F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2F68u;
    // 0x4e2f6c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E28C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E28C8u, 0x4E2F68u, 0x4E2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2F70u;
label_4e2f70:
    // 0x4e2f70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E2F70u;
    {
        const bool branch_taken_0x4e2f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2F70u;
        // 0x4e2f74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2f70) {
            ctx->pc = 0x4E2F8Cu;
            goto label_4e2f8c;
        }
    }
    ctx->pc = 0x4E2F78u;
label_4e2f78:
    // 0x4e2f78: 0xc138b26  jal         func_4E2C98
    ctx->pc = 0x4E2F78u;
    SET_GPR_U32(ctx, 31, 0x4E2F80u);
    ctx->pc = 0x4E2F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2F78u;
    // 0x4e2f7c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2C98u, 0x4E2F78u, 0x4E2F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2F80u;
label_4e2f80:
    // 0x4e2f80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4e2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e2f84:
    // 0x4e2f84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e2f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e2f88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e2f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2f8c:
    // 0x4e2f8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e2f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e2f90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e2f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e2f94: 0x3e00008  jr          $ra
    ctx->pc = 0x4E2F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2F94u;
        // 0x4e2f98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E2F9Cu;
    // 0x4e2f9c: 0x0  nop
    ctx->pc = 0x4e2f9cu;
    // NOP
    ctx->pc = 0x4e2fa0u;
}
