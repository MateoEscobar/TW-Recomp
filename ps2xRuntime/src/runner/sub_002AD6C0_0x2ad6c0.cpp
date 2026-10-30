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

// Function: sub_002AD6C0
// Address: 0x2ad6c0 - 0x2adac0
void sub_002AD6C0_0x2ad6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD6C0_0x2ad6c0");
#endif

    switch (ctx->pc) {
        case 0x2ad6fcu: goto label_2ad6fc;
        case 0x2ad714u: goto label_2ad714;
        case 0x2ad750u: goto label_2ad750;
        case 0x2ad778u: goto label_2ad778;
        case 0x2ad7b0u: goto label_2ad7b0;
        case 0x2ad7c8u: goto label_2ad7c8;
        case 0x2ad7d0u: goto label_2ad7d0;
        case 0x2ad7dcu: goto label_2ad7dc;
        case 0x2ad804u: goto label_2ad804;
        case 0x2ad828u: goto label_2ad828;
        case 0x2ad840u: goto label_2ad840;
        case 0x2ad850u: goto label_2ad850;
        case 0x2ad868u: goto label_2ad868;
        case 0x2ad874u: goto label_2ad874;
        case 0x2ad888u: goto label_2ad888;
        case 0x2ad8a8u: goto label_2ad8a8;
        case 0x2ad8c8u: goto label_2ad8c8;
        case 0x2ad90cu: goto label_2ad90c;
        case 0x2ad920u: goto label_2ad920;
        case 0x2ad950u: goto label_2ad950;
        case 0x2ad988u: goto label_2ad988;
        case 0x2ad990u: goto label_2ad990;
        case 0x2ad9a4u: goto label_2ad9a4;
        case 0x2ad9bcu: goto label_2ad9bc;
        case 0x2ada0cu: goto label_2ada0c;
        case 0x2ada68u: goto label_2ada68;
        case 0x2ada78u: goto label_2ada78;
        case 0x2ada94u: goto label_2ada94;
        default: break;
    }

    ctx->pc = 0x2ad6c0u;

    // 0x2ad6c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ad6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ad6c4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2ad6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2ad6c8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2ad6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2ad6cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ad6ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad6d0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2ad6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2ad6d4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2ad6d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad6d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2ad6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2ad6dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ad6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ad6e0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2ad6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2ad6e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ad6e8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2ad6e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ad6ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ad6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad6f0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ad6f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad6f4: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2AD6F4u;
    SET_GPR_U32(ctx, 31, 0x2AD6FCu);
    ctx->pc = 0x2AD6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD6F4u;
    // 0x2ad6f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2AD6F4u, 0x2AD6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD6FCu;
label_2ad6fc:
    // 0x2ad6fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ad6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad700: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2ad700u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x2ad704: 0x1c6000e4  bgtz        $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x2AD704u;
    {
        const bool branch_taken_0x2ad704 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2AD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD704u;
        // 0x2ad708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad704) {
            ctx->pc = 0x2ADA98u;
            goto label_2ada98;
        }
    }
    ctx->pc = 0x2AD70Cu;
    // 0x2ad70c: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2AD70Cu;
    SET_GPR_U32(ctx, 31, 0x2AD714u);
    ctx->pc = 0x2AD710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD70Cu;
    // 0x2ad710: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2AD70Cu, 0x2AD714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD714u;
label_2ad714:
    // 0x2ad714: 0x105500e0  beq         $v0, $s5, . + 4 + (0xE0 << 2)
    ctx->pc = 0x2AD714u;
    {
        const bool branch_taken_0x2ad714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2AD718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD714u;
        // 0x2ad718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad714) {
            ctx->pc = 0x2ADA98u;
            goto label_2ada98;
        }
    }
    ctx->pc = 0x2AD71Cu;
    // 0x2ad71c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ad71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad720: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2ad720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    // 0x2ad724: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AD724u;
    {
        const bool branch_taken_0x2ad724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad724) {
            ctx->pc = 0x2AD728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD724u;
            // 0x2ad728: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD72Cu;
            goto label_2ad72c;
        }
    }
    ctx->pc = 0x2AD72Cu;
