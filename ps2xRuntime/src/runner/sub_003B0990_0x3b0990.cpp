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

// Function: sub_003B0990
// Address: 0x3b0990 - 0x3b0b48
void sub_003B0990_0x3b0990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0990_0x3b0990");
#endif

    switch (ctx->pc) {
        case 0x3b0990u: goto label_3b0990;
        case 0x3b0994u: goto label_3b0994;
        case 0x3b0998u: goto label_3b0998;
        case 0x3b099cu: goto label_3b099c;
        case 0x3b09a0u: goto label_3b09a0;
        case 0x3b09a4u: goto label_3b09a4;
        case 0x3b09a8u: goto label_3b09a8;
        case 0x3b09acu: goto label_3b09ac;
        case 0x3b09b0u: goto label_3b09b0;
        case 0x3b09b4u: goto label_3b09b4;
        case 0x3b09b8u: goto label_3b09b8;
        case 0x3b09bcu: goto label_3b09bc;
        case 0x3b09c0u: goto label_3b09c0;
        case 0x3b09c4u: goto label_3b09c4;
        case 0x3b09c8u: goto label_3b09c8;
        case 0x3b09ccu: goto label_3b09cc;
        case 0x3b09d0u: goto label_3b09d0;
        case 0x3b09d4u: goto label_3b09d4;
        case 0x3b09d8u: goto label_3b09d8;
        case 0x3b09dcu: goto label_3b09dc;
        case 0x3b09e0u: goto label_3b09e0;
        case 0x3b09e4u: goto label_3b09e4;
        case 0x3b09e8u: goto label_3b09e8;
        case 0x3b09ecu: goto label_3b09ec;
        case 0x3b09f0u: goto label_3b09f0;
        case 0x3b09f4u: goto label_3b09f4;
        case 0x3b09f8u: goto label_3b09f8;
        case 0x3b09fcu: goto label_3b09fc;
        case 0x3b0a00u: goto label_3b0a00;
        case 0x3b0a04u: goto label_3b0a04;
        case 0x3b0a08u: goto label_3b0a08;
        case 0x3b0a0cu: goto label_3b0a0c;
        case 0x3b0a10u: goto label_3b0a10;
        case 0x3b0a14u: goto label_3b0a14;
        case 0x3b0a18u: goto label_3b0a18;
        case 0x3b0a1cu: goto label_3b0a1c;
        case 0x3b0a20u: goto label_3b0a20;
        case 0x3b0a24u: goto label_3b0a24;
        case 0x3b0a28u: goto label_3b0a28;
        case 0x3b0a2cu: goto label_3b0a2c;
        case 0x3b0a30u: goto label_3b0a30;
        case 0x3b0a34u: goto label_3b0a34;
        case 0x3b0a38u: goto label_3b0a38;
        case 0x3b0a3cu: goto label_3b0a3c;
        case 0x3b0a40u: goto label_3b0a40;
        case 0x3b0a44u: goto label_3b0a44;
        case 0x3b0a48u: goto label_3b0a48;
        case 0x3b0a4cu: goto label_3b0a4c;
        case 0x3b0a50u: goto label_3b0a50;
        case 0x3b0a54u: goto label_3b0a54;
        case 0x3b0a58u: goto label_3b0a58;
        case 0x3b0a5cu: goto label_3b0a5c;
        case 0x3b0a60u: goto label_3b0a60;
        case 0x3b0a64u: goto label_3b0a64;
        case 0x3b0a68u: goto label_3b0a68;
        case 0x3b0a6cu: goto label_3b0a6c;
        case 0x3b0a70u: goto label_3b0a70;
        case 0x3b0a74u: goto label_3b0a74;
        case 0x3b0a78u: goto label_3b0a78;
        case 0x3b0a7cu: goto label_3b0a7c;
        case 0x3b0a80u: goto label_3b0a80;
        case 0x3b0a84u: goto label_3b0a84;
        case 0x3b0a88u: goto label_3b0a88;
        case 0x3b0a8cu: goto label_3b0a8c;
        case 0x3b0a90u: goto label_3b0a90;
        case 0x3b0a94u: goto label_3b0a94;
        case 0x3b0a98u: goto label_3b0a98;
        case 0x3b0a9cu: goto label_3b0a9c;
        case 0x3b0aa0u: goto label_3b0aa0;
        case 0x3b0aa4u: goto label_3b0aa4;
        case 0x3b0aa8u: goto label_3b0aa8;
        case 0x3b0aacu: goto label_3b0aac;
        case 0x3b0ab0u: goto label_3b0ab0;
        case 0x3b0ab4u: goto label_3b0ab4;
        case 0x3b0ab8u: goto label_3b0ab8;
        case 0x3b0abcu: goto label_3b0abc;
        case 0x3b0ac0u: goto label_3b0ac0;
        case 0x3b0ac4u: goto label_3b0ac4;
        case 0x3b0ac8u: goto label_3b0ac8;
        case 0x3b0accu: goto label_3b0acc;
        case 0x3b0ad0u: goto label_3b0ad0;
        case 0x3b0ad4u: goto label_3b0ad4;
        case 0x3b0ad8u: goto label_3b0ad8;
        case 0x3b0adcu: goto label_3b0adc;
        case 0x3b0ae0u: goto label_3b0ae0;
        case 0x3b0ae4u: goto label_3b0ae4;
        case 0x3b0ae8u: goto label_3b0ae8;
        case 0x3b0aecu: goto label_3b0aec;
        case 0x3b0af0u: goto label_3b0af0;
        case 0x3b0af4u: goto label_3b0af4;
        case 0x3b0af8u: goto label_3b0af8;
        case 0x3b0afcu: goto label_3b0afc;
        case 0x3b0b00u: goto label_3b0b00;
        case 0x3b0b04u: goto label_3b0b04;
        case 0x3b0b08u: goto label_3b0b08;
        case 0x3b0b0cu: goto label_3b0b0c;
        case 0x3b0b10u: goto label_3b0b10;
        case 0x3b0b14u: goto label_3b0b14;
        case 0x3b0b18u: goto label_3b0b18;
        case 0x3b0b1cu: goto label_3b0b1c;
        case 0x3b0b20u: goto label_3b0b20;
        case 0x3b0b24u: goto label_3b0b24;
        case 0x3b0b28u: goto label_3b0b28;
        case 0x3b0b2cu: goto label_3b0b2c;
        case 0x3b0b30u: goto label_3b0b30;
        case 0x3b0b34u: goto label_3b0b34;
        case 0x3b0b38u: goto label_3b0b38;
        case 0x3b0b3cu: goto label_3b0b3c;
        case 0x3b0b40u: goto label_3b0b40;
        case 0x3b0b44u: goto label_3b0b44;
        default: break;
    }

    ctx->pc = 0x3b0990u;

