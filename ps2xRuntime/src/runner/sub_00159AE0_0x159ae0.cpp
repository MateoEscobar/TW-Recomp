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

// Function: sub_00159AE0
// Address: 0x159ae0 - 0x159c08
void sub_00159AE0_0x159ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159AE0_0x159ae0");
#endif

    switch (ctx->pc) {
        case 0x159ae0u: goto label_159ae0;
        case 0x159ae4u: goto label_159ae4;
        case 0x159ae8u: goto label_159ae8;
        case 0x159aecu: goto label_159aec;
        case 0x159af0u: goto label_159af0;
        case 0x159af4u: goto label_159af4;
        case 0x159af8u: goto label_159af8;
        case 0x159afcu: goto label_159afc;
        case 0x159b00u: goto label_159b00;
        case 0x159b04u: goto label_159b04;
        case 0x159b08u: goto label_159b08;
        case 0x159b0cu: goto label_159b0c;
        case 0x159b10u: goto label_159b10;
        case 0x159b14u: goto label_159b14;
        case 0x159b18u: goto label_159b18;
        case 0x159b1cu: goto label_159b1c;
        case 0x159b20u: goto label_159b20;
        case 0x159b24u: goto label_159b24;
        case 0x159b28u: goto label_159b28;
        case 0x159b2cu: goto label_159b2c;
        case 0x159b30u: goto label_159b30;
        case 0x159b34u: goto label_159b34;
        case 0x159b38u: goto label_159b38;
        case 0x159b3cu: goto label_159b3c;
        case 0x159b40u: goto label_159b40;
        case 0x159b44u: goto label_159b44;
        case 0x159b48u: goto label_159b48;
        case 0x159b4cu: goto label_159b4c;
        case 0x159b50u: goto label_159b50;
        case 0x159b54u: goto label_159b54;
        case 0x159b58u: goto label_159b58;
        case 0x159b5cu: goto label_159b5c;
        case 0x159b60u: goto label_159b60;
        case 0x159b64u: goto label_159b64;
        case 0x159b68u: goto label_159b68;
        case 0x159b6cu: goto label_159b6c;
        case 0x159b70u: goto label_159b70;
        case 0x159b74u: goto label_159b74;
        case 0x159b78u: goto label_159b78;
        case 0x159b7cu: goto label_159b7c;
        case 0x159b80u: goto label_159b80;
        case 0x159b84u: goto label_159b84;
        case 0x159b88u: goto label_159b88;
        case 0x159b8cu: goto label_159b8c;
        case 0x159b90u: goto label_159b90;
        case 0x159b94u: goto label_159b94;
        case 0x159b98u: goto label_159b98;
        case 0x159b9cu: goto label_159b9c;
        case 0x159ba0u: goto label_159ba0;
        case 0x159ba4u: goto label_159ba4;
        case 0x159ba8u: goto label_159ba8;
        case 0x159bacu: goto label_159bac;
        case 0x159bb0u: goto label_159bb0;
        case 0x159bb4u: goto label_159bb4;
        case 0x159bb8u: goto label_159bb8;
        case 0x159bbcu: goto label_159bbc;
        case 0x159bc0u: goto label_159bc0;
        case 0x159bc4u: goto label_159bc4;
        case 0x159bc8u: goto label_159bc8;
        case 0x159bccu: goto label_159bcc;
        case 0x159bd0u: goto label_159bd0;
        case 0x159bd4u: goto label_159bd4;
        case 0x159bd8u: goto label_159bd8;
        case 0x159bdcu: goto label_159bdc;
        case 0x159be0u: goto label_159be0;
        case 0x159be4u: goto label_159be4;
        case 0x159be8u: goto label_159be8;
        case 0x159becu: goto label_159bec;
        case 0x159bf0u: goto label_159bf0;
        case 0x159bf4u: goto label_159bf4;
        case 0x159bf8u: goto label_159bf8;
        case 0x159bfcu: goto label_159bfc;
        case 0x159c00u: goto label_159c00;
        case 0x159c04u: goto label_159c04;
        default: break;
    }

    ctx->pc = 0x159ae0u;

label_159ae0:
    // 0x159ae0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x159ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_159ae4:
    // 0x159ae4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x159ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_159ae8:
    // 0x159ae8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x159ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_159aec:
    // 0x159aec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159af0:
    // 0x159af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159af4:
    // 0x159af4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x159af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_159af8:
    // 0x159af8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x159af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_159afc:
    // 0x159afc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x159afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_159b00:
    // 0x159b00: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x159b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_159b04:
    // 0x159b04: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x159b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_159b08:
    // 0x159b08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_159b0c:
    // 0x159b0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_159b10:
    // 0x159b10: 0xc0517d8  jal         func_145F60