label_2ad72c:
    // 0x2ad72c: 0x26530090  addiu       $s3, $s2, 0x90
    ctx->pc = 0x2ad72cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2ad730: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ad730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ad734: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x2ad734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2ad738: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2ad738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2ad73c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2ad73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2ad740: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ad740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ad744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ad744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad748: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2AD748u;
    SET_GPR_U32(ctx, 31, 0x2AD750u);
    ctx->pc = 0x2AD74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD748u;
    // 0x2ad74c: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2AD748u, 0x2AD750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD750u;
label_2ad750:
    // 0x2ad750: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x2ad750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x2ad754: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2ad754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2ad758: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ad758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad75c: 0x0  nop
    ctx->pc = 0x2ad75cu;
    // NOP
    // 0x2ad760: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad764: 0x0  nop
    ctx->pc = 0x2ad764u;
    // NOP
    // 0x2ad768: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x2AD768u;
    {
        const bool branch_taken_0x2ad768 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ad768) {
            ctx->pc = 0x2AD76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD768u;
            // 0x2ad76c: 0x86640002  lh          $a0, 0x2($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD7B8u;
            goto label_2ad7b8;
        }
    }
    ctx->pc = 0x2AD770u;
    // 0x2ad770: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2AD770u;
    SET_GPR_U32(ctx, 31, 0x2AD778u);
    ctx->pc = 0x2AD774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD770u;
    // 0x2ad774: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AD770u, 0x2AD778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD778u;
label_2ad778:
    // 0x2ad778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ad778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad77c: 0x108000c5  beqz        $a0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2AD77Cu;
    {
        const bool branch_taken_0x2ad77c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD77Cu;
        // 0x2ad780: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad77c) {
            ctx->pc = 0x2ADA94u;
            goto label_2ada94;
        }
    }
    ctx->pc = 0x2AD784u;
    // 0x2ad784: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ad784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad788: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2ad788u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2ad78c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ad78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad790: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2ad790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2ad794: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ad794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ad798: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ad798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad79c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ad79cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ad7a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ad7a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad7a4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2ad7a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ad7a8: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2AD7A8u;
    SET_GPR_U32(ctx, 31, 0x2AD7B0u);
    ctx->pc = 0x2AD7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD7A8u;
    // 0x2ad7ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2AD7A8u, 0x2AD7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD7B0u;
label_2ad7b0:
    // 0x2ad7b0: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x2AD7B0u;
    {
        const bool branch_taken_0x2ad7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD7B0u;
        // 0x2ad7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad7b0) {
            ctx->pc = 0x2ADA98u;
            goto label_2ada98;
        }
    }
    ctx->pc = 0x2AD7B8u;
label_2ad7b8:
    // 0x2ad7b8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ad7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ad7bc: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2ad7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2ad7c0: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2AD7C0u;
    SET_GPR_U32(ctx, 31, 0x2AD7C8u);
    ctx->pc = 0x2AD7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD7C0u;
    // 0x2ad7c4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2AD7C0u, 0x2AD7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD7C8u;
label_2ad7c8:
    // 0x2ad7c8: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2AD7C8u;
    SET_GPR_U32(ctx, 31, 0x2AD7D0u);
    ctx->pc = 0x2AD7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD7C8u;
    // 0x2ad7cc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2AD7C8u, 0x2AD7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD7D0u;
label_2ad7d0:
    // 0x2ad7d0: 0xc62d0020  lwc1        $f13, 0x20($s1)
    ctx->pc = 0x2ad7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ad7d4: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2AD7D4u;
    SET_GPR_U32(ctx, 31, 0x2AD7DCu);
    ctx->pc = 0x2AD7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD7D4u;
    // 0x2ad7d8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2AD7D4u, 0x2AD7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD7DCu;
