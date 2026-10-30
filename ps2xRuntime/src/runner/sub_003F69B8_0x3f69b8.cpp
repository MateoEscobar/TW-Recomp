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

// Function: sub_003F69B8
// Address: 0x3f69b8 - 0x3f6b40
void sub_003F69B8_0x3f69b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F69B8_0x3f69b8");
#endif

    switch (ctx->pc) {
        case 0x3f69b8u: goto label_3f69b8;
        case 0x3f69bcu: goto label_3f69bc;
        case 0x3f69c0u: goto label_3f69c0;
        case 0x3f69c4u: goto label_3f69c4;
        case 0x3f69c8u: goto label_3f69c8;
        case 0x3f69ccu: goto label_3f69cc;
        case 0x3f69d0u: goto label_3f69d0;
        case 0x3f69d4u: goto label_3f69d4;
        case 0x3f69d8u: goto label_3f69d8;
        case 0x3f69dcu: goto label_3f69dc;
        case 0x3f69e0u: goto label_3f69e0;
        case 0x3f69e4u: goto label_3f69e4;
        case 0x3f69e8u: goto label_3f69e8;
        case 0x3f69ecu: goto label_3f69ec;
        case 0x3f69f0u: goto label_3f69f0;
        case 0x3f69f4u: goto label_3f69f4;
        case 0x3f69f8u: goto label_3f69f8;
        case 0x3f69fcu: goto label_3f69fc;
        case 0x3f6a00u: goto label_3f6a00;
        case 0x3f6a04u: goto label_3f6a04;
        case 0x3f6a08u: goto label_3f6a08;
        case 0x3f6a0cu: goto label_3f6a0c;
        case 0x3f6a10u: goto label_3f6a10;
        case 0x3f6a14u: goto label_3f6a14;
        case 0x3f6a18u: goto label_3f6a18;
        case 0x3f6a1cu: goto label_3f6a1c;
        case 0x3f6a20u: goto label_3f6a20;
        case 0x3f6a24u: goto label_3f6a24;
        case 0x3f6a28u: goto label_3f6a28;
        case 0x3f6a2cu: goto label_3f6a2c;
        case 0x3f6a30u: goto label_3f6a30;
        case 0x3f6a34u: goto label_3f6a34;
        case 0x3f6a38u: goto label_3f6a38;
        case 0x3f6a3cu: goto label_3f6a3c;
        case 0x3f6a40u: goto label_3f6a40;
        case 0x3f6a44u: goto label_3f6a44;
        case 0x3f6a48u: goto label_3f6a48;
        case 0x3f6a4cu: goto label_3f6a4c;
        case 0x3f6a50u: goto label_3f6a50;
        case 0x3f6a54u: goto label_3f6a54;
        case 0x3f6a58u: goto label_3f6a58;
        case 0x3f6a5cu: goto label_3f6a5c;
        case 0x3f6a60u: goto label_3f6a60;
        case 0x3f6a64u: goto label_3f6a64;
        case 0x3f6a68u: goto label_3f6a68;
        case 0x3f6a6cu: goto label_3f6a6c;
        case 0x3f6a70u: goto label_3f6a70;
        case 0x3f6a74u: goto label_3f6a74;
        case 0x3f6a78u: goto label_3f6a78;
        case 0x3f6a7cu: goto label_3f6a7c;
        case 0x3f6a80u: goto label_3f6a80;
        case 0x3f6a84u: goto label_3f6a84;
        case 0x3f6a88u: goto label_3f6a88;
        case 0x3f6a8cu: goto label_3f6a8c;
        case 0x3f6a90u: goto label_3f6a90;
        case 0x3f6a94u: goto label_3f6a94;
        case 0x3f6a98u: goto label_3f6a98;
        case 0x3f6a9cu: goto label_3f6a9c;
        case 0x3f6aa0u: goto label_3f6aa0;
        case 0x3f6aa4u: goto label_3f6aa4;
        case 0x3f6aa8u: goto label_3f6aa8;
        case 0x3f6aacu: goto label_3f6aac;
        case 0x3f6ab0u: goto label_3f6ab0;
        case 0x3f6ab4u: goto label_3f6ab4;
        case 0x3f6ab8u: goto label_3f6ab8;
        case 0x3f6abcu: goto label_3f6abc;
        case 0x3f6ac0u: goto label_3f6ac0;
        case 0x3f6ac4u: goto label_3f6ac4;
        case 0x3f6ac8u: goto label_3f6ac8;
        case 0x3f6accu: goto label_3f6acc;
        case 0x3f6ad0u: goto label_3f6ad0;
        case 0x3f6ad4u: goto label_3f6ad4;
        case 0x3f6ad8u: goto label_3f6ad8;
        case 0x3f6adcu: goto label_3f6adc;
        case 0x3f6ae0u: goto label_3f6ae0;
        case 0x3f6ae4u: goto label_3f6ae4;
        case 0x3f6ae8u: goto label_3f6ae8;
        case 0x3f6aecu: goto label_3f6aec;
        case 0x3f6af0u: goto label_3f6af0;
        case 0x3f6af4u: goto label_3f6af4;
        case 0x3f6af8u: goto label_3f6af8;
        case 0x3f6afcu: goto label_3f6afc;
        case 0x3f6b00u: goto label_3f6b00;
        case 0x3f6b04u: goto label_3f6b04;
        case 0x3f6b08u: goto label_3f6b08;
        case 0x3f6b0cu: goto label_3f6b0c;
        case 0x3f6b10u: goto label_3f6b10;
        case 0x3f6b14u: goto label_3f6b14;
        case 0x3f6b18u: goto label_3f6b18;
        case 0x3f6b1cu: goto label_3f6b1c;
        case 0x3f6b20u: goto label_3f6b20;
        case 0x3f6b24u: goto label_3f6b24;
        case 0x3f6b28u: goto label_3f6b28;
        case 0x3f6b2cu: goto label_3f6b2c;
        case 0x3f6b30u: goto label_3f6b30;
        case 0x3f6b34u: goto label_3f6b34;
        case 0x3f6b38u: goto label_3f6b38;
        case 0x3f6b3cu: goto label_3f6b3c;
        default: break;
    }

    ctx->pc = 0x3f69b8u;

