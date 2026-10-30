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

// Function: sub_003C4A58
// Address: 0x3c4a58 - 0x3c4c30
void sub_003C4A58_0x3c4a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4A58_0x3c4a58");
#endif

    switch (ctx->pc) {
        case 0x3c4a58u: goto label_3c4a58;
        case 0x3c4a5cu: goto label_3c4a5c;
        case 0x3c4a60u: goto label_3c4a60;
        case 0x3c4a64u: goto label_3c4a64;
        case 0x3c4a68u: goto label_3c4a68;
        case 0x3c4a6cu: goto label_3c4a6c;
        case 0x3c4a70u: goto label_3c4a70;
        case 0x3c4a74u: goto label_3c4a74;
        case 0x3c4a78u: goto label_3c4a78;
        case 0x3c4a7cu: goto label_3c4a7c;
        case 0x3c4a80u: goto label_3c4a80;
        case 0x3c4a84u: goto label_3c4a84;
        case 0x3c4a88u: goto label_3c4a88;
        case 0x3c4a8cu: goto label_3c4a8c;
        case 0x3c4a90u: goto label_3c4a90;
        case 0x3c4a94u: goto label_3c4a94;
        case 0x3c4a98u: goto label_3c4a98;
        case 0x3c4a9cu: goto label_3c4a9c;
        case 0x3c4aa0u: goto label_3c4aa0;
        case 0x3c4aa4u: goto label_3c4aa4;
        case 0x3c4aa8u: goto label_3c4aa8;
        case 0x3c4aacu: goto label_3c4aac;
        case 0x3c4ab0u: goto label_3c4ab0;
        case 0x3c4ab4u: goto label_3c4ab4;
        case 0x3c4ab8u: goto label_3c4ab8;
        case 0x3c4abcu: goto label_3c4abc;
        case 0x3c4ac0u: goto label_3c4ac0;
        case 0x3c4ac4u: goto label_3c4ac4;
        case 0x3c4ac8u: goto label_3c4ac8;
        case 0x3c4accu: goto label_3c4acc;
        case 0x3c4ad0u: goto label_3c4ad0;
        case 0x3c4ad4u: goto label_3c4ad4;
        case 0x3c4ad8u: goto label_3c4ad8;
        case 0x3c4adcu: goto label_3c4adc;
        case 0x3c4ae0u: goto label_3c4ae0;
        case 0x3c4ae4u: goto label_3c4ae4;
        case 0x3c4ae8u: goto label_3c4ae8;
        case 0x3c4aecu: goto label_3c4aec;
        case 0x3c4af0u: goto label_3c4af0;
        case 0x3c4af4u: goto label_3c4af4;
        case 0x3c4af8u: goto label_3c4af8;
        case 0x3c4afcu: goto label_3c4afc;
        case 0x3c4b00u: goto label_3c4b00;
        case 0x3c4b04u: goto label_3c4b04;
        case 0x3c4b08u: goto label_3c4b08;
        case 0x3c4b0cu: goto label_3c4b0c;
        case 0x3c4b10u: goto label_3c4b10;
        case 0x3c4b14u: goto label_3c4b14;
        case 0x3c4b18u: goto label_3c4b18;
        case 0x3c4b1cu: goto label_3c4b1c;
        case 0x3c4b20u: goto label_3c4b20;
        case 0x3c4b24u: goto label_3c4b24;
        case 0x3c4b28u: goto label_3c4b28;
        case 0x3c4b2cu: goto label_3c4b2c;
        case 0x3c4b30u: goto label_3c4b30;
        case 0x3c4b34u: goto label_3c4b34;
        case 0x3c4b38u: goto label_3c4b38;
        case 0x3c4b3cu: goto label_3c4b3c;
        case 0x3c4b40u: goto label_3c4b40;
        case 0x3c4b44u: goto label_3c4b44;
        case 0x3c4b48u: goto label_3c4b48;
        case 0x3c4b4cu: goto label_3c4b4c;
        case 0x3c4b50u: goto label_3c4b50;
        case 0x3c4b54u: goto label_3c4b54;
        case 0x3c4b58u: goto label_3c4b58;
        case 0x3c4b5cu: goto label_3c4b5c;
        case 0x3c4b60u: goto label_3c4b60;
        case 0x3c4b64u: goto label_3c4b64;
        case 0x3c4b68u: goto label_3c4b68;
        case 0x3c4b6cu: goto label_3c4b6c;
        case 0x3c4b70u: goto label_3c4b70;
        case 0x3c4b74u: goto label_3c4b74;
        case 0x3c4b78u: goto label_3c4b78;
        case 0x3c4b7cu: goto label_3c4b7c;
        case 0x3c4b80u: goto label_3c4b80;
        case 0x3c4b84u: goto label_3c4b84;
        case 0x3c4b88u: goto label_3c4b88;
        case 0x3c4b8cu: goto label_3c4b8c;
        case 0x3c4b90u: goto label_3c4b90;
        case 0x3c4b94u: goto label_3c4b94;
        case 0x3c4b98u: goto label_3c4b98;
        case 0x3c4b9cu: goto label_3c4b9c;
        case 0x3c4ba0u: goto label_3c4ba0;
        case 0x3c4ba4u: goto label_3c4ba4;
        case 0x3c4ba8u: goto label_3c4ba8;
        case 0x3c4bacu: goto label_3c4bac;
        case 0x3c4bb0u: goto label_3c4bb0;
        case 0x3c4bb4u: goto label_3c4bb4;
        case 0x3c4bb8u: goto label_3c4bb8;
        case 0x3c4bbcu: goto label_3c4bbc;
        case 0x3c4bc0u: goto label_3c4bc0;
        case 0x3c4bc4u: goto label_3c4bc4;
        case 0x3c4bc8u: goto label_3c4bc8;
        case 0x3c4bccu: goto label_3c4bcc;
        case 0x3c4bd0u: goto label_3c4bd0;
        case 0x3c4bd4u: goto label_3c4bd4;
        case 0x3c4bd8u: goto label_3c4bd8;
        case 0x3c4bdcu: goto label_3c4bdc;
        case 0x3c4be0u: goto label_3c4be0;
        case 0x3c4be4u: goto label_3c4be4;
        case 0x3c4be8u: goto label_3c4be8;
        case 0x3c4becu: goto label_3c4bec;
        case 0x3c4bf0u: goto label_3c4bf0;
        case 0x3c4bf4u: goto label_3c4bf4;
        case 0x3c4bf8u: goto label_3c4bf8;
        case 0x3c4bfcu: goto label_3c4bfc;
        case 0x3c4c00u: goto label_3c4c00;
        case 0x3c4c04u: goto label_3c4c04;
        case 0x3c4c08u: goto label_3c4c08;
        case 0x3c4c0cu: goto label_3c4c0c;
        case 0x3c4c10u: goto label_3c4c10;
        case 0x3c4c14u: goto label_3c4c14;
        case 0x3c4c18u: goto label_3c4c18;
        case 0x3c4c1cu: goto label_3c4c1c;
        case 0x3c4c20u: goto label_3c4c20;
        case 0x3c4c24u: goto label_3c4c24;
        case 0x3c4c28u: goto label_3c4c28;
        case 0x3c4c2cu: goto label_3c4c2c;
        default: break;
    }

    ctx->pc = 0x3c4a58u;

