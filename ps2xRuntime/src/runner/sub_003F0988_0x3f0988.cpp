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

// Function: sub_003F0988
// Address: 0x3f0988 - 0x3f0ae8
void sub_003F0988_0x3f0988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0988_0x3f0988");
#endif

    switch (ctx->pc) {
        case 0x3f0988u: goto label_3f0988;
        case 0x3f098cu: goto label_3f098c;
        case 0x3f0990u: goto label_3f0990;
        case 0x3f0994u: goto label_3f0994;
        case 0x3f0998u: goto label_3f0998;
        case 0x3f099cu: goto label_3f099c;
        case 0x3f09a0u: goto label_3f09a0;
        case 0x3f09a4u: goto label_3f09a4;
        case 0x3f09a8u: goto label_3f09a8;
        case 0x3f09acu: goto label_3f09ac;
        case 0x3f09b0u: goto label_3f09b0;
        case 0x3f09b4u: goto label_3f09b4;
        case 0x3f09b8u: goto label_3f09b8;
        case 0x3f09bcu: goto label_3f09bc;
        case 0x3f09c0u: goto label_3f09c0;
        case 0x3f09c4u: goto label_3f09c4;
        case 0x3f09c8u: goto label_3f09c8;
        case 0x3f09ccu: goto label_3f09cc;
        case 0x3f09d0u: goto label_3f09d0;
        case 0x3f09d4u: goto label_3f09d4;
        case 0x3f09d8u: goto label_3f09d8;
        case 0x3f09dcu: goto label_3f09dc;
        case 0x3f09e0u: goto label_3f09e0;
        case 0x3f09e4u: goto label_3f09e4;
        case 0x3f09e8u: goto label_3f09e8;
        case 0x3f09ecu: goto label_3f09ec;
        case 0x3f09f0u: goto label_3f09f0;
        case 0x3f09f4u: goto label_3f09f4;
        case 0x3f09f8u: goto label_3f09f8;
        case 0x3f09fcu: goto label_3f09fc;
        case 0x3f0a00u: goto label_3f0a00;
        case 0x3f0a04u: goto label_3f0a04;
        case 0x3f0a08u: goto label_3f0a08;
        case 0x3f0a0cu: goto label_3f0a0c;
        case 0x3f0a10u: goto label_3f0a10;
        case 0x3f0a14u: goto label_3f0a14;
        case 0x3f0a18u: goto label_3f0a18;
        case 0x3f0a1cu: goto label_3f0a1c;
        case 0x3f0a20u: goto label_3f0a20;
        case 0x3f0a24u: goto label_3f0a24;
        case 0x3f0a28u: goto label_3f0a28;
        case 0x3f0a2cu: goto label_3f0a2c;
        case 0x3f0a30u: goto label_3f0a30;
        case 0x3f0a34u: goto label_3f0a34;
        case 0x3f0a38u: goto label_3f0a38;
        case 0x3f0a3cu: goto label_3f0a3c;
        case 0x3f0a40u: goto label_3f0a40;
        case 0x3f0a44u: goto label_3f0a44;
        case 0x3f0a48u: goto label_3f0a48;
        case 0x3f0a4cu: goto label_3f0a4c;
        case 0x3f0a50u: goto label_3f0a50;
        case 0x3f0a54u: goto label_3f0a54;
        case 0x3f0a58u: goto label_3f0a58;
        case 0x3f0a5cu: goto label_3f0a5c;
        case 0x3f0a60u: goto label_3f0a60;
        case 0x3f0a64u: goto label_3f0a64;
        case 0x3f0a68u: goto label_3f0a68;
        case 0x3f0a6cu: goto label_3f0a6c;
        case 0x3f0a70u: goto label_3f0a70;
        case 0x3f0a74u: goto label_3f0a74;
        case 0x3f0a78u: goto label_3f0a78;
        case 0x3f0a7cu: goto label_3f0a7c;
        case 0x3f0a80u: goto label_3f0a80;
        case 0x3f0a84u: goto label_3f0a84;
        case 0x3f0a88u: goto label_3f0a88;
        case 0x3f0a8cu: goto label_3f0a8c;
        case 0x3f0a90u: goto label_3f0a90;
        case 0x3f0a94u: goto label_3f0a94;
        case 0x3f0a98u: goto label_3f0a98;
        case 0x3f0a9cu: goto label_3f0a9c;
        case 0x3f0aa0u: goto label_3f0aa0;
        case 0x3f0aa4u: goto label_3f0aa4;
        case 0x3f0aa8u: goto label_3f0aa8;
        case 0x3f0aacu: goto label_3f0aac;
        case 0x3f0ab0u: goto label_3f0ab0;
        case 0x3f0ab4u: goto label_3f0ab4;
        case 0x3f0ab8u: goto label_3f0ab8;
        case 0x3f0abcu: goto label_3f0abc;
        case 0x3f0ac0u: goto label_3f0ac0;
        case 0x3f0ac4u: goto label_3f0ac4;
        case 0x3f0ac8u: goto label_3f0ac8;
        case 0x3f0accu: goto label_3f0acc;
        case 0x3f0ad0u: goto label_3f0ad0;
        case 0x3f0ad4u: goto label_3f0ad4;
        case 0x3f0ad8u: goto label_3f0ad8;
        case 0x3f0adcu: goto label_3f0adc;
        case 0x3f0ae0u: goto label_3f0ae0;
        case 0x3f0ae4u: goto label_3f0ae4;
        default: break;
    }

    ctx->pc = 0x3f0988u;