label_2ad7dc:
    // 0x2ad7dc: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2ad7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2ad7e0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2ad7e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2ad7e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ad7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad7e8: 0x0  nop
    ctx->pc = 0x2ad7e8u;
    // NOP
    // 0x2ad7ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad7ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad7f0: 0x0  nop
    ctx->pc = 0x2ad7f0u;
    // NOP
    // 0x2ad7f4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2AD7F4u;
    {
        const bool branch_taken_0x2ad7f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ad7f4) {
            ctx->pc = 0x2AD848u;
            goto label_2ad848;
        }
    }
    ctx->pc = 0x2AD7FCu;
    // 0x2ad7fc: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2AD7FCu;
    SET_GPR_U32(ctx, 31, 0x2AD804u);
    ctx->pc = 0x2AD800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD7FCu;
    // 0x2ad800: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AD7FCu, 0x2AD804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD804u;
label_2ad804:
    // 0x2ad804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ad804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad808: 0x120000a2  beqz        $s0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2AD808u;
    {
        const bool branch_taken_0x2ad808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD808u;
        // 0x2ad80c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad808) {
            ctx->pc = 0x2ADA94u;
            goto label_2ada94;
        }
    }
    ctx->pc = 0x2AD810u;
    // 0x2ad810: 0xc6340020  lwc1        $f20, 0x20($s1)
    ctx->pc = 0x2ad810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad814: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2ad814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2ad818: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2ad818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2ad81c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad820: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2AD820u;
    SET_GPR_U32(ctx, 31, 0x2AD828u);
    ctx->pc = 0x2AD824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD820u;
    // 0x2ad824: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2AD820u, 0x2AD828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD828u;
label_2ad828:
    // 0x2ad828: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ad828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad82c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad830: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad830u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ad834: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2ad834u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2ad838: 0xc0bf70a  jal         func_2FDC28
    ctx->pc = 0x2AD838u;
    SET_GPR_U32(ctx, 31, 0x2AD840u);
    ctx->pc = 0x2AD83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD838u;
    // 0x2ad83c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2AD838u, 0x2AD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD840u;
label_2ad840:
    // 0x2ad840: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2AD840u;
    {
        const bool branch_taken_0x2ad840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD840u;
        // 0x2ad844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad840) {
            ctx->pc = 0x2ADA98u;
            goto label_2ada98;
        }
    }
    ctx->pc = 0x2AD848u;
label_2ad848:
    // 0x2ad848: 0xc0ab560  jal         func_2AD580
    ctx->pc = 0x2AD848u;
    SET_GPR_U32(ctx, 31, 0x2AD850u);
    ctx->pc = 0x2AD84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD848u;
    // 0x2ad84c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD580u, 0x2AD848u, 0x2AD850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD850u;
label_2ad850:
    // 0x2ad850: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x2AD850u;
    {
        const bool branch_taken_0x2ad850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD850u;
        // 0x2ad854: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad850) {
            ctx->pc = 0x2ADA94u;
            goto label_2ada94;
        }
    }
    ctx->pc = 0x2AD858u;
    // 0x2ad858: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2ad858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2ad85c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2ad85cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad860: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2AD860u;
    SET_GPR_U32(ctx, 31, 0x2AD868u);
    ctx->pc = 0x2AD864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD860u;
    // 0x2ad864: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AD860u, 0x2AD868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD868u;
label_2ad868:
    // 0x2ad868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad86c: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2AD86Cu;
    SET_GPR_U32(ctx, 31, 0x2AD874u);
    ctx->pc = 0x2AD870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD86Cu;
    // 0x2ad870: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2AD86Cu, 0x2AD874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD874u;
label_2ad874:
    // 0x2ad874: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ad874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad878: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD878u;
    {
        const bool branch_taken_0x2ad878 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad878) {
            ctx->pc = 0x2AD87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD878u;
            // 0x2ad87c: 0x86640002  lh          $a0, 0x2($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD890u;
            goto label_2ad890;
        }
    }
    ctx->pc = 0x2AD880u;
    // 0x2ad880: 0xc0ab58c  jal         func_2AD630
    ctx->pc = 0x2AD880u;
    SET_GPR_U32(ctx, 31, 0x2AD888u);
    ctx->pc = 0x2AD884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD880u;
    // 0x2ad884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD630u, 0x2AD880u, 0x2AD888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD888u;