label_3c4a58:
    // 0x3c4a58: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3c4a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3c4a5c:
    // 0x3c4a5c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3c4a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3c4a60:
    // 0x3c4a60: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3c4a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3c4a64:
    // 0x3c4a64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c4a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c4a68:
    // 0x3c4a68: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3c4a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3c4a6c:
    // 0x3c4a6c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3c4a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3c4a70:
    // 0x3c4a70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c4a70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c4a74:
    // 0x3c4a74: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3c4a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3c4a78:
    // 0x3c4a78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c4a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3c4a7c:
    // 0x3c4a7c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3c4a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3c4a80:
    // 0x3c4a80: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3c4a80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3c4a84:
    // 0x3c4a84: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c4a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c4a88:
    // 0x3c4a88: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c4a88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c4a8c:
    // 0x3c4a8c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c4a90:
    // 0x3c4a90: 0x40f809  jalr        $v0
label_3c4a94:
    if (ctx->pc == 0x3C4A94u) {
        ctx->pc = 0x3C4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A90u;
        // 0x3c4a94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4A98u;
        goto label_3c4a98;
    }
    ctx->pc = 0x3C4A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C4A98u);
        ctx->pc = 0x3C4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A90u;
        // 0x3c4a94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4A90u, 0x3C4A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4A98u;
