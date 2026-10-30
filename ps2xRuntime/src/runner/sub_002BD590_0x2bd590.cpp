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

// Function: sub_002BD590
// Address: 0x2bd590 - 0x2bd808
void sub_002BD590_0x2bd590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD590_0x2bd590");
#endif

    switch (ctx->pc) {
        case 0x2bd610u: goto label_2bd610;
        case 0x2bd644u: goto label_2bd644;
        case 0x2bd64cu: goto label_2bd64c;
        case 0x2bd67cu: goto label_2bd67c;
        case 0x2bd688u: goto label_2bd688;
        case 0x2bd690u: goto label_2bd690;
        case 0x2bd6a4u: goto label_2bd6a4;
        case 0x2bd6b4u: goto label_2bd6b4;
        case 0x2bd6bcu: goto label_2bd6bc;
        case 0x2bd6d4u: goto label_2bd6d4;
        case 0x2bd6fcu: goto label_2bd6fc;
        case 0x2bd72cu: goto label_2bd72c;
        case 0x2bd740u: goto label_2bd740;
        case 0x2bd75cu: goto label_2bd75c;
        case 0x2bd78cu: goto label_2bd78c;
        case 0x2bd7b0u: goto label_2bd7b0;
        case 0x2bd7ccu: goto label_2bd7cc;
        default: break;
    }

    ctx->pc = 0x2bd590u;

    // 0x2bd590: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2bd590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2bd594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bd594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd598: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2bd598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2bd59c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2bd59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2bd5a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bd5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5a4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2bd5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2bd5a8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2bd5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2bd5ac: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2bd5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2bd5b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2bd5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2bd5b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bd5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bd5b8: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2bd5b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2bd5bc: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2bd5bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2bd5c0: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x2bd5c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2bd5c4: 0x10430083  beq         $v0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x2BD5C4u;
    {
        const bool branch_taken_0x2bd5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5C4u;
        // 0x2bd5c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5c4) {
            ctx->pc = 0x2BD7D4u;
            goto label_2bd7d4;
        }
    }
    ctx->pc = 0x2BD5CCu;
    // 0x2bd5cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bd5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd5d0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2bd5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bd5d4: 0x54620080  bnel        $v1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2BD5D4u;
    {
        const bool branch_taken_0x2bd5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd5d4) {
            ctx->pc = 0x2BD5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD5D4u;
            // 0x2bd5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD7D8u;
            goto label_2bd7d8;
        }
    }
    ctx->pc = 0x2BD5DCu;
    // 0x2bd5dc: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x2bd5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2bd5e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD5E0u;
    {
        const bool branch_taken_0x2bd5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd5e0) {
            ctx->pc = 0x2BD5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD5E0u;
            // 0x2bd5e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD5E8u;
            goto label_2bd5e8;
        }
    }
    ctx->pc = 0x2BD5E8u;
label_2bd5e8:
    // 0x2bd5e8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2bd5e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2bd5ec: 0x1810  mfhi        $v1
    ctx->pc = 0x2bd5ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2bd5f0: 0x54600079  bnel        $v1, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x2BD5F0u;
    {
        const bool branch_taken_0x2bd5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd5f0) {
            ctx->pc = 0x2BD5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD5F0u;
            // 0x2bd5f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD7D8u;
            goto label_2bd7d8;
        }
    }
    ctx->pc = 0x2BD5F8u;
    // 0x2bd5f8: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x2bd5f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bd5fc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2bd5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2bd600: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2bd600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd604: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2bd604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bd608: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2bd608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2bd60c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bd60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bd610:
    // 0x2bd610: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2bd610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2bd614: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2bd614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2bd618: 0x0  nop
    ctx->pc = 0x2bd618u;
    // NOP
    // 0x2bd61c: 0x0  nop
    ctx->pc = 0x2bd61cu;
    // NOP
    // 0x2bd620: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BD620u;
    {
        const bool branch_taken_0x2bd620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD620u;
        // 0x2bd624: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd620) {
            ctx->pc = 0x2BD610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd610;
        }
    }
    ctx->pc = 0x2BD628u;
    // 0x2bd628: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bd628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd62c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2bd62cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2bd630: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bd630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd634: 0x24c6c1f0  addiu       $a2, $a2, -0x3E10
    ctx->pc = 0x2bd634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951408));
    // 0x2bd638: 0xc44c0140  lwc1        $f12, 0x140($v0)
    ctx->pc = 0x2bd638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bd63c: 0xc0a71fa  jal         func_29C7E8
    ctx->pc = 0x2BD63Cu;
    SET_GPR_U32(ctx, 31, 0x2BD644u);
    ctx->pc = 0x2BD640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD63Cu;
    // 0x2bd640: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C7E8u, 0x2BD63Cu, 0x2BD644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD644u;
label_2bd644:
    // 0x2bd644: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x2BD644u;
    SET_GPR_U32(ctx, 31, 0x2BD64Cu);
    ctx->pc = 0x2BD648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD644u;
    // 0x2bd648: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2BD644u, 0x2BD64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD64Cu;
