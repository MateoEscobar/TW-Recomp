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

// Function: sub_003F1AD8
// Address: 0x3f1ad8 - 0x3f1bb0
void sub_003F1AD8_0x3f1ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1AD8_0x3f1ad8");
#endif

    switch (ctx->pc) {
        case 0x3f1ad8u: goto label_3f1ad8;
        case 0x3f1adcu: goto label_3f1adc;
        case 0x3f1ae0u: goto label_3f1ae0;
        case 0x3f1ae4u: goto label_3f1ae4;
        case 0x3f1ae8u: goto label_3f1ae8;
        case 0x3f1aecu: goto label_3f1aec;
        case 0x3f1af0u: goto label_3f1af0;
        case 0x3f1af4u: goto label_3f1af4;
        case 0x3f1af8u: goto label_3f1af8;
        case 0x3f1afcu: goto label_3f1afc;
        case 0x3f1b00u: goto label_3f1b00;
        case 0x3f1b04u: goto label_3f1b04;
        case 0x3f1b08u: goto label_3f1b08;
        case 0x3f1b0cu: goto label_3f1b0c;
        case 0x3f1b10u: goto label_3f1b10;
        case 0x3f1b14u: goto label_3f1b14;
        case 0x3f1b18u: goto label_3f1b18;
        case 0x3f1b1cu: goto label_3f1b1c;
        case 0x3f1b20u: goto label_3f1b20;
        case 0x3f1b24u: goto label_3f1b24;
        case 0x3f1b28u: goto label_3f1b28;
        case 0x3f1b2cu: goto label_3f1b2c;
        case 0x3f1b30u: goto label_3f1b30;
        case 0x3f1b34u: goto label_3f1b34;
        case 0x3f1b38u: goto label_3f1b38;
        case 0x3f1b3cu: goto label_3f1b3c;
        case 0x3f1b40u: goto label_3f1b40;
        case 0x3f1b44u: goto label_3f1b44;
        case 0x3f1b48u: goto label_3f1b48;
        case 0x3f1b4cu: goto label_3f1b4c;
        case 0x3f1b50u: goto label_3f1b50;
        case 0x3f1b54u: goto label_3f1b54;
        case 0x3f1b58u: goto label_3f1b58;
        case 0x3f1b5cu: goto label_3f1b5c;
        case 0x3f1b60u: goto label_3f1b60;
        case 0x3f1b64u: goto label_3f1b64;
        case 0x3f1b68u: goto label_3f1b68;
        case 0x3f1b6cu: goto label_3f1b6c;
        case 0x3f1b70u: goto label_3f1b70;
        case 0x3f1b74u: goto label_3f1b74;
        case 0x3f1b78u: goto label_3f1b78;
        case 0x3f1b7cu: goto label_3f1b7c;
        case 0x3f1b80u: goto label_3f1b80;
        case 0x3f1b84u: goto label_3f1b84;
        case 0x3f1b88u: goto label_3f1b88;
        case 0x3f1b8cu: goto label_3f1b8c;
        case 0x3f1b90u: goto label_3f1b90;
        case 0x3f1b94u: goto label_3f1b94;
        case 0x3f1b98u: goto label_3f1b98;
        case 0x3f1b9cu: goto label_3f1b9c;
        case 0x3f1ba0u: goto label_3f1ba0;
        case 0x3f1ba4u: goto label_3f1ba4;
        case 0x3f1ba8u: goto label_3f1ba8;
        case 0x3f1bacu: goto label_3f1bac;
        default: break;
    }

    ctx->pc = 0x3f1ad8u;

label_3f1ad8:
    // 0x3f1ad8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f1ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f1adc:
    // 0x3f1adc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3f1adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3f1ae0:
    // 0x3f1ae0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f1ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f1ae4:
    // 0x3f1ae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f1ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f1ae8:
    // 0x3f1ae8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3f1ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3f1aec:
    // 0x3f1aec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f1aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f1af0:
    // 0x3f1af0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3f1af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3f1af4:
    // 0x3f1af4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f1af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f1af8:
    // 0x3f1af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f1af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f1afc:
    // 0x3f1afc: 0xc0ea14c  jal         func_3A8530
label_3f1b00:
    if (ctx->pc == 0x3F1B00u) {
        ctx->pc = 0x3F1B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1AFCu;
        // 0x3f1b00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1B04u;
        goto label_3f1b04;
    }
    ctx->pc = 0x3F1AFCu;
    SET_GPR_U32(ctx, 31, 0x3F1B04u);
    ctx->pc = 0x3F1B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1AFCu;
    // 0x3f1b00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F1AFCu, 0x3F1B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1B04u;
label_3f1b04:
    // 0x3f1b04: 0xc08a61a  jal         func_229868
label_3f1b08:
    if (ctx->pc == 0x3F1B08u) {
        ctx->pc = 0x3F1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B04u;
        // 0x3f1b08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1B0Cu;
        goto label_3f1b0c;
    }
    ctx->pc = 0x3F1B04u;
    SET_GPR_U32(ctx, 31, 0x3F1B0Cu);
    ctx->pc = 0x3F1B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1B04u;
    // 0x3f1b08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3F1B04u, 0x3F1B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1B0Cu;