label_3c4a98:
    // 0x3c4a98: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3c4a98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4a9c:
    // 0x3c4a9c: 0xc0ea13a  jal         func_3A84E8
label_3c4aa0:
    if (ctx->pc == 0x3C4AA0u) {
        ctx->pc = 0x3C4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A9Cu;
        // 0x3c4aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4AA4u;
        goto label_3c4aa4;
    }
    ctx->pc = 0x3C4A9Cu;
    SET_GPR_U32(ctx, 31, 0x3C4AA4u);
    ctx->pc = 0x3C4AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4A9Cu;
    // 0x3c4aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C4A9Cu, 0x3C4AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4AA4u;
label_3c4aa4:
    // 0x3c4aa4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c4aa4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c4aa8:
    // 0x3c4aa8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c4aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c4aac:
    // 0x3c4aac: 0xc0ea12a  jal         func_3A84A8
label_3c4ab0:
    if (ctx->pc == 0x3C4AB0u) {
        ctx->pc = 0x3C4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AACu;
        // 0x3c4ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4AB4u;
        goto label_3c4ab4;
    }
    ctx->pc = 0x3C4AACu;
    SET_GPR_U32(ctx, 31, 0x3C4AB4u);
    ctx->pc = 0x3C4AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4AACu;
    // 0x3c4ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C4AACu, 0x3C4AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4AB4u;
label_3c4ab4:
    // 0x3c4ab4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c4ab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c4ab8:
    // 0x3c4ab8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c4ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c4abc:
    // 0x3c4abc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4ac0:
    // 0x3c4ac0: 0xc0ea12a  jal         func_3A84A8
label_3c4ac4:
    if (ctx->pc == 0x3C4AC4u) {
        ctx->pc = 0x3C4AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AC0u;
        // 0x3c4ac4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4AC8u;
        goto label_3c4ac8;
    }
    ctx->pc = 0x3C4AC0u;
    SET_GPR_U32(ctx, 31, 0x3C4AC8u);
    ctx->pc = 0x3C4AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4AC0u;
    // 0x3c4ac4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C4AC0u, 0x3C4AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4AC8u;
label_3c4ac8:
    // 0x3c4ac8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3c4ac8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c4acc:
    // 0x3c4acc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c4accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3c4ad0:
    // 0x3c4ad0: 0x3442002a  ori         $v0, $v0, 0x2A
    ctx->pc = 0x3c4ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42);
label_3c4ad4:
    // 0x3c4ad4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3c4ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3c4ad8:
    // 0x3c4ad8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3c4ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3c4adc:
    // 0x3c4adc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c4adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c4ae0:
    // 0x3c4ae0: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3c4ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_3c4ae4:
    // 0x3c4ae4: 0xc0e858c  jal         func_3A1630
label_3c4ae8:
    if (ctx->pc == 0x3C4AE8u) {
        ctx->pc = 0x3C4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AE4u;
        // 0x3c4ae8: 0x8cc52e80  lw          $a1, 0x2E80($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4AECu;
        goto label_3c4aec;
    }
    ctx->pc = 0x3C4AE4u;
    SET_GPR_U32(ctx, 31, 0x3C4AECu);
    ctx->pc = 0x3C4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4AE4u;
    // 0x3c4ae8: 0x8cc52e80  lw          $a1, 0x2E80($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11904)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C4AE4u, 0x3C4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4AECu;
