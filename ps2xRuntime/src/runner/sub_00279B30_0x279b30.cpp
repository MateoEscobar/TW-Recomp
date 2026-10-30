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

// Function: sub_00279B30
// Address: 0x279b30 - 0x279c48
void sub_00279B30_0x279b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279B30_0x279b30");
#endif

    switch (ctx->pc) {
        case 0x279b30u: goto label_279b30;
        case 0x279b34u: goto label_279b34;
        case 0x279b38u: goto label_279b38;
        case 0x279b3cu: goto label_279b3c;
        case 0x279b40u: goto label_279b40;
        case 0x279b44u: goto label_279b44;
        case 0x279b48u: goto label_279b48;
        case 0x279b4cu: goto label_279b4c;
        case 0x279b50u: goto label_279b50;
        case 0x279b54u: goto label_279b54;
        case 0x279b58u: goto label_279b58;
        case 0x279b5cu: goto label_279b5c;
        case 0x279b60u: goto label_279b60;
        case 0x279b64u: goto label_279b64;
        case 0x279b68u: goto label_279b68;
        case 0x279b6cu: goto label_279b6c;
        case 0x279b70u: goto label_279b70;
        case 0x279b74u: goto label_279b74;
        case 0x279b78u: goto label_279b78;
        case 0x279b7cu: goto label_279b7c;
        case 0x279b80u: goto label_279b80;
        case 0x279b84u: goto label_279b84;
        case 0x279b88u: goto label_279b88;
        case 0x279b8cu: goto label_279b8c;
        case 0x279b90u: goto label_279b90;
        case 0x279b94u: goto label_279b94;
        case 0x279b98u: goto label_279b98;
        case 0x279b9cu: goto label_279b9c;
        case 0x279ba0u: goto label_279ba0;
        case 0x279ba4u: goto label_279ba4;
        case 0x279ba8u: goto label_279ba8;
        case 0x279bacu: goto label_279bac;
        case 0x279bb0u: goto label_279bb0;
        case 0x279bb4u: goto label_279bb4;
        case 0x279bb8u: goto label_279bb8;
        case 0x279bbcu: goto label_279bbc;
        case 0x279bc0u: goto label_279bc0;
        case 0x279bc4u: goto label_279bc4;
        case 0x279bc8u: goto label_279bc8;
        case 0x279bccu: goto label_279bcc;
        case 0x279bd0u: goto label_279bd0;
        case 0x279bd4u: goto label_279bd4;
        case 0x279bd8u: goto label_279bd8;
        case 0x279bdcu: goto label_279bdc;
        case 0x279be0u: goto label_279be0;
        case 0x279be4u: goto label_279be4;
        case 0x279be8u: goto label_279be8;
        case 0x279becu: goto label_279bec;
        case 0x279bf0u: goto label_279bf0;
        case 0x279bf4u: goto label_279bf4;
        case 0x279bf8u: goto label_279bf8;
        case 0x279bfcu: goto label_279bfc;
        case 0x279c00u: goto label_279c00;
        case 0x279c04u: goto label_279c04;
        case 0x279c08u: goto label_279c08;
        case 0x279c0cu: goto label_279c0c;
        case 0x279c10u: goto label_279c10;
        case 0x279c14u: goto label_279c14;
        case 0x279c18u: goto label_279c18;
        case 0x279c1cu: goto label_279c1c;
        case 0x279c20u: goto label_279c20;
        case 0x279c24u: goto label_279c24;
        case 0x279c28u: goto label_279c28;
        case 0x279c2cu: goto label_279c2c;
        case 0x279c30u: goto label_279c30;
        case 0x279c34u: goto label_279c34;
        case 0x279c38u: goto label_279c38;
        case 0x279c3cu: goto label_279c3c;
        case 0x279c40u: goto label_279c40;
        case 0x279c44u: goto label_279c44;
        default: break;
    }

    ctx->pc = 0x279b30u;

label_279b30:
    // 0x279b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x279b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_279b34:
    // 0x279b34: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x279b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_279b38:
    // 0x279b38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x279b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_279b3c:
    // 0x279b3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x279b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_279b40:
    // 0x279b40: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x279b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_279b44:
    // 0x279b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_279b48:
    // 0x279b48: 0xc08a61a  jal         func_229868
