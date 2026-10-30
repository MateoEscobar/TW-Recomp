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

// Function: sub_0010E558
// Address: 0x10e558 - 0x10e710
void sub_0010E558_0x10e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E558_0x10e558");
#endif

    switch (ctx->pc) {
        case 0x10e558u: goto label_10e558;
        case 0x10e55cu: goto label_10e55c;
        case 0x10e560u: goto label_10e560;
        case 0x10e564u: goto label_10e564;
        case 0x10e568u: goto label_10e568;
        case 0x10e56cu: goto label_10e56c;
        case 0x10e570u: goto label_10e570;
        case 0x10e574u: goto label_10e574;
        case 0x10e578u: goto label_10e578;
        case 0x10e57cu: goto label_10e57c;
        case 0x10e580u: goto label_10e580;
        case 0x10e584u: goto label_10e584;
        case 0x10e588u: goto label_10e588;
        case 0x10e58cu: goto label_10e58c;
        case 0x10e590u: goto label_10e590;
        case 0x10e594u: goto label_10e594;
        case 0x10e598u: goto label_10e598;
        case 0x10e59cu: goto label_10e59c;
        case 0x10e5a0u: goto label_10e5a0;
        case 0x10e5a4u: goto label_10e5a4;
        case 0x10e5a8u: goto label_10e5a8;
        case 0x10e5acu: goto label_10e5ac;
        case 0x10e5b0u: goto label_10e5b0;
        case 0x10e5b4u: goto label_10e5b4;
        case 0x10e5b8u: goto label_10e5b8;
        case 0x10e5bcu: goto label_10e5bc;
        case 0x10e5c0u: goto label_10e5c0;
        case 0x10e5c4u: goto label_10e5c4;
        case 0x10e5c8u: goto label_10e5c8;
        case 0x10e5ccu: goto label_10e5cc;
        case 0x10e5d0u: goto label_10e5d0;
        case 0x10e5d4u: goto label_10e5d4;
        case 0x10e5d8u: goto label_10e5d8;
        case 0x10e5dcu: goto label_10e5dc;
        case 0x10e5e0u: goto label_10e5e0;
        case 0x10e5e4u: goto label_10e5e4;
        case 0x10e5e8u: goto label_10e5e8;
        case 0x10e5ecu: goto label_10e5ec;
        case 0x10e5f0u: goto label_10e5f0;
        case 0x10e5f4u: goto label_10e5f4;
        case 0x10e5f8u: goto label_10e5f8;
        case 0x10e5fcu: goto label_10e5fc;
        case 0x10e600u: goto label_10e600;
        case 0x10e604u: goto label_10e604;
        case 0x10e608u: goto label_10e608;
        case 0x10e60cu: goto label_10e60c;
        case 0x10e610u: goto label_10e610;
        case 0x10e614u: goto label_10e614;
        case 0x10e618u: goto label_10e618;
        case 0x10e61cu: goto label_10e61c;
        case 0x10e620u: goto label_10e620;
        case 0x10e624u: goto label_10e624;
        case 0x10e628u: goto label_10e628;
        case 0x10e62cu: goto label_10e62c;
        case 0x10e630u: goto label_10e630;
        case 0x10e634u: goto label_10e634;
        case 0x10e638u: goto label_10e638;
        case 0x10e63cu: goto label_10e63c;
        case 0x10e640u: goto label_10e640;
        case 0x10e644u: goto label_10e644;
        case 0x10e648u: goto label_10e648;
        case 0x10e64cu: goto label_10e64c;
        case 0x10e650u: goto label_10e650;
        case 0x10e654u: goto label_10e654;
        case 0x10e658u: goto label_10e658;
        case 0x10e65cu: goto label_10e65c;
        case 0x10e660u: goto label_10e660;
        case 0x10e664u: goto label_10e664;
        case 0x10e668u: goto label_10e668;
        case 0x10e66cu: goto label_10e66c;
        case 0x10e670u: goto label_10e670;
        case 0x10e674u: goto label_10e674;
        case 0x10e678u: goto label_10e678;
        case 0x10e67cu: goto label_10e67c;
        case 0x10e680u: goto label_10e680;
        case 0x10e684u: goto label_10e684;
        case 0x10e688u: goto label_10e688;
        case 0x10e68cu: goto label_10e68c;
        case 0x10e690u: goto label_10e690;
        case 0x10e694u: goto label_10e694;
        case 0x10e698u: goto label_10e698;
        case 0x10e69cu: goto label_10e69c;
        case 0x10e6a0u: goto label_10e6a0;
        case 0x10e6a4u: goto label_10e6a4;
        case 0x10e6a8u: goto label_10e6a8;
        case 0x10e6acu: goto label_10e6ac;
        case 0x10e6b0u: goto label_10e6b0;
        case 0x10e6b4u: goto label_10e6b4;
        case 0x10e6b8u: goto label_10e6b8;
        case 0x10e6bcu: goto label_10e6bc;
        case 0x10e6c0u: goto label_10e6c0;
        case 0x10e6c4u: goto label_10e6c4;
        case 0x10e6c8u: goto label_10e6c8;
        case 0x10e6ccu: goto label_10e6cc;
        case 0x10e6d0u: goto label_10e6d0;
        case 0x10e6d4u: goto label_10e6d4;
        case 0x10e6d8u: goto label_10e6d8;
        case 0x10e6dcu: goto label_10e6dc;
        case 0x10e6e0u: goto label_10e6e0;
        case 0x10e6e4u: goto label_10e6e4;
        case 0x10e6e8u: goto label_10e6e8;
        case 0x10e6ecu: goto label_10e6ec;
        case 0x10e6f0u: goto label_10e6f0;
        case 0x10e6f4u: goto label_10e6f4;
        case 0x10e6f8u: goto label_10e6f8;
        case 0x10e6fcu: goto label_10e6fc;
        case 0x10e700u: goto label_10e700;
        case 0x10e704u: goto label_10e704;
        case 0x10e708u: goto label_10e708;
        case 0x10e70cu: goto label_10e70c;
        default: break;
    }

    ctx->pc = 0x10e558u;

