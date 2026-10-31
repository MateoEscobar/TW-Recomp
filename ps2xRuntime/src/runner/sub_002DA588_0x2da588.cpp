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

// Function: sub_002DA588
// Address: 0x2da588 - 0x2da810
void sub_002DA588_0x2da588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA588_0x2da588");
#endif

    switch (ctx->pc) {
        case 0x2da5d0u: goto label_2da5d0;
        case 0x2da5d8u: goto label_2da5d8;
        case 0x2da5ecu: goto label_2da5ec;
        case 0x2da618u: goto label_2da618;
        case 0x2da650u: goto label_2da650;
        case 0x2da670u: goto label_2da670;
        case 0x2da6a8u: goto label_2da6a8;
        case 0x2da6d8u: goto label_2da6d8;
        case 0x2da6e4u: goto label_2da6e4;
        case 0x2da6fcu: goto label_2da6fc;
        case 0x2da708u: goto label_2da708;
        case 0x2da730u: goto label_2da730;
        case 0x2da744u: goto label_2da744;
        case 0x2da75cu: goto label_2da75c;
        case 0x2da78cu: goto label_2da78c;
        case 0x2da7b0u: goto label_2da7b0;
        case 0x2da7dcu: goto label_2da7dc;
        default: break;
    }

    ctx->pc = 0x2da588u;

    // 0x2da588: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2da588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2da58c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2da58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2da590: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2da590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2da594: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2da594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2da598: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2da598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da59c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2da59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2da5a0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2da5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2da5a4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2da5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2da5a8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2da5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2da5ac: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2da5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2da5b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2da5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2da5b4: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2da5b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2da5b8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2da5b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2da5bc: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2da5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2da5c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2da5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2da5c4: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x2da5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2da5c8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DA5C8u;
    SET_GPR_U32(ctx, 31, 0x2DA5D0u);
    ctx->pc = 0x2DA5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA5C8u;
    // 0x2da5cc: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DA5C8u, 0x2DA5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5D0u;
label_2da5d0:
    // 0x2da5d0: 0xc105e98  jal         func_417A60
    ctx->pc = 0x2DA5D0u;
    SET_GPR_U32(ctx, 31, 0x2DA5D8u);
    ctx->pc = 0x2DA5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA5D0u;
    // 0x2da5d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2DA5D0u, 0x2DA5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5D8u;
label_2da5d8:
    // 0x2da5d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2da5d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da5dc: 0x12600080  beqz        $s3, . + 4 + (0x80 << 2)
    ctx->pc = 0x2DA5DCu;
    {
        const bool branch_taken_0x2da5dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5DCu;
        // 0x2da5e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da5dc) {
            ctx->pc = 0x2DA7E0u;
            goto label_2da7e0;
        }
    }
    ctx->pc = 0x2DA5E4u;
    // 0x2da5e4: 0xc08ce0c  jal         func_233830
    ctx->pc = 0x2DA5E4u;
    SET_GPR_U32(ctx, 31, 0x2DA5ECu);
    ctx->pc = 0x2DA5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA5E4u;
    // 0x2da5e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233830u, 0x2DA5E4u, 0x2DA5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5ECu;
label_2da5ec:
    // 0x2da5ec: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x2da5ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2da5f0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DA5F0u;
    {
        const bool branch_taken_0x2da5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da5f0) {
            ctx->pc = 0x2DA5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA5F0u;
            // 0x2da5f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA654u;
            goto label_2da654;
        }
    }
    ctx->pc = 0x2DA5F8u;
    // 0x2da5f8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2da5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2da5fc: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2da5fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2da600: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DA600u;
    {
        const bool branch_taken_0x2da600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA600u;
        // 0x2da604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da600) {
            ctx->pc = 0x2DA650u;
            goto label_2da650;
        }
    }
    ctx->pc = 0x2DA608u;
    // 0x2da608: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x2da608u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2da60c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2da60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2da610: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2DA610u;
    SET_GPR_U32(ctx, 31, 0x2DA618u);
    ctx->pc = 0x2DA614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA610u;
    // 0x2da614: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2DA610u, 0x2DA618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA618u;
label_2da618:
    // 0x2da618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2da618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da61c: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2DA61Cu;
    {
        const bool branch_taken_0x2da61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2da61c) {
            ctx->pc = 0x2DA620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA61Cu;
            // 0x2da620: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA654u;
            goto label_2da654;
        }
    }
    ctx->pc = 0x2DA624u;
    // 0x2da624: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2da624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2da628: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2da628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2da62c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2da62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2da630: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2da630u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2da634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da638: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x2da638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2da63c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2da63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da640: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2da640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da644: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2da644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da648: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2DA648u;
    SET_GPR_U32(ctx, 31, 0x2DA650u);
    ctx->pc = 0x2DA64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA648u;
    // 0x2da64c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2DA648u, 0x2DA650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA650u;