label_3f69b8:
    // 0x3f69b8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3f69b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3f69bc:
    // 0x3f69bc: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3f69bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3f69c0:
    // 0x3f69c0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3f69c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3f69c4:
    // 0x3f69c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f69c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f69c8:
    // 0x3f69c8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3f69c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3f69cc:
    // 0x3f69cc: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3f69ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3f69d0:
    // 0x3f69d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f69d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f69d4:
    // 0x3f69d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3f69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f69d8:
    // 0x3f69d8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f69d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f69dc:
    // 0x3f69dc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f69e0:
    // 0x3f69e0: 0x40f809  jalr        $v0
label_3f69e4:
    if (ctx->pc == 0x3F69E4u) {
        ctx->pc = 0x3F69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F69E0u;
        // 0x3f69e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F69E8u;
        goto label_3f69e8;
    }
    ctx->pc = 0x3F69E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F69E8u);
        ctx->pc = 0x3F69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F69E0u;
        // 0x3f69e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F69E0u, 0x3F69E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F69E8u;
label_3f69e8:
    // 0x3f69e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f69e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f69ec:
    // 0x3f69ec: 0xc0ea14c  jal         func_3A8530
label_3f69f0:
    if (ctx->pc == 0x3F69F0u) {
        ctx->pc = 0x3F69F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F69ECu;
        // 0x3f69f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F69F4u;
        goto label_3f69f4;
    }
    ctx->pc = 0x3F69ECu;
    SET_GPR_U32(ctx, 31, 0x3F69F4u);
    ctx->pc = 0x3F69F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F69ECu;
    // 0x3f69f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F69ECu, 0x3F69F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F69F4u;
label_3f69f4:
    // 0x3f69f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f69f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f69f8:
    // 0x3f69f8: 0xc0ea12a  jal         func_3A84A8
label_3f69fc:
    if (ctx->pc == 0x3F69FCu) {
        ctx->pc = 0x3F69FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F69F8u;
        // 0x3f69fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6A00u;
        goto label_3f6a00;
    }
    ctx->pc = 0x3F69F8u;
    SET_GPR_U32(ctx, 31, 0x3F6A00u);
    ctx->pc = 0x3F69FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F69F8u;
    // 0x3f69fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F69F8u, 0x3F6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6A00u;
label_3f6a00:
    // 0x3f6a00: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f6a00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f6a04:
    // 0x3f6a04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f6a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f6a08:
    // 0x3f6a08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f6a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f6a0c:
    // 0x3f6a0c: 0xc0ea12a  jal         func_3A84A8
label_3f6a10:
    if (ctx->pc == 0x3F6A10u) {
        ctx->pc = 0x3F6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6A0Cu;
        // 0x3f6a10: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6A14u;
        goto label_3f6a14;
    }
    ctx->pc = 0x3F6A0Cu;
    SET_GPR_U32(ctx, 31, 0x3F6A14u);
    ctx->pc = 0x3F6A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6A0Cu;
    // 0x3f6a10: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F6A0Cu, 0x3F6A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6A14u;
label_3f6a14:
    // 0x3f6a14: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3f6a14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f6a18:
    // 0x3f6a18: 0x24020405  addiu       $v0, $zero, 0x405
    ctx->pc = 0x3f6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
label_3f6a1c:
    // 0x3f6a1c: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3f6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3f6a20:
    // 0x3f6a20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f6a24:
    // 0x3f6a24: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f6a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f6a28:
    // 0x3f6a28: 0xc0e858c  jal         func_3A1630
label_3f6a2c:
    if (ctx->pc == 0x3F6A2Cu) {
        ctx->pc = 0x3F6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6A28u;
        // 0x3f6a2c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6A30u;
        goto label_3f6a30;
    }
    ctx->pc = 0x3F6A28u;
    SET_GPR_U32(ctx, 31, 0x3F6A30u);
    ctx->pc = 0x3F6A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6A28u;
    // 0x3f6a2c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F6A28u, 0x3F6A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6A30u;