label_2ad888:
    // 0x2ad888: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x2AD888u;
    {
        const bool branch_taken_0x2ad888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD888u;
        // 0x2ad88c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad888) {
            ctx->pc = 0x2ADA98u;
            goto label_2ada98;
        }
    }
    ctx->pc = 0x2AD890u;
label_2ad890:
    // 0x2ad890: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2ad890u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2ad894: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ad894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ad898: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ad898u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2ad89c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2ad89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2ad8a0: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2AD8A0u;
    SET_GPR_U32(ctx, 31, 0x2AD8A8u);
    ctx->pc = 0x2AD8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD8A0u;
    // 0x2ad8a4: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2AD8A0u, 0x2AD8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD8A8u;
label_2ad8a8:
    // 0x2ad8a8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2ad8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad8ac: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ad8acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ad8b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad8b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad8b4: 0x0  nop
    ctx->pc = 0x2ad8b4u;
    // NOP
    // 0x2ad8b8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD8B8u;
    {
        const bool branch_taken_0x2ad8b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD8B8u;
        // 0x2ad8bc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad8b8) {
            ctx->pc = 0x2AD8D4u;
            goto label_2ad8d4;
        }
    }
    ctx->pc = 0x2AD8C0u;
    // 0x2ad8c0: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2AD8C0u;
    SET_GPR_U32(ctx, 31, 0x2AD8C8u);
    ctx->pc = 0x2AD8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD8C0u;
    // 0x2ad8c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2AD8C0u, 0x2AD8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD8C8u;
label_2ad8c8:
    // 0x2ad8c8: 0x54550006  bnel        $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD8C8u;
    {
        const bool branch_taken_0x2ad8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2ad8c8) {
            ctx->pc = 0x2AD8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD8C8u;
            // 0x2ad8cc: 0x9222002c  lbu         $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD8E4u;
            goto label_2ad8e4;
        }
    }
    ctx->pc = 0x2AD8D0u;
    // 0x2ad8d0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2ad8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2ad8d4:
    // 0x2ad8d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ad8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8d8: 0x8c83bd30  lw          $v1, -0x42D0($a0)
    ctx->pc = 0x2ad8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
    // 0x2ad8dc: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2AD8DCu;
    {
        const bool branch_taken_0x2ad8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD8DCu;
        // 0x2ad8e0: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad8dc) {
            ctx->pc = 0x2ADA98u;
            goto label_2ada98;
        }
    }
    ctx->pc = 0x2AD8E4u;
label_2ad8e4:
    // 0x2ad8e4: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x2AD8E4u;
    {
        const bool branch_taken_0x2ad8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad8e4) {
            ctx->pc = 0x2AD8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD8E4u;
            // 0x2ad8e8: 0x86650002  lh          $a1, 0x2($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD9CCu;
            goto label_2ad9cc;
        }
    }
    ctx->pc = 0x2AD8ECu;
    // 0x2ad8ec: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2ad8ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2ad8f0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2ad8f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2ad8f4: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x2ad8f4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ad8f8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD8F8u;
    {
        const bool branch_taken_0x2ad8f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD8F8u;
        // 0x2ad8fc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad8f8) {
            ctx->pc = 0x2AD918u;
            goto label_2ad918;
        }
    }
    ctx->pc = 0x2AD900u;
    // 0x2ad900: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ad900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ad904: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2AD904u;
    SET_GPR_U32(ctx, 31, 0x2AD90Cu);
    ctx->pc = 0x2AD908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD904u;
    // 0x2ad908: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2AD904u, 0x2AD90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD90Cu;
label_2ad90c:
    // 0x2ad90c: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2ad90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x2ad910: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2AD910u;
    {
        const bool branch_taken_0x2ad910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD910u;
        // 0x2ad914: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad910) {
            ctx->pc = 0x2AD9C0u;
            goto label_2ad9c0;
        }
    }
    ctx->pc = 0x2AD918u;
label_2ad918:
    // 0x2ad918: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2AD918u;
    SET_GPR_U32(ctx, 31, 0x2AD920u);
    ctx->pc = 0x2AD91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD918u;
    // 0x2ad91c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AD918u, 0x2AD920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD920u;
