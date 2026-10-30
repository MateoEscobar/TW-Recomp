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

// Function: sub_00208B40
// Address: 0x208b40 - 0x208c10
void sub_00208B40_0x208b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208B40_0x208b40");
#endif

    switch (ctx->pc) {
        case 0x208b40u: goto label_208b40;
        case 0x208b44u: goto label_208b44;
        case 0x208b48u: goto label_208b48;
        case 0x208b4cu: goto label_208b4c;
        case 0x208b50u: goto label_208b50;
        case 0x208b54u: goto label_208b54;
        case 0x208b58u: goto label_208b58;
        case 0x208b5cu: goto label_208b5c;
        case 0x208b60u: goto label_208b60;
        case 0x208b64u: goto label_208b64;
        case 0x208b68u: goto label_208b68;
        case 0x208b6cu: goto label_208b6c;
        case 0x208b70u: goto label_208b70;
        case 0x208b74u: goto label_208b74;
        case 0x208b78u: goto label_208b78;
        case 0x208b7cu: goto label_208b7c;
        case 0x208b80u: goto label_208b80;
        case 0x208b84u: goto label_208b84;
        case 0x208b88u: goto label_208b88;
        case 0x208b8cu: goto label_208b8c;
        case 0x208b90u: goto label_208b90;
        case 0x208b94u: goto label_208b94;
        case 0x208b98u: goto label_208b98;
        case 0x208b9cu: goto label_208b9c;
        case 0x208ba0u: goto label_208ba0;
        case 0x208ba4u: goto label_208ba4;
        case 0x208ba8u: goto label_208ba8;
        case 0x208bacu: goto label_208bac;
        case 0x208bb0u: goto label_208bb0;
        case 0x208bb4u: goto label_208bb4;
        case 0x208bb8u: goto label_208bb8;
        case 0x208bbcu: goto label_208bbc;
        case 0x208bc0u: goto label_208bc0;
        case 0x208bc4u: goto label_208bc4;
        case 0x208bc8u: goto label_208bc8;
        case 0x208bccu: goto label_208bcc;
        case 0x208bd0u: goto label_208bd0;
        case 0x208bd4u: goto label_208bd4;
        case 0x208bd8u: goto label_208bd8;
        case 0x208bdcu: goto label_208bdc;
        case 0x208be0u: goto label_208be0;
        case 0x208be4u: goto label_208be4;
        case 0x208be8u: goto label_208be8;
        case 0x208becu: goto label_208bec;
        case 0x208bf0u: goto label_208bf0;
        case 0x208bf4u: goto label_208bf4;
        case 0x208bf8u: goto label_208bf8;
        case 0x208bfcu: goto label_208bfc;
        case 0x208c00u: goto label_208c00;
        case 0x208c04u: goto label_208c04;
        case 0x208c08u: goto label_208c08;
        case 0x208c0cu: goto label_208c0c;
        default: break;
    }

    ctx->pc = 0x208b40u;

label_208b40:
    // 0x208b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_208b44:
    // 0x208b44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x208b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_208b48:
    // 0x208b48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x208b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_208b4c:
    // 0x208b4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208b50:
    // 0x208b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208b54:
    // 0x208b54: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x208b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_208b58:
    // 0x208b58: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_208b5c:
    if (ctx->pc == 0x208B5Cu) {
        ctx->pc = 0x208B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B58u;
        // 0x208b5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B60u;
        goto label_208b60;
    }
    ctx->pc = 0x208B58u;
    {
        const bool branch_taken_0x208b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B58u;
        // 0x208b5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b58) {
            ctx->pc = 0x208BFCu;
            goto label_208bfc;
        }
    }
    ctx->pc = 0x208B60u;
label_208b60:
    // 0x208b60: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x208b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_208b64:
    // 0x208b64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x208b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208b68:
    // 0x208b68: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x208b68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_208b6c:
    // 0x208b6c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x208b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_208b70:
    // 0x208b70: 0x60f809  jalr        $v1
label_208b74:
    if (ctx->pc == 0x208B74u) {
        ctx->pc = 0x208B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B70u;
        // 0x208b74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B78u;
        goto label_208b78;
    }
    ctx->pc = 0x208B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208B78u);
        ctx->pc = 0x208B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B70u;
        // 0x208b74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208B70u, 0x208B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208B78u;
label_208b78:
    // 0x208b78: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x208b78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_208b7c:
    // 0x208b7c: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x208b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_208b80:
    // 0x208b80: 0x26108d60  addiu       $s0, $s0, -0x72A0
    ctx->pc = 0x208b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937952));
label_208b84:
    // 0x208b84: 0x240600ca  addiu       $a2, $zero, 0xCA
    ctx->pc = 0x208b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_208b88:
    // 0x208b88: 0xc13a580  jal         func_4E9600
