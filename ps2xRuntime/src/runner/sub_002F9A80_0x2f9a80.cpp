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

// Function: sub_002F9A80
// Address: 0x2f9a80 - 0x2f9b90
void sub_002F9A80_0x2f9a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9A80_0x2f9a80");
#endif

    switch (ctx->pc) {
        case 0x2f9a80u: goto label_2f9a80;
        case 0x2f9a84u: goto label_2f9a84;
        case 0x2f9a88u: goto label_2f9a88;
        case 0x2f9a8cu: goto label_2f9a8c;
        case 0x2f9a90u: goto label_2f9a90;
        case 0x2f9a94u: goto label_2f9a94;
        case 0x2f9a98u: goto label_2f9a98;
        case 0x2f9a9cu: goto label_2f9a9c;
        case 0x2f9aa0u: goto label_2f9aa0;
        case 0x2f9aa4u: goto label_2f9aa4;
        case 0x2f9aa8u: goto label_2f9aa8;
        case 0x2f9aacu: goto label_2f9aac;
        case 0x2f9ab0u: goto label_2f9ab0;
        case 0x2f9ab4u: goto label_2f9ab4;
        case 0x2f9ab8u: goto label_2f9ab8;
        case 0x2f9abcu: goto label_2f9abc;
        case 0x2f9ac0u: goto label_2f9ac0;
        case 0x2f9ac4u: goto label_2f9ac4;
        case 0x2f9ac8u: goto label_2f9ac8;
        case 0x2f9accu: goto label_2f9acc;
        case 0x2f9ad0u: goto label_2f9ad0;
        case 0x2f9ad4u: goto label_2f9ad4;
        case 0x2f9ad8u: goto label_2f9ad8;
        case 0x2f9adcu: goto label_2f9adc;
        case 0x2f9ae0u: goto label_2f9ae0;
        case 0x2f9ae4u: goto label_2f9ae4;
        case 0x2f9ae8u: goto label_2f9ae8;
        case 0x2f9aecu: goto label_2f9aec;
        case 0x2f9af0u: goto label_2f9af0;
        case 0x2f9af4u: goto label_2f9af4;
        case 0x2f9af8u: goto label_2f9af8;
        case 0x2f9afcu: goto label_2f9afc;
        case 0x2f9b00u: goto label_2f9b00;
        case 0x2f9b04u: goto label_2f9b04;
        case 0x2f9b08u: goto label_2f9b08;
        case 0x2f9b0cu: goto label_2f9b0c;
        case 0x2f9b10u: goto label_2f9b10;
        case 0x2f9b14u: goto label_2f9b14;
        case 0x2f9b18u: goto label_2f9b18;
        case 0x2f9b1cu: goto label_2f9b1c;
        case 0x2f9b20u: goto label_2f9b20;
        case 0x2f9b24u: goto label_2f9b24;
        case 0x2f9b28u: goto label_2f9b28;
        case 0x2f9b2cu: goto label_2f9b2c;
        case 0x2f9b30u: goto label_2f9b30;
        case 0x2f9b34u: goto label_2f9b34;
        case 0x2f9b38u: goto label_2f9b38;
        case 0x2f9b3cu: goto label_2f9b3c;
        case 0x2f9b40u: goto label_2f9b40;
        case 0x2f9b44u: goto label_2f9b44;
        case 0x2f9b48u: goto label_2f9b48;
        case 0x2f9b4cu: goto label_2f9b4c;
        case 0x2f9b50u: goto label_2f9b50;
        case 0x2f9b54u: goto label_2f9b54;
        case 0x2f9b58u: goto label_2f9b58;
        case 0x2f9b5cu: goto label_2f9b5c;
        case 0x2f9b60u: goto label_2f9b60;
        case 0x2f9b64u: goto label_2f9b64;
        case 0x2f9b68u: goto label_2f9b68;
        case 0x2f9b6cu: goto label_2f9b6c;
        case 0x2f9b70u: goto label_2f9b70;
        case 0x2f9b74u: goto label_2f9b74;
        case 0x2f9b78u: goto label_2f9b78;
        case 0x2f9b7cu: goto label_2f9b7c;
        case 0x2f9b80u: goto label_2f9b80;
        case 0x2f9b84u: goto label_2f9b84;
        case 0x2f9b88u: goto label_2f9b88;
        case 0x2f9b8cu: goto label_2f9b8c;
        default: break;
    }

    ctx->pc = 0x2f9a80u;