label_3b0990:
    // 0x3b0990: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3b0990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3b0994:
    // 0x3b0994: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3b0994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3b0998:
    // 0x3b0998: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3b0998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3b099c:
    // 0x3b099c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b099cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b09a0:
    // 0x3b09a0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3b09a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3b09a4:
    // 0x3b09a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b09a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b09a8:
    // 0x3b09a8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3b09a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3b09ac:
    // 0x3b09ac: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3b09acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3b09b0:
    // 0x3b09b0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3b09b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3b09b4:
    // 0x3b09b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b09b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b09b8:
    // 0x3b09b8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b09b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b09bc:
    // 0x3b09bc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b09c0:
    // 0x3b09c0: 0x40f809  jalr        $v0
label_3b09c4:
    if (ctx->pc == 0x3B09C4u) {
        ctx->pc = 0x3B09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09C0u;
        // 0x3b09c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B09C8u;
        goto label_3b09c8;
    }
    ctx->pc = 0x3B09C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B09C8u);
        ctx->pc = 0x3B09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09C0u;
        // 0x3b09c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B09C0u, 0x3B09C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B09C8u;
label_3b09c8:
    // 0x3b09c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3b09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3b09cc:
    // 0x3b09cc: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3b09ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3b09d0:
    // 0x3b09d0: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3b09d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3b09d4:
    // 0x3b09d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b09d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b09d8:
    // 0x3b09d8: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x3b09d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_3b09dc:
    // 0x3b09dc: 0xc0ea146  jal         func_3A8518
label_3b09e0:
    if (ctx->pc == 0x3B09E0u) {
        ctx->pc = 0x3B09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09DCu;
        // 0x3b09e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B09E4u;
        goto label_3b09e4;
    }
    ctx->pc = 0x3B09DCu;
    SET_GPR_U32(ctx, 31, 0x3B09E4u);
    ctx->pc = 0x3B09E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B09DCu;
    // 0x3b09e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B09DCu, 0x3B09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B09E4u;