label_3c4aec:
    // 0x3c4aec: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c4aecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c4af0:
    // 0x3c4af0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3c4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_3c4af4:
    // 0x3c4af4: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3c4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3c4af8:
    // 0x3c4af8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c4afc:
    // 0x3c4afc: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x3c4afcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_3c4b00:
    // 0x3c4b00: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c4b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c4b04:
    // 0x3c4b04: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3c4b04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c4b08:
    // 0x3c4b08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c4b08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c4b0c:
    // 0x3c4b0c: 0x86300070  lh          $s0, 0x70($s1)
    ctx->pc = 0x3c4b0cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_3c4b10:
    // 0x3c4b10: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x3c4b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3c4b14:
    // 0x3c4b14: 0xc136b24  jal         func_4DAC90
label_3c4b18:
    if (ctx->pc == 0x3C4B18u) {
        ctx->pc = 0x3C4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B14u;
        // 0x3c4b18: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4B1Cu;
        goto label_3c4b1c;
    }
    ctx->pc = 0x3C4B14u;
    SET_GPR_U32(ctx, 31, 0x3C4B1Cu);
    ctx->pc = 0x3C4B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4B14u;
    // 0x3c4b18: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C4B14u, 0x3C4B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4B1Cu;
label_3c4b1c:
    // 0x3c4b1c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c4b1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c4b20:
    // 0x3c4b20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c4b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c4b24:
    // 0x3c4b24: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x3c4b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_3c4b28:
    // 0x3c4b28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c4b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c4b2c:
    // 0x3c4b2c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3c4b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c4b30:
    // 0x3c4b30: 0xc136b24  jal         func_4DAC90
label_3c4b34:
    if (ctx->pc == 0x3C4B34u) {
        ctx->pc = 0x3C4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B30u;
        // 0x3c4b34: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4B38u;
        goto label_3c4b38;
    }
    ctx->pc = 0x3C4B30u;
    SET_GPR_U32(ctx, 31, 0x3C4B38u);
    ctx->pc = 0x3C4B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4B30u;
    // 0x3c4b34: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C4B30u, 0x3C4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4B38u;
label_3c4b38:
    // 0x3c4b38: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3c4b38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c4b3c:
    // 0x3c4b3c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x3c4b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c4b40:
    // 0x3c4b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c4b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4b44:
    // 0x3c4b44: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3c4b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3c4b48:
    // 0x3c4b48: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3c4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c4b4c:
    // 0x3c4b4c: 0x40f809  jalr        $v0
label_3c4b50:
    if (ctx->pc == 0x3C4B50u) {
        ctx->pc = 0x3C4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B4Cu;
        // 0x3c4b50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4B54u;
        goto label_3c4b54;
    }
    ctx->pc = 0x3C4B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C4B54u);
        ctx->pc = 0x3C4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B4Cu;
        // 0x3c4b50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4B4Cu, 0x3C4B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4B54u;
label_3c4b54:
    // 0x3c4b54: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x3c4b54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_3c4b58:
    // 0x3c4b58: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x3c4b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_3c4b5c:
    // 0x3c4b5c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c4b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c4b60:
    // 0x3c4b60: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3c4b60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_3c4b64:
    // 0x3c4b64: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3c4b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3c4b68:
    // 0x3c4b68: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3c4b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3c4b6c:
    // 0x3c4b6c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c4b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c4b70:
    // 0x3c4b70: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c4b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c4b74:
    // 0x3c4b74: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x3c4b74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_3c4b78:
    // 0x3c4b78: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x3c4b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_3c4b7c:
    // 0x3c4b7c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x3c4b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_3c4b80:
    // 0x3c4b80: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c4b80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c4b84:
    // 0x3c4b84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c4b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c4b88:
    // 0x3c4b88: 0x24730078  addiu       $s3, $v1, 0x78
    ctx->pc = 0x3c4b88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_3c4b8c:
    // 0x3c4b8c: 0x84700078  lh          $s0, 0x78($v1)
    ctx->pc = 0x3c4b8cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3c4b90:
    // 0x3c4b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4b94:
    // 0x3c4b94: 0xc0cd518  jal         func_335460