label_10e558:
    // 0x10e558: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10e558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_10e55c:
    // 0x10e55c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10e55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_10e560:
    // 0x10e560: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x10e560u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_10e564:
    // 0x10e564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10e568:
    // 0x10e568: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x10e568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_10e56c:
    // 0x10e56c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10e56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10e570:
    // 0x10e570: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x10e570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e574:
    // 0x10e574: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x10e574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_10e578:
    // 0x10e578: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10e578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e57c:
    // 0x10e57c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x10e57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_10e580:
    // 0x10e580: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10e580u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e584:
    // 0x10e584: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x10e584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_10e588:
    // 0x10e588: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x10e588u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_10e58c:
    // 0x10e58c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e590:
    // 0x10e590: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x10e590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_10e594:
    // 0x10e594: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x10e594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_10e598:
    // 0x10e598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e59c:
    // 0x10e59c: 0xc0439ee  jal         func_10E7B8
label_10e5a0:
    if (ctx->pc == 0x10E5A0u) {
        ctx->pc = 0x10E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E59Cu;
        // 0x10e5a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E5A4u;
        goto label_10e5a4;
    }
    ctx->pc = 0x10E59Cu;
    SET_GPR_U32(ctx, 31, 0x10E5A4u);
    ctx->pc = 0x10E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E59Cu;
    // 0x10e5a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7B8u, 0x10E59Cu, 0x10E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E5A4u;
label_10e5a4:
    // 0x10e5a4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_10e5a8:
    if (ctx->pc == 0x10E5A8u) {
        ctx->pc = 0x10E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5A4u;
        // 0x10e5a8: 0x2331821  addu        $v1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E5ACu;
        goto label_10e5ac;
    }
    ctx->pc = 0x10E5A4u;
    {
        const bool branch_taken_0x10e5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5A4u;
        // 0x10e5a8: 0x2331821  addu        $v1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5a4) {
            ctx->pc = 0x10E6D0u;
            goto label_10e6d0;
        }
    }
    ctx->pc = 0x10E5ACu;
label_10e5ac:
    // 0x10e5ac: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x10e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_10e5b0:
    // 0x10e5b0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x10e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_10e5b4:
    // 0x10e5b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x10e5b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10e5b8:
    // 0x10e5b8: 0x8c85489c  lw          $a1, 0x489C($a0)
    ctx->pc = 0x10e5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_10e5bc:
    // 0x10e5bc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x10e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10e5c0:
    // 0x10e5c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10e5c4:
    // 0x10e5c4: 0x90a40410  lbu         $a0, 0x410($a1)
    ctx->pc = 0x10e5c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1040)));
label_10e5c8:
    // 0x10e5c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10e5cc:
    // 0x10e5cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10e5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10e5d0:
    // 0x10e5d0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_10e5d4:
    if (ctx->pc == 0x10E5D4u) {
        ctx->pc = 0x10E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5D0u;
        // 0x10e5d4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E5D8u;
        goto label_10e5d8;
    }
    ctx->pc = 0x10E5D0u;
    {
        const bool branch_taken_0x10e5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5D0u;
        // 0x10e5d4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5d0) {
            ctx->pc = 0x10E5F8u;
            goto label_10e5f8;
        }
    }
    ctx->pc = 0x10E5D8u;