label_2ad920:
    // 0x2ad920: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AD920u;
    {
        const bool branch_taken_0x2ad920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD920u;
        // 0x2ad924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad920) {
            ctx->pc = 0x2AD950u;
            goto label_2ad950;
        }
    }
    ctx->pc = 0x2AD928u;
    // 0x2ad928: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2ad928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2ad92c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ad92cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ad930: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ad930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad934: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ad934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad938: 0x2406025c  addiu       $a2, $zero, 0x25C
    ctx->pc = 0x2ad938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x2ad93c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ad93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad940: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ad940u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ad944: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ad944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad948: 0xc0be968  jal         func_2FA5A0
    ctx->pc = 0x2AD948u;
    SET_GPR_U32(ctx, 31, 0x2AD950u);
    ctx->pc = 0x2AD94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD948u;
    // 0x2ad94c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2AD948u, 0x2AD950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD950u;
label_2ad950:
    // 0x2ad950: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ad950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad954: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ad954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ad958: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ad958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2ad95c: 0x240300ad  addiu       $v1, $zero, 0xAD
    ctx->pc = 0x2ad95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x2ad960: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ad960u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2ad964: 0x240500ae  addiu       $a1, $zero, 0xAE
    ctx->pc = 0x2ad964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x2ad968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad96c: 0x73280a  movz        $a1, $v1, $s3
    ctx->pc = 0x2ad96cu;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2ad970: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ad970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad974: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ad978: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ad978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad97c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2ad97cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad980: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2AD980u;
    SET_GPR_U32(ctx, 31, 0x2AD988u);
    ctx->pc = 0x2AD984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD980u;
    // 0x2ad984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AD980u, 0x2AD988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD988u;
label_2ad988:
    // 0x2ad988: 0xc042f60  jal         func_10BD80
    ctx->pc = 0x2AD988u;
    SET_GPR_U32(ctx, 31, 0x2AD990u);
    ctx->pc = 0x2AD98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD988u;
    // 0x2ad98c: 0x26440418  addiu       $a0, $s2, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD80u, 0x2AD988u, 0x2AD990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD990u;
label_2ad990:
    // 0x2ad990: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2ad990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad994: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2ad994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2ad998: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ad998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad99c: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x2AD99Cu;
    SET_GPR_U32(ctx, 31, 0x2AD9A4u);
    ctx->pc = 0x2AD9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD99Cu;
    // 0x2ad9a0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x2AD99Cu, 0x2AD9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD9A4u;
label_2ad9a4:
    // 0x2ad9a4: 0x26440284  addiu       $a0, $s2, 0x284
    ctx->pc = 0x2ad9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
    // 0x2ad9a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ad9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad9ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad9acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ad9b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ad9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad9b4: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2AD9B4u;
    SET_GPR_U32(ctx, 31, 0x2AD9BCu);
    ctx->pc = 0x2AD9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD9B4u;
    // 0x2ad9b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2AD9B4u, 0x2AD9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD9BCu;
label_2ad9bc:
    // 0x2ad9bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ad9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad9c0:
    // 0x2ad9c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ad9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad9c4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2AD9C4u;
    {
        const bool branch_taken_0x2ad9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD9C4u;
        // 0x2ad9c8: 0xa223002c  sb          $v1, 0x2C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad9c4) {
            ctx->pc = 0x2ADA98u;
            goto label_2ada98;
        }
    }
    ctx->pc = 0x2AD9CCu;
label_2ad9cc:
    // 0x2ad9cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ad9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2ad9d0: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x2ad9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ad9d4: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2ad9d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2ad9d8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2ad9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x2ad9dc: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2ad9dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x2ad9e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ad9e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad9e4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ad9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2ad9e8: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2ad9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2ad9ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ad9ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ad9f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad9f4: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2ad9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x2ad9f8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2ad9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x2ad9fc: 0x26520284  addiu       $s2, $s2, 0x284
    ctx->pc = 0x2ad9fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
    // 0x2ada00: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x2ada00u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ada04: 0xc1067b8  jal         func_419EE0
    ctx->pc = 0x2ADA04u;
    SET_GPR_U32(ctx, 31, 0x2ADA0Cu);
    ctx->pc = 0x2ADA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADA04u;
    // 0x2ada08: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2ADA04u, 0x2ADA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADA0Cu;
