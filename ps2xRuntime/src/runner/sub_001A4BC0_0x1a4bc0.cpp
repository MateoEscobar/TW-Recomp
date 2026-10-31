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

// Function: sub_001A4BC0
// Address: 0x1a4bc0 - 0x1a4d20
void sub_001A4BC0_0x1a4bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4BC0_0x1a4bc0");
#endif

    switch (ctx->pc) {
        case 0x1a4becu: goto label_1a4bec;
        case 0x1a4bf4u: goto label_1a4bf4;
        case 0x1a4c04u: goto label_1a4c04;
        case 0x1a4c10u: goto label_1a4c10;
        case 0x1a4c18u: goto label_1a4c18;
        case 0x1a4c28u: goto label_1a4c28;
        case 0x1a4c68u: goto label_1a4c68;
        case 0x1a4c90u: goto label_1a4c90;
        case 0x1a4ca4u: goto label_1a4ca4;
        case 0x1a4cb4u: goto label_1a4cb4;
        default: break;
    }

    ctx->pc = 0x1a4bc0u;

    // 0x1a4bc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a4bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a4bc4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a4bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1a4bc8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a4bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1a4bcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a4bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4bd0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a4bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1a4bd4: 0x24040109  addiu       $a0, $zero, 0x109
    ctx->pc = 0x1a4bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x1a4bd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a4bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a4bdc: 0x26320054  addiu       $s2, $s1, 0x54
    ctx->pc = 0x1a4bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x1a4be0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a4be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a4be4: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1A4BE4u;
    SET_GPR_U32(ctx, 31, 0x1A4BECu);
    ctx->pc = 0x1A4BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4BE4u;
    // 0x1a4be8: 0xa2200054  sb          $zero, 0x54($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1A4BE4u, 0x1A4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4BECu;
label_1a4bec:
    // 0x1a4bec: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1A4BECu;
    SET_GPR_U32(ctx, 31, 0x1A4BF4u);
    ctx->pc = 0x1A4BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4BECu;
    // 0x1a4bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1A4BECu, 0x1A4BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4BF4u;
label_1a4bf4:
    // 0x1a4bf4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a4bf8: 0x24040109  addiu       $a0, $zero, 0x109
    ctx->pc = 0x1a4bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x1a4bfc: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1A4BFCu;
    SET_GPR_U32(ctx, 31, 0x1A4C04u);
    ctx->pc = 0x1A4C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4BFCu;
    // 0x1a4c00: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1A4BFCu, 0x1A4C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C04u;
label_1a4c04:
    // 0x1a4c04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a4c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c08: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1A4C08u;
    SET_GPR_U32(ctx, 31, 0x1A4C10u);
    ctx->pc = 0x1A4C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C08u;
    // 0x1a4c0c: 0x24040109  addiu       $a0, $zero, 0x109 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1A4C08u, 0x1A4C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C10u;
label_1a4c10:
    // 0x1a4c10: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1A4C10u;
    SET_GPR_U32(ctx, 31, 0x1A4C18u);
    ctx->pc = 0x1A4C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C10u;
    // 0x1a4c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1A4C10u, 0x1A4C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C18u;
label_1a4c18:
    // 0x1a4c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c20: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1A4C20u;
    SET_GPR_U32(ctx, 31, 0x1A4C28u);
    ctx->pc = 0x1A4C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C20u;
    // 0x1a4c24: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1A4C20u, 0x1A4C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C28u;
label_1a4c28:
    // 0x1a4c28: 0x8e250350  lw          $a1, 0x350($s1)
    ctx->pc = 0x1a4c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x1a4c2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a4c2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c30: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x1a4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x1a4c34: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a4c38: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x1a4c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1a4c3c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a4c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a4c40: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1a4c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1a4c44: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4C44u;
    {
        const bool branch_taken_0x1a4c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C44u;
        // 0x1a4c48: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c44) {
            ctx->pc = 0x1A4C50u;
            goto label_1a4c50;
        }
    }
    ctx->pc = 0x1A4C4Cu;
    // 0x1a4c4c: 0xae200154  sw          $zero, 0x154($s1)
    ctx->pc = 0x1a4c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 0));