label_279b4c:
    if (ctx->pc == 0x279B4Cu) {
        ctx->pc = 0x279B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B48u;
        // 0x279b4c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B50u;
        goto label_279b50;
    }
    ctx->pc = 0x279B48u;
    SET_GPR_U32(ctx, 31, 0x279B50u);
    ctx->pc = 0x279B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279B48u;
    // 0x279b4c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x279B48u, 0x279B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B50u;
label_279b50:
    // 0x279b50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x279b50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279b54:
    // 0x279b54: 0xc08a61a  jal         func_229868
label_279b58:
    if (ctx->pc == 0x279B58u) {
        ctx->pc = 0x279B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B54u;
        // 0x279b58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B5Cu;
        goto label_279b5c;
    }
    ctx->pc = 0x279B54u;
    SET_GPR_U32(ctx, 31, 0x279B5Cu);
    ctx->pc = 0x279B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279B54u;
    // 0x279b58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x279B54u, 0x279B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B5Cu;
label_279b5c:
    // 0x279b5c: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_279b60:
    if (ctx->pc == 0x279B60u) {
        ctx->pc = 0x279B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B5Cu;
        // 0x279b60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B64u;
        goto label_279b64;
    }
    ctx->pc = 0x279B5Cu;
    {
        const bool branch_taken_0x279b5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B5Cu;
        // 0x279b60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b5c) {
            ctx->pc = 0x279BECu;
            goto label_279bec;
        }
    }
    ctx->pc = 0x279B64u;
label_279b64:
    // 0x279b64: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_279b68:
    if (ctx->pc == 0x279B68u) {
        ctx->pc = 0x279B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B64u;
        // 0x279b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B6Cu;
        goto label_279b6c;
    }
    ctx->pc = 0x279B64u;
    {
        const bool branch_taken_0x279b64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B64u;
        // 0x279b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b64) {
            ctx->pc = 0x279C2Cu;
            goto label_279c2c;
        }
    }
    ctx->pc = 0x279B6Cu;
label_279b6c:
    // 0x279b6c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x279b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_279b70:
    // 0x279b70: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x279b70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_279b74:
    // 0x279b74: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x279b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_279b78:
    // 0x279b78: 0x40f809  jalr        $v0
label_279b7c:
    if (ctx->pc == 0x279B7Cu) {
        ctx->pc = 0x279B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B78u;
        // 0x279b7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B80u;
        goto label_279b80;
    }
    ctx->pc = 0x279B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x279B80u);
        ctx->pc = 0x279B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B78u;
        // 0x279b7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279B78u, 0x279B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279B80u;
label_279b80:
    // 0x279b80: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_279b84:
    if (ctx->pc == 0x279B84u) {
        ctx->pc = 0x279B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B80u;
        // 0x279b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B88u;
        goto label_279b88;
    }
    ctx->pc = 0x279B80u;
    {
        const bool branch_taken_0x279b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B80u;
        // 0x279b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b80) {
            ctx->pc = 0x279C2Cu;
            goto label_279c2c;
        }
    }
    ctx->pc = 0x279B88u;
label_279b88:
    // 0x279b88: 0xc089f5e  jal         func_227D78
label_279b8c:
    if (ctx->pc == 0x279B8Cu) {
        ctx->pc = 0x279B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B88u;
        // 0x279b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B90u;
        goto label_279b90;
    }
    ctx->pc = 0x279B88u;
    SET_GPR_U32(ctx, 31, 0x279B90u);
    ctx->pc = 0x279B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279B88u;
    // 0x279b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x279B88u, 0x279B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B90u;
label_279b90:
    // 0x279b90: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_279b94:
    if (ctx->pc == 0x279B94u) {
        ctx->pc = 0x279B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B90u;
        // 0x279b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B98u;
        goto label_279b98;
    }
    ctx->pc = 0x279B90u;
    {
        const bool branch_taken_0x279b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B90u;
        // 0x279b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b90) {
            ctx->pc = 0x279BECu;
            goto label_279bec;
        }
    }
    ctx->pc = 0x279B98u;