label_3f0988:
    // 0x3f0988: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3f0988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3f098c:
    // 0x3f098c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3f098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3f0990:
    // 0x3f0990: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3f0990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3f0994:
    // 0x3f0994: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f0994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f0998:
    // 0x3f0998: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3f0998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3f099c:
    // 0x3f099c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f099cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f09a0:
    // 0x3f09a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f09a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f09a4:
    // 0x3f09a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f09a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f09a8:
    // 0x3f09a8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f09a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f09ac:
    // 0x3f09ac: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f09acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f09b0:
    // 0x3f09b0: 0x40f809  jalr        $v0
label_3f09b4:
    if (ctx->pc == 0x3F09B4u) {
        ctx->pc = 0x3F09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F09B0u;
        // 0x3f09b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F09B8u;
        goto label_3f09b8;
    }
    ctx->pc = 0x3F09B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F09B8u);
        ctx->pc = 0x3F09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F09B0u;
        // 0x3f09b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F09B0u, 0x3F09B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F09B8u;
label_3f09b8:
    // 0x3f09b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f09b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f09bc:
    // 0x3f09bc: 0xc0ea14c  jal         func_3A8530
label_3f09c0:
    if (ctx->pc == 0x3F09C0u) {
        ctx->pc = 0x3F09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F09BCu;
        // 0x3f09c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F09C4u;
        goto label_3f09c4;
    }
    ctx->pc = 0x3F09BCu;
    SET_GPR_U32(ctx, 31, 0x3F09C4u);
    ctx->pc = 0x3F09C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F09BCu;
    // 0x3f09c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F09BCu, 0x3F09C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F09C4u;
label_3f09c4:
    // 0x3f09c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f09c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f09c8:
    // 0x3f09c8: 0xc0ea12a  jal         func_3A84A8
label_3f09cc:
    if (ctx->pc == 0x3F09CCu) {
        ctx->pc = 0x3F09CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F09C8u;
        // 0x3f09cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F09D0u;
        goto label_3f09d0;
    }
    ctx->pc = 0x3F09C8u;
    SET_GPR_U32(ctx, 31, 0x3F09D0u);
    ctx->pc = 0x3F09CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F09C8u;
    // 0x3f09cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F09C8u, 0x3F09D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F09D0u;
label_3f09d0:
    // 0x3f09d0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f09d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f09d4:
    // 0x3f09d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f09d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f09d8:
    // 0x3f09d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f09d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f09dc:
    // 0x3f09dc: 0xc0ea12a  jal         func_3A84A8
label_3f09e0:
    if (ctx->pc == 0x3F09E0u) {
        ctx->pc = 0x3F09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F09DCu;
        // 0x3f09e0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F09E4u;
        goto label_3f09e4;
    }
    ctx->pc = 0x3F09DCu;
    SET_GPR_U32(ctx, 31, 0x3F09E4u);
    ctx->pc = 0x3F09E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F09DCu;
    // 0x3f09e0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F09DCu, 0x3F09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F09E4u;
label_3f09e4:
    // 0x3f09e4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3f09e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f09e8:
    // 0x3f09e8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3f09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f09ec:
    // 0x3f09ec: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x3f09ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
label_3f09f0:
    // 0x3f09f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f09f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f09f4:
    // 0x3f09f4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f09f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f09f8:
    // 0x3f09f8: 0xc0e858c  jal         func_3A1630
label_3f09fc:
    if (ctx->pc == 0x3F09FCu) {
        ctx->pc = 0x3F09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F09F8u;
        // 0x3f09fc: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0A00u;
        goto label_3f0a00;
    }
    ctx->pc = 0x3F09F8u;
    SET_GPR_U32(ctx, 31, 0x3F0A00u);
    ctx->pc = 0x3F09FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F09F8u;
    // 0x3f09fc: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F09F8u, 0x3F0A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A00u;
label_3f0a00:
    // 0x3f0a00: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3f0a00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0a04:
    // 0x3f0a04: 0x24020201  addiu       $v0, $zero, 0x201
    ctx->pc = 0x3f0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
label_3f0a08:
    // 0x3f0a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f0a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f0a0c:
    // 0x3f0a0c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3f0a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3f0a10:
    // 0x3f0a10: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3f0a10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3f0a14:
    // 0x3f0a14: 0xc0e9132  jal         func_3A44C8