label_3f6a30:
    // 0x3f6a30: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3f6a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3f6a34:
    // 0x3f6a34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f6a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6a38:
    // 0x3f6a38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f6a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f6a3c:
    // 0x3f6a3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f6a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f6a40:
    // 0x3f6a40: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f6a40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f6a44:
    // 0x3f6a44: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3f6a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3f6a48:
    // 0x3f6a48: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x3f6a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3f6a4c:
    // 0x3f6a4c: 0x700224a9  por         $a0, $zero, $v0
    ctx->pc = 0x3f6a4cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_3f6a50:
    // 0x3f6a50: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3f6a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3f6a54:
    // 0x3f6a54: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3f6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3f6a58:
    // 0x3f6a58: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x3f6a58u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f6a5c:
    // 0x3f6a5c: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3f6a5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f6a60:
    // 0x3f6a60: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f6a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f6a64:
    // 0x3f6a64: 0x7e440020  sq          $a0, 0x20($s2)
    ctx->pc = 0x3f6a64u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 4));
label_3f6a68:
    // 0x3f6a68: 0x7e450010  sq          $a1, 0x10($s2)
    ctx->pc = 0x3f6a68u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 5));
label_3f6a6c:
    // 0x3f6a6c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3f6a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3f6a70:
    // 0x3f6a70: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3f6a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3f6a74:
    // 0x3f6a74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f6a74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f6a78:
    // 0x3f6a78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f6a78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f6a7c:
    // 0x3f6a7c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f6a7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f6a80:
    // 0x3f6a80: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f6a80u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f6a84:
    // 0x3f6a84: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f6a84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f6a88:
    // 0x3f6a88: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f6a88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f6a8c:
    // 0x3f6a8c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f6a8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f6a90:
    // 0x3f6a90: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f6a90u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f6a94:
    // 0x3f6a94: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f6a94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f6a98:
    // 0x3f6a98: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f6a98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f6a9c:
    // 0x3f6a9c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f6a9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f6aa0:
    // 0x3f6aa0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f6aa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f6aa4:
    // 0x3f6aa4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f6aa4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f6aa8:
    // 0x3f6aa8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f6aa8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f6aac:
    // 0x3f6aac: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f6aacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f6ab0:
    // 0x3f6ab0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f6ab0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f6ab4:
    // 0x3f6ab4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f6ab4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f6ab8:
    // 0x3f6ab8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f6ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f6abc:
    // 0x3f6abc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f6abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3f6ac0:
    // 0x3f6ac0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3f6ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3f6ac4:
    // 0x3f6ac4: 0x3463ff40  ori         $v1, $v1, 0xFF40
    ctx->pc = 0x3f6ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65344);
label_3f6ac8:
    // 0x3f6ac8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3f6ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3f6acc:
    // 0x3f6acc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3f6accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3f6ad0:
    // 0x3f6ad0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3f6ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3f6ad4:
    // 0x3f6ad4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f6ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f6ad8:
    // 0x3f6ad8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f6ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f6adc:
    // 0x3f6adc: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3f6adcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_3f6ae0:
    // 0x3f6ae0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3f6ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f6ae4:
    // 0x3f6ae4: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x3f6ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_3f6ae8:
    // 0x3f6ae8: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x3f6ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
label_3f6aec:
    // 0x3f6aec: 0xae24002c  sw          $a0, 0x2C($s1)
    ctx->pc = 0x3f6aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 4));
label_3f6af0:
    // 0x3f6af0: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x3f6af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3f6af4:
    // 0x3f6af4: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x3f6af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_3f6af8:
    // 0x3f6af8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f6af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6afc:
    // 0x3f6afc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3f6afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3f6b00:
    // 0x3f6b00: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3f6b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3f6b04:
    // 0x3f6b04: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x3f6b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_3f6b08:
    // 0x3f6b08: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x3f6b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_3f6b0c:
    // 0x3f6b0c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3f6b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3f6b10:
    // 0x3f6b10: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3f6b10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f6b14:
    // 0x3f6b14: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3f6b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3f6b18:
    // 0x3f6b18: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3f6b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3f6b1c:
    // 0x3f6b1c: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3f6b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3f6b20:
    // 0x3f6b20: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x3f6b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_3f6b24:
    // 0x3f6b24: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3f6b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3f6b28:
    // 0x3f6b28: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3f6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3f6b2c:
    // 0x3f6b2c: 0x3442110a  ori         $v0, $v0, 0x110A
    ctx->pc = 0x3f6b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4362);
label_3f6b30:
    // 0x3f6b30: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x3f6b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_3f6b34:
    // 0x3f6b34: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3f6b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3f6b38:
    // 0x3f6b38: 0x3e00008  jr          $ra
label_3f6b3c:
    if (ctx->pc == 0x3F6B3Cu) {
        ctx->pc = 0x3F6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B38u;
        // 0x3f6b3c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6B40u;
        goto label_fallthrough_0x3f6b38;
    }
    ctx->pc = 0x3F6B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B38u;
        // 0x3f6b3c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f6b38:
    ctx->pc = 0x3F6B40u;
}
