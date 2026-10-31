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

// Function: sub_001E1A38
// Address: 0x1e1a38 - 0x1e1b58
void sub_001E1A38_0x1e1a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1A38_0x1e1a38");
#endif

    switch (ctx->pc) {
        case 0x1e1a38u: goto label_1e1a38;
        case 0x1e1a3cu: goto label_1e1a3c;
        case 0x1e1a40u: goto label_1e1a40;
        case 0x1e1a44u: goto label_1e1a44;
        case 0x1e1a48u: goto label_1e1a48;
        case 0x1e1a4cu: goto label_1e1a4c;
        case 0x1e1a50u: goto label_1e1a50;
        case 0x1e1a54u: goto label_1e1a54;
        case 0x1e1a58u: goto label_1e1a58;
        case 0x1e1a5cu: goto label_1e1a5c;
        case 0x1e1a60u: goto label_1e1a60;
        case 0x1e1a64u: goto label_1e1a64;
        case 0x1e1a68u: goto label_1e1a68;
        case 0x1e1a6cu: goto label_1e1a6c;
        case 0x1e1a70u: goto label_1e1a70;
        case 0x1e1a74u: goto label_1e1a74;
        case 0x1e1a78u: goto label_1e1a78;
        case 0x1e1a7cu: goto label_1e1a7c;
        case 0x1e1a80u: goto label_1e1a80;
        case 0x1e1a84u: goto label_1e1a84;
        case 0x1e1a88u: goto label_1e1a88;
        case 0x1e1a8cu: goto label_1e1a8c;
        case 0x1e1a90u: goto label_1e1a90;
        case 0x1e1a94u: goto label_1e1a94;
        case 0x1e1a98u: goto label_1e1a98;
        case 0x1e1a9cu: goto label_1e1a9c;
        case 0x1e1aa0u: goto label_1e1aa0;
        case 0x1e1aa4u: goto label_1e1aa4;
        case 0x1e1aa8u: goto label_1e1aa8;
        case 0x1e1aacu: goto label_1e1aac;
        case 0x1e1ab0u: goto label_1e1ab0;
        case 0x1e1ab4u: goto label_1e1ab4;
        case 0x1e1ab8u: goto label_1e1ab8;
        case 0x1e1abcu: goto label_1e1abc;
        case 0x1e1ac0u: goto label_1e1ac0;
        case 0x1e1ac4u: goto label_1e1ac4;
        case 0x1e1ac8u: goto label_1e1ac8;
        case 0x1e1accu: goto label_1e1acc;
        case 0x1e1ad0u: goto label_1e1ad0;
        case 0x1e1ad4u: goto label_1e1ad4;
        case 0x1e1ad8u: goto label_1e1ad8;
        case 0x1e1adcu: goto label_1e1adc;
        case 0x1e1ae0u: goto label_1e1ae0;
        case 0x1e1ae4u: goto label_1e1ae4;
        case 0x1e1ae8u: goto label_1e1ae8;
        case 0x1e1aecu: goto label_1e1aec;
        case 0x1e1af0u: goto label_1e1af0;
        case 0x1e1af4u: goto label_1e1af4;
        case 0x1e1af8u: goto label_1e1af8;
        case 0x1e1afcu: goto label_1e1afc;
        case 0x1e1b00u: goto label_1e1b00;
        case 0x1e1b04u: goto label_1e1b04;
        case 0x1e1b08u: goto label_1e1b08;
        case 0x1e1b0cu: goto label_1e1b0c;
        case 0x1e1b10u: goto label_1e1b10;
        case 0x1e1b14u: goto label_1e1b14;
        case 0x1e1b18u: goto label_1e1b18;
        case 0x1e1b1cu: goto label_1e1b1c;
        case 0x1e1b20u: goto label_1e1b20;
        case 0x1e1b24u: goto label_1e1b24;
        case 0x1e1b28u: goto label_1e1b28;
        case 0x1e1b2cu: goto label_1e1b2c;
        case 0x1e1b30u: goto label_1e1b30;
        case 0x1e1b34u: goto label_1e1b34;
        case 0x1e1b38u: goto label_1e1b38;
        case 0x1e1b3cu: goto label_1e1b3c;
        case 0x1e1b40u: goto label_1e1b40;
        case 0x1e1b44u: goto label_1e1b44;
        case 0x1e1b48u: goto label_1e1b48;
        case 0x1e1b4cu: goto label_1e1b4c;
        case 0x1e1b50u: goto label_1e1b50;
        case 0x1e1b54u: goto label_1e1b54;
        default: break;
    }

    ctx->pc = 0x1e1a38u;