label_279b98:
    // 0x279b98: 0xc088aa4  jal         func_222A90
label_279b9c:
    if (ctx->pc == 0x279B9Cu) {
        ctx->pc = 0x279B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B98u;
        // 0x279b9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279BA0u;
        goto label_279ba0;
    }
    ctx->pc = 0x279B98u;
    SET_GPR_U32(ctx, 31, 0x279BA0u);
    ctx->pc = 0x279B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279B98u;
    // 0x279b9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x279B98u, 0x279BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BA0u;
label_279ba0:
    // 0x279ba0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_279ba4:
    if (ctx->pc == 0x279BA4u) {
        ctx->pc = 0x279BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BA0u;
        // 0x279ba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279BA8u;
        goto label_279ba8;
    }
    ctx->pc = 0x279BA0u;
    {
        const bool branch_taken_0x279ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BA0u;
        // 0x279ba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ba0) {
            ctx->pc = 0x279C2Cu;
            goto label_279c2c;
        }
    }
    ctx->pc = 0x279BA8u;
label_279ba8:
    // 0x279ba8: 0xc087502  jal         func_21D408
label_279bac:
    if (ctx->pc == 0x279BACu) {
        ctx->pc = 0x279BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BA8u;
        // 0x279bac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279BB0u;
        goto label_279bb0;
    }
    ctx->pc = 0x279BA8u;
    SET_GPR_U32(ctx, 31, 0x279BB0u);
    ctx->pc = 0x279BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279BA8u;
    // 0x279bac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x279BA8u, 0x279BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BB0u;
label_279bb0:
    // 0x279bb0: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x279bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_279bb4:
    // 0x279bb4: 0xc087502  jal         func_21D408
label_279bb8:
    if (ctx->pc == 0x279BB8u) {
        ctx->pc = 0x279BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BB4u;
        // 0x279bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279BBCu;
        goto label_279bbc;
    }
    ctx->pc = 0x279BB4u;
    SET_GPR_U32(ctx, 31, 0x279BBCu);
    ctx->pc = 0x279BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279BB4u;
    // 0x279bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x279BB4u, 0x279BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BBCu;
label_279bbc:
    // 0x279bbc: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x279bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_279bc0:
    // 0x279bc0: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
label_279bc4:
    if (ctx->pc == 0x279BC4u) {
        ctx->pc = 0x279BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BC0u;
        // 0x279bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279BC8u;
        goto label_279bc8;
    }
    ctx->pc = 0x279BC0u;
    {
        const bool branch_taken_0x279bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x279BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BC0u;
        // 0x279bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bc0) {
            ctx->pc = 0x279BECu;
            goto label_279bec;
        }
    }
    ctx->pc = 0x279BC8u;
label_279bc8:
    // 0x279bc8: 0xc08a684  jal         func_229A10
label_279bcc:
    if (ctx->pc == 0x279BCCu) {
        ctx->pc = 0x279BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BC8u;
        // 0x279bcc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279BD0u;
        goto label_279bd0;
    }
    ctx->pc = 0x279BC8u;
    SET_GPR_U32(ctx, 31, 0x279BD0u);
    ctx->pc = 0x279BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279BC8u;
    // 0x279bcc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x279BC8u, 0x279BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BD0u;
label_279bd0:
    // 0x279bd0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x279bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279bd4:
    // 0x279bd4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x279bd4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_279bd8:
    // 0x279bd8: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x279bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279bdc:
    // 0x279bdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279be0:
    // 0x279be0: 0x0  nop
    ctx->pc = 0x279be0u;
    // NOP
label_279be4:
    // 0x279be4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_279be8:
    if (ctx->pc == 0x279BE8u) {
        ctx->pc = 0x279BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BE4u;
        // 0x279be8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279BECu;
        goto label_279bec;
    }
    ctx->pc = 0x279BE4u;
    {
        const bool branch_taken_0x279be4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BE4u;
        // 0x279be8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279be4) {
            ctx->pc = 0x279BF4u;
            goto label_279bf4;
        }
    }
    ctx->pc = 0x279BECu;
