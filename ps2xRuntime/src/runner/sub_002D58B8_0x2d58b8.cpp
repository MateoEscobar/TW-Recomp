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

// Function: sub_002D58B8
// Address: 0x2d58b8 - 0x2d5c28
void sub_002D58B8_0x2d58b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D58B8_0x2d58b8");
#endif

    switch (ctx->pc) {
        case 0x2d58f0u: goto label_2d58f0;
        case 0x2d5910u: goto label_2d5910;
        case 0x2d5924u: goto label_2d5924;
        case 0x2d5930u: goto label_2d5930;
        case 0x2d5958u: goto label_2d5958;
        case 0x2d5998u: goto label_2d5998;
        case 0x2d59acu: goto label_2d59ac;
        case 0x2d59f0u: goto label_2d59f0;
        case 0x2d5a00u: goto label_2d5a00;
        case 0x2d5a20u: goto label_2d5a20;
        case 0x2d5a30u: goto label_2d5a30;
        case 0x2d5a4cu: goto label_2d5a4c;
        case 0x2d5a54u: goto label_2d5a54;
        case 0x2d5a68u: goto label_2d5a68;
        case 0x2d5a74u: goto label_2d5a74;
        case 0x2d5a80u: goto label_2d5a80;
        case 0x2d5abcu: goto label_2d5abc;
        case 0x2d5ad0u: goto label_2d5ad0;
        case 0x2d5ae8u: goto label_2d5ae8;
        case 0x2d5af8u: goto label_2d5af8;
        case 0x2d5b1cu: goto label_2d5b1c;
        case 0x2d5b50u: goto label_2d5b50;
        case 0x2d5b84u: goto label_2d5b84;
        case 0x2d5b8cu: goto label_2d5b8c;
        case 0x2d5b9cu: goto label_2d5b9c;
        case 0x2d5bb0u: goto label_2d5bb0;
        case 0x2d5bc0u: goto label_2d5bc0;
        case 0x2d5be4u: goto label_2d5be4;
        default: break;
    }

    ctx->pc = 0x2d58b8u;

    // 0x2d58b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d58b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d58bc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2d58bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2d58c0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2d58c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2d58c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d58c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58c8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2d58c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2d58cc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2d58ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2d58d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2d58d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2d58d4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2d58d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2d58d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d58d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d58dc: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2d58dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2d58e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d58e4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2d58e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d58e8: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2D58E8u;
    SET_GPR_U32(ctx, 31, 0x2D58F0u);
    ctx->pc = 0x2D58ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D58E8u;
    // 0x2d58ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2D58E8u, 0x2D58F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D58F0u;
label_2d58f0:
    // 0x2d58f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d58f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d58f4: 0x104300c1  beq         $v0, $v1, . + 4 + (0xC1 << 2)
    ctx->pc = 0x2D58F4u;
    {
        const bool branch_taken_0x2d58f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D58F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D58F4u;
        // 0x2d58f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d58f4) {
            ctx->pc = 0x2D5BFCu;
            goto label_2d5bfc;
        }
    }
    ctx->pc = 0x2D58FCu;
    // 0x2d58fc: 0x9222001d  lbu         $v0, 0x1D($s1)
    ctx->pc = 0x2d58fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x2d5900: 0x104300be  beq         $v0, $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x2D5900u;
    {
        const bool branch_taken_0x2d5900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D5904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5900u;
        // 0x2d5904: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5900) {
            ctx->pc = 0x2D5BFCu;
            goto label_2d5bfc;
        }
    }
    ctx->pc = 0x2D5908u;
    // 0x2d5908: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2D5908u;
    SET_GPR_U32(ctx, 31, 0x2D5910u);
    ctx->pc = 0x2D590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5908u;
    // 0x2d590c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2D5908u, 0x2D5910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5910u;
label_2d5910:
    // 0x2d5910: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2d5910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d5914: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d5914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d5918: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2d5918u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d591c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2D591Cu;
    SET_GPR_U32(ctx, 31, 0x2D5924u);
    ctx->pc = 0x2D5920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D591Cu;
    // 0x2d5920: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D591Cu, 0x2D5924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5924u;
label_2d5924:
    // 0x2d5924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5928: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2D5928u;
    SET_GPR_U32(ctx, 31, 0x2D5930u);
    ctx->pc = 0x2D592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5928u;
    // 0x2d592c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2D5928u, 0x2D5930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5930u;
