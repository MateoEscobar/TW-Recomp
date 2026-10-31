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

// Function: sub_003E0B28
// Address: 0x3e0b28 - 0x3e0d00
void sub_003E0B28_0x3e0b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0B28_0x3e0b28");
#endif

    switch (ctx->pc) {
        case 0x3e0b28u: goto label_3e0b28;
        case 0x3e0b2cu: goto label_3e0b2c;
        case 0x3e0b30u: goto label_3e0b30;
        case 0x3e0b34u: goto label_3e0b34;
        case 0x3e0b38u: goto label_3e0b38;
        case 0x3e0b3cu: goto label_3e0b3c;
        case 0x3e0b40u: goto label_3e0b40;
        case 0x3e0b44u: goto label_3e0b44;
        case 0x3e0b48u: goto label_3e0b48;
        case 0x3e0b4cu: goto label_3e0b4c;
        case 0x3e0b50u: goto label_3e0b50;
        case 0x3e0b54u: goto label_3e0b54;
        case 0x3e0b58u: goto label_3e0b58;
        case 0x3e0b5cu: goto label_3e0b5c;
        case 0x3e0b60u: goto label_3e0b60;
        case 0x3e0b64u: goto label_3e0b64;
        case 0x3e0b68u: goto label_3e0b68;
        case 0x3e0b6cu: goto label_3e0b6c;
        case 0x3e0b70u: goto label_3e0b70;
        case 0x3e0b74u: goto label_3e0b74;
        case 0x3e0b78u: goto label_3e0b78;
        case 0x3e0b7cu: goto label_3e0b7c;
        case 0x3e0b80u: goto label_3e0b80;
        case 0x3e0b84u: goto label_3e0b84;
        case 0x3e0b88u: goto label_3e0b88;
        case 0x3e0b8cu: goto label_3e0b8c;
        case 0x3e0b90u: goto label_3e0b90;
        case 0x3e0b94u: goto label_3e0b94;
        case 0x3e0b98u: goto label_3e0b98;
        case 0x3e0b9cu: goto label_3e0b9c;
        case 0x3e0ba0u: goto label_3e0ba0;
        case 0x3e0ba4u: goto label_3e0ba4;
        case 0x3e0ba8u: goto label_3e0ba8;
        case 0x3e0bacu: goto label_3e0bac;
        case 0x3e0bb0u: goto label_3e0bb0;
        case 0x3e0bb4u: goto label_3e0bb4;
        case 0x3e0bb8u: goto label_3e0bb8;
        case 0x3e0bbcu: goto label_3e0bbc;
        case 0x3e0bc0u: goto label_3e0bc0;
        case 0x3e0bc4u: goto label_3e0bc4;
        case 0x3e0bc8u: goto label_3e0bc8;
        case 0x3e0bccu: goto label_3e0bcc;
        case 0x3e0bd0u: goto label_3e0bd0;
        case 0x3e0bd4u: goto label_3e0bd4;
        case 0x3e0bd8u: goto label_3e0bd8;
        case 0x3e0bdcu: goto label_3e0bdc;
        case 0x3e0be0u: goto label_3e0be0;
        case 0x3e0be4u: goto label_3e0be4;
        case 0x3e0be8u: goto label_3e0be8;
        case 0x3e0becu: goto label_3e0bec;
        case 0x3e0bf0u: goto label_3e0bf0;
        case 0x3e0bf4u: goto label_3e0bf4;
        case 0x3e0bf8u: goto label_3e0bf8;
        case 0x3e0bfcu: goto label_3e0bfc;
        case 0x3e0c00u: goto label_3e0c00;
        case 0x3e0c04u: goto label_3e0c04;
        case 0x3e0c08u: goto label_3e0c08;
        case 0x3e0c0cu: goto label_3e0c0c;
        case 0x3e0c10u: goto label_3e0c10;
        case 0x3e0c14u: goto label_3e0c14;
        case 0x3e0c18u: goto label_3e0c18;
        case 0x3e0c1cu: goto label_3e0c1c;
        case 0x3e0c20u: goto label_3e0c20;
        case 0x3e0c24u: goto label_3e0c24;
        case 0x3e0c28u: goto label_3e0c28;
        case 0x3e0c2cu: goto label_3e0c2c;
        case 0x3e0c30u: goto label_3e0c30;
        case 0x3e0c34u: goto label_3e0c34;
        case 0x3e0c38u: goto label_3e0c38;
        case 0x3e0c3cu: goto label_3e0c3c;
        case 0x3e0c40u: goto label_3e0c40;
        case 0x3e0c44u: goto label_3e0c44;
        case 0x3e0c48u: goto label_3e0c48;
        case 0x3e0c4cu: goto label_3e0c4c;
        case 0x3e0c50u: goto label_3e0c50;
        case 0x3e0c54u: goto label_3e0c54;
        case 0x3e0c58u: goto label_3e0c58;
        case 0x3e0c5cu: goto label_3e0c5c;
        case 0x3e0c60u: goto label_3e0c60;
        case 0x3e0c64u: goto label_3e0c64;
        case 0x3e0c68u: goto label_3e0c68;
        case 0x3e0c6cu: goto label_3e0c6c;
        case 0x3e0c70u: goto label_3e0c70;
        case 0x3e0c74u: goto label_3e0c74;
        case 0x3e0c78u: goto label_3e0c78;
        case 0x3e0c7cu: goto label_3e0c7c;
        case 0x3e0c80u: goto label_3e0c80;
        case 0x3e0c84u: goto label_3e0c84;
        case 0x3e0c88u: goto label_3e0c88;
        case 0x3e0c8cu: goto label_3e0c8c;
        case 0x3e0c90u: goto label_3e0c90;
        case 0x3e0c94u: goto label_3e0c94;
        case 0x3e0c98u: goto label_3e0c98;
        case 0x3e0c9cu: goto label_3e0c9c;
        case 0x3e0ca0u: goto label_3e0ca0;
        case 0x3e0ca4u: goto label_3e0ca4;
        case 0x3e0ca8u: goto label_3e0ca8;
        case 0x3e0cacu: goto label_3e0cac;
        case 0x3e0cb0u: goto label_3e0cb0;
        case 0x3e0cb4u: goto label_3e0cb4;
        case 0x3e0cb8u: goto label_3e0cb8;
        case 0x3e0cbcu: goto label_3e0cbc;
        case 0x3e0cc0u: goto label_3e0cc0;
        case 0x3e0cc4u: goto label_3e0cc4;
        case 0x3e0cc8u: goto label_3e0cc8;
        case 0x3e0cccu: goto label_3e0ccc;
        case 0x3e0cd0u: goto label_3e0cd0;
        case 0x3e0cd4u: goto label_3e0cd4;
        case 0x3e0cd8u: goto label_3e0cd8;
        case 0x3e0cdcu: goto label_3e0cdc;
        case 0x3e0ce0u: goto label_3e0ce0;
        case 0x3e0ce4u: goto label_3e0ce4;
        case 0x3e0ce8u: goto label_3e0ce8;
        case 0x3e0cecu: goto label_3e0cec;
        case 0x3e0cf0u: goto label_3e0cf0;
        case 0x3e0cf4u: goto label_3e0cf4;
        case 0x3e0cf8u: goto label_3e0cf8;
        case 0x3e0cfcu: goto label_3e0cfc;
        default: break;
    }

    ctx->pc = 0x3e0b28u;