label_2f9a80:
    // 0x2f9a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f9a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2f9a84:
    // 0x2f9a84: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f9a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2f9a88:
    // 0x2f9a88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f9a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f9a8c:
    // 0x2f9a8c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2f9a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2f9a90:
    // 0x2f9a90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2f9a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2f9a94:
    // 0x2f9a94: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f9a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9a98:
    // 0x2f9a98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f9a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2f9a9c:
    // 0x2f9a9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f9a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f9aa0:
    // 0x2f9aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f9aa4:
    // 0x2f9aa4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f9aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f9aa8:
    // 0x2f9aa8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2f9aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f9aac:
    // 0x2f9aac: 0xc089998  jal         func_226660
label_2f9ab0:
    if (ctx->pc == 0x2F9AB0u) {
        ctx->pc = 0x2F9AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AACu;
        // 0x2f9ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9AB4u;
        goto label_2f9ab4;
    }
    ctx->pc = 0x2F9AACu;
    SET_GPR_U32(ctx, 31, 0x2F9AB4u);
    ctx->pc = 0x2F9AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AACu;
    // 0x2f9ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2F9AACu, 0x2F9AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9AB4u;
label_2f9ab4:
    // 0x2f9ab4: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
label_2f9ab8:
    if (ctx->pc == 0x2F9AB8u) {
        ctx->pc = 0x2F9ABCu;
        goto label_2f9abc;
    }
    ctx->pc = 0x2F9AB4u;
    {
        const bool branch_taken_0x2f9ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2f9ab4) {
            ctx->pc = 0x2F9AC4u;
            goto label_2f9ac4;
        }
    }
    ctx->pc = 0x2F9ABCu;
label_2f9abc:
    // 0x2f9abc: 0xc08a588  jal         func_229620
label_2f9ac0:
    if (ctx->pc == 0x2F9AC0u) {
        ctx->pc = 0x2F9AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9ABCu;
        // 0x2f9ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9AC4u;
        goto label_2f9ac4;
    }
    ctx->pc = 0x2F9ABCu;
    SET_GPR_U32(ctx, 31, 0x2F9AC4u);
    ctx->pc = 0x2F9AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9ABCu;
    // 0x2f9ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229620u, 0x2F9ABCu, 0x2F9AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9AC4u;
label_2f9ac4:
    // 0x2f9ac4: 0xc0962a2  jal         func_258A88
label_2f9ac8:
    if (ctx->pc == 0x2F9AC8u) {
        ctx->pc = 0x2F9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AC4u;
        // 0x2f9ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9ACCu;
        goto label_2f9acc;
    }
    ctx->pc = 0x2F9AC4u;
    SET_GPR_U32(ctx, 31, 0x2F9ACCu);
    ctx->pc = 0x2F9AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AC4u;
    // 0x2f9ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A88u, 0x2F9AC4u, 0x2F9ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9ACCu;
label_2f9acc:
    // 0x2f9acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ad0:
    // 0x2f9ad0: 0xc08b900  jal         func_22E400
label_2f9ad4:
    if (ctx->pc == 0x2F9AD4u) {
        ctx->pc = 0x2F9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AD0u;
        // 0x2f9ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9AD8u;
        goto label_2f9ad8;
    }
    ctx->pc = 0x2F9AD0u;
    SET_GPR_U32(ctx, 31, 0x2F9AD8u);
    ctx->pc = 0x2F9AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AD0u;
    // 0x2f9ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E400u, 0x2F9AD0u, 0x2F9AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9AD8u;
label_2f9ad8:
    // 0x2f9ad8: 0xc08cade  jal         func_232B78
label_2f9adc:
    if (ctx->pc == 0x2F9ADCu) {
        ctx->pc = 0x2F9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AD8u;
        // 0x2f9adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9AE0u;
        goto label_2f9ae0;
    }
    ctx->pc = 0x2F9AD8u;
    SET_GPR_U32(ctx, 31, 0x2F9AE0u);
    ctx->pc = 0x2F9ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AD8u;
    // 0x2f9adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B78u, 0x2F9AD8u, 0x2F9AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9AE0u;
label_2f9ae0:
    // 0x2f9ae0: 0xc088ef0  jal         func_223BC0
