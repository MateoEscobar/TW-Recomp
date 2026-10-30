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

// Function: sub_0027B2A8
// Address: 0x27b2a8 - 0x27b548
void sub_0027B2A8_0x27b2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B2A8_0x27b2a8");
#endif

    switch (ctx->pc) {
        case 0x27b2f8u: goto label_27b2f8;
        case 0x27b34cu: goto label_27b34c;
        case 0x27b384u: goto label_27b384;
        case 0x27b3b4u: goto label_27b3b4;
        case 0x27b3e4u: goto label_27b3e4;
        case 0x27b414u: goto label_27b414;
        case 0x27b45cu: goto label_27b45c;
        case 0x27b46cu: goto label_27b46c;
        case 0x27b478u: goto label_27b478;
        case 0x27b4bcu: goto label_27b4bc;
        case 0x27b4ecu: goto label_27b4ec;
        case 0x27b4fcu: goto label_27b4fc;
        case 0x27b50cu: goto label_27b50c;
        default: break;
    }

    ctx->pc = 0x27b2a8u;

    // 0x27b2a8: 0x27bdfa80  addiu       $sp, $sp, -0x580
    ctx->pc = 0x27b2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965888));
    // 0x27b2ac: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x27b2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x27b2b0: 0x3421be4c  ori         $at, $at, 0xBE4C
    ctx->pc = 0x27b2b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48716);
    // 0x27b2b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b2b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b2b8: 0x7fb10550  sq          $s1, 0x550($sp)
    ctx->pc = 0x27b2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 17));
    // 0x27b2bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27b2c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27b2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b2c4: 0x7fb00560  sq          $s0, 0x560($sp)
    ctx->pc = 0x27b2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 16));
    // 0x27b2c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27b2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b2cc: 0xe440096c  swc1        $f0, 0x96C($v0)
    ctx->pc = 0x27b2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x51096Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51096Cu, _value); } while (0); }
    // 0x27b2d0: 0x7fb20540  sq          $s2, 0x540($sp)
    ctx->pc = 0x27b2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 18));
    // 0x27b2d4: 0x7fb30530  sq          $s3, 0x530($sp)
    ctx->pc = 0x27b2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 19));
    // 0x27b2d8: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x27b2d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x27b2dc: 0x7fb40520  sq          $s4, 0x520($sp)
    ctx->pc = 0x27b2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 20));
    // 0x27b2e0: 0x7fb50510  sq          $s5, 0x510($sp)
    ctx->pc = 0x27b2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 21));
    // 0x27b2e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27b2e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b2e8: 0xe7b40570  swc1        $f20, 0x570($sp)
    ctx->pc = 0x27b2e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
    // 0x27b2ec: 0xffbf0500  sd          $ra, 0x500($sp)
    ctx->pc = 0x27b2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1280), GPR_U64(ctx, 31));
    // 0x27b2f0: 0xc087468  jal         func_21D1A0
    ctx->pc = 0x27B2F0u;
    SET_GPR_U32(ctx, 31, 0x27B2F8u);
    ctx->pc = 0x27B2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B2F0u;
    // 0x27b2f4: 0xe7b50578  swc1        $f21, 0x578($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D1A0u, 0x27B2F0u, 0x27B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2F8u;
label_27b2f8:
    // 0x27b2f8: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x27b2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x27b2fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27b2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27b300: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x27b300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27b304: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x27b304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x27b308: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x27b308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x27b30c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x27b30cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x27b310: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x27b310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x27b314: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x27b314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b318: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27b318u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27b31c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27b31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b320: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x27b320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27b324: 0x250892c8  addiu       $t0, $t0, -0x6D38
    ctx->pc = 0x27b324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939336));
    // 0x27b328: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27b328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b32c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27b32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b330: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x27b330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x27b334: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27b334u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27b338: 0xacf001f8  sw          $s0, 0x1F8($a3)
    ctx->pc = 0x27b338u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5101F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5101F8u, _value); } while (0);
    // 0x27b33c: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27b33cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27b340: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27b340u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27b344: 0xc089d66  jal         func_227598
    ctx->pc = 0x27B344u;
    SET_GPR_U32(ctx, 31, 0x27B34Cu);
    ctx->pc = 0x27B348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B344u;
    // 0x27b348: 0xf33821  addu        $a3, $a3, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27B344u, 0x27B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B34Cu;
label_27b34c:
    // 0x27b34c: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x27B34Cu;
    {
        const bool branch_taken_0x27b34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B34Cu;
        // 0x27b350: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b34c) {
            ctx->pc = 0x27B4F4u;
            goto label_27b4f4;
        }
    }
    ctx->pc = 0x27B354u;
    // 0x27b354: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27b354u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27b358: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27b358u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27b35c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x27b35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x27b360: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27b360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27b364: 0x250891b0  addiu       $t0, $t0, -0x6E50
    ctx->pc = 0x27b364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939056));
    // 0x27b368: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27b368u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27b36c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27b36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b370: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x27b370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x27b374: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27b374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b378: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27b378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b37c: 0xc089d66  jal         func_227598
    ctx->pc = 0x27B37Cu;
    SET_GPR_U32(ctx, 31, 0x27B384u);
    ctx->pc = 0x27B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B37Cu;
    // 0x27b380: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27B37Cu, 0x27B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B384u;