label_1e1a38:
    // 0x1e1a38: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e1a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1e1a3c:
    // 0x1e1a3c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1e1a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1e1a40:
    // 0x1e1a40: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1e1a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1e1a44:
    // 0x1e1a44: 0x24900084  addiu       $s0, $a0, 0x84
    ctx->pc = 0x1e1a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_1e1a48:
    // 0x1e1a48: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1e1a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1e1a4c:
    // 0x1e1a4c: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1e1a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e1a50:
    // 0x1e1a50: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1e1a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_1e1a54:
    // 0x1e1a54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e1a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a58:
    // 0x1e1a58: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e1a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1e1a5c:
    // 0x1e1a5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e1a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a60:
    // 0x1e1a60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a64:
    // 0x1e1a64: 0xc13a442  jal         func_4E9108
label_1e1a68:
    if (ctx->pc == 0x1E1A68u) {
        ctx->pc = 0x1E1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A64u;
        // 0x1e1a68: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A6Cu;
        goto label_1e1a6c;
    }
    ctx->pc = 0x1E1A64u;
    SET_GPR_U32(ctx, 31, 0x1E1A6Cu);
    ctx->pc = 0x1E1A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A64u;
    // 0x1e1a68: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9108u, 0x1E1A64u, 0x1E1A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A6Cu;
label_1e1a6c:
    // 0x1e1a6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e1a70:
    // 0x1e1a70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e1a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1a74:
    // 0x1e1a74: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
label_1e1a78:
    if (ctx->pc == 0x1E1A78u) {
        ctx->pc = 0x1E1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A74u;
        // 0x1e1a78: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A7Cu;
        goto label_1e1a7c;
    }
    ctx->pc = 0x1E1A74u;
    {
        const bool branch_taken_0x1e1a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A74u;
        // 0x1e1a78: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a74) {
            ctx->pc = 0x1E1B40u;
            goto label_1e1b40;
        }
    }
    ctx->pc = 0x1E1A7Cu;
label_1e1a7c:
    // 0x1e1a7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e1a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e1a80:
    // 0x1e1a80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a84:
    // 0x1e1a84: 0xc13a214  jal         func_4E8850
label_1e1a88:
    if (ctx->pc == 0x1E1A88u) {
        ctx->pc = 0x1E1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A84u;
        // 0x1e1a88: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A8Cu;
        goto label_1e1a8c;
    }
    ctx->pc = 0x1E1A84u;
    SET_GPR_U32(ctx, 31, 0x1E1A8Cu);
    ctx->pc = 0x1E1A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A84u;
    // 0x1e1a88: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8850u, 0x1E1A84u, 0x1E1A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A8Cu;
label_1e1a8c:
    // 0x1e1a8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e1a90:
    // 0x1e1a90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a94:
    // 0x1e1a94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1a98:
    // 0x1e1a98: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1e1a9c:
    if (ctx->pc == 0x1E1A9Cu) {
        ctx->pc = 0x1E1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A98u;
        // 0x1e1a9c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1AA0u;
        goto label_1e1aa0;
    }
    ctx->pc = 0x1E1A98u;
    {
        const bool branch_taken_0x1e1a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A98u;
        // 0x1e1a9c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a98) {
            ctx->pc = 0x1E1AB4u;
            goto label_1e1ab4;
        }
    }
    ctx->pc = 0x1E1AA0u;
label_1e1aa0:
    // 0x1e1aa0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1e1aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1e1aa4:
    // 0x1e1aa4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1e1aa8:
    // 0x1e1aa8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1e1aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e1aac:
    // 0x1e1aac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1e1ab0:
    if (ctx->pc == 0x1E1AB0u) {
        ctx->pc = 0x1E1AB4u;
        goto label_1e1ab4;
    }
    ctx->pc = 0x1E1AACu;
    {
        const bool branch_taken_0x1e1aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1aac) {
            ctx->pc = 0x1E1AB8u;
            goto label_1e1ab8;
        }
    }
    ctx->pc = 0x1E1AB4u;
label_1e1ab4:
    // 0x1e1ab4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e1ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1ab8:
    // 0x1e1ab8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1e1abc:
    if (ctx->pc == 0x1E1ABCu) {
        ctx->pc = 0x1E1ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AB8u;
        // 0x1e1abc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1AC0u;
        goto label_1e1ac0;
    }
    ctx->pc = 0x1E1AB8u;
    {
        const bool branch_taken_0x1e1ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AB8u;
        // 0x1e1abc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ab8) {
            ctx->pc = 0x1E1AF0u;
            goto label_1e1af0;
        }
    }
    ctx->pc = 0x1E1AC0u;