label_3c4b98:
    if (ctx->pc == 0x3C4B98u) {
        ctx->pc = 0x3C4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B94u;
        // 0x3c4b98: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4B9Cu;
        goto label_3c4b9c;
    }
    ctx->pc = 0x3C4B94u;
    SET_GPR_U32(ctx, 31, 0x3C4B9Cu);
    ctx->pc = 0x3C4B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4B94u;
    // 0x3c4b98: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C4B94u, 0x3C4B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4B9Cu;
label_3c4b9c:
    // 0x3c4b9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c4b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c4ba0:
    // 0x3c4ba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c4ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c4ba4:
    // 0x3c4ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c4ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4ba8:
    // 0x3c4ba8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3c4ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3c4bac:
    // 0x3c4bac: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x3c4bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3c4bb0:
    // 0x3c4bb0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3c4bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3c4bb4:
    // 0x3c4bb4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3c4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3c4bb8:
    // 0x3c4bb8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c4bb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c4bbc:
    // 0x3c4bbc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c4bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c4bc0:
    // 0x3c4bc0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3c4bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3c4bc4:
    // 0x3c4bc4: 0x60f809  jalr        $v1
label_3c4bc8:
    if (ctx->pc == 0x3C4BC8u) {
        ctx->pc = 0x3C4BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4BC4u;
        // 0x3c4bc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4BCCu;
        goto label_3c4bcc;
    }
    ctx->pc = 0x3C4BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C4BCCu);
        ctx->pc = 0x3C4BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4BC4u;
        // 0x3c4bc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4BC4u, 0x3C4BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4BCCu;
label_3c4bcc:
    // 0x3c4bcc: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x3c4bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_3c4bd0:
    // 0x3c4bd0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3c4bd4:
    // 0x3c4bd4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3c4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3c4bd8:
    // 0x3c4bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4bdc:
    // 0x3c4bdc: 0xc4402ea0  lwc1        $f0, 0x2EA0($v0)
    ctx->pc = 0x3c4bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c4be0:
    // 0x3c4be0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c4be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c4be4:
    // 0x3c4be4: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x3c4be4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
label_3c4be8:
    // 0x3c4be8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3c4be8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3c4bec:
    // 0x3c4bec: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3c4becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3c4bf0:
    // 0x3c4bf0: 0x8c622ec0  lw          $v0, 0x2EC0($v1)
    ctx->pc = 0x3c4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11968)));
label_3c4bf4:
    // 0x3c4bf4: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3c4bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3c4bf8:
    // 0x3c4bf8: 0xc0cd4ee  jal         func_3353B8
label_3c4bfc:
    if (ctx->pc == 0x3C4BFCu) {
        ctx->pc = 0x3C4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4BF8u;
        // 0x3c4bfc: 0xe6b40008  swc1        $f20, 0x8($s5) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C00u;
        goto label_3c4c00;
    }
    ctx->pc = 0x3C4BF8u;
    SET_GPR_U32(ctx, 31, 0x3C4C00u);
    ctx->pc = 0x3C4BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4BF8u;
    // 0x3c4bfc: 0xe6b40008  swc1        $f20, 0x8($s5) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C4BF8u, 0x3C4C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4C00u;
label_3c4c00:
    // 0x3c4c00: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3c4c00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3c4c04:
    // 0x3c4c04: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3c4c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c4c08:
    // 0x3c4c08: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3c4c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c4c0c:
    // 0x3c4c0c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3c4c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c4c10:
    // 0x3c4c10: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3c4c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c4c14:
    // 0x3c4c14: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3c4c14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c4c18:
    // 0x3c4c18: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c4c18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c4c1c:
    // 0x3c4c1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3c4c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3c4c20:
    // 0x3c4c20: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3c4c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c4c24:
    // 0x3c4c24: 0x3e00008  jr          $ra
label_3c4c28:
    if (ctx->pc == 0x3C4C28u) {
        ctx->pc = 0x3C4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C24u;
        // 0x3c4c28: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C2Cu;
        goto label_3c4c2c;
    }
    ctx->pc = 0x3C4C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C24u;
        // 0x3c4c28: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C4C2Cu;
label_3c4c2c:
    // 0x3c4c2c: 0x0  nop
    ctx->pc = 0x3c4c2cu;
    // NOP
    ctx->pc = 0x3c4c30u;
}