label_27b384:
    // 0x27b384: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x27B384u;
    {
        const bool branch_taken_0x27b384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B384u;
        // 0x27b388: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b384) {
            ctx->pc = 0x27B4F4u;
            goto label_27b4f4;
        }
    }
    ctx->pc = 0x27B38Cu;
    // 0x27b38c: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27b38cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27b390: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27b390u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27b394: 0x25089568  addiu       $t0, $t0, -0x6A98
    ctx->pc = 0x27b394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940008));
    // 0x27b398: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b39c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27b39cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27b3a0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27b3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b3a4: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x27b3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x27b3a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27b3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3ac: 0xc089d66  jal         func_227598
    ctx->pc = 0x27B3ACu;
    SET_GPR_U32(ctx, 31, 0x27B3B4u);
    ctx->pc = 0x27B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B3ACu;
    // 0x27b3b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27B3ACu, 0x27B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3B4u;
label_27b3b4:
    // 0x27b3b4: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x27B3B4u;
    {
        const bool branch_taken_0x27b3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B3B4u;
        // 0x27b3b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b3b4) {
            ctx->pc = 0x27B4F4u;
            goto label_27b4f4;
        }
    }
    ctx->pc = 0x27B3BCu;
    // 0x27b3bc: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27b3bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27b3c0: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27b3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27b3c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27b3c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27b3c8: 0x250897b0  addiu       $t0, $t0, -0x6850
    ctx->pc = 0x27b3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940592));
    // 0x27b3cc: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27b3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27b3d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3d4: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x27b3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x27b3d8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b3dc: 0xc089d66  jal         func_227598
    ctx->pc = 0x27B3DCu;
    SET_GPR_U32(ctx, 31, 0x27B3E4u);
    ctx->pc = 0x27B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B3DCu;
    // 0x27b3e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27B3DCu, 0x27B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3E4u;
label_27b3e4:
    // 0x27b3e4: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x27B3E4u;
    {
        const bool branch_taken_0x27b3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B3E4u;
        // 0x27b3e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b3e4) {
            ctx->pc = 0x27B4F4u;
            goto label_27b4f4;
        }
    }
    ctx->pc = 0x27B3ECu;
    // 0x27b3ec: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27b3ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27b3f0: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27b3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27b3f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27b3f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27b3f8: 0x25089c48  addiu       $t0, $t0, -0x63B8
    ctx->pc = 0x27b3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941768));
    // 0x27b3fc: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27b3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27b400: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27b400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b404: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x27b404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x27b408: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27b408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b40c: 0xc089dce  jal         func_227738
    ctx->pc = 0x27B40Cu;
    SET_GPR_U32(ctx, 31, 0x27B414u);
    ctx->pc = 0x27B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B40Cu;
    // 0x27b410: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227738u, 0x27B40Cu, 0x27B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B414u;
label_27b414:
    // 0x27b414: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x27B414u;
    {
        const bool branch_taken_0x27b414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B414u;
        // 0x27b418: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b414) {
            ctx->pc = 0x27B4F4u;
            goto label_27b4f4;
        }
    }
    ctx->pc = 0x27B41Cu;
    // 0x27b41c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27b420: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x27b420u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27b424: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x27b424u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x27b428: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x27b428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x27b42c: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x27b42cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x27b430: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x27b430u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
    // 0x27b434: 0x8c640844  lw          $a0, 0x844($v1)
    ctx->pc = 0x27b434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2116)));
    // 0x27b438: 0x1134021  addu        $t0, $t0, $s3
    ctx->pc = 0x27b438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x27b43c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27b440: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27b440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27b444: 0x25299f50  addiu       $t1, $t1, -0x60B0
    ctx->pc = 0x27b444u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942544));
    // 0x27b448: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27b448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b44c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x27b44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b450: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27b450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b454: 0xc0e3a18  jal         func_38E860
    ctx->pc = 0x27B454u;
    SET_GPR_U32(ctx, 31, 0x27B45Cu);
    ctx->pc = 0x27B458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B454u;
    // 0x27b458: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E860u, 0x27B454u, 0x27B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B45Cu;
label_27b45c:
    // 0x27b45c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27B45Cu;
    {
        const bool branch_taken_0x27b45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B45Cu;
        // 0x27b460: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b45c) {
            ctx->pc = 0x27B48Cu;
            goto label_27b48c;
        }
    }
    ctx->pc = 0x27B464u;
    // 0x27b464: 0xc0e1a48  jal         func_386920
    ctx->pc = 0x27B464u;
    SET_GPR_U32(ctx, 31, 0x27B46Cu);
    ctx->pc = 0x27B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B464u;
    // 0x27b468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386920u, 0x27B464u, 0x27B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B46Cu;