label_159b14:
    if (ctx->pc == 0x159B14u) {
        ctx->pc = 0x159B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B10u;
        // 0x159b14: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B18u;
        goto label_159b18;
    }
    ctx->pc = 0x159B10u;
    SET_GPR_U32(ctx, 31, 0x159B18u);
    ctx->pc = 0x159B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159B10u;
    // 0x159b14: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x159B10u, 0x159B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B18u;
label_159b18:
    // 0x159b18: 0xc055888  jal         func_156220
label_159b1c:
    if (ctx->pc == 0x159B1Cu) {
        ctx->pc = 0x159B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B18u;
        // 0x159b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B20u;
        goto label_159b20;
    }
    ctx->pc = 0x159B18u;
    SET_GPR_U32(ctx, 31, 0x159B20u);
    ctx->pc = 0x159B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159B18u;
    // 0x159b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x159B18u, 0x159B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B20u;
label_159b20:
    // 0x159b20: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x159b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_159b24:
    // 0x159b24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x159b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_159b28:
    // 0x159b28: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x159b28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_159b2c:
    // 0x159b2c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x159b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_159b30:
    // 0x159b30: 0x40f809  jalr        $v0
label_159b34:
    if (ctx->pc == 0x159B34u) {
        ctx->pc = 0x159B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B30u;
        // 0x159b34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B38u;
        goto label_159b38;
    }
    ctx->pc = 0x159B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159B38u);
        ctx->pc = 0x159B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B30u;
        // 0x159b34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159B30u, 0x159B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159B38u;
label_159b38:
    // 0x159b38: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x159b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_159b3c:
    // 0x159b3c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x159b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_159b40:
    // 0x159b40: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x159b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_159b44:
    // 0x159b44: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x159b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_159b48:
    // 0x159b48: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x159b48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_159b4c:
    // 0x159b4c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x159b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_159b50:
    // 0x159b50: 0x38710001  xori        $s1, $v1, 0x1
    ctx->pc = 0x159b50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_159b54:
    // 0x159b54: 0xc05152a  jal         func_1454A8
label_159b58:
    if (ctx->pc == 0x159B58u) {
        ctx->pc = 0x159B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B54u;
        // 0x159b58: 0x38550001  xori        $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B5Cu;
        goto label_159b5c;
    }
    ctx->pc = 0x159B54u;
    SET_GPR_U32(ctx, 31, 0x159B5Cu);
    ctx->pc = 0x159B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159B54u;
    // 0x159b58: 0x38550001  xori        $s5, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1454A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454A8u, 0x159B54u, 0x159B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B5Cu;
label_159b5c:
    // 0x159b5c: 0xc055852  jal         func_156148
label_159b60:
    if (ctx->pc == 0x159B60u) {
        ctx->pc = 0x159B64u;
        goto label_159b64;
    }
    ctx->pc = 0x159B5Cu;
    SET_GPR_U32(ctx, 31, 0x159B64u);
    ctx->pc = 0x156148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156148u, 0x159B5Cu, 0x159B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B64u;
label_159b64:
    // 0x159b64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x159b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159b68:
    // 0x159b68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_159b6c:
    if (ctx->pc == 0x159B6Cu) {
        ctx->pc = 0x159B70u;
        goto label_159b70;
    }
    ctx->pc = 0x159B68u;
    {
        const bool branch_taken_0x159b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159b68) {
            ctx->pc = 0x159B78u;
            goto label_159b78;
        }
    }
    ctx->pc = 0x159B70u;
label_159b70:
    // 0x159b70: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x159b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_159b74:
    // 0x159b74: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x159b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_159b78:
    // 0x159b78: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_159b7c:
    if (ctx->pc == 0x159B7Cu) {
        ctx->pc = 0x159B80u;
        goto label_159b80;
    }
    ctx->pc = 0x159B78u;
    {
        const bool branch_taken_0x159b78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x159b78) {
            ctx->pc = 0x159BD8u;
            goto label_159bd8;
        }
    }
    ctx->pc = 0x159B80u;
label_159b80:
    // 0x159b80: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_159b84:
    if (ctx->pc == 0x159B84u) {
        ctx->pc = 0x159B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B80u;
        // 0x159b84: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B88u;
        goto label_159b88;
    }
    ctx->pc = 0x159B80u;
    {
        const bool branch_taken_0x159b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B80u;
        // 0x159b84: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b80) {
            ctx->pc = 0x159BD8u;
            goto label_159bd8;
        }
    }
    ctx->pc = 0x159B88u;
label_159b88:
    // 0x159b88: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x159b88u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_159b8c:
    // 0x159b8c: 0x2450d85c  addiu       $s0, $v0, -0x27A4
    ctx->pc = 0x159b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957148));