label_2d5930:
    // 0x2d5930: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d5930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5934: 0x1260003a  beqz        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D5934u;
    {
        const bool branch_taken_0x2d5934 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5934u;
        // 0x2d5938: 0x26440284  addiu       $a0, $s2, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5934) {
            ctx->pc = 0x2D5A20u;
            goto label_2d5a20;
        }
    }
    ctx->pc = 0x2D593Cu;
    // 0x2d593c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d593cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d5940: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d5940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d5944: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d5944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5948: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2d5948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d594c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d594cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5950: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2D5950u;
    SET_GPR_U32(ctx, 31, 0x2D5958u);
    ctx->pc = 0x2D5954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5950u;
    // 0x2d5954: 0x26500090  addiu       $s0, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2D5950u, 0x2D5958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5958u;
label_2d5958:
    // 0x2d5958: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2d5958u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d595c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2d595cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2d5960: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2d5960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2d5964: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2d5964u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d5968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d596c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2d596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x2d5970: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2d5970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2d5974: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d5974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d5978: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2d5978u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d597c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2d597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2d5980: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x2d5980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x2d5984: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2d5984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2d5988: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d5988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d598c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2d598cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5990: 0xc08a10a  jal         func_228428
    ctx->pc = 0x2D5990u;
    SET_GPR_U32(ctx, 31, 0x2D5998u);
    ctx->pc = 0x2D5994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5990u;
    // 0x2d5994: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x2D5990u, 0x2D5998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5998u;
label_2d5998:
    // 0x2d5998: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D5998u;
    {
        const bool branch_taken_0x2d5998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5998) {
            ctx->pc = 0x2D599Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5998u;
            // 0x2d599c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D59DCu;
            goto label_2d59dc;
        }
    }
    ctx->pc = 0x2D59A0u;
    // 0x2d59a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d59a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d59a4: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2D59A4u;
    SET_GPR_U32(ctx, 31, 0x2D59ACu);
    ctx->pc = 0x2D59A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D59A4u;
    // 0x2d59a8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D59A4u, 0x2D59ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D59ACu;
label_2d59ac:
    // 0x2d59ac: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2d59acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d59b0: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2d59b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2d59b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d59b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d59b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d59b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d59bc: 0x0  nop
    ctx->pc = 0x2d59bcu;
    // NOP
    // 0x2d59c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d59c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d59c4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2d59c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d59c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d59c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d59cc: 0x0  nop
    ctx->pc = 0x2d59ccu;
    // NOP
    // 0x2d59d0: 0x4501008a  bc1t        . + 4 + (0x8A << 2)
    ctx->pc = 0x2D59D0u;
    {
        const bool branch_taken_0x2d59d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59D0u;
        // 0x2d59d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d59d0) {
            ctx->pc = 0x2D5BFCu;
            goto label_2d5bfc;
        }
    }
    ctx->pc = 0x2D59D8u;
    // 0x2d59d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d59d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d59dc:
    // 0x2d59dc: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d59dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2d59e0: 0x1c400085  bgtz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x2D59E0u;
    {
        const bool branch_taken_0x2d59e0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59E0u;
        // 0x2d59e4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d59e0) {
            ctx->pc = 0x2D5BF8u;
            goto label_2d5bf8;
        }
    }
    ctx->pc = 0x2D59E8u;
    // 0x2d59e8: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2D59E8u;
    SET_GPR_U32(ctx, 31, 0x2D59F0u);
    ctx->pc = 0x2D59ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D59E8u;
    // 0x2d59ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2D59E8u, 0x2D59F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D59F0u;
label_2d59f0:
    // 0x2d59f0: 0x8e420178  lw          $v0, 0x178($s2)
    ctx->pc = 0x2d59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
    // 0x2d59f4: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x2d59f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2d59f8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x2D59F8u;
    SET_GPR_U32(ctx, 31, 0x2D5A00u);
    ctx->pc = 0x2D59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D59F8u;
    // 0x2d59fc: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2D59F8u, 0x2D5A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A00u;