label_27b46c:
    // 0x27b46c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x27b46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27b470: 0xc087090  jal         func_21C240
    ctx->pc = 0x27B470u;
    SET_GPR_U32(ctx, 31, 0x27B478u);
    ctx->pc = 0x27B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B470u;
    // 0x27b474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C240u, 0x27B470u, 0x27B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B478u;
label_27b478:
    // 0x27b478: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x27b478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27b47c: 0xaea001f8  sw          $zero, 0x1F8($s5)
    ctx->pc = 0x27b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 504), GPR_U32(ctx, 0));
    // 0x27b480: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x27b480u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x27b484: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x27B484u;
    {
        const bool branch_taken_0x27b484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B484u;
        // 0x27b488: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b484) {
            ctx->pc = 0x27B51Cu;
            goto label_27b51c;
        }
    }
    ctx->pc = 0x27B48Cu;
label_27b48c:
    // 0x27b48c: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27b48cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27b490: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27b490u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27b494: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x27b494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x27b498: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27b498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27b49c: 0x250896a0  addiu       $t0, $t0, -0x6960
    ctx->pc = 0x27b49cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940320));
    // 0x27b4a0: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27b4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27b4a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27b4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4a8: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x27b4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x27b4ac: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27b4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b4b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27b4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4b4: 0xc089d66  jal         func_227598
    ctx->pc = 0x27B4B4u;
    SET_GPR_U32(ctx, 31, 0x27B4BCu);
    ctx->pc = 0x27B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4B4u;
    // 0x27b4b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27B4B4u, 0x27B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4BCu;
label_27b4bc:
    // 0x27b4bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27B4BCu;
    {
        const bool branch_taken_0x27b4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4BCu;
        // 0x27b4c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b4bc) {
            ctx->pc = 0x27B4F4u;
            goto label_27b4f4;
        }
    }
    ctx->pc = 0x27B4C4u;
    // 0x27b4c4: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27b4c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27b4c8: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27b4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27b4cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27b4ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27b4d0: 0x25089d38  addiu       $t0, $t0, -0x62C8
    ctx->pc = 0x27b4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942008));
    // 0x27b4d4: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27b4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27b4d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27b4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4dc: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x27b4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x27b4e0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27b4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b4e4: 0xc089d66  jal         func_227598
    ctx->pc = 0x27B4E4u;
    SET_GPR_U32(ctx, 31, 0x27B4ECu);
    ctx->pc = 0x27B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4E4u;
    // 0x27b4e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27B4E4u, 0x27B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4ECu;
label_27b4ec:
    // 0x27b4ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27B4ECu;
    {
        const bool branch_taken_0x27b4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4ECu;
        // 0x27b4f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b4ec) {
            ctx->pc = 0x27B514u;
            goto label_27b514;
        }
    }
    ctx->pc = 0x27B4F4u;
label_27b4f4:
    // 0x27b4f4: 0xc0e1a34  jal         func_3868D0
    ctx->pc = 0x27B4F4u;
    SET_GPR_U32(ctx, 31, 0x27B4FCu);
    ctx->pc = 0x27B4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4F4u;
    // 0x27b4f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x27B4F4u, 0x27B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4FCu;
label_27b4fc:
    // 0x27b4fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27b4fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b500: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x27b500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b504: 0xc087090  jal         func_21C240
    ctx->pc = 0x27B504u;
    SET_GPR_U32(ctx, 31, 0x27B50Cu);
    ctx->pc = 0x27B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B504u;
    // 0x27b508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C240u, 0x27B504u, 0x27B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B50Cu;
label_27b50c:
    // 0x27b50c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b510: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x27b510u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_27b514:
    // 0x27b514: 0xaea001f8  sw          $zero, 0x1F8($s5)
    ctx->pc = 0x27b514u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 504), GPR_U32(ctx, 0));
    // 0x27b518: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x27b518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27b51c:
    // 0x27b51c: 0x7bb00560  lq          $s0, 0x560($sp)
    ctx->pc = 0x27b51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
    // 0x27b520: 0x7bb10550  lq          $s1, 0x550($sp)
    ctx->pc = 0x27b520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x27b524: 0x7bb20540  lq          $s2, 0x540($sp)
    ctx->pc = 0x27b524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x27b528: 0x7bb30530  lq          $s3, 0x530($sp)
    ctx->pc = 0x27b528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x27b52c: 0x7bb40520  lq          $s4, 0x520($sp)
    ctx->pc = 0x27b52cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x27b530: 0x7bb50510  lq          $s5, 0x510($sp)
    ctx->pc = 0x27b530u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x27b534: 0xdfbf0500  ld          $ra, 0x500($sp)
    ctx->pc = 0x27b534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x27b538: 0xc7b50578  lwc1        $f21, 0x578($sp)
    ctx->pc = 0x27b538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27b53c: 0xc7b40570  lwc1        $f20, 0x570($sp)
    ctx->pc = 0x27b53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27b540: 0x3e00008  jr          $ra
    ctx->pc = 0x27B540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B540u;
        // 0x27b544: 0x27bd0580  addiu       $sp, $sp, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B548u;
}