label_3b09e4:
    // 0x3b09e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b09e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b09e8:
    // 0x3b09e8: 0xc0ea146  jal         func_3A8518
label_3b09ec:
    if (ctx->pc == 0x3B09ECu) {
        ctx->pc = 0x3B09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09E8u;
        // 0x3b09ec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B09F0u;
        goto label_3b09f0;
    }
    ctx->pc = 0x3B09E8u;
    SET_GPR_U32(ctx, 31, 0x3B09F0u);
    ctx->pc = 0x3B09ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B09E8u;
    // 0x3b09ec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B09E8u, 0x3B09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B09F0u;
label_3b09f0:
    // 0x3b09f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b09f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b09f4:
    // 0x3b09f4: 0xc0ea14c  jal         func_3A8530
label_3b09f8:
    if (ctx->pc == 0x3B09F8u) {
        ctx->pc = 0x3B09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09F4u;
        // 0x3b09f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B09FCu;
        goto label_3b09fc;
    }
    ctx->pc = 0x3B09F4u;
    SET_GPR_U32(ctx, 31, 0x3B09FCu);
    ctx->pc = 0x3B09F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B09F4u;
    // 0x3b09f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B09F4u, 0x3B09FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B09FCu;
label_3b09fc:
    // 0x3b09fc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3b09fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3b0a00:
    // 0x3b0a00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b0a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b0a04:
    // 0x3b0a04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b0a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0a08:
    // 0x3b0a08: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3b0a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3b0a0c:
    // 0x3b0a0c: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x3b0a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_3b0a10:
    // 0x3b0a10: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3b0a10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3b0a14:
    // 0x3b0a14: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x3b0a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b0a18:
    // 0x3b0a18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b0a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b0a1c:
    // 0x3b0a1c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3b0a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_3b0a20:
    // 0x3b0a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0a24:
    // 0x3b0a24: 0xc0e858c  jal         func_3A1630
label_3b0a28:
    if (ctx->pc == 0x3B0A28u) {
        ctx->pc = 0x3B0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A24u;
        // 0x3b0a28: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0A2Cu;
        goto label_3b0a2c;
    }
    ctx->pc = 0x3B0A24u;
    SET_GPR_U32(ctx, 31, 0x3B0A2Cu);
    ctx->pc = 0x3B0A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A24u;
    // 0x3b0a28: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B0A24u, 0x3B0A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A2Cu;
label_3b0a2c:
    // 0x3b0a2c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3b0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3b0a30:
    // 0x3b0a30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b0a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0a34:
    // 0x3b0a34: 0xc047e6c  jal         func_11F9B0
label_3b0a38:
    if (ctx->pc == 0x3B0A38u) {
        ctx->pc = 0x3B0A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A34u;
        // 0x3b0a38: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0A3Cu;
        goto label_3b0a3c;
    }
    ctx->pc = 0x3B0A34u;
    SET_GPR_U32(ctx, 31, 0x3B0A3Cu);
    ctx->pc = 0x3B0A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A34u;
    // 0x3b0a38: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3B0A34u, 0x3B0A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A3Cu;
label_3b0a3c:
    // 0x3b0a3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b0a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b0a40:
    // 0x3b0a40: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3b0a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3b0a44:
    // 0x3b0a44: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3b0a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3b0a48:
    // 0x3b0a48: 0xa0f809  jalr        $a1
label_3b0a4c:
    if (ctx->pc == 0x3B0A4Cu) {
        ctx->pc = 0x3B0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A48u;
        // 0x3b0a4c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0A50u;
        goto label_3b0a50;
    }
    ctx->pc = 0x3B0A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3B0A50u);
        ctx->pc = 0x3B0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A48u;
        // 0x3b0a4c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0A48u, 0x3B0A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0A50u;
label_3b0a50:
    // 0x3b0a50: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3b0a50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3b0a54:
    // 0x3b0a54: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b0a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b0a58:
    // 0x3b0a58: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b0a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b0a5c:
    // 0x3b0a5c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3b0a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3b0a60:
    // 0x3b0a60: 0xc0e8fcc  jal         func_3A3F30
label_3b0a64:
    if (ctx->pc == 0x3B0A64u) {
        ctx->pc = 0x3B0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A60u;
        // 0x3b0a64: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0A68u;
        goto label_3b0a68;
    }
    ctx->pc = 0x3B0A60u;
    SET_GPR_U32(ctx, 31, 0x3B0A68u);
    ctx->pc = 0x3B0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A60u;
    // 0x3b0a64: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F30u, 0x3B0A60u, 0x3B0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A68u;