label_2d5a00:
    // 0x2d5a00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d5a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d5a04: 0x1050007d  beq         $v0, $s0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2D5A04u;
    {
        const bool branch_taken_0x2d5a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A04u;
        // 0x2d5a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a04) {
            ctx->pc = 0x2D5BFCu;
            goto label_2d5bfc;
        }
    }
    ctx->pc = 0x2D5A0Cu;
    // 0x2d5a0c: 0x9222001e  lbu         $v0, 0x1E($s1)
    ctx->pc = 0x2d5a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x2d5a10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5A10u;
    {
        const bool branch_taken_0x2d5a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a10) {
            ctx->pc = 0x2D5A28u;
            goto label_2d5a28;
        }
    }
    ctx->pc = 0x2D5A18u;
    // 0x2d5a18: 0xc0b55e6  jal         func_2D5798
    ctx->pc = 0x2D5A18u;
    SET_GPR_U32(ctx, 31, 0x2D5A20u);
    ctx->pc = 0x2D5A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A18u;
    // 0x2d5a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5798u, 0x2D5A18u, 0x2D5A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A20u;
label_2d5a20:
    // 0x2d5a20: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2D5A20u;
    {
        const bool branch_taken_0x2d5a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A20u;
        // 0x2d5a24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a20) {
            ctx->pc = 0x2D5BFCu;
            goto label_2d5bfc;
        }
    }
    ctx->pc = 0x2D5A28u;
label_2d5a28:
    // 0x2d5a28: 0xc0b559a  jal         func_2D5668
    ctx->pc = 0x2D5A28u;
    SET_GPR_U32(ctx, 31, 0x2D5A30u);
    ctx->pc = 0x2D5A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A28u;
    // 0x2d5a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5668u, 0x2D5A28u, 0x2D5A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A30u;
label_2d5a30:
    // 0x2d5a30: 0x10500071  beq         $v0, $s0, . + 4 + (0x71 << 2)
    ctx->pc = 0x2D5A30u;
    {
        const bool branch_taken_0x2d5a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A30u;
        // 0x2d5a34: 0x26a24b00  addiu       $v0, $s5, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a30) {
            ctx->pc = 0x2D5BF8u;
            goto label_2d5bf8;
        }
    }
    ctx->pc = 0x2D5A38u;
    // 0x2d5a38: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x2d5a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2d5a3c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d5a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d5a40: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d5a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d5a44: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2D5A44u;
    SET_GPR_U32(ctx, 31, 0x2D5A4Cu);
    ctx->pc = 0x2D5A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A44u;
    // 0x2d5a48: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2D5A44u, 0x2D5A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A4Cu;
label_2d5a4c:
    // 0x2d5a4c: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2D5A4Cu;
    SET_GPR_U32(ctx, 31, 0x2D5A54u);
    ctx->pc = 0x2D5A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A4Cu;
    // 0x2d5a50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2D5A4Cu, 0x2D5A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A54u;
label_2d5a54:
    // 0x2d5a54: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2d5a54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5a58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d5a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d5a5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d5a60: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x2D5A60u;
    SET_GPR_U32(ctx, 31, 0x2D5A68u);
    ctx->pc = 0x2D5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A60u;
    // 0x2d5a64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2D5A60u, 0x2D5A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A68u;
label_2d5a68:
    // 0x2d5a68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d5a68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d5a6c: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2D5A6Cu;
    SET_GPR_U32(ctx, 31, 0x2D5A74u);
    ctx->pc = 0x2D5A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A6Cu;
    // 0x2d5a70: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2D5A6Cu, 0x2D5A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A74u;
label_2d5a74:
    // 0x2d5a74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d5a74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d5a78: 0xc088e88  jal         func_223A20
    ctx->pc = 0x2D5A78u;
    SET_GPR_U32(ctx, 31, 0x2D5A80u);
    ctx->pc = 0x2D5A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A78u;
    // 0x2d5a7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2D5A78u, 0x2D5A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A80u;
label_2d5a80:
    // 0x2d5a80: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x2d5a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x2d5a84: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2d5a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2d5a88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d5a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5a8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5A8Cu;
    {
        const bool branch_taken_0x2d5a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a8c) {
            ctx->pc = 0x2D5AA0u;
            goto label_2d5aa0;
        }
    }
    ctx->pc = 0x2D5A94u;
    // 0x2d5a94: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2d5a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2d5a98: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2d5a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2d5a9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d5a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d5aa0:
    // 0x2d5aa0: 0x0  nop
    ctx->pc = 0x2d5aa0u;
    // NOP
    // 0x2d5aa4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2d5aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5aa8: 0x0  nop
    ctx->pc = 0x2d5aa8u;
    // NOP
    // 0x2d5aac: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2D5AACu;
    {
        const bool branch_taken_0x2d5aac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AACu;
        // 0x2d5ab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5aac) {
            ctx->pc = 0x2D5AF0u;
            goto label_2d5af0;
        }
    }
    ctx->pc = 0x2D5AB4u;
    // 0x2d5ab4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D5AB4u;
    SET_GPR_U32(ctx, 31, 0x2D5ABCu);
    ctx->pc = 0x2D5AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5AB4u;
    // 0x2d5ab8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D5AB4u, 0x2D5ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5ABCu;