label_3e0b28:
    // 0x3e0b28: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3e0b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3e0b2c:
    // 0x3e0b2c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3e0b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3e0b30:
    // 0x3e0b30: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3e0b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3e0b34:
    // 0x3e0b34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e0b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e0b38:
    // 0x3e0b38: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3e0b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3e0b3c:
    // 0x3e0b3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e0b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0b40:
    // 0x3e0b40: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3e0b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3e0b44:
    // 0x3e0b44: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3e0b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3e0b48:
    // 0x3e0b48: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3e0b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3e0b4c:
    // 0x3e0b4c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3e0b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3e0b50:
    // 0x3e0b50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e0b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3e0b54:
    // 0x3e0b54: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x3e0b54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3e0b58:
    // 0x3e0b58: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3e0b58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3e0b5c:
    // 0x3e0b5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e0b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e0b60:
    // 0x3e0b60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3e0b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3e0b64:
    // 0x3e0b64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e0b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e0b68:
    // 0x3e0b68: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e0b68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e0b6c:
    // 0x3e0b6c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e0b70:
    // 0x3e0b70: 0x40f809  jalr        $v0
label_3e0b74:
    if (ctx->pc == 0x3E0B74u) {
        ctx->pc = 0x3E0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B70u;
        // 0x3e0b74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0B78u;
        goto label_3e0b78;
    }
    ctx->pc = 0x3E0B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E0B78u);
        ctx->pc = 0x3E0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B70u;
        // 0x3e0b74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0B70u, 0x3E0B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0B78u;
