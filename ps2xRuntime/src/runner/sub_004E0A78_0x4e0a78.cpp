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

// Function: sub_004E0A78
// Address: 0x4e0a78 - 0x4e0c28
void sub_004E0A78_0x4e0a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0A78_0x4e0a78");
#endif

    switch (ctx->pc) {
        case 0x4e0accu: goto label_4e0acc;
        case 0x4e0b00u: goto label_4e0b00;
        case 0x4e0b58u: goto label_4e0b58;
        case 0x4e0b88u: goto label_4e0b88;
        case 0x4e0be4u: goto label_4e0be4;
        case 0x4e0bf8u: goto label_4e0bf8;
        case 0x4e0c08u: goto label_4e0c08;
        default: break;
    }

    ctx->pc = 0x4e0a78u;

    // 0x4e0a78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e0a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e0a7c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4e0a7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0a80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e0a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4e0a84: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e0a84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0a88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e0a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e0a8c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e0a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e0a90: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4e0a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e0a94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e0a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e0a98: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E0A98u;
    {
        const bool branch_taken_0x4e0a98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E0A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0A98u;
        // 0x4e0a9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0a98) {
            ctx->pc = 0x4E0AD4u;
            goto label_4e0ad4;
        }
    }
    ctx->pc = 0x4E0AA0u;
    // 0x4e0aa0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4e0aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4e0aa4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E0AA4u;
    {
        const bool branch_taken_0x4e0aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0aa4) {
            ctx->pc = 0x4E0AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0AA4u;
            // 0x4e0aa8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0AC4u;
            goto label_4e0ac4;
        }
    }
    ctx->pc = 0x4E0AACu;
    // 0x4e0aac: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0ab0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4e0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4e0ab4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e0ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e0ab8: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4E0AB8u;
    {
        const bool branch_taken_0x4e0ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0ab8) {
            ctx->pc = 0x4E0BF0u;
            goto label_4e0bf0;
        }
    }
    ctx->pc = 0x4E0AC0u;
    // 0x4e0ac0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e0ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e0ac4:
    // 0x4e0ac4: 0xc138248  jal         func_4E0920
    ctx->pc = 0x4E0AC4u;
    SET_GPR_U32(ctx, 31, 0x4E0ACCu);
    ctx->pc = 0x4E0AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0AC4u;
    // 0x4e0ac8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0920u, 0x4E0AC4u, 0x4E0ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0ACCu;
label_4e0acc:
    // 0x4e0acc: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4E0ACCu;
    {
        const bool branch_taken_0x4e0acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0ACCu;
        // 0x4e0ad0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0acc) {
            ctx->pc = 0x4E0C0Cu;
            goto label_4e0c0c;
        }
    }
    ctx->pc = 0x4E0AD4u;
label_4e0ad4:
    // 0x4e0ad4: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4E0AD4u;
    {
        const bool branch_taken_0x4e0ad4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e0ad4) {
            ctx->pc = 0x4E0AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0AD4u;
            // 0x4e0ad8: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0B08u;
            goto label_4e0b08;
        }
    }
    ctx->pc = 0x4E0ADCu;
    // 0x4e0adc: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4e0adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4e0ae0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e0ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0ae4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e0ae8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e0ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e0aec: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4E0AECu;
    {
        const bool branch_taken_0x4e0aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0AECu;
        // 0x4e0af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0aec) {
            ctx->pc = 0x4E0BDCu;
            goto label_4e0bdc;
        }
    }
    ctx->pc = 0x4E0AF4u;
    // 0x4e0af4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e0af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0af8: 0xc138248  jal         func_4E0920
    ctx->pc = 0x4E0AF8u;
    SET_GPR_U32(ctx, 31, 0x4E0B00u);
    ctx->pc = 0x4E0AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0AF8u;
    // 0x4e0afc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0920u, 0x4E0AF8u, 0x4E0B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0B00u;
label_4e0b00:
    // 0x4e0b00: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4E0B00u;
    {
        const bool branch_taken_0x4e0b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0B00u;
        // 0x4e0b04: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0b00) {
            ctx->pc = 0x4E0C0Cu;
            goto label_4e0c0c;
        }
    }
    ctx->pc = 0x4E0B08u;
label_4e0b08:
    // 0x4e0b08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e0b0c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E0B0Cu;
    {
        const bool branch_taken_0x4e0b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0B0Cu;
        // 0x4e0b10: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0b0c) {
            ctx->pc = 0x4E0B30u;
            goto label_4e0b30;
        }
    }
    ctx->pc = 0x4E0B14u;
    // 0x4e0b14: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4e0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4e0b18: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4e0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e0b1c: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E0B1Cu;
    {
        const bool branch_taken_0x4e0b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4e0b1c) {
            ctx->pc = 0x4E0B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0B1Cu;
            // 0x4e0b20: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0B34u;
            goto label_4e0b34;
        }
    }
    ctx->pc = 0x4E0B24u;
    // 0x4e0b24: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4e0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e0b28: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4E0B28u;
    {
        const bool branch_taken_0x4e0b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0B28u;
        // 0x4e0b2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0b28) {
            ctx->pc = 0x4E0BA0u;
            goto label_4e0ba0;
        }
    }
    ctx->pc = 0x4E0B30u;
label_4e0b30:
    // 0x4e0b30: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e0b34:
    // 0x4e0b34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e0b38: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4E0B38u;
    {
        const bool branch_taken_0x4e0b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0b38) {
            ctx->pc = 0x4E0B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0B38u;
            // 0x4e0b3c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0B78u;
            goto label_4e0b78;
        }
    }
    ctx->pc = 0x4E0B40u;
    // 0x4e0b40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e0b40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0b44: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e0b48: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4E0B48u;
    {
        const bool branch_taken_0x4e0b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0b48) {
            ctx->pc = 0x4E0B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0B48u;
            // 0x4e0b4c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0BA0u;
            goto label_4e0ba0;
        }
    }
    ctx->pc = 0x4E0B50u;
    // 0x4e0b50: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e0b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e0b54: 0x0  nop
    ctx->pc = 0x4e0b54u;
    // NOP
