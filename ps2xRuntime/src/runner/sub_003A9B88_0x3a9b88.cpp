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

// Function: sub_003A9B88
// Address: 0x3a9b88 - 0x3a9c78
void sub_003A9B88_0x3a9b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9B88_0x3a9b88");
#endif

    switch (ctx->pc) {
        case 0x3a9b88u: goto label_3a9b88;
        case 0x3a9b8cu: goto label_3a9b8c;
        case 0x3a9b90u: goto label_3a9b90;
        case 0x3a9b94u: goto label_3a9b94;
        case 0x3a9b98u: goto label_3a9b98;
        case 0x3a9b9cu: goto label_3a9b9c;
        case 0x3a9ba0u: goto label_3a9ba0;
        case 0x3a9ba4u: goto label_3a9ba4;
        case 0x3a9ba8u: goto label_3a9ba8;
        case 0x3a9bacu: goto label_3a9bac;
        case 0x3a9bb0u: goto label_3a9bb0;
        case 0x3a9bb4u: goto label_3a9bb4;
        case 0x3a9bb8u: goto label_3a9bb8;
        case 0x3a9bbcu: goto label_3a9bbc;
        case 0x3a9bc0u: goto label_3a9bc0;
        case 0x3a9bc4u: goto label_3a9bc4;
        case 0x3a9bc8u: goto label_3a9bc8;
        case 0x3a9bccu: goto label_3a9bcc;
        case 0x3a9bd0u: goto label_3a9bd0;
        case 0x3a9bd4u: goto label_3a9bd4;
        case 0x3a9bd8u: goto label_3a9bd8;
        case 0x3a9bdcu: goto label_3a9bdc;
        case 0x3a9be0u: goto label_3a9be0;
        case 0x3a9be4u: goto label_3a9be4;
        case 0x3a9be8u: goto label_3a9be8;
        case 0x3a9becu: goto label_3a9bec;
        case 0x3a9bf0u: goto label_3a9bf0;
        case 0x3a9bf4u: goto label_3a9bf4;
        case 0x3a9bf8u: goto label_3a9bf8;
        case 0x3a9bfcu: goto label_3a9bfc;
        case 0x3a9c00u: goto label_3a9c00;
        case 0x3a9c04u: goto label_3a9c04;
        case 0x3a9c08u: goto label_3a9c08;
        case 0x3a9c0cu: goto label_3a9c0c;
        case 0x3a9c10u: goto label_3a9c10;
        case 0x3a9c14u: goto label_3a9c14;
        case 0x3a9c18u: goto label_3a9c18;
        case 0x3a9c1cu: goto label_3a9c1c;
        case 0x3a9c20u: goto label_3a9c20;
        case 0x3a9c24u: goto label_3a9c24;
        case 0x3a9c28u: goto label_3a9c28;
        case 0x3a9c2cu: goto label_3a9c2c;
        case 0x3a9c30u: goto label_3a9c30;
        case 0x3a9c34u: goto label_3a9c34;
        case 0x3a9c38u: goto label_3a9c38;
        case 0x3a9c3cu: goto label_3a9c3c;
        case 0x3a9c40u: goto label_3a9c40;
        case 0x3a9c44u: goto label_3a9c44;
        case 0x3a9c48u: goto label_3a9c48;
        case 0x3a9c4cu: goto label_3a9c4c;
        case 0x3a9c50u: goto label_3a9c50;
        case 0x3a9c54u: goto label_3a9c54;
        case 0x3a9c58u: goto label_3a9c58;
        case 0x3a9c5cu: goto label_3a9c5c;
        case 0x3a9c60u: goto label_3a9c60;
        case 0x3a9c64u: goto label_3a9c64;
        case 0x3a9c68u: goto label_3a9c68;
        case 0x3a9c6cu: goto label_3a9c6c;
        case 0x3a9c70u: goto label_3a9c70;
        case 0x3a9c74u: goto label_3a9c74;
        default: break;
    }

    ctx->pc = 0x3a9b88u;