label_1a4c50:
    // 0x1a4c50: 0x8e220350  lw          $v0, 0x350($s1)
    ctx->pc = 0x1a4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x1a4c54: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1a4c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c58: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a4c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4c5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a4c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a4c60: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A4C60u;
    {
        const bool branch_taken_0x1a4c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C60u;
        // 0x1a4c64: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c60) {
            ctx->pc = 0x1A4D00u;
            goto label_1a4d00;
        }
    }
    ctx->pc = 0x1A4C68u;
label_1a4c68:
    // 0x1a4c68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4c6c: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x1a4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x1a4c70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a4c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c74: 0x15030017  bne         $t0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A4C74u;
    {
        const bool branch_taken_0x1a4c74 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C74u;
        // 0x1a4c78: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c74) {
            ctx->pc = 0x1A4CD4u;
            goto label_1a4cd4;
        }
    }
    ctx->pc = 0x1A4C7Cu;
    // 0x1a4c7c: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x1a4c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x1a4c80: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A4C80u;
    {
        const bool branch_taken_0x1a4c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c80) {
            ctx->pc = 0x1A4C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4C80u;
            // 0x1a4c84: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4CD8u;
            goto label_1a4cd8;
        }
    }
    ctx->pc = 0x1A4C88u;
    // 0x1a4c88: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1A4C88u;
    SET_GPR_U32(ctx, 31, 0x1A4C90u);
    ctx->pc = 0x1A4C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C88u;
    // 0x1a4c8c: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1A4C88u, 0x1A4C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C90u;
label_1a4c90:
    // 0x1a4c90: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a4c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a4c94: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1a4c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4c98: 0x8e100068  lw          $s0, 0x68($s0)
    ctx->pc = 0x1a4c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1a4c9c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1A4C9Cu;
    SET_GPR_U32(ctx, 31, 0x1A4CA4u);
    ctx->pc = 0x1A4CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C9Cu;
    // 0x1a4ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1A4C9Cu, 0x1A4CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4CA4u;
label_1a4ca4:
    // 0x1a4ca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ca8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4cac: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1A4CACu;
    SET_GPR_U32(ctx, 31, 0x1A4CB4u);
    ctx->pc = 0x1A4CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4CACu;
    // 0x1a4cb0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1A4CACu, 0x1A4CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4CB4u;
label_1a4cb4:
    // 0x1a4cb4: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x1a4cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x1a4cb8: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x1a4cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1a4cbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a4cc0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a4cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a4cc4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4CC4u;
    {
        const bool branch_taken_0x1a4cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CC4u;
        // 0x1a4cc8: 0xae230154  sw          $v1, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4cc4) {
            ctx->pc = 0x1A4D00u;
            goto label_1a4d00;
        }
    }
    ctx->pc = 0x1A4CCCu;
    // 0x1a4ccc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A4CCCu;
    {
        const bool branch_taken_0x1a4ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CCCu;
        // 0x1a4cd0: 0xae200154  sw          $zero, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ccc) {
            ctx->pc = 0x1A4D00u;
            goto label_1a4d00;
        }
    }
    ctx->pc = 0x1A4CD4u;
label_1a4cd4:
    // 0x1a4cd4: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x1a4cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
label_1a4cd8:
    // 0x1a4cd8: 0x25060001  addiu       $a2, $t0, 0x1
    ctx->pc = 0x1a4cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a4cdc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1a4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a4ce0: 0x8e250350  lw          $a1, 0x350($s1)
    ctx->pc = 0x1a4ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x1a4ce4: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1a4ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x1a4ce8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a4ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a4cec: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x1a4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x1a4cf0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a4cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a4cf4: 0xc2400a  movz        $t0, $a2, $v0
    ctx->pc = 0x1a4cf4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
    // 0x1a4cf8: 0x1483ffdb  bne         $a0, $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1A4CF8u;
    {
        const bool branch_taken_0x1a4cf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CF8u;
        // 0x1a4cfc: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4cf8) {
            ctx->pc = 0x1A4C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4c68;
        }
    }
    ctx->pc = 0x1A4D00u;
label_1a4d00:
    // 0x1a4d00: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1a4d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d04: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a4d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a4d08: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a4d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a4d0c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a4d0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a4d10: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a4d10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4d14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a4d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D18u;
        // 0x1a4d1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4D20u;
}