label_3b0a68:
    // 0x3b0a68: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x3b0a68u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b0a6c:
    // 0x3b0a6c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3b0a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3b0a70:
    // 0x3b0a70: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3b0a70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b0a74:
    // 0x3b0a74: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x3b0a74u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
label_3b0a78:
    // 0x3b0a78: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3b0a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3b0a7c:
    // 0x3b0a7c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b0a7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b0a80:
    // 0x3b0a80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b0a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0a84:
    // 0x3b0a84: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3b0a84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3b0a88:
    // 0x3b0a88: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3b0a88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b0a8c:
    // 0x3b0a8c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b0a8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b0a90:
    // 0x3b0a90: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b0a90u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b0a94:
    // 0x3b0a94: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3b0a94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b0a98:
    // 0x3b0a98: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b0a98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b0a9c:
    // 0x3b0a9c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3b0a9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b0aa0:
    // 0x3b0aa0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3b0aa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b0aa4:
    // 0x3b0aa4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3b0aa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b0aa8:
    // 0x3b0aa8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3b0aa8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3b0aac:
    // 0x3b0aac: 0x4a0003bf  vwaitq
    ctx->pc = 0x3b0aacu;
    // VWAITQ (Q already resolved in this runtime)
label_3b0ab0:
    // 0x3b0ab0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3b0ab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b0ab4:
    // 0x3b0ab4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3b0ab4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b0ab8:
    // 0x3b0ab8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3b0ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3b0abc:
    // 0x3b0abc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3b0abcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3b0ac0:
    // 0x3b0ac0: 0x36730035  ori         $s3, $s3, 0x35
    ctx->pc = 0x3b0ac0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)53);
label_3b0ac4:
    // 0x3b0ac4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3b0ac4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b0ac8:
    // 0x3b0ac8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3b0ac8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3b0acc:
    // 0x3b0acc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3b0accu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b0ad0:
    // 0x3b0ad0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x3b0ad0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b0ad4:
    // 0x3b0ad4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3b0ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3b0ad8:
    // 0x3b0ad8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3b0ad8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3b0adc:
    // 0x3b0adc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3b0adcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3b0ae0:
    // 0x3b0ae0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b0ae0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b0ae4:
    // 0x3b0ae4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b0ae4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b0ae8:
    // 0x3b0ae8: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x3b0ae8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b0aec:
    // 0x3b0aec: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3b0aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3b0af0:
    // 0x3b0af0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b0af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b0af4:
    // 0x3b0af4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3b0af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3b0af8:
    // 0x3b0af8: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x3b0af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_3b0afc:
    // 0x3b0afc: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x3b0afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
label_3b0b00:
    // 0x3b0b00: 0xae3300c4  sw          $s3, 0xC4($s1)
    ctx->pc = 0x3b0b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 19));
label_3b0b04:
    // 0x3b0b04: 0x7e250010  sq          $a1, 0x10($s1)
    ctx->pc = 0x3b0b04u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 5));
label_3b0b08:
    // 0x3b0b08: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3b0b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3b0b0c:
    // 0x3b0b0c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3b0b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3b0b10:
    // 0x3b0b10: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3b0b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3b0b14:
    // 0x3b0b14: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3b0b14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b0b18:
    // 0x3b0b18: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3b0b18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b0b1c:
    // 0x3b0b1c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3b0b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3b0b20:
    // 0x3b0b20: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x3b0b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_3b0b24:
    // 0x3b0b24: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3b0b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3b0b28:
    // 0x3b0b28: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3b0b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3b0b2c:
    // 0x3b0b2c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3b0b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3b0b30:
    // 0x3b0b30: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x3b0b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_3b0b34:
    // 0x3b0b34: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x3b0b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_3b0b38:
    // 0x3b0b38: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x3b0b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_3b0b3c:
    // 0x3b0b3c: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x3b0b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_3b0b40:
    // 0x3b0b40: 0x3e00008  jr          $ra
label_3b0b44:
    if (ctx->pc == 0x3B0B44u) {
        ctx->pc = 0x3B0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B40u;
        // 0x3b0b44: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0B48u;
        goto label_fallthrough_0x3b0b40;
    }
    ctx->pc = 0x3B0B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B40u;
        // 0x3b0b44: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b0b40:
    ctx->pc = 0x3B0B48u;
}