label_3a9b88:
    // 0x3a9b88: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3a9b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_3a9b8c:
    // 0x3a9b8c: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3a9b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3a9b90:
    // 0x3a9b90: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3a9b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3a9b94:
    // 0x3a9b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a9b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9b98:
    // 0x3a9b98: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3a9b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3a9b9c:
    // 0x3a9b9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a9b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9ba0:
    // 0x3a9ba0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a9ba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a9ba4:
    // 0x3a9ba4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a9ba8:
    // 0x3a9ba8: 0x40f809  jalr        $v0
label_3a9bac:
    if (ctx->pc == 0x3A9BACu) {
        ctx->pc = 0x3A9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BA8u;
        // 0x3a9bac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9BB0u;
        goto label_3a9bb0;
    }
    ctx->pc = 0x3A9BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9BB0u);
        ctx->pc = 0x3A9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BA8u;
        // 0x3a9bac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9BA8u, 0x3A9BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9BB0u;
label_3a9bb0:
    // 0x3a9bb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a9bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9bb4:
    // 0x3a9bb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a9bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a9bb8:
    // 0x3a9bb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a9bbc:
    // 0x3a9bbc: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3a9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3a9bc0:
    // 0x3a9bc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a9bc4:
    // 0x3a9bc4: 0x0  nop
    ctx->pc = 0x3a9bc4u;
    // NOP
label_3a9bc8:
    // 0x3a9bc8: 0x0  nop
    ctx->pc = 0x3a9bc8u;
    // NOP
label_3a9bcc:
    // 0x3a9bcc: 0x0  nop
    ctx->pc = 0x3a9bccu;
    // NOP
label_3a9bd0:
    // 0x3a9bd0: 0x0  nop
    ctx->pc = 0x3a9bd0u;
    // NOP
label_3a9bd4:
    // 0x3a9bd4: 0x0  nop
    ctx->pc = 0x3a9bd4u;
    // NOP
label_3a9bd8:
    // 0x3a9bd8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3a9bdc:
    if (ctx->pc == 0x3A9BDCu) {
        ctx->pc = 0x3A9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BD8u;
        // 0x3a9bdc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9BE0u;
        goto label_3a9be0;
    }
    ctx->pc = 0x3A9BD8u;
    {
        const bool branch_taken_0x3a9bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BD8u;
        // 0x3a9bdc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9bd8) {
            ctx->pc = 0x3A9BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9bc8;
        }
    }
    ctx->pc = 0x3A9BE0u;
label_3a9be0:
    // 0x3a9be0: 0xc138ddc  jal         func_4E3770
label_3a9be4:
    if (ctx->pc == 0x3A9BE4u) {
        ctx->pc = 0x3A9BE8u;
        goto label_3a9be8;
    }
    ctx->pc = 0x3A9BE0u;
    SET_GPR_U32(ctx, 31, 0x3A9BE8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3A9BE0u, 0x3A9BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9BE8u;
label_3a9be8:
    // 0x3a9be8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3a9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a9bec:
    // 0x3a9bec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3a9becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3a9bf0:
    // 0x3a9bf0: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_3a9bf4:
    if (ctx->pc == 0x3A9BF4u) {
        ctx->pc = 0x3A9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BF0u;
        // 0x3a9bf4: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9BF8u;
        goto label_3a9bf8;
    }
    ctx->pc = 0x3A9BF0u;
    {
        const bool branch_taken_0x3a9bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a9bf0) {
            ctx->pc = 0x3A9BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9BF0u;
            // 0x3a9bf4: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9C0Cu;
            goto label_3a9c0c;
        }
    }
    ctx->pc = 0x3A9BF8u;
label_3a9bf8:
    // 0x3a9bf8: 0xc0e9694  jal         func_3A5A50
label_3a9bfc:
    if (ctx->pc == 0x3A9BFCu) {
        ctx->pc = 0x3A9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BF8u;
        // 0x3a9bfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C00u;
        goto label_3a9c00;
    }
    ctx->pc = 0x3A9BF8u;
    SET_GPR_U32(ctx, 31, 0x3A9C00u);
    ctx->pc = 0x3A9BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9BF8u;
    // 0x3a9bfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A9BF8u, 0x3A9C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9C00u;
