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

// Function: sub_004F0AC0
// Address: 0x4f0ac0 - 0x4f0c18
void sub_004F0AC0_0x4f0ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0AC0_0x4f0ac0");
#endif

    switch (ctx->pc) {
        case 0x4f0af0u: goto label_4f0af0;
        case 0x4f0b2cu: goto label_4f0b2c;
        case 0x4f0b80u: goto label_4f0b80;
        case 0x4f0bb0u: goto label_4f0bb0;
        case 0x4f0be8u: goto label_4f0be8;
        default: break;
    }

    ctx->pc = 0x4f0ac0u;

    // 0x4f0ac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f0ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4f0ac4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4f0ac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0ac8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4f0ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4f0acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f0accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f0ad0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f0ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4f0ad4: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4f0ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4f0ad8: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4f0ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4f0adc: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4F0ADCu;
    {
        const bool branch_taken_0x4f0adc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0ADCu;
        // 0x4f0ae0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0adc) {
            ctx->pc = 0x4F0B0Cu;
            goto label_4f0b0c;
        }
    }
    ctx->pc = 0x4F0AE4u;
    // 0x4f0ae4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f0ae8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4f0ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0aec: 0x0  nop
    ctx->pc = 0x4f0aecu;
    // NOP
label_4f0af0:
    // 0x4f0af0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4f0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4f0af4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4f0af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4f0af8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4F0AF8u;
    {
        const bool branch_taken_0x4f0af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0af8) {
            ctx->pc = 0x4F0AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0AF8u;
            // 0x4f0afc: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0B04u;
            goto label_4f0b04;
        }
    }
    ctx->pc = 0x4F0B00u;
    // 0x4f0b00: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4f0b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4f0b04:
    // 0x4f0b04: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4F0B04u;
    {
        const bool branch_taken_0x4f0b04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0b04) {
            ctx->pc = 0x4F0B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0B04u;
            // 0x4f0b08: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f0af0;
        }
    }
    ctx->pc = 0x4F0B0Cu;
label_4f0b0c:
    // 0x4f0b0c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4F0B0Cu;
    {
        const bool branch_taken_0x4f0b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0B0Cu;
        // 0x4f0b10: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0b0c) {
            ctx->pc = 0x4F0BC8u;
            goto label_4f0bc8;
        }
    }
    ctx->pc = 0x4F0B14u;
    // 0x4f0b14: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4f0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4f0b18: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4f0b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4f0b1c: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F0B1Cu;
    {
        const bool branch_taken_0x4f0b1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x4F0B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0B1Cu;
        // 0x4f0b20: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0b1c) {
            ctx->pc = 0x4F0B34u;
            goto label_4f0b34;
        }
    }
    ctx->pc = 0x4F0B24u;
    // 0x4f0b24: 0xc13c1ba  jal         func_4F06E8
    ctx->pc = 0x4F0B24u;
    SET_GPR_U32(ctx, 31, 0x4F0B2Cu);
    ctx->pc = 0x4F0B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0B24u;
    // 0x4f0b28: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F06E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F06E8u, 0x4F0B24u, 0x4F0B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0B2Cu;
label_4f0b2c:
    // 0x4f0b2c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4F0B2Cu;
    {
        const bool branch_taken_0x4f0b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0B2Cu;
        // 0x4f0b30: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0b2c) {
            ctx->pc = 0x4F0BECu;
            goto label_4f0bec;
        }
    }
    ctx->pc = 0x4F0B34u;
label_4f0b34:
    // 0x4f0b34: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4f0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f0b38: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F0B38u;
    {
        const bool branch_taken_0x4f0b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0B38u;
        // 0x4f0b3c: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0b38) {
            ctx->pc = 0x4F0B5Cu;
            goto label_4f0b5c;
        }
    }
    ctx->pc = 0x4F0B40u;
    // 0x4f0b40: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4f0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4f0b44: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4f0b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4f0b48: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F0B48u;
    {
        const bool branch_taken_0x4f0b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4f0b48) {
            ctx->pc = 0x4F0B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0B48u;
            // 0x4f0b4c: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0B60u;
            goto label_4f0b60;
        }
    }
    ctx->pc = 0x4F0B50u;
    // 0x4f0b50: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4f0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4f0b54: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4F0B54u;
    {
        const bool branch_taken_0x4f0b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0B54u;
        // 0x4f0b58: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0b54) {
            ctx->pc = 0x4F0BC8u;
            goto label_4f0bc8;
        }
    }
    ctx->pc = 0x4F0B5Cu;