label_2ada0c:
    // 0x2ada0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ada0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada10: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2ADA10u;
    {
        const bool branch_taken_0x2ada10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA10u;
        // 0x2ada14: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada10) {
            ctx->pc = 0x2ADA70u;
            goto label_2ada70;
        }
    }
    ctx->pc = 0x2ADA18u;
    // 0x2ada18: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2ada18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2ada1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ada1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ada20: 0x0  nop
    ctx->pc = 0x2ada20u;
    // NOP
    // 0x2ada24: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2ADA24u;
    {
        const bool branch_taken_0x2ada24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ADA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA24u;
        // 0x2ada28: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada24) {
            ctx->pc = 0x2ADA70u;
            goto label_2ada70;
        }
    }
    ctx->pc = 0x2ADA2Cu;
    // 0x2ada2c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ada2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ada30: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ADA30u;
    {
        const bool branch_taken_0x2ada30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ada30) {
            ctx->pc = 0x2ADA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADA30u;
            // 0x2ada34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADA38u;
            goto label_2ada38;
        }
    }
    ctx->pc = 0x2ADA38u;
label_2ada38:
    // 0x2ada38: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2ada38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2ada3c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2ada3cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2ada40: 0x2010  mfhi        $a0
    ctx->pc = 0x2ada40u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2ada44: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ADA44u;
    {
        const bool branch_taken_0x2ada44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA44u;
        // 0x2ada48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada44) {
            ctx->pc = 0x2ADA98u;
            goto label_2ada98;
        }
    }
    ctx->pc = 0x2ADA4Cu;
    // 0x2ada4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ada4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ada50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ada50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ada54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ada54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ada58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada5c: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2ada5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x2ada60: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2ADA60u;
    SET_GPR_U32(ctx, 31, 0x2ADA68u);
    ctx->pc = 0x2ADA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADA60u;
    // 0x2ada64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2ADA60u, 0x2ADA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADA68u;
label_2ada68:
    // 0x2ada68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2ADA68u;
    {
        const bool branch_taken_0x2ada68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA68u;
        // 0x2ada6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada68) {
            ctx->pc = 0x2ADA98u;
            goto label_2ada98;
        }
    }
    ctx->pc = 0x2ADA70u;
label_2ada70:
    // 0x2ada70: 0xc0a681e  jal         func_29A078
    ctx->pc = 0x2ADA70u;
    SET_GPR_U32(ctx, 31, 0x2ADA78u);
    ctx->pc = 0x2ADA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADA70u;
    // 0x2ada74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A078u, 0x2ADA70u, 0x2ADA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADA78u;
label_2ada78:
    // 0x2ada78: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ADA78u;
    {
        const bool branch_taken_0x2ada78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2ADA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA78u;
        // 0x2ada7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada78) {
            ctx->pc = 0x2ADA98u;
            goto label_2ada98;
        }
    }
    ctx->pc = 0x2ADA80u;
    // 0x2ada80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ada80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ada84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ada84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ada88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ada88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada8c: 0xc0a67aa  jal         func_299EA8
    ctx->pc = 0x2ADA8Cu;
    SET_GPR_U32(ctx, 31, 0x2ADA94u);
    ctx->pc = 0x2ADA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADA8Cu;
    // 0x2ada90: 0x240505dc  addiu       $a1, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EA8u, 0x2ADA8Cu, 0x2ADA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADA94u;
label_2ada94:
    // 0x2ada94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ada94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ada98:
    // 0x2ada98: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2ada98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ada9c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2ada9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2adaa0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2adaa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2adaa4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2adaa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2adaa8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2adaa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2adaac: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2adaacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2adab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2adab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2adab4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2adab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2adab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAB8u;
        // 0x2adabc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADAC0u;
}