label_2f9ae4:
    if (ctx->pc == 0x2F9AE4u) {
        ctx->pc = 0x2F9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AE0u;
        // 0x2f9ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9AE8u;
        goto label_2f9ae8;
    }
    ctx->pc = 0x2F9AE0u;
    SET_GPR_U32(ctx, 31, 0x2F9AE8u);
    ctx->pc = 0x2F9AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AE0u;
    // 0x2f9ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2F9AE0u, 0x2F9AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9AE8u;
label_2f9ae8:
    // 0x2f9ae8: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
label_2f9aec:
    if (ctx->pc == 0x2F9AECu) {
        ctx->pc = 0x2F9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AE8u;
        // 0x2f9aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9AF0u;
        goto label_2f9af0;
    }
    ctx->pc = 0x2F9AE8u;
    {
        const bool branch_taken_0x2f9ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AE8u;
        // 0x2f9aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ae8) {
            ctx->pc = 0x2F9AFCu;
            goto label_2f9afc;
        }
    }
    ctx->pc = 0x2F9AF0u;
label_2f9af0:
    // 0x2f9af0: 0xc08be36  jal         func_22F8D8
label_2f9af4:
    if (ctx->pc == 0x2F9AF4u) {
        ctx->pc = 0x2F9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AF0u;
        // 0x2f9af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9AF8u;
        goto label_2f9af8;
    }
    ctx->pc = 0x2F9AF0u;
    SET_GPR_U32(ctx, 31, 0x2F9AF8u);
    ctx->pc = 0x2F9AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AF0u;
    // 0x2f9af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2F9AF0u, 0x2F9AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9AF8u;
label_2f9af8:
    // 0x2f9af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9afc:
    // 0x2f9afc: 0xc089998  jal         func_226660
label_2f9b00:
    if (ctx->pc == 0x2F9B00u) {
        ctx->pc = 0x2F9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AFCu;
        // 0x2f9b00: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B04u;
        goto label_2f9b04;
    }
    ctx->pc = 0x2F9AFCu;
    SET_GPR_U32(ctx, 31, 0x2F9B04u);
    ctx->pc = 0x2F9B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AFCu;
    // 0x2f9b00: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2F9AFCu, 0x2F9B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B04u;
label_2f9b04:
    // 0x2f9b04: 0x54510016  bnel        $v0, $s1, . + 4 + (0x16 << 2)
label_2f9b08:
    if (ctx->pc == 0x2F9B08u) {
        ctx->pc = 0x2F9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B04u;
        // 0x2f9b08: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B0Cu;
        goto label_2f9b0c;
    }
    ctx->pc = 0x2F9B04u;
    {
        const bool branch_taken_0x2f9b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2f9b04) {
            ctx->pc = 0x2F9B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9B04u;
            // 0x2f9b08: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9B60u;
            goto label_2f9b60;
        }
    }
    ctx->pc = 0x2F9B0Cu;
label_2f9b0c:
    // 0x2f9b0c: 0xc089c18  jal         func_227060
label_2f9b10:
    if (ctx->pc == 0x2F9B10u) {
        ctx->pc = 0x2F9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B0Cu;
        // 0x2f9b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B14u;
        goto label_2f9b14;
    }
    ctx->pc = 0x2F9B0Cu;
    SET_GPR_U32(ctx, 31, 0x2F9B14u);
    ctx->pc = 0x2F9B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B0Cu;
    // 0x2f9b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x2F9B0Cu, 0x2F9B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B14u;
label_2f9b14:
    // 0x2f9b14: 0xc0e57ce  jal         func_395F38
label_2f9b18:
    if (ctx->pc == 0x2F9B18u) {
        ctx->pc = 0x2F9B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B14u;
        // 0x2f9b18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B1Cu;
        goto label_2f9b1c;
    }
    ctx->pc = 0x2F9B14u;
    SET_GPR_U32(ctx, 31, 0x2F9B1Cu);
    ctx->pc = 0x2F9B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B14u;
    // 0x2f9b18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2F9B14u, 0x2F9B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B1Cu;
label_2f9b1c:
    // 0x2f9b1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f9b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b20:
    // 0x2f9b20: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_2f9b24:
    if (ctx->pc == 0x2F9B24u) {
        ctx->pc = 0x2F9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B20u;
        // 0x2f9b24: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B28u;
        goto label_2f9b28;
    }
    ctx->pc = 0x2F9B20u;
    {
        const bool branch_taken_0x2f9b20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B20u;
        // 0x2f9b24: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b20) {
            ctx->pc = 0x2F9B5Cu;
            goto label_2f9b5c;
        }
    }
    ctx->pc = 0x2F9B28u;