label_279bec:
    // 0x279bec: 0x1000000f  b           . + 4 + (0xF << 2)
label_279bf0:
    if (ctx->pc == 0x279BF0u) {
        ctx->pc = 0x279BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BECu;
        // 0x279bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279BF4u;
        goto label_279bf4;
    }
    ctx->pc = 0x279BECu;
    {
        const bool branch_taken_0x279bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BECu;
        // 0x279bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bec) {
            ctx->pc = 0x279C2Cu;
            goto label_279c2c;
        }
    }
    ctx->pc = 0x279BF4u;
label_279bf4:
    // 0x279bf4: 0xc089f98  jal         func_227E60
label_279bf8:
    if (ctx->pc == 0x279BF8u) {
        ctx->pc = 0x279BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BF4u;
        // 0x279bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279BFCu;
        goto label_279bfc;
    }
    ctx->pc = 0x279BF4u;
    SET_GPR_U32(ctx, 31, 0x279BFCu);
    ctx->pc = 0x279BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279BF4u;
    // 0x279bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x279BF4u, 0x279BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BFCu;
label_279bfc:
    // 0x279bfc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_279c00:
    if (ctx->pc == 0x279C00u) {
        ctx->pc = 0x279C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BFCu;
        // 0x279c00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C04u;
        goto label_279c04;
    }
    ctx->pc = 0x279BFCu;
    {
        const bool branch_taken_0x279bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BFCu;
        // 0x279c00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bfc) {
            ctx->pc = 0x279C2Cu;
            goto label_279c2c;
        }
    }
    ctx->pc = 0x279C04u;
label_279c04:
    // 0x279c04: 0xc088f04  jal         func_223C10
label_279c08:
    if (ctx->pc == 0x279C08u) {
        ctx->pc = 0x279C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C04u;
        // 0x279c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C0Cu;
        goto label_279c0c;
    }
    ctx->pc = 0x279C04u;
    SET_GPR_U32(ctx, 31, 0x279C0Cu);
    ctx->pc = 0x279C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279C04u;
    // 0x279c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x279C04u, 0x279C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C0Cu;
label_279c0c:
    // 0x279c0c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_279c10:
    if (ctx->pc == 0x279C10u) {
        ctx->pc = 0x279C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C0Cu;
        // 0x279c10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C14u;
        goto label_279c14;
    }
    ctx->pc = 0x279C0Cu;
    {
        const bool branch_taken_0x279c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C0Cu;
        // 0x279c10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c0c) {
            ctx->pc = 0x279C2Cu;
            goto label_279c2c;
        }
    }
    ctx->pc = 0x279C14u;
label_279c14:
    // 0x279c14: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x279c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_279c18:
    // 0x279c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_279c1c:
    // 0x279c1c: 0xc089998  jal         func_226660
label_279c20:
    if (ctx->pc == 0x279C20u) {
        ctx->pc = 0x279C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C1Cu;
        // 0x279c20: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C24u;
        goto label_279c24;
    }
    ctx->pc = 0x279C1Cu;
    SET_GPR_U32(ctx, 31, 0x279C24u);
    ctx->pc = 0x279C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279C1Cu;
    // 0x279c20: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x279C1Cu, 0x279C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C24u;
label_279c24:
    // 0x279c24: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x279c24u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_279c28:
    // 0x279c28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x279c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279c2c:
    // 0x279c2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x279c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_279c30:
    // 0x279c30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x279c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_279c34:
    // 0x279c34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x279c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_279c38:
    // 0x279c38: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x279c38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_279c3c:
    // 0x279c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279c40:
    // 0x279c40: 0x3e00008  jr          $ra
label_279c44:
    if (ctx->pc == 0x279C44u) {
        ctx->pc = 0x279C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C40u;
        // 0x279c44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C48u;
        goto label_fallthrough_0x279c40;
    }
    ctx->pc = 0x279C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C40u;
        // 0x279c44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x279c40:
    ctx->pc = 0x279C48u;
}