label_2d5abc:
    // 0x2d5abc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d5abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ac0: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2D5AC0u;
    {
        const bool branch_taken_0x2d5ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AC0u;
        // 0x2d5ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ac0) {
            ctx->pc = 0x2D5BFCu;
            goto label_2d5bfc;
        }
    }
    ctx->pc = 0x2D5AC8u;
    // 0x2d5ac8: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2D5AC8u;
    SET_GPR_U32(ctx, 31, 0x2D5AD0u);
    ctx->pc = 0x2D5ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5AC8u;
    // 0x2d5acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2D5AC8u, 0x2D5AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5AD0u;
label_2d5ad0:
    // 0x2d5ad0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d5ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d5ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ad8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d5ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5adc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d5adcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d5ae0: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2D5AE0u;
    SET_GPR_U32(ctx, 31, 0x2D5AE8u);
    ctx->pc = 0x2D5AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5AE0u;
    // 0x2d5ae4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2D5AE0u, 0x2D5AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5AE8u;
label_2d5ae8:
    // 0x2d5ae8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2D5AE8u;
    {
        const bool branch_taken_0x2d5ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AE8u;
        // 0x2d5aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ae8) {
            ctx->pc = 0x2D5BFCu;
            goto label_2d5bfc;
        }
    }
    ctx->pc = 0x2D5AF0u;
label_2d5af0:
    // 0x2d5af0: 0xc088fa8  jal         func_223EA0
    ctx->pc = 0x2D5AF0u;
    SET_GPR_U32(ctx, 31, 0x2D5AF8u);
    ctx->pc = 0x2D5AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5AF0u;
    // 0x2d5af4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2D5AF0u, 0x2D5AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5AF8u;
label_2d5af8:
    // 0x2d5af8: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D5AF8u;
    {
        const bool branch_taken_0x2d5af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AF8u;
        // 0x2d5afc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5af8) {
            ctx->pc = 0x2D5B24u;
            goto label_2d5b24;
        }
    }
    ctx->pc = 0x2D5B00u;
    // 0x2d5b00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d5b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d5b04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d5b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b08: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d5b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d5b0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d5b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d5b10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b14: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x2D5B14u;
    SET_GPR_U32(ctx, 31, 0x2D5B1Cu);
    ctx->pc = 0x2D5B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5B14u;
    // 0x2d5b18: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2D5B14u, 0x2D5B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B1Cu;
label_2d5b1c:
    // 0x2d5b1c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2D5B1Cu;
    {
        const bool branch_taken_0x2d5b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B1Cu;
        // 0x2d5b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b1c) {
            ctx->pc = 0x2D5BFCu;
            goto label_2d5bfc;
        }
    }
    ctx->pc = 0x2D5B24u;
label_2d5b24:
    // 0x2d5b24: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2d5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d5b28: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2d5b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2d5b2c: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x2d5b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2d5b30: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x2d5b30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d5b34: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D5B34u;
    {
        const bool branch_taken_0x2d5b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B34u;
        // 0x2d5b38: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b34) {
            ctx->pc = 0x2D5BF8u;
            goto label_2d5bf8;
        }
    }
    ctx->pc = 0x2D5B3Cu;
    // 0x2d5b3c: 0x24050bb8  addiu       $a1, $zero, 0xBB8
    ctx->pc = 0x2d5b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x2d5b40: 0x2453b880  addiu       $s3, $v0, -0x4780
    ctx->pc = 0x2d5b40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
    // 0x2d5b44: 0x24060dac  addiu       $a2, $zero, 0xDAC
    ctx->pc = 0x2d5b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
    // 0x2d5b48: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2D5B48u;
    SET_GPR_U32(ctx, 31, 0x2D5B50u);
    ctx->pc = 0x2D5B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5B48u;
    // 0x2d5b4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2D5B48u, 0x2D5B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B50u;