label_208b8c:
    if (ctx->pc == 0x208B8Cu) {
        ctx->pc = 0x208B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B88u;
        // 0x208b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B90u;
        goto label_208b90;
    }
    ctx->pc = 0x208B88u;
    SET_GPR_U32(ctx, 31, 0x208B90u);
    ctx->pc = 0x208B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B88u;
    // 0x208b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9600u, 0x208B88u, 0x208B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B90u;
label_208b90:
    // 0x208b90: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x208b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_208b94:
    // 0x208b94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x208b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208b98:
    // 0x208b98: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x208b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_208b9c:
    // 0x208b9c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x208b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_208ba0:
    // 0x208ba0: 0x60f809  jalr        $v1
label_208ba4:
    if (ctx->pc == 0x208BA4u) {
        ctx->pc = 0x208BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BA0u;
        // 0x208ba4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BA8u;
        goto label_208ba8;
    }
    ctx->pc = 0x208BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208BA8u);
        ctx->pc = 0x208BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BA0u;
        // 0x208ba4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208BA0u, 0x208BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208BA8u;
label_208ba8:
    // 0x208ba8: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x208ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_208bac:
    // 0x208bac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208bb0:
    // 0x208bb0: 0xc138e72  jal         func_4E39C8
label_208bb4:
    if (ctx->pc == 0x208BB4u) {
        ctx->pc = 0x208BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BB0u;
        // 0x208bb4: 0x240600cd  addiu       $a2, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BB8u;
        goto label_208bb8;
    }
    ctx->pc = 0x208BB0u;
    SET_GPR_U32(ctx, 31, 0x208BB8u);
    ctx->pc = 0x208BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208BB0u;
    // 0x208bb4: 0x240600cd  addiu       $a2, $zero, 0xCD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x208BB0u, 0x208BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BB8u;
label_208bb8:
    // 0x208bb8: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x208bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_208bbc:
    // 0x208bbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208bc0:
    // 0x208bc0: 0xc13a5a0  jal         func_4E9680
label_208bc4:
    if (ctx->pc == 0x208BC4u) {
        ctx->pc = 0x208BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BC0u;
        // 0x208bc4: 0x240600cf  addiu       $a2, $zero, 0xCF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BC8u;
        goto label_208bc8;
    }
    ctx->pc = 0x208BC0u;
    SET_GPR_U32(ctx, 31, 0x208BC8u);
    ctx->pc = 0x208BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208BC0u;
    // 0x208bc4: 0x240600cf  addiu       $a2, $zero, 0xCF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9680u, 0x208BC0u, 0x208BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BC8u;
label_208bc8:
    // 0x208bc8: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x208bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_208bcc:
    // 0x208bcc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x208bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208bd0:
    // 0x208bd0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x208bd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_208bd4:
    // 0x208bd4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x208bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_208bd8:
    // 0x208bd8: 0x60f809  jalr        $v1
label_208bdc:
    if (ctx->pc == 0x208BDCu) {
        ctx->pc = 0x208BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BD8u;
        // 0x208bdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BE0u;
        goto label_208be0;
    }
    ctx->pc = 0x208BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208BE0u);
        ctx->pc = 0x208BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BD8u;
        // 0x208bdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208BD8u, 0x208BE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208BE0u;
label_208be0:
    // 0x208be0: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x208be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_208be4:
    // 0x208be4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208be8:
    // 0x208be8: 0xc139fe8  jal         func_4E7FA0
label_208bec:
    if (ctx->pc == 0x208BECu) {
        ctx->pc = 0x208BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BE8u;
        // 0x208bec: 0x240600d2  addiu       $a2, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BF0u;
        goto label_208bf0;
    }
    ctx->pc = 0x208BE8u;
    SET_GPR_U32(ctx, 31, 0x208BF0u);
    ctx->pc = 0x208BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208BE8u;
    // 0x208bec: 0x240600d2  addiu       $a2, $zero, 0xD2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x208BE8u, 0x208BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BF0u;
label_208bf0:
    // 0x208bf0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x208bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_208bf4:
    // 0x208bf4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x208bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_208bf8:
    // 0x208bf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x208bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_208bfc:
    // 0x208bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x208bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_208c00:
    // 0x208c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208c04:
    // 0x208c04: 0x3e00008  jr          $ra
label_208c08:
    if (ctx->pc == 0x208C08u) {
        ctx->pc = 0x208C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C04u;
        // 0x208c08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C0Cu;
        goto label_208c0c;
    }
    ctx->pc = 0x208C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C04u;
        // 0x208c08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208C0Cu;
label_208c0c:
    // 0x208c0c: 0x0  nop
    ctx->pc = 0x208c0cu;
    // NOP
    ctx->pc = 0x208c10u;
}