label_2f9b28:
    // 0x2f9b28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b2c:
    // 0x2f9b2c: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x2f9b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_2f9b30:
    // 0x2f9b30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f9b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b34:
    // 0x2f9b34: 0xc0e637e  jal         func_398DF8
label_2f9b38:
    if (ctx->pc == 0x2F9B38u) {
        ctx->pc = 0x2F9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B34u;
        // 0x2f9b38: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B3Cu;
        goto label_2f9b3c;
    }
    ctx->pc = 0x2F9B34u;
    SET_GPR_U32(ctx, 31, 0x2F9B3Cu);
    ctx->pc = 0x2F9B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B34u;
    // 0x2f9b38: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x2F9B34u, 0x2F9B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B3Cu;
label_2f9b3c:
    // 0x2f9b3c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2f9b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_2f9b40:
    // 0x2f9b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b44:
    // 0x2f9b44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f9b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b48:
    // 0x2f9b48: 0xc08a5b0  jal         func_2296C0
label_2f9b4c:
    if (ctx->pc == 0x2F9B4Cu) {
        ctx->pc = 0x2F9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B48u;
        // 0x2f9b4c: 0x24c616c0  addiu       $a2, $a2, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B50u;
        goto label_2f9b50;
    }
    ctx->pc = 0x2F9B48u;
    SET_GPR_U32(ctx, 31, 0x2F9B50u);
    ctx->pc = 0x2F9B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B48u;
    // 0x2f9b4c: 0x24c616c0  addiu       $a2, $a2, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2296C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2296C0u, 0x2F9B48u, 0x2F9B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B50u;
label_2f9b50:
    // 0x2f9b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b54:
    // 0x2f9b54: 0xc089c20  jal         func_227080
label_2f9b58:
    if (ctx->pc == 0x2F9B58u) {
        ctx->pc = 0x2F9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B54u;
        // 0x2f9b58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B5Cu;
        goto label_2f9b5c;
    }
    ctx->pc = 0x2F9B54u;
    SET_GPR_U32(ctx, 31, 0x2F9B5Cu);
    ctx->pc = 0x2F9B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B54u;
    // 0x2f9b58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x2F9B54u, 0x2F9B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B5Cu;
label_2f9b5c:
    // 0x2f9b5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f9b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f9b60:
    // 0x2f9b60: 0x84440148  lh          $a0, 0x148($v0)
    ctx->pc = 0x2f9b60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_2f9b64:
    // 0x2f9b64: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x2f9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_2f9b68:
    // 0x2f9b68: 0x60f809  jalr        $v1
label_2f9b6c:
    if (ctx->pc == 0x2F9B6Cu) {
        ctx->pc = 0x2F9B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B68u;
        // 0x2f9b6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B70u;
        goto label_2f9b70;
    }
    ctx->pc = 0x2F9B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F9B70u);
        ctx->pc = 0x2F9B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B68u;
        // 0x2f9b6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9B68u, 0x2F9B70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9B70u;
label_2f9b70:
    // 0x2f9b70: 0xc0a36c8  jal         func_28DB20
label_2f9b74:
    if (ctx->pc == 0x2F9B74u) {
        ctx->pc = 0x2F9B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B70u;
        // 0x2f9b74: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B78u;
        goto label_2f9b78;
    }
    ctx->pc = 0x2F9B70u;
    SET_GPR_U32(ctx, 31, 0x2F9B78u);
    ctx->pc = 0x2F9B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B70u;
    // 0x2f9b74: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2F9B70u, 0x2F9B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B78u;
label_2f9b78:
    // 0x2f9b78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f9b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f9b7c:
    // 0x2f9b7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f9b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f9b80:
    // 0x2f9b80: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2f9b80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f9b84:
    // 0x2f9b84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f9b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9b88:
    // 0x2f9b88: 0x3e00008  jr          $ra
label_2f9b8c:
    if (ctx->pc == 0x2F9B8Cu) {
        ctx->pc = 0x2F9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B88u;
        // 0x2f9b8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B90u;
        goto label_fallthrough_0x2f9b88;
    }
    ctx->pc = 0x2F9B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B88u;
        // 0x2f9b8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f9b88:
    ctx->pc = 0x2F9B90u;
}