label_2da650:
    // 0x2da650: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2da650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2da654:
    // 0x2da654: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2da654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2da658: 0x1c400061  bgtz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2DA658u;
    {
        const bool branch_taken_0x2da658 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2DA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA658u;
        // 0x2da65c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da658) {
            ctx->pc = 0x2DA7E0u;
            goto label_2da7e0;
        }
    }
    ctx->pc = 0x2DA660u;
    // 0x2da660: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2da660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2da664: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2da664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2da668: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2DA668u;
    SET_GPR_U32(ctx, 31, 0x2DA670u);
    ctx->pc = 0x2DA66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA668u;
    // 0x2da66c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2DA668u, 0x2DA670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA670u;
label_2da670:
    // 0x2da670: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2da670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2da674: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2da674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2da678: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2da678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2da67c: 0xc634002c  lwc1        $f20, 0x2C($s1)
    ctx->pc = 0x2da67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2da680: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2da680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2da684: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da688: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2da688u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2da68c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2da68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da690: 0x84c20092  lh          $v0, 0x92($a2)
    ctx->pc = 0x2da690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x2da694: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2da694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2da698: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2da698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2da69c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2da69cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2da6a0: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2DA6A0u;
    SET_GPR_U32(ctx, 31, 0x2DA6A8u);
    ctx->pc = 0x2DA6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA6A0u;
    // 0x2da6a4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DA6A0u, 0x2DA6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA6A8u;
label_2da6a8:
    // 0x2da6a8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2da6a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da6ac: 0x0  nop
    ctx->pc = 0x2da6acu;
    // NOP
    // 0x2da6b0: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x2DA6B0u;
    {
        const bool branch_taken_0x2da6b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA6B0u;
        // 0x2da6b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da6b0) {
            ctx->pc = 0x2DA770u;
            goto label_2da770;
        }
    }
    ctx->pc = 0x2DA6B8u;
    // 0x2da6b8: 0x92230040  lbu         $v1, 0x40($s1)
    ctx->pc = 0x2da6b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2da6bc: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2DA6BCu;
    {
        const bool branch_taken_0x2da6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA6BCu;
        // 0x2da6c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da6bc) {
            ctx->pc = 0x2DA764u;
            goto label_2da764;
        }
    }
    ctx->pc = 0x2DA6C4u;
    // 0x2da6c4: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2da6c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x2da6c8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2da6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2da6cc: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2da6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2da6d0: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2DA6D0u;
    SET_GPR_U32(ctx, 31, 0x2DA6D8u);
    ctx->pc = 0x2DA6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA6D0u;
    // 0x2da6d4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2DA6D0u, 0x2DA6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA6D8u;
label_2da6d8:
    // 0x2da6d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2da6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da6dc: 0xc105896  jal         func_416258
    ctx->pc = 0x2DA6DCu;
    SET_GPR_U32(ctx, 31, 0x2DA6E4u);
    ctx->pc = 0x2DA6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA6DCu;
    // 0x2da6e0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x2DA6DCu, 0x2DA6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA6E4u;
label_2da6e4:
    // 0x2da6e4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2da6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2da6e8: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2da6e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2da6ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2da6ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2da6f0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2da6f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2da6f4: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2DA6F4u;
    SET_GPR_U32(ctx, 31, 0x2DA6FCu);
    ctx->pc = 0x2DA6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA6F4u;
    // 0x2da6f8: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2DA6F4u, 0x2DA6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA6FCu;
label_2da6fc:
    // 0x2da6fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2da6fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2da700: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2DA700u;
    SET_GPR_U32(ctx, 31, 0x2DA708u);
    ctx->pc = 0x2DA704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA700u;
    // 0x2da704: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2DA700u, 0x2DA708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA708u;
label_2da708:
    // 0x2da708: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2da708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2da70c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2da70cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2da710: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da714: 0x0  nop
    ctx->pc = 0x2da714u;
    // NOP
    // 0x2da718: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da71c: 0x0  nop
    ctx->pc = 0x2da71cu;
    // NOP
    // 0x2da720: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2DA720u;
    {
        const bool branch_taken_0x2da720 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA720u;
        // 0x2da724: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da720) {
            ctx->pc = 0x2DA764u;
            goto label_2da764;
        }
    }
    ctx->pc = 0x2DA728u;
    // 0x2da728: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2DA728u;
    SET_GPR_U32(ctx, 31, 0x2DA730u);
    ctx->pc = 0x2DA72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA728u;
    // 0x2da72c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DA728u, 0x2DA730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA730u;