label_10e5d8:
    // 0x10e5d8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_10e5dc:
    // 0x10e5dc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x10e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_10e5e0:
    // 0x10e5e0: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x10e5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_10e5e4:
    // 0x10e5e4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10e5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_10e5e8:
    // 0x10e5e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10e5ec:
    // 0x10e5ec: 0x8c837ab4  lw          $v1, 0x7AB4($a0)
    ctx->pc = 0x10e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31412)));
label_10e5f0:
    // 0x10e5f0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_10e5f4:
    if (ctx->pc == 0x10E5F4u) {
        ctx->pc = 0x10E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5F0u;
        // 0x10e5f4: 0xc48c7ab0  lwc1        $f12, 0x7AB0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 31408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E5F8u;
        goto label_10e5f8;
    }
    ctx->pc = 0x10E5F0u;
    {
        const bool branch_taken_0x10e5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e5f0) {
            ctx->pc = 0x10E5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E5F0u;
            // 0x10e5f4: 0xc48c7ab0  lwc1        $f12, 0x7AB0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 31408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E5F8u;
            goto label_10e5f8;
        }
    }
    ctx->pc = 0x10E5F8u;
label_10e5f8:
    // 0x10e5f8: 0x8cc2489c  lw          $v0, 0x489C($a2)
    ctx->pc = 0x10e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_10e5fc:
    // 0x10e5fc: 0x8c430268  lw          $v1, 0x268($v0)
    ctx->pc = 0x10e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 616)));
label_10e600:
    // 0x10e600: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_10e604:
    if (ctx->pc == 0x10E604u) {
        ctx->pc = 0x10E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E600u;
        // 0x10e604: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E608u;
        goto label_10e608;
    }
    ctx->pc = 0x10E600u;
    {
        const bool branch_taken_0x10e600 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E600u;
        // 0x10e604: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e600) {
            ctx->pc = 0x10E638u;
            goto label_10e638;
        }
    }
    ctx->pc = 0x10E608u;
label_10e608:
    // 0x10e608: 0xc6400094  lwc1        $f0, 0x94($s2)
    ctx->pc = 0x10e608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10e60c:
    // 0x10e60c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x10e60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10e610:
    // 0x10e610: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x10e610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_10e614:
    // 0x10e614: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10e614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10e618:
    // 0x10e618: 0xc6230060  lwc1        $f3, 0x60($s1)
    ctx->pc = 0x10e618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_10e61c:
    // 0x10e61c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10e61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_10e620:
    // 0x10e620: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10e620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10e624:
    // 0x10e624: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x10e624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_10e628:
    // 0x10e628: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x10e628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_10e62c:
    // 0x10e62c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x10e62cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_10e630:
    // 0x10e630: 0x10000009  b           . + 4 + (0x9 << 2)
label_10e634:
    if (ctx->pc == 0x10E634u) {
        ctx->pc = 0x10E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E630u;
        // 0x10e634: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E638u;
        goto label_10e638;
    }
    ctx->pc = 0x10E630u;
    {
        const bool branch_taken_0x10e630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E630u;
        // 0x10e634: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e630) {
            ctx->pc = 0x10E658u;
            goto label_10e658;
        }
    }
    ctx->pc = 0x10E638u;
label_10e638:
    // 0x10e638: 0xc6400094  lwc1        $f0, 0x94($s2)
    ctx->pc = 0x10e638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10e63c:
    // 0x10e63c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x10e63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10e640:
    // 0x10e640: 0xc623005c  lwc1        $f3, 0x5C($s1)
    ctx->pc = 0x10e640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_10e644:
    // 0x10e644: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10e644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10e648:
    // 0x10e648: 0xc6220060  lwc1        $f2, 0x60($s1)
    ctx->pc = 0x10e648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_10e64c:
    // 0x10e64c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x10e64cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_10e650:
    // 0x10e650: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x10e650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_10e654:
    // 0x10e654: 0x460c0502  mul.s       $f20, $f0, $f12
    ctx->pc = 0x10e654u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_10e658:
    // 0x10e658: 0x26220098  addiu       $v0, $s1, 0x98
    ctx->pc = 0x10e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_10e65c:
    // 0x10e65c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x10e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_10e660:
    // 0x10e660: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x10e660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10e664:
    // 0x10e664: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x10e664u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e668:
    // 0x10e668: 0x0  nop
    ctx->pc = 0x10e668u;
    // NOP
label_10e66c:
    // 0x10e66c: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
label_10e670:
    if (ctx->pc == 0x10E670u) {
        ctx->pc = 0x10E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E66Cu;
        // 0x10e670: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E674u;
        goto label_10e674;
    }
    ctx->pc = 0x10E66Cu;
    {
        const bool branch_taken_0x10e66c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e66c) {
            ctx->pc = 0x10E670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E66Cu;
            // 0x10e670: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E6D4u;
            goto label_10e6d4;
        }
    }
    ctx->pc = 0x10E674u;