label_3a9c00:
    // 0x3a9c00: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3a9c04:
    if (ctx->pc == 0x3A9C04u) {
        ctx->pc = 0x3A9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C00u;
        // 0x3a9c04: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C08u;
        goto label_3a9c08;
    }
    ctx->pc = 0x3A9C00u;
    {
        const bool branch_taken_0x3a9c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9c00) {
            ctx->pc = 0x3A9C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9C00u;
            // 0x3a9c04: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9C20u;
            goto label_3a9c20;
        }
    }
    ctx->pc = 0x3A9C08u;
label_3a9c08:
    // 0x3a9c08: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x3a9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3a9c0c:
    // 0x3a9c0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3a9c10:
    // 0x3a9c10: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3a9c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3a9c14:
    // 0x3a9c14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a9c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3a9c18:
    // 0x3a9c18: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3a9c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3a9c1c:
    // 0x3a9c1c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3a9c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a9c20:
    // 0x3a9c20: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3a9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3a9c24:
    // 0x3a9c24: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_3a9c28:
    if (ctx->pc == 0x3A9C28u) {
        ctx->pc = 0x3A9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C24u;
        // 0x3a9c28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C2Cu;
        goto label_3a9c2c;
    }
    ctx->pc = 0x3A9C24u;
    {
        const bool branch_taken_0x3a9c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C24u;
        // 0x3a9c28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c24) {
            ctx->pc = 0x3A9C60u;
            goto label_3a9c60;
        }
    }
    ctx->pc = 0x3A9C2Cu;
label_3a9c2c:
    // 0x3a9c2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a9c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a9c30:
    // 0x3a9c30: 0x0  nop
    ctx->pc = 0x3a9c30u;
    // NOP
label_3a9c34:
    // 0x3a9c34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a9c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a9c38:
    // 0x3a9c38: 0x3c013da5  lui         $at, 0x3DA5
    ctx->pc = 0x3a9c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15781 << 16));
label_3a9c3c:
    // 0x3a9c3c: 0x3421e354  ori         $at, $at, 0xE354
    ctx->pc = 0x3a9c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58196);
label_3a9c40:
    // 0x3a9c40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a9c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a9c44:
    // 0x3a9c44: 0x0  nop
    ctx->pc = 0x3a9c44u;
    // NOP
label_3a9c48:
    // 0x3a9c48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a9c48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3a9c4c:
    // 0x3a9c4c: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3a9c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3a9c50:
    // 0x3a9c50: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3a9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a9c54:
    // 0x3a9c54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a9c58:
    // 0x3a9c58: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a9c5c:
    if (ctx->pc == 0x3A9C5Cu) {
        ctx->pc = 0x3A9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C58u;
        // 0x3a9c5c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C60u;
        goto label_3a9c60;
    }
    ctx->pc = 0x3A9C58u;
    {
        const bool branch_taken_0x3a9c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C58u;
        // 0x3a9c5c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c58) {
            ctx->pc = 0x3A9C64u;
            goto label_3a9c64;
        }
    }
    ctx->pc = 0x3A9C60u;
label_3a9c60:
    // 0x3a9c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a9c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9c64:
    // 0x3a9c64: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3a9c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3a9c68:
    // 0x3a9c68: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3a9c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3a9c6c:
    // 0x3a9c6c: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3a9c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3a9c70:
    // 0x3a9c70: 0x3e00008  jr          $ra
label_3a9c74:
    if (ctx->pc == 0x3A9C74u) {
        ctx->pc = 0x3A9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C70u;
        // 0x3a9c74: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C78u;
        goto label_fallthrough_0x3a9c70;
    }
    ctx->pc = 0x3A9C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C70u;
        // 0x3a9c74: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a9c70:
    ctx->pc = 0x3A9C78u;
}