label_3e0b78:
    // 0x3e0b78: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3e0b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3e0b7c:
    // 0x3e0b7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e0b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e0b80:
    // 0x3e0b80: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e0b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e0b84:
    // 0x3e0b84: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3e0b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3e0b88:
    // 0x3e0b88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e0b88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0b8c:
    // 0x3e0b8c: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x3e0b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
label_3e0b90:
    // 0x3e0b90: 0xc0ea146  jal         func_3A8518
label_3e0b94:
    if (ctx->pc == 0x3E0B94u) {
        ctx->pc = 0x3E0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B90u;
        // 0x3e0b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0B98u;
        goto label_3e0b98;
    }
    ctx->pc = 0x3E0B90u;
    SET_GPR_U32(ctx, 31, 0x3E0B98u);
    ctx->pc = 0x3E0B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0B90u;
    // 0x3e0b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E0B90u, 0x3E0B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0B98u;
label_3e0b98:
    // 0x3e0b98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e0b98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0b9c:
    // 0x3e0b9c: 0xc0ea146  jal         func_3A8518
label_3e0ba0:
    if (ctx->pc == 0x3E0BA0u) {
        ctx->pc = 0x3E0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B9Cu;
        // 0x3e0ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0BA4u;
        goto label_3e0ba4;
    }
    ctx->pc = 0x3E0B9Cu;
    SET_GPR_U32(ctx, 31, 0x3E0BA4u);
    ctx->pc = 0x3E0BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0B9Cu;
    // 0x3e0ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E0B9Cu, 0x3E0BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0BA4u;
label_3e0ba4:
    // 0x3e0ba4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3e0ba4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0ba8:
    // 0x3e0ba8: 0xc0ea13a  jal         func_3A84E8
label_3e0bac:
    if (ctx->pc == 0x3E0BACu) {
        ctx->pc = 0x3E0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0BA8u;
        // 0x3e0bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0BB0u;
        goto label_3e0bb0;
    }
    ctx->pc = 0x3E0BA8u;
    SET_GPR_U32(ctx, 31, 0x3E0BB0u);
    ctx->pc = 0x3E0BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0BA8u;
    // 0x3e0bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E0BA8u, 0x3E0BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0BB0u;
label_3e0bb0:
    // 0x3e0bb0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3e0bb0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3e0bb4:
    // 0x3e0bb4: 0xc0ea146  jal         func_3A8518
label_3e0bb8:
    if (ctx->pc == 0x3E0BB8u) {
        ctx->pc = 0x3E0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0BB4u;
        // 0x3e0bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0BBCu;
        goto label_3e0bbc;
    }
    ctx->pc = 0x3E0BB4u;
    SET_GPR_U32(ctx, 31, 0x3E0BBCu);
    ctx->pc = 0x3E0BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0BB4u;
    // 0x3e0bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E0BB4u, 0x3E0BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0BBCu;
label_3e0bbc:
    // 0x3e0bbc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e0bbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0bc0:
    // 0x3e0bc0: 0xc0ea14c  jal         func_3A8530
label_3e0bc4:
    if (ctx->pc == 0x3E0BC4u) {
        ctx->pc = 0x3E0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0BC0u;
        // 0x3e0bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0BC8u;
        goto label_3e0bc8;
    }
    ctx->pc = 0x3E0BC0u;
    SET_GPR_U32(ctx, 31, 0x3E0BC8u);
    ctx->pc = 0x3E0BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0BC0u;
    // 0x3e0bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E0BC0u, 0x3E0BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0BC8u;