label_159b90:
    // 0x159b90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x159b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159b94:
    // 0x159b94: 0x10000004  b           . + 4 + (0x4 << 2)
label_159b98:
    if (ctx->pc == 0x159B98u) {
        ctx->pc = 0x159B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B94u;
        // 0x159b98: 0x26120280  addiu       $s2, $s0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B9Cu;
        goto label_159b9c;
    }
    ctx->pc = 0x159B94u;
    {
        const bool branch_taken_0x159b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B94u;
        // 0x159b98: 0x26120280  addiu       $s2, $s0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b94) {
            ctx->pc = 0x159BA8u;
            goto label_159ba8;
        }
    }
    ctx->pc = 0x159B9Cu;
label_159b9c:
    // 0x159b9c: 0x0  nop
    ctx->pc = 0x159b9cu;
    // NOP
label_159ba0:
    // 0x159ba0: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x159ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_159ba4:
    // 0x159ba4: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x159ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_159ba8:
    // 0x159ba8: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x159ba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_159bac:
    // 0x159bac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_159bb0:
    if (ctx->pc == 0x159BB0u) {
        ctx->pc = 0x159BB4u;
        goto label_159bb4;
    }
    ctx->pc = 0x159BACu;
    {
        const bool branch_taken_0x159bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159bac) {
            ctx->pc = 0x159BD8u;
            goto label_159bd8;
        }
    }
    ctx->pc = 0x159BB4u;
label_159bb4:
    // 0x159bb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x159bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_159bb8:
    // 0x159bb8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_159bbc:
    if (ctx->pc == 0x159BBCu) {
        ctx->pc = 0x159BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BB8u;
        // 0x159bbc: 0x2663d810  addiu       $v1, $s3, -0x27F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159BC0u;
        goto label_159bc0;
    }
    ctx->pc = 0x159BB8u;
    {
        const bool branch_taken_0x159bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BB8u;
        // 0x159bbc: 0x2663d810  addiu       $v1, $s3, -0x27F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bb8) {
            ctx->pc = 0x159BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159ba0;
        }
    }
    ctx->pc = 0x159BC0u;
label_159bc0:
    // 0x159bc0: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x159bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_159bc4:
    // 0x159bc4: 0xc051282  jal         func_144A08
label_159bc8:
    if (ctx->pc == 0x159BC8u) {
        ctx->pc = 0x159BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BC4u;
        // 0x159bc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159BCCu;
        goto label_159bcc;
    }
    ctx->pc = 0x159BC4u;
    SET_GPR_U32(ctx, 31, 0x159BCCu);
    ctx->pc = 0x159BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159BC4u;
    // 0x159bc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A08u, 0x159BC4u, 0x159BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159BCCu;
label_159bcc:
    // 0x159bcc: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
label_159bd0:
    if (ctx->pc == 0x159BD0u) {
        ctx->pc = 0x159BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BCCu;
        // 0x159bd0: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159BD4u;
        goto label_159bd4;
    }
    ctx->pc = 0x159BCCu;
    {
        const bool branch_taken_0x159bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BCCu;
        // 0x159bd0: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bcc) {
            ctx->pc = 0x159BA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159ba4;
        }
    }
    ctx->pc = 0x159BD4u;
label_159bd4:
    // 0x159bd4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x159bd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159bd8:
    // 0x159bd8: 0x16a00002  bnez        $s5, . + 4 + (0x2 << 2)
label_159bdc:
    if (ctx->pc == 0x159BDCu) {
        ctx->pc = 0x159BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BD8u;
        // 0x159bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159BE0u;
        goto label_159be0;
    }
    ctx->pc = 0x159BD8u;
    {
        const bool branch_taken_0x159bd8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x159BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BD8u;
        // 0x159bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bd8) {
            ctx->pc = 0x159BE4u;
            goto label_159be4;
        }
    }
    ctx->pc = 0x159BE0u;
label_159be0:
    // 0x159be0: 0x3a820001  xori        $v0, $s4, 0x1
    ctx->pc = 0x159be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
label_159be4:
    // 0x159be4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x159be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_159be8:
    // 0x159be8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x159be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_159bec:
    // 0x159bec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x159becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_159bf0:
    // 0x159bf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159bf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_159bf4:
    // 0x159bf4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x159bf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_159bf8:
    // 0x159bf8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x159bf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_159bfc:
    // 0x159bfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159c00:
    // 0x159c00: 0x3e00008  jr          $ra
label_159c04:
    if (ctx->pc == 0x159C04u) {
        ctx->pc = 0x159C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C00u;
        // 0x159c04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159C08u;
        goto label_fallthrough_0x159c00;
    }
    ctx->pc = 0x159C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C00u;
        // 0x159c04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x159c00:
    ctx->pc = 0x159C08u;
}