label_2d5b50:
    // 0x2d5b50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d5b54: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2d5b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2d5b58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d5b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d5b5c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2d5b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x2d5b60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d5b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d5b68: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2d5b68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5b6c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2d5b6cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2d5b70: 0x240500af  addiu       $a1, $zero, 0xAF
    ctx->pc = 0x2d5b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x2d5b74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d5b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5b7c: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2D5B7Cu;
    SET_GPR_U32(ctx, 31, 0x2D5B84u);
    ctx->pc = 0x2D5B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5B7Cu;
    // 0x2d5b80: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D5B7Cu, 0x2D5B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B84u;
label_2d5b84:
    // 0x2d5b84: 0xc089000  jal         func_224000
    ctx->pc = 0x2D5B84u;
    SET_GPR_U32(ctx, 31, 0x2D5B8Cu);
    ctx->pc = 0x2D5B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5B84u;
    // 0x2d5b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2D5B84u, 0x2D5B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B8Cu;
label_2d5b8c:
    // 0x2d5b8c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D5B8Cu;
    {
        const bool branch_taken_0x2d5b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5b8c) {
            ctx->pc = 0x2D5B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5B8Cu;
            // 0x2d5b90: 0x9223001e  lbu         $v1, 0x1E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5BE8u;
            goto label_2d5be8;
        }
    }
    ctx->pc = 0x2D5B94u;
    // 0x2d5b94: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D5B94u;
    SET_GPR_U32(ctx, 31, 0x2D5B9Cu);
    ctx->pc = 0x2D5B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5B94u;
    // 0x2d5b98: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D5B94u, 0x2D5B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B9Cu;
label_2d5b9c:
    // 0x2d5b9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d5b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ba0: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D5BA0u;
    {
        const bool branch_taken_0x2d5ba0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BA0u;
        // 0x2d5ba4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ba0) {
            ctx->pc = 0x2D5BE4u;
            goto label_2d5be4;
        }
    }
    ctx->pc = 0x2D5BA8u;
    // 0x2d5ba8: 0xc0cd526  jal         func_335498
    ctx->pc = 0x2D5BA8u;
    SET_GPR_U32(ctx, 31, 0x2D5BB0u);
    ctx->pc = 0x2D5BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5BA8u;
    // 0x2d5bac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x2D5BA8u, 0x2D5BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5BB0u;
label_2d5bb0:
    // 0x2d5bb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d5bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d5bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bb8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2D5BB8u;
    SET_GPR_U32(ctx, 31, 0x2D5BC0u);
    ctx->pc = 0x2D5BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5BB8u;
    // 0x2d5bbc: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D5BB8u, 0x2D5BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5BC0u;
label_2d5bc0:
    // 0x2d5bc0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d5bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d5bc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d5bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bc8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d5bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2d5bcc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d5bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2d5bd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d5bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d5bd4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d5bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bd8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2d5bd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bdc: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x2D5BDCu;
    SET_GPR_U32(ctx, 31, 0x2D5BE4u);
    ctx->pc = 0x2D5BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5BDCu;
    // 0x2d5be0: 0x24060253  addiu       $a2, $zero, 0x253 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2D5BDCu, 0x2D5BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5BE4u;
label_2d5be4:
    // 0x2d5be4: 0x9223001e  lbu         $v1, 0x1E($s1)
    ctx->pc = 0x2d5be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
label_2d5be8:
    // 0x2d5be8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d5becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5bf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5BF0u;
    {
        const bool branch_taken_0x2d5bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BF0u;
        // 0x2d5bf4: 0xa223001e  sb          $v1, 0x1E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5bf0) {
            ctx->pc = 0x2D5BFCu;
            goto label_2d5bfc;
        }
    }
    ctx->pc = 0x2D5BF8u;
label_2d5bf8:
    // 0x2d5bf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5bfc:
    // 0x2d5bfc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2d5bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d5c00: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2d5c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d5c04: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2d5c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d5c08: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2d5c08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d5c0c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2d5c0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d5c10: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2d5c10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5c14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d5c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5c18: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2d5c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d5c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C1Cu;
        // 0x2d5c20: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5C24u;
    // 0x2d5c24: 0x0  nop
    ctx->pc = 0x2d5c24u;
    // NOP
    ctx->pc = 0x2d5c28u;
}