label_2bd64c:
    // 0x2bd64c: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x2BD64Cu;
    {
        const bool branch_taken_0x2bd64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD64Cu;
        // 0x2bd650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd64c) {
            ctx->pc = 0x2BD7D8u;
            goto label_2bd7d8;
        }
    }
    ctx->pc = 0x2BD654u;
    // 0x2bd654: 0x26630090  addiu       $v1, $s3, 0x90
    ctx->pc = 0x2bd654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x2bd658: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2bd658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2bd65c: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x2bd65cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2bd660: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2bd660u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd664: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2bd664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2bd668: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bd668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd66c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bd66cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2bd670: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2bd670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd674: 0xc13b748  jal         func_4EDD20
    ctx->pc = 0x2BD674u;
    SET_GPR_U32(ctx, 31, 0x2BD67Cu);
    ctx->pc = 0x2BD678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD674u;
    // 0x2bd678: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD20u, 0x2BD674u, 0x2BD67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD67Cu;
label_2bd67c:
    // 0x2bd67c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bd67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd680: 0xc137826  jal         func_4DE098
    ctx->pc = 0x2BD680u;
    SET_GPR_U32(ctx, 31, 0x2BD688u);
    ctx->pc = 0x2BD684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD680u;
    // 0x2bd684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2BD680u, 0x2BD688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD688u;
label_2bd688:
    // 0x2bd688: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BD688u;
    SET_GPR_U32(ctx, 31, 0x2BD690u);
    ctx->pc = 0x2BD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD688u;
    // 0x2bd68c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BD688u, 0x2BD690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD690u;
label_2bd690:
    // 0x2bd690: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bd690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd694: 0x12000050  beqz        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2BD694u;
    {
        const bool branch_taken_0x2bd694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD694u;
        // 0x2bd698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd694) {
            ctx->pc = 0x2BD7D8u;
            goto label_2bd7d8;
        }
    }
    ctx->pc = 0x2BD69Cu;
    // 0x2bd69c: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2BD69Cu;
    SET_GPR_U32(ctx, 31, 0x2BD6A4u);
    ctx->pc = 0x2BD6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD69Cu;
    // 0x2bd6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2BD69Cu, 0x2BD6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6A4u;
label_2bd6a4:
    // 0x2bd6a4: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2BD6A4u;
    {
        const bool branch_taken_0x2bd6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6A4u;
        // 0x2bd6a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6a4) {
            ctx->pc = 0x2BD7D8u;
            goto label_2bd7d8;
        }
    }
    ctx->pc = 0x2BD6ACu;
    // 0x2bd6ac: 0xc087502  jal         func_21D408
    ctx->pc = 0x2BD6ACu;
    SET_GPR_U32(ctx, 31, 0x2BD6B4u);
    ctx->pc = 0x2BD6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD6ACu;
    // 0x2bd6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BD6ACu, 0x2BD6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6B4u;
label_2bd6b4:
    // 0x2bd6b4: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x2BD6B4u;
    SET_GPR_U32(ctx, 31, 0x2BD6BCu);
    ctx->pc = 0x2BD6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD6B4u;
    // 0x2bd6b8: 0x244401a4  addiu       $a0, $v0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2BD6B4u, 0x2BD6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6BCu;
label_2bd6bc:
    // 0x2bd6bc: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2BD6BCu;
    {
        const bool branch_taken_0x2bd6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6BCu;
        // 0x2bd6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6bc) {
            ctx->pc = 0x2BD7D8u;
            goto label_2bd7d8;
        }
    }
    ctx->pc = 0x2BD6C4u;
    // 0x2bd6c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bd6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd6c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bd6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd6cc: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2BD6CCu;
    SET_GPR_U32(ctx, 31, 0x2BD6D4u);
    ctx->pc = 0x2BD6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD6CCu;
    // 0x2bd6d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2BD6CCu, 0x2BD6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6D4u;
label_2bd6d4:
    // 0x2bd6d4: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x2bd6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x2bd6d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bd6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bd6dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2bd6dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2bd6e0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BD6E0u;
    {
        const bool branch_taken_0x2bd6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6E0u;
        // 0x2bd6e4: 0x24120015  addiu       $s2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6e0) {
            ctx->pc = 0x2BD70Cu;
            goto label_2bd70c;
        }
    }
    ctx->pc = 0x2BD6E8u;
    // 0x2bd6e8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bd6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2bd6ec: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2bd6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2bd6f0: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2bd6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2bd6f4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2BD6F4u;
    SET_GPR_U32(ctx, 31, 0x2BD6FCu);
    ctx->pc = 0x2BD6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD6F4u;
    // 0x2bd6f8: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2BD6F4u, 0x2BD6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6FCu;