label_2da730:
    // 0x2da730: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da734: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2DA734u;
    {
        const bool branch_taken_0x2da734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA734u;
        // 0x2da738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da734) {
            ctx->pc = 0x2DA7E0u;
            goto label_2da7e0;
        }
    }
    ctx->pc = 0x2DA73Cu;
    // 0x2da73c: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2DA73Cu;
    SET_GPR_U32(ctx, 31, 0x2DA744u);
    ctx->pc = 0x2DA740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA73Cu;
    // 0x2da740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2DA73Cu, 0x2DA744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA744u;
label_2da744:
    // 0x2da744: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2da744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2da748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da74c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2da74cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2da750: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2da750u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2da754: 0xc0bf70a  jal         func_2FDC28
    ctx->pc = 0x2DA754u;
    SET_GPR_U32(ctx, 31, 0x2DA75Cu);
    ctx->pc = 0x2DA758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA754u;
    // 0x2da758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2DA754u, 0x2DA75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA75Cu;
label_2da75c:
    // 0x2da75c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2DA75Cu;
    {
        const bool branch_taken_0x2da75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA75Cu;
        // 0x2da760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da75c) {
            ctx->pc = 0x2DA7E0u;
            goto label_2da7e0;
        }
    }
    ctx->pc = 0x2DA764u;
label_2da764:
    // 0x2da764: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2da764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da768: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2DA768u;
    {
        const bool branch_taken_0x2da768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA768u;
        // 0x2da76c: 0xa223003e  sb          $v1, 0x3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 62), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da768) {
            ctx->pc = 0x2DA7E0u;
            goto label_2da7e0;
        }
    }
    ctx->pc = 0x2DA770u;
label_2da770:
    // 0x2da770: 0x966300d0  lhu         $v1, 0xD0($s3)
    ctx->pc = 0x2da770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x2da774: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2da774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2da778: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA778u;
    {
        const bool branch_taken_0x2da778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA778u;
        // 0x2da77c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da778) {
            ctx->pc = 0x2DA784u;
            goto label_2da784;
        }
    }
    ctx->pc = 0x2DA780u;
    // 0x2da780: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2da780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2da784:
    // 0x2da784: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2DA784u;
    SET_GPR_U32(ctx, 31, 0x2DA78Cu);
    ctx->pc = 0x2DA788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA784u;
    // 0x2da788: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DA784u, 0x2DA78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA78Cu;
label_2da78c:
    // 0x2da78c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2da78cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da790: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DA790u;
    {
        const bool branch_taken_0x2da790 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA790u;
        // 0x2da794: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da790) {
            ctx->pc = 0x2DA7DCu;
            goto label_2da7dc;
        }
    }
    ctx->pc = 0x2DA798u;
    // 0x2da798: 0x9230003f  lbu         $s0, 0x3F($s1)
    ctx->pc = 0x2da798u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 63)));
    // 0x2da79c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2da79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2da7a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da7a4: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x2da7a4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2da7a8: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2DA7A8u;
    SET_GPR_U32(ctx, 31, 0x2DA7B0u);
    ctx->pc = 0x2DA7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7A8u;
    // 0x2da7ac: 0x240600fa  addiu       $a2, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2DA7A8u, 0x2DA7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7B0u;
label_2da7b0:
    // 0x2da7b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2da7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2da7b4: 0xc62c002c  lwc1        $f12, 0x2C($s1)
    ctx->pc = 0x2da7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2da7b8: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2da7b8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2da7bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da7c0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2da7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2da7c4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2da7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da7c8: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x2da7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2da7cc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2da7ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da7d0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2da7d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da7d4: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2DA7D4u;
    SET_GPR_U32(ctx, 31, 0x2DA7DCu);
    ctx->pc = 0x2DA7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7D4u;
    // 0x2da7d8: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2DA7D4u, 0x2DA7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7DCu;
label_2da7dc:
    // 0x2da7dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2da7dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da7e0:
    // 0x2da7e0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2da7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2da7e4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2da7e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2da7e8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2da7e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2da7ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2da7ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2da7f0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2da7f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da7f4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2da7f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da7f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2da7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da7fc: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2da7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2da800: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2da800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2da804: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA804u;
        // 0x2da808: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA80Cu;
    // 0x2da80c: 0x0  nop
    ctx->pc = 0x2da80cu;
    // NOP
    ctx->pc = 0x2da810u;
}