label_4f0b5c:
    // 0x4f0b5c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4f0b60:
    // 0x4f0b60: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4f0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4f0b64: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4F0B64u;
    {
        const bool branch_taken_0x4f0b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0b64) {
            ctx->pc = 0x4F0B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0B64u;
            // 0x4f0b68: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0BA0u;
            goto label_4f0ba0;
        }
    }
    ctx->pc = 0x4F0B6Cu;
    // 0x4f0b6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4f0b6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0b70: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4f0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4f0b74: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4F0B74u;
    {
        const bool branch_taken_0x4f0b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0b74) {
            ctx->pc = 0x4F0B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0B74u;
            // 0x4f0b78: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0BC8u;
            goto label_4f0bc8;
        }
    }
    ctx->pc = 0x4F0B7Cu;
    // 0x4f0b7c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4f0b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4f0b80:
    // 0x4f0b80: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4f0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4f0b84: 0x0  nop
    ctx->pc = 0x4f0b84u;
    // NOP
    // 0x4f0b88: 0x0  nop
    ctx->pc = 0x4f0b88u;
    // NOP
    // 0x4f0b8c: 0x0  nop
    ctx->pc = 0x4f0b8cu;
    // NOP
    // 0x4f0b90: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4F0B90u;
    {
        const bool branch_taken_0x4f0b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0b90) {
            ctx->pc = 0x4F0B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0B90u;
            // 0x4f0b94: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f0b80;
        }
    }
    ctx->pc = 0x4F0B98u;
    // 0x4f0b98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4F0B98u;
    {
        const bool branch_taken_0x4f0b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0B98u;
        // 0x4f0b9c: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0b98) {
            ctx->pc = 0x4F0BC8u;
            goto label_4f0bc8;
        }
    }
    ctx->pc = 0x4F0BA0u;
label_4f0ba0:
    // 0x4f0ba0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4f0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f0ba4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F0BA4u;
    {
        const bool branch_taken_0x4f0ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4F0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0BA4u;
        // 0x4f0ba8: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0ba4) {
            ctx->pc = 0x4F0BC8u;
            goto label_4f0bc8;
        }
    }
    ctx->pc = 0x4F0BACu;
    // 0x4f0bac: 0x0  nop
    ctx->pc = 0x4f0bacu;
    // NOP
label_4f0bb0:
    // 0x4f0bb0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4f0bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4f0bb4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f0bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f0bb8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4f0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f0bbc: 0x0  nop
    ctx->pc = 0x4f0bbcu;
    // NOP
    // 0x4f0bc0: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4F0BC0u;
    {
        const bool branch_taken_0x4f0bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0BC0u;
        // 0x4f0bc4: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0bc0) {
            ctx->pc = 0x4F0BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f0bb0;
        }
    }
    ctx->pc = 0x4F0BC8u;
label_4f0bc8:
    // 0x4f0bc8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4f0bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0bcc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f0bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f0bd0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4f0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f0bd4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4f0bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4f0bd8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F0BD8u;
    {
        const bool branch_taken_0x4f0bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0bd8) {
            ctx->pc = 0x4F0BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0BD8u;
            // 0x4f0bdc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0BFCu;
            goto label_4f0bfc;
        }
    }
    ctx->pc = 0x4F0BE0u;
    // 0x4f0be0: 0xc13c1ba  jal         func_4F06E8
    ctx->pc = 0x4F0BE0u;
    SET_GPR_U32(ctx, 31, 0x4F0BE8u);
    ctx->pc = 0x4F0BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0BE0u;
    // 0x4f0be4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F06E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F06E8u, 0x4F0BE0u, 0x4F0BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0BE8u;
label_4f0be8:
    // 0x4f0be8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4f0be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0bec:
    // 0x4f0bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f0becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f0bf0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4f0bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4f0bf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4F0BF4u;
    {
        const bool branch_taken_0x4f0bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0BF4u;
        // 0x4f0bf8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0bf4) {
            ctx->pc = 0x4F0C00u;
            goto label_4f0c00;
        }
    }
    ctx->pc = 0x4F0BFCu;
label_4f0bfc:
    // 0x4f0bfc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4f0bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4f0c00:
    // 0x4f0c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f0c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0c04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f0c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f0c08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4f0c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f0c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F0C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C0Cu;
        // 0x4f0c10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0C14u;
    // 0x4f0c14: 0x0  nop
    ctx->pc = 0x4f0c14u;
    // NOP
    ctx->pc = 0x4f0c18u;
}