label_10e674:
    // 0x10e674: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x10e674u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_10e678:
    // 0x10e678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e67c:
    // 0x10e67c: 0xc046dd4  jal         func_11B750
label_10e680:
    if (ctx->pc == 0x10E680u) {
        ctx->pc = 0x10E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E67Cu;
        // 0x10e680: 0x82450078  lb          $a1, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E684u;
        goto label_10e684;
    }
    ctx->pc = 0x10E67Cu;
    SET_GPR_U32(ctx, 31, 0x10E684u);
    ctx->pc = 0x10E680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E67Cu;
    // 0x10e680: 0x82450078  lb          $a1, 0x78($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x10E67Cu, 0x10E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E684u;
label_10e684:
    // 0x10e684: 0x8ea6bce4  lw          $a2, -0x431C($s5)
    ctx->pc = 0x10e684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950116)));
label_10e688:
    // 0x10e688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e68c:
    // 0x10e68c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10e68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e690:
    // 0x10e690: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10e690u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10e694:
    // 0x10e694: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10e694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10e698:
    // 0x10e698: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x10e698u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_10e69c:
    // 0x10e69c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x10e69cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_10e6a0:
    // 0x10e6a0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x10e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_10e6a4:
    // 0x10e6a4: 0x60f809  jalr        $v1
label_10e6a8:
    if (ctx->pc == 0x10E6A8u) {
        ctx->pc = 0x10E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6A4u;
        // 0x10e6a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E6ACu;
        goto label_10e6ac;
    }
    ctx->pc = 0x10E6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E6ACu);
        ctx->pc = 0x10E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6A4u;
        // 0x10e6a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E6A4u, 0x10E6ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E6ACu;
label_10e6ac:
    // 0x10e6ac: 0x8ea6bce4  lw          $a2, -0x431C($s5)
    ctx->pc = 0x10e6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950116)));
label_10e6b0:
    // 0x10e6b0: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x10e6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10e6b4:
    // 0x10e6b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x10e6b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_10e6b8:
    // 0x10e6b8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x10e6b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_10e6bc:
    // 0x10e6bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10e6c0:
    // 0x10e6c0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x10e6c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_10e6c4:
    // 0x10e6c4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x10e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_10e6c8:
    // 0x10e6c8: 0x60f809  jalr        $v1
label_10e6cc:
    if (ctx->pc == 0x10E6CCu) {
        ctx->pc = 0x10E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6C8u;
        // 0x10e6cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E6D0u;
        goto label_10e6d0;
    }
    ctx->pc = 0x10E6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E6D0u);
        ctx->pc = 0x10E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6C8u;
        // 0x10e6cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E6C8u, 0x10E6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E6D0u;
label_10e6d0:
    // 0x10e6d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x10e6d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_10e6d4:
    // 0x10e6d4: 0x2652004c  addiu       $s2, $s2, 0x4C
    ctx->pc = 0x10e6d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_10e6d8:
    // 0x10e6d8: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x10e6d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_10e6dc:
    // 0x10e6dc: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_10e6e0:
    if (ctx->pc == 0x10E6E0u) {
        ctx->pc = 0x10E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6DCu;
        // 0x10e6e0: 0x2673004c  addiu       $s3, $s3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E6E4u;
        goto label_10e6e4;
    }
    ctx->pc = 0x10E6DCu;
    {
        const bool branch_taken_0x10e6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6DCu;
        // 0x10e6e0: 0x2673004c  addiu       $s3, $s3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6dc) {
            ctx->pc = 0x10E598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e598;
        }
    }
    ctx->pc = 0x10E6E4u;
label_10e6e4:
    // 0x10e6e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10e6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10e6e8:
    // 0x10e6e8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10e6e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10e6ec:
    // 0x10e6ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10e6ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10e6f0:
    // 0x10e6f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10e6f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10e6f4:
    // 0x10e6f4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x10e6f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10e6f8:
    // 0x10e6f8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x10e6f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10e6fc:
    // 0x10e6fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e700:
    // 0x10e700: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x10e700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_10e704:
    // 0x10e704: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x10e704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10e708:
    // 0x10e708: 0x3e00008  jr          $ra
label_10e70c:
    if (ctx->pc == 0x10E70Cu) {
        ctx->pc = 0x10E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E708u;
        // 0x10e70c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E710u;
        goto label_fallthrough_0x10e708;
    }
    ctx->pc = 0x10E708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E708u;
        // 0x10e70c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e708:
    ctx->pc = 0x10E710u;
}