label_3e0bc8:
    // 0x3e0bc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e0bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e0bcc:
    // 0x3e0bcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e0bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0bd0:
    // 0x3e0bd0: 0xc0ea12a  jal         func_3A84A8
label_3e0bd4:
    if (ctx->pc == 0x3E0BD4u) {
        ctx->pc = 0x3E0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0BD0u;
        // 0x3e0bd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0BD8u;
        goto label_3e0bd8;
    }
    ctx->pc = 0x3E0BD0u;
    SET_GPR_U32(ctx, 31, 0x3E0BD8u);
    ctx->pc = 0x3E0BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0BD0u;
    // 0x3e0bd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E0BD0u, 0x3E0BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0BD8u;
label_3e0bd8:
    // 0x3e0bd8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e0bd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e0bdc:
    // 0x3e0bdc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3e0bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3e0be0:
    // 0x3e0be0: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x3e0be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_3e0be4:
    // 0x3e0be4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3e0be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3e0be8:
    // 0x3e0be8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e0be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e0bec:
    // 0x3e0bec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3e0becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e0bf0:
    // 0x3e0bf0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3e0bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3e0bf4:
    // 0x3e0bf4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3e0bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e0bf8:
    // 0x3e0bf8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3e0bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3e0bfc:
    // 0x3e0bfc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e0bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e0c00:
    // 0x3e0c00: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3e0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3e0c04:
    // 0x3e0c04: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3e0c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3e0c08:
    // 0x3e0c08: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x3e0c08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3e0c0c:
    // 0x3e0c0c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e0c0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e0c10:
    // 0x3e0c10: 0xc136b18  jal         func_4DAC60
label_3e0c14:
    if (ctx->pc == 0x3E0C14u) {
        ctx->pc = 0x3E0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C10u;
        // 0x3e0c14: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0C18u;
        goto label_3e0c18;
    }
    ctx->pc = 0x3E0C10u;
    SET_GPR_U32(ctx, 31, 0x3E0C18u);
    ctx->pc = 0x3E0C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0C10u;
    // 0x3e0c14: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E0C10u, 0x3E0C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0C18u;
label_3e0c18:
    // 0x3e0c18: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e0c18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e0c1c:
    // 0x3e0c1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e0c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e0c20:
    // 0x3e0c20: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3e0c20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3e0c24:
    // 0x3e0c24: 0xc0e896e  jal         func_3A25B8
label_3e0c28:
    if (ctx->pc == 0x3E0C28u) {
        ctx->pc = 0x3E0C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C24u;
        // 0x3e0c28: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0C2Cu;
        goto label_3e0c2c;
    }
    ctx->pc = 0x3E0C24u;
    SET_GPR_U32(ctx, 31, 0x3E0C2Cu);
    ctx->pc = 0x3E0C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0C24u;
    // 0x3e0c28: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3E0C24u, 0x3E0C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0C2Cu;
label_3e0c2c:
    // 0x3e0c2c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3e0c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_3e0c30:
    // 0x3e0c30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e0c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e0c34:
    // 0x3e0c34: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3e0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e0c38:
    // 0x3e0c38: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x3e0c38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3e0c3c:
    // 0x3e0c3c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3e0c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3e0c40:
    // 0x3e0c40: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3e0c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3e0c44:
    // 0x3e0c44: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3e0c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3e0c48:
    // 0x3e0c48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e0c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e0c4c:
    // 0x3e0c4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e0c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e0c50:
    // 0x3e0c50: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x3e0c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_3e0c54:
    // 0x3e0c54: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e0c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e0c58:
    // 0x3e0c58: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x3e0c58u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_3e0c5c:
    // 0x3e0c5c: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x3e0c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_3e0c60:
    // 0x3e0c60: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3e0c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3e0c64:
    // 0x3e0c64: 0xc12e29c  jal         func_4B8A70