label_1e1ac0:
    // 0x1e1ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ac4:
    // 0x1e1ac4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e1ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e1ac8:
    // 0x1e1ac8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e1ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e1acc:
    // 0x1e1acc: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1e1accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1e1ad0:
    // 0x1e1ad0: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1e1ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e1ad4:
    // 0x1e1ad4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e1ad8:
    // 0x1e1ad8: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1e1ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_1e1adc:
    // 0x1e1adc: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1e1adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_1e1ae0:
    // 0x1e1ae0: 0xc13a36e  jal         func_4E8DB8
label_1e1ae4:
    if (ctx->pc == 0x1E1AE4u) {
        ctx->pc = 0x1E1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AE0u;
        // 0x1e1ae4: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1AE8u;
        goto label_1e1ae8;
    }
    ctx->pc = 0x1E1AE0u;
    SET_GPR_U32(ctx, 31, 0x1E1AE8u);
    ctx->pc = 0x1E1AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1AE0u;
    // 0x1e1ae4: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8DB8u, 0x1E1AE0u, 0x1E1AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1AE8u;
label_1e1ae8:
    // 0x1e1ae8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1e1aec:
    // 0x1e1aec: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1e1aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1e1af0:
    // 0x1e1af0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1af4:
    // 0x1e1af4: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x1e1af4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1e1af8:
    // 0x1e1af8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_1e1afc:
    if (ctx->pc == 0x1E1AFCu) {
        ctx->pc = 0x1E1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AF8u;
        // 0x1e1afc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B00u;
        goto label_1e1b00;
    }
    ctx->pc = 0x1E1AF8u;
    {
        const bool branch_taken_0x1e1af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AF8u;
        // 0x1e1afc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1af8) {
            ctx->pc = 0x1E1B40u;
            goto label_1e1b40;
        }
    }
    ctx->pc = 0x1E1B00u;
label_1e1b00:
    // 0x1e1b00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e1b04:
    // 0x1e1b04: 0x84440100  lh          $a0, 0x100($v0)
    ctx->pc = 0x1e1b04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
label_1e1b08:
    // 0x1e1b08: 0x8c460104  lw          $a2, 0x104($v0)
    ctx->pc = 0x1e1b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_1e1b0c:
    // 0x1e1b0c: 0xc0f809  jalr        $a2
label_1e1b10:
    if (ctx->pc == 0x1E1B10u) {
        ctx->pc = 0x1E1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B0Cu;
        // 0x1e1b10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B14u;
        goto label_1e1b14;
    }
    ctx->pc = 0x1E1B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1E1B14u);
        ctx->pc = 0x1E1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B0Cu;
        // 0x1e1b10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1B0Cu, 0x1E1B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1B14u;
label_1e1b14:
    // 0x1e1b14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e1b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e1b18:
    // 0x1e1b18: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x1e1b18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_1e1b1c:
    // 0x1e1b1c: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x1e1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_1e1b20:
    // 0x1e1b20: 0x40f809  jalr        $v0
label_1e1b24:
    if (ctx->pc == 0x1E1B24u) {
        ctx->pc = 0x1E1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B20u;
        // 0x1e1b24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B28u;
        goto label_1e1b28;
    }
    ctx->pc = 0x1E1B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1B28u);
        ctx->pc = 0x1E1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B20u;
        // 0x1e1b24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1B20u, 0x1E1B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1B28u;
label_1e1b28:
    // 0x1e1b28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e1b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1b2c:
    // 0x1e1b2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e1b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e1b30:
    // 0x1e1b30: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x1e1b30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1e1b34:
    // 0x1e1b34: 0x8c6500ac  lw          $a1, 0xAC($v1)
    ctx->pc = 0x1e1b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1e1b38:
    // 0x1e1b38: 0xa0f809  jalr        $a1
label_1e1b3c:
    if (ctx->pc == 0x1E1B3Cu) {
        ctx->pc = 0x1E1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B38u;
        // 0x1e1b3c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B40u;
        goto label_1e1b40;
    }
    ctx->pc = 0x1E1B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1E1B40u);
        ctx->pc = 0x1E1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B38u;
        // 0x1e1b3c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1B38u, 0x1E1B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1B40u;
label_1e1b40:
    // 0x1e1b40: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1e1b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1e1b44:
    // 0x1e1b44: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1e1b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1e1b48:
    // 0x1e1b48: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1e1b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e1b4c:
    // 0x1e1b4c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e1b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1e1b50:
    // 0x1e1b50: 0x3e00008  jr          $ra
label_1e1b54:
    if (ctx->pc == 0x1E1B54u) {
        ctx->pc = 0x1E1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B50u;
        // 0x1e1b54: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B58u;
        goto label_fallthrough_0x1e1b50;
    }
    ctx->pc = 0x1E1B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B50u;
        // 0x1e1b54: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1b50:
    ctx->pc = 0x1E1B58u;
}