label_4e0b58:
    // 0x4e0b58: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e0b5c: 0x0  nop
    ctx->pc = 0x4e0b5cu;
    // NOP
    // 0x4e0b60: 0x0  nop
    ctx->pc = 0x4e0b60u;
    // NOP
    // 0x4e0b64: 0x0  nop
    ctx->pc = 0x4e0b64u;
    // NOP
    // 0x4e0b68: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E0B68u;
    {
        const bool branch_taken_0x4e0b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0b68) {
            ctx->pc = 0x4E0B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0B68u;
            // 0x4e0b6c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e0b58;
        }
    }
    ctx->pc = 0x4E0B70u;
    // 0x4e0b70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E0B70u;
    {
        const bool branch_taken_0x4e0b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0B70u;
        // 0x4e0b74: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0b70) {
            ctx->pc = 0x4E0BA0u;
            goto label_4e0ba0;
        }
    }
    ctx->pc = 0x4E0B78u;
label_4e0b78:
    // 0x4e0b78: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e0b7c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E0B7Cu;
    {
        const bool branch_taken_0x4e0b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0B7Cu;
        // 0x4e0b80: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0b7c) {
            ctx->pc = 0x4E0BA0u;
            goto label_4e0ba0;
        }
    }
    ctx->pc = 0x4E0B84u;
    // 0x4e0b84: 0x0  nop
    ctx->pc = 0x4e0b84u;
    // NOP
label_4e0b88:
    // 0x4e0b88: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e0b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e0b8c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e0b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e0b90: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e0b94: 0x0  nop
    ctx->pc = 0x4e0b94u;
    // NOP
    // 0x4e0b98: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E0B98u;
    {
        const bool branch_taken_0x4e0b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E0B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0B98u;
        // 0x4e0b9c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0b98) {
            ctx->pc = 0x4E0B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e0b88;
        }
    }
    ctx->pc = 0x4E0BA0u;
label_4e0ba0:
    // 0x4e0ba0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4e0ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e0ba4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e0ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0ba8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e0bac: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4e0bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4e0bb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E0BB0u;
    {
        const bool branch_taken_0x4e0bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0BB0u;
        // 0x4e0bb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0bb0) {
            ctx->pc = 0x4E0BC4u;
            goto label_4e0bc4;
        }
    }
    ctx->pc = 0x4E0BB8u;
    // 0x4e0bb8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e0bbc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4e0bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4e0bc0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4e0bc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e0bc4:
    // 0x4e0bc4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4E0BC4u;
    {
        const bool branch_taken_0x4e0bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0BC4u;
        // 0x4e0bc8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0bc4) {
            ctx->pc = 0x4E0C00u;
            goto label_4e0c00;
        }
    }
    ctx->pc = 0x4E0BCCu;
    // 0x4e0bcc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e0bd0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E0BD0u;
    {
        const bool branch_taken_0x4e0bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0bd0) {
            ctx->pc = 0x4E0BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0BD0u;
            // 0x4e0bd4: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0BECu;
            goto label_4e0bec;
        }
    }
    ctx->pc = 0x4E0BD8u;
    // 0x4e0bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e0bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e0bdc:
    // 0x4e0bdc: 0xc138154  jal         func_4E0550
    ctx->pc = 0x4E0BDCu;
    SET_GPR_U32(ctx, 31, 0x4E0BE4u);
    ctx->pc = 0x4E0BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0BDCu;
    // 0x4e0be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0550u, 0x4E0BDCu, 0x4E0BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0BE4u;
label_4e0be4:
    // 0x4e0be4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E0BE4u;
    {
        const bool branch_taken_0x4e0be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0BE4u;
        // 0x4e0be8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0be4) {
            ctx->pc = 0x4E0C14u;
            goto label_4e0c14;
        }
    }
    ctx->pc = 0x4E0BECu;
label_4e0bec:
    // 0x4e0bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e0becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e0bf0:
    // 0x4e0bf0: 0xc138154  jal         func_4E0550
    ctx->pc = 0x4E0BF0u;
    SET_GPR_U32(ctx, 31, 0x4E0BF8u);
    ctx->pc = 0x4E0BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0BF0u;
    // 0x4e0bf4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0550u, 0x4E0BF0u, 0x4E0BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0BF8u;
label_4e0bf8:
    // 0x4e0bf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E0BF8u;
    {
        const bool branch_taken_0x4e0bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0BF8u;
        // 0x4e0bfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0bf8) {
            ctx->pc = 0x4E0C14u;
            goto label_4e0c14;
        }
    }
    ctx->pc = 0x4E0C00u;
label_4e0c00:
    // 0x4e0c00: 0xc138248  jal         func_4E0920
    ctx->pc = 0x4E0C00u;
    SET_GPR_U32(ctx, 31, 0x4E0C08u);
    ctx->pc = 0x4E0C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0C00u;
    // 0x4e0c04: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0920u, 0x4E0C00u, 0x4E0C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0C08u;
label_4e0c08:
    // 0x4e0c08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4e0c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0c0c:
    // 0x4e0c0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e0c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e0c10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e0c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e0c14:
    // 0x4e0c14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e0c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e0c18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e0c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e0c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E0C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0C1Cu;
        // 0x4e0c20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E0C24u;
    // 0x4e0c24: 0x0  nop
    ctx->pc = 0x4e0c24u;
    // NOP
    ctx->pc = 0x4e0c28u;
}