label_3e0c68:
    if (ctx->pc == 0x3E0C68u) {
        ctx->pc = 0x3E0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C64u;
        // 0x3e0c68: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0C6Cu;
        goto label_3e0c6c;
    }
    ctx->pc = 0x3E0C64u;
    SET_GPR_U32(ctx, 31, 0x3E0C6Cu);
    ctx->pc = 0x3E0C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0C64u;
    // 0x3e0c68: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3E0C64u, 0x3E0C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0C6Cu;
label_3e0c6c:
    // 0x3e0c6c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3e0c6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3e0c70:
    // 0x3e0c70: 0xc12e310  jal         func_4B8C40
label_3e0c74:
    if (ctx->pc == 0x3E0C74u) {
        ctx->pc = 0x3E0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C70u;
        // 0x3e0c74: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0C78u;
        goto label_3e0c78;
    }
    ctx->pc = 0x3E0C70u;
    SET_GPR_U32(ctx, 31, 0x3E0C78u);
    ctx->pc = 0x3E0C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0C70u;
    // 0x3e0c74: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3E0C70u, 0x3E0C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0C78u;
label_3e0c78:
    // 0x3e0c78: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3e0c78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3e0c7c:
    // 0x3e0c7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e0c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0c80:
    // 0x3e0c80: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3e0c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3e0c84:
    // 0x3e0c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e0c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e0c88:
    // 0x3e0c88: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3e0c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3e0c8c:
    // 0x3e0c8c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3e0c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_3e0c90:
    // 0x3e0c90: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e0c90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e0c94:
    // 0x3e0c94: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3e0c94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_3e0c98:
    // 0x3e0c98: 0xc0e858c  jal         func_3A1630
label_3e0c9c:
    if (ctx->pc == 0x3E0C9Cu) {
        ctx->pc = 0x3E0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C98u;
        // 0x3e0c9c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0CA0u;
        goto label_3e0ca0;
    }
    ctx->pc = 0x3E0C98u;
    SET_GPR_U32(ctx, 31, 0x3E0CA0u);
    ctx->pc = 0x3E0C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0C98u;
    // 0x3e0c9c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E0C98u, 0x3E0CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0CA0u;
label_3e0ca0:
    // 0x3e0ca0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3e0ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_3e0ca4:
    // 0x3e0ca4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3e0ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3e0ca8:
    // 0x3e0ca8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e0ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e0cac:
    // 0x3e0cac: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x3e0cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_3e0cb0:
    // 0x3e0cb0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3e0cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3e0cb4:
    // 0x3e0cb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e0cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e0cb8:
    // 0x3e0cb8: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x3e0cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_3e0cbc:
    // 0x3e0cbc: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x3e0cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_3e0cc0:
    // 0x3e0cc0: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x3e0cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_3e0cc4:
    // 0x3e0cc4: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x3e0cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_3e0cc8:
    // 0x3e0cc8: 0xe621008c  swc1        $f1, 0x8C($s1)
    ctx->pc = 0x3e0cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
label_3e0ccc:
    // 0x3e0ccc: 0xae760004  sw          $s6, 0x4($s3)
    ctx->pc = 0x3e0cccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 22));
label_3e0cd0:
    // 0x3e0cd0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3e0cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3e0cd4:
    // 0x3e0cd4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3e0cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3e0cd8:
    // 0x3e0cd8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3e0cd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3e0cdc:
    // 0x3e0cdc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3e0cdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e0ce0:
    // 0x3e0ce0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3e0ce0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e0ce4:
    // 0x3e0ce4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3e0ce4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e0ce8:
    // 0x3e0ce8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3e0ce8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e0cec:
    // 0x3e0cec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e0cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3e0cf0:
    // 0x3e0cf0: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x3e0cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e0cf4:
    // 0x3e0cf4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3e0cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e0cf8:
    // 0x3e0cf8: 0x3e00008  jr          $ra
label_3e0cfc:
    if (ctx->pc == 0x3E0CFCu) {
        ctx->pc = 0x3E0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0CF8u;
        // 0x3e0cfc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0D00u;
        goto label_fallthrough_0x3e0cf8;
    }
    ctx->pc = 0x3E0CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0CF8u;
        // 0x3e0cfc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e0cf8:
    ctx->pc = 0x3E0D00u;
}