label_3f1b0c:
    // 0x3f1b0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f1b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f1b10:
    // 0x3f1b10: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f1b10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1b14:
    // 0x3f1b14: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3f1b14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3f1b18:
    // 0x3f1b18: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3f1b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3f1b1c:
    // 0x3f1b1c: 0x40f809  jalr        $v0
label_3f1b20:
    if (ctx->pc == 0x3F1B20u) {
        ctx->pc = 0x3F1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B1Cu;
        // 0x3f1b20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1B24u;
        goto label_3f1b24;
    }
    ctx->pc = 0x3F1B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F1B24u);
        ctx->pc = 0x3F1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B1Cu;
        // 0x3f1b20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1B1Cu, 0x3F1B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1B24u;
label_3f1b24:
    // 0x3f1b24: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x3f1b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_3f1b28:
    // 0x3f1b28: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3f1b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3f1b2c:
    // 0x3f1b2c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_3f1b30:
    if (ctx->pc == 0x3F1B30u) {
        ctx->pc = 0x3F1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B2Cu;
        // 0x3f1b30: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1B34u;
        goto label_3f1b34;
    }
    ctx->pc = 0x3F1B2Cu;
    {
        const bool branch_taken_0x3f1b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f1b2c) {
            ctx->pc = 0x3F1B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1B2Cu;
            // 0x3f1b30: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1B94u;
            goto label_3f1b94;
        }
    }
    ctx->pc = 0x3F1B34u;
label_3f1b34:
    // 0x3f1b34: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3f1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3f1b38:
    // 0x3f1b38: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3f1b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f1b3c:
    // 0x3f1b3c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f1b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3f1b40:
    // 0x3f1b40: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3f1b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3f1b44:
    // 0x3f1b44: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x3f1b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_3f1b48:
    // 0x3f1b48: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3f1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3f1b4c:
    // 0x3f1b4c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_3f1b50:
    if (ctx->pc == 0x3F1B50u) {
        ctx->pc = 0x3F1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B4Cu;
        // 0x3f1b50: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1B54u;
        goto label_3f1b54;
    }
    ctx->pc = 0x3F1B4Cu;
    {
        const bool branch_taken_0x3f1b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B4Cu;
        // 0x3f1b50: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1b4c) {
            ctx->pc = 0x3F1B90u;
            goto label_3f1b90;
        }
    }
    ctx->pc = 0x3F1B54u;
label_3f1b54:
    // 0x3f1b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f1b58:
    // 0x3f1b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f1b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f1b5c:
    // 0x3f1b5c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3f1b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_3f1b60:
    // 0x3f1b60: 0xc0ea176  jal         func_3A85D8
label_3f1b64:
    if (ctx->pc == 0x3F1B64u) {
        ctx->pc = 0x3F1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B60u;
        // 0x3f1b64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1B68u;
        goto label_3f1b68;
    }
    ctx->pc = 0x3F1B60u;
    SET_GPR_U32(ctx, 31, 0x3F1B68u);
    ctx->pc = 0x3F1B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1B60u;
    // 0x3f1b64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3F1B60u, 0x3F1B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1B68u;
label_3f1b68:
    // 0x3f1b68: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3f1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3f1b6c:
    // 0x3f1b6c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3f1b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3f1b70:
    // 0x3f1b70: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f1b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f1b74:
    // 0x3f1b74: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3f1b74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3f1b78:
    // 0x3f1b78: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3f1b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3f1b7c:
    // 0x3f1b7c: 0x60f809  jalr        $v1
label_3f1b80:
    if (ctx->pc == 0x3F1B80u) {
        ctx->pc = 0x3F1B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B7Cu;
        // 0x3f1b80: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1B84u;
        goto label_3f1b84;
    }
    ctx->pc = 0x3F1B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F1B84u);
        ctx->pc = 0x3F1B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B7Cu;
        // 0x3f1b80: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1B7Cu, 0x3F1B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1B84u;
label_3f1b84:
    // 0x3f1b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1b88:
    // 0x3f1b88: 0xc0fc5d8  jal         func_3F1760
label_3f1b8c:
    if (ctx->pc == 0x3F1B8Cu) {
        ctx->pc = 0x3F1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B88u;
        // 0x3f1b8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1B90u;
        goto label_3f1b90;
    }
    ctx->pc = 0x3F1B88u;
    SET_GPR_U32(ctx, 31, 0x3F1B90u);
    ctx->pc = 0x3F1B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1B88u;
    // 0x3f1b8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1760u, 0x3F1B88u, 0x3F1B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1B90u;
label_3f1b90:
    // 0x3f1b90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3f1b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f1b94:
    // 0x3f1b94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3f1b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f1b98:
    // 0x3f1b98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f1b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f1b9c:
    // 0x3f1b9c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3f1b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1ba0:
    // 0x3f1ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f1ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f1ba4:
    // 0x3f1ba4: 0x3e00008  jr          $ra
label_3f1ba8:
    if (ctx->pc == 0x3F1BA8u) {
        ctx->pc = 0x3F1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1BA4u;
        // 0x3f1ba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1BACu;
        goto label_3f1bac;
    }
    ctx->pc = 0x3F1BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1BA4u;
        // 0x3f1ba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1BACu;
label_3f1bac:
    // 0x3f1bac: 0x0  nop
    ctx->pc = 0x3f1bacu;
    // NOP
    ctx->pc = 0x3f1bb0u;
}