label_2bd6fc:
    // 0x2bd6fc: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x2bd6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2bd700: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2bd700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2bd704: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2bd704u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bd708: 0x83900a  movz        $s2, $a0, $v1
    ctx->pc = 0x2bd708u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_2bd70c:
    // 0x2bd70c: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x2bd70cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2bd710: 0x26a24b00  addiu       $v0, $s5, 0x4B00
    ctx->pc = 0x2bd710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
    // 0x2bd714: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2bd714u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2bd718: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2bd718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2bd71c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bd71cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2bd720: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2bd720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bd724: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2BD724u;
    SET_GPR_U32(ctx, 31, 0x2BD72Cu);
    ctx->pc = 0x2BD728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD724u;
    // 0x2bd728: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BD724u, 0x2BD72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD72Cu;
label_2bd72c:
    // 0x2bd72c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bd72cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2bd730: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bd730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd734: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bd734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd738: 0xc08c340  jal         func_230D00
    ctx->pc = 0x2BD738u;
    SET_GPR_U32(ctx, 31, 0x2BD740u);
    ctx->pc = 0x2BD73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD738u;
    // 0x2bd73c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D00u, 0x2BD738u, 0x2BD740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD740u;
label_2bd740:
    // 0x2bd740: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2bd740u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2bd744: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x2bd744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd748: 0x0  nop
    ctx->pc = 0x2bd748u;
    // NOP
    // 0x2bd74c: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x2BD74Cu;
    {
        const bool branch_taken_0x2bd74c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd74c) {
            ctx->pc = 0x2BD750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD74Cu;
            // 0x2bd750: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD7B4u;
            goto label_2bd7b4;
        }
    }
    ctx->pc = 0x2BD754u;
    // 0x2bd754: 0xc086618  jal         func_219860
    ctx->pc = 0x2BD754u;
    SET_GPR_U32(ctx, 31, 0x2BD75Cu);
    ctx->pc = 0x2BD758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD754u;
    // 0x2bd758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2BD754u, 0x2BD75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD75Cu;
label_2bd75c:
    // 0x2bd75c: 0x46000500  add.s       $f20, $f0, $f0
    ctx->pc = 0x2bd75cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bd760: 0x0  nop
    ctx->pc = 0x2bd760u;
    // NOP
    // 0x2bd764: 0x0  nop
    ctx->pc = 0x2bd764u;
    // NOP
    // 0x2bd768: 0x46150044  c1          0x150044
    ctx->pc = 0x2bd768u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bd76c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2bd76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2bd770: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2bd770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2bd774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd778: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bd778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd77c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2bd77cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2bd780: 0x46000d68  max.s       $f21, $f1, $f0
    ctx->pc = 0x2bd780u;
    ctx->f[21] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2bd784: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2BD784u;
    SET_GPR_U32(ctx, 31, 0x2BD78Cu);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BD784u, 0x2BD78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD78Cu;
label_2bd78c:
    // 0x2bd78c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD78Cu;
    {
        const bool branch_taken_0x2bd78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD78Cu;
        // 0x2bd790: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd78c) {
            ctx->pc = 0x2BD7B0u;
            goto label_2bd7b0;
        }
    }
    ctx->pc = 0x2BD794u;
    // 0x2bd794: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bd794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd798: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bd798u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bd79c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2bd79cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2bd7a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bd7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd7a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bd7a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd7a8: 0xc0bf3d4  jal         func_2FCF50
    ctx->pc = 0x2BD7A8u;
    SET_GPR_U32(ctx, 31, 0x2BD7B0u);
    ctx->pc = 0x2BD7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD7A8u;
    // 0x2bd7ac: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2BD7A8u, 0x2BD7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7B0u;
label_2bd7b0:
    // 0x2bd7b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bd7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bd7b4:
    // 0x2bd7b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bd7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd7b8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2bd7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2bd7bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bd7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd7c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2bd7c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd7c4: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x2BD7C4u;
    SET_GPR_U32(ctx, 31, 0x2BD7CCu);
    ctx->pc = 0x2BD7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD7C4u;
    // 0x2bd7c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2BD7C4u, 0x2BD7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7CCu;
label_2bd7cc:
    // 0x2bd7cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD7CCu;
    {
        const bool branch_taken_0x2bd7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7CCu;
        // 0x2bd7d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd7cc) {
            ctx->pc = 0x2BD7D8u;
            goto label_2bd7d8;
        }
    }
    ctx->pc = 0x2BD7D4u;
label_2bd7d4:
    // 0x2bd7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bd7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd7d8:
    // 0x2bd7d8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2bd7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bd7dc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2bd7dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bd7e0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2bd7e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bd7e4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2bd7e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd7e8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2bd7e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd7ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bd7ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd7f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bd7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bd7f4: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2bd7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bd7f8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2bd7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7FCu;
        // 0x2bd800: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD804u;
    // 0x2bd804: 0x0  nop
    ctx->pc = 0x2bd804u;
    // NOP
    ctx->pc = 0x2bd808u;
}