label_3f0a18:
    if (ctx->pc == 0x3F0A18u) {
        ctx->pc = 0x3F0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0A14u;
        // 0x3f0a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0A1Cu;
        goto label_3f0a1c;
    }
    ctx->pc = 0x3F0A14u;
    SET_GPR_U32(ctx, 31, 0x3F0A1Cu);
    ctx->pc = 0x3F0A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0A14u;
    // 0x3f0a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F0A14u, 0x3F0A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A1Cu;
label_3f0a1c:
    // 0x3f0a1c: 0x3c01c40a  lui         $at, 0xC40A
    ctx->pc = 0x3f0a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50186 << 16));
label_3f0a20:
    // 0x3f0a20: 0x3421fe14  ori         $at, $at, 0xFE14
    ctx->pc = 0x3f0a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65044);
label_3f0a24:
    // 0x3f0a24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0a28:
    // 0x3f0a28: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3f0a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f0a2c:
    // 0x3f0a2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0a30:
    // 0x3f0a30: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f0a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0a34:
    // 0x3f0a34: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3f0a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_3f0a38:
    // 0x3f0a38: 0x3c01c373  lui         $at, 0xC373
    ctx->pc = 0x3f0a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50035 << 16));
label_3f0a3c:
    // 0x3f0a3c: 0x3421a666  ori         $at, $at, 0xA666
    ctx->pc = 0x3f0a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42598);
label_3f0a40:
    // 0x3f0a40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0a44:
    // 0x3f0a44: 0x34a5ff01  ori         $a1, $a1, 0xFF01
    ctx->pc = 0x3f0a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65281);
label_3f0a48:
    // 0x3f0a48: 0x3c01bdf5  lui         $at, 0xBDF5
    ctx->pc = 0x3f0a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48629 << 16));
label_3f0a4c:
    // 0x3f0a4c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3f0a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3f0a50:
    // 0x3f0a50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0a54:
    // 0x3f0a54: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3f0a54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_3f0a58:
    // 0x3f0a58: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x3f0a58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3f0a5c:
    // 0x3f0a5c: 0x34c6ff00  ori         $a2, $a2, 0xFF00
    ctx->pc = 0x3f0a5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
label_3f0a60:
    // 0x3f0a60: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3f0a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0a64:
    // 0x3f0a64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3f0a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0a68:
    // 0x3f0a68: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3f0a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0a6c:
    // 0x3f0a6c: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x3f0a6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0a70:
    // 0x3f0a70: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f0a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f0a74:
    // 0x3f0a74: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f0a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f0a78:
    // 0x3f0a78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0a7c:
    // 0x3f0a7c: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x3f0a7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0a80:
    // 0x3f0a80: 0x3c01c379  lui         $at, 0xC379
    ctx->pc = 0x3f0a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50041 << 16));
label_3f0a84:
    // 0x3f0a84: 0x3421a7f0  ori         $at, $at, 0xA7F0
    ctx->pc = 0x3f0a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42992);
label_3f0a88:
    // 0x3f0a88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0a8c:
    // 0x3f0a8c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x3f0a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_3f0a90:
    // 0x3f0a90: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3f0a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3f0a94:
    // 0x3f0a94: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x3f0a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_3f0a98:
    // 0x3f0a98: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3f0a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3f0a9c:
    // 0x3f0a9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0aa0:
    // 0x3f0aa0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3f0aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3f0aa4:
    // 0x3f0aa4: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x3f0aa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0aa8:
    // 0x3f0aa8: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0aa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0aac:
    // 0x3f0aac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3f0aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0ab0:
    // 0x3f0ab0: 0xae2500c8  sw          $a1, 0xC8($s1)
    ctx->pc = 0x3f0ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 5));
label_3f0ab4:
    // 0x3f0ab4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3f0ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f0ab8:
    // 0x3f0ab8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f0ab8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0abc:
    // 0x3f0abc: 0xae2600cc  sw          $a2, 0xCC($s1)
    ctx->pc = 0x3f0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 6));
label_3f0ac0:
    // 0x3f0ac0: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x3f0ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
label_3f0ac4:
    // 0x3f0ac4: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x3f0ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
label_3f0ac8:
    // 0x3f0ac8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f0ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f0acc:
    // 0x3f0acc: 0xae470004  sw          $a3, 0x4($s2)
    ctx->pc = 0x3f0accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 7));
label_3f0ad0:
    // 0x3f0ad0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3f0ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3f0ad4:
    // 0x3f0ad4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3f0ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f0ad8:
    // 0x3f0ad8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3f0ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f0adc:
    // 0x3f0adc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f0adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f0ae0:
    // 0x3f0ae0: 0x3e00008  jr          $ra
label_3f0ae4:
    if (ctx->pc == 0x3F0AE4u) {
        ctx->pc = 0x3F0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0AE0u;
        // 0x3f0ae4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0AE8u;
        goto label_fallthrough_0x3f0ae0;
    }
    ctx->pc = 0x3F0AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0AE0u;
        // 0x3f0ae4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f0ae0:
    ctx->pc = 0x3F0AE8u;
}
