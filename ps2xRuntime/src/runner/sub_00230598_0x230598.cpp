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

// Function: sub_00230598
// Address: 0x230598 - 0x2306e8
void sub_00230598_0x230598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230598_0x230598");
#endif

    switch (ctx->pc) {
        case 0x230598u: goto label_230598;
        case 0x23059cu: goto label_23059c;
        case 0x2305a0u: goto label_2305a0;
        case 0x2305a4u: goto label_2305a4;
        case 0x2305a8u: goto label_2305a8;
        case 0x2305acu: goto label_2305ac;
        case 0x2305b0u: goto label_2305b0;
        case 0x2305b4u: goto label_2305b4;
        case 0x2305b8u: goto label_2305b8;
        case 0x2305bcu: goto label_2305bc;
        case 0x2305c0u: goto label_2305c0;
        case 0x2305c4u: goto label_2305c4;
        case 0x2305c8u: goto label_2305c8;
        case 0x2305ccu: goto label_2305cc;
        case 0x2305d0u: goto label_2305d0;
        case 0x2305d4u: goto label_2305d4;
        case 0x2305d8u: goto label_2305d8;
        case 0x2305dcu: goto label_2305dc;
        case 0x2305e0u: goto label_2305e0;
        case 0x2305e4u: goto label_2305e4;
        case 0x2305e8u: goto label_2305e8;
        case 0x2305ecu: goto label_2305ec;
        case 0x2305f0u: goto label_2305f0;
        case 0x2305f4u: goto label_2305f4;
        case 0x2305f8u: goto label_2305f8;
        case 0x2305fcu: goto label_2305fc;
        case 0x230600u: goto label_230600;
        case 0x230604u: goto label_230604;
        case 0x230608u: goto label_230608;
        case 0x23060cu: goto label_23060c;
        case 0x230610u: goto label_230610;
        case 0x230614u: goto label_230614;
        case 0x230618u: goto label_230618;
        case 0x23061cu: goto label_23061c;
        case 0x230620u: goto label_230620;
        case 0x230624u: goto label_230624;
        case 0x230628u: goto label_230628;
        case 0x23062cu: goto label_23062c;
        case 0x230630u: goto label_230630;
        case 0x230634u: goto label_230634;
        case 0x230638u: goto label_230638;
        case 0x23063cu: goto label_23063c;
        case 0x230640u: goto label_230640;
        case 0x230644u: goto label_230644;
        case 0x230648u: goto label_230648;
        case 0x23064cu: goto label_23064c;
        case 0x230650u: goto label_230650;
        case 0x230654u: goto label_230654;
        case 0x230658u: goto label_230658;
        case 0x23065cu: goto label_23065c;
        case 0x230660u: goto label_230660;
        case 0x230664u: goto label_230664;
        case 0x230668u: goto label_230668;
        case 0x23066cu: goto label_23066c;
        case 0x230670u: goto label_230670;
        case 0x230674u: goto label_230674;
        case 0x230678u: goto label_230678;
        case 0x23067cu: goto label_23067c;
        case 0x230680u: goto label_230680;
        case 0x230684u: goto label_230684;
        case 0x230688u: goto label_230688;
        case 0x23068cu: goto label_23068c;
        case 0x230690u: goto label_230690;
        case 0x230694u: goto label_230694;
        case 0x230698u: goto label_230698;
        case 0x23069cu: goto label_23069c;
        case 0x2306a0u: goto label_2306a0;
        case 0x2306a4u: goto label_2306a4;
        case 0x2306a8u: goto label_2306a8;
        case 0x2306acu: goto label_2306ac;
        case 0x2306b0u: goto label_2306b0;
        case 0x2306b4u: goto label_2306b4;
        case 0x2306b8u: goto label_2306b8;
        case 0x2306bcu: goto label_2306bc;
        case 0x2306c0u: goto label_2306c0;
        case 0x2306c4u: goto label_2306c4;
        case 0x2306c8u: goto label_2306c8;
        case 0x2306ccu: goto label_2306cc;
        case 0x2306d0u: goto label_2306d0;
        case 0x2306d4u: goto label_2306d4;
        case 0x2306d8u: goto label_2306d8;
        case 0x2306dcu: goto label_2306dc;
        case 0x2306e0u: goto label_2306e0;
        case 0x2306e4u: goto label_2306e4;
        default: break;
    }

    ctx->pc = 0x230598u;

label_230598:
    // 0x230598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23059c:
    // 0x23059c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2305a0:
    // 0x2305a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2305a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2305a4:
    // 0x2305a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2305a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2305a8:
    // 0x2305a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2305a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2305ac:
    // 0x2305ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2305acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2305b0:
    // 0x2305b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2305b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2305b4:
    // 0x2305b4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2305b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2305b8:
    // 0x2305b8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2305b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2305bc:
    // 0x2305bc: 0x40f809  jalr        $v0
label_2305c0:
    if (ctx->pc == 0x2305C0u) {
        ctx->pc = 0x2305C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305BCu;
        // 0x2305c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2305C4u;
        goto label_2305c4;
    }
    ctx->pc = 0x2305BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2305C4u);
        ctx->pc = 0x2305C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305BCu;
        // 0x2305c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2305BCu, 0x2305C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2305C4u;
label_2305c4:
    // 0x2305c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2305c8:
    if (ctx->pc == 0x2305C8u) {
        ctx->pc = 0x2305CCu;
        goto label_2305cc;
    }
    ctx->pc = 0x2305C4u;
    {
        const bool branch_taken_0x2305c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2305c4) {
            ctx->pc = 0x230624u;
            goto label_230624;
        }
    }
    ctx->pc = 0x2305CCu;
label_2305cc:
    // 0x2305cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2305ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2305d0:
    // 0x2305d0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2305d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2305d4:
    // 0x2305d4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2305d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2305d8:
    // 0x2305d8: 0x40f809  jalr        $v0
label_2305dc:
    if (ctx->pc == 0x2305DCu) {
        ctx->pc = 0x2305DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305D8u;
        // 0x2305dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2305E0u;
        goto label_2305e0;
    }
    ctx->pc = 0x2305D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2305E0u);
        ctx->pc = 0x2305DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305D8u;
        // 0x2305dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2305D8u, 0x2305E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2305E0u;
label_2305e0:
    // 0x2305e0: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x2305e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2305e4:
    // 0x2305e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2305e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2305e8:
    // 0x2305e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2305e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2305ec:
    // 0x2305ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2305ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2305f0:
    // 0x2305f0: 0x85040028  lh          $a0, 0x28($t0)
    ctx->pc = 0x2305f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_2305f4:
    // 0x2305f4: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x2305f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_2305f8:
    // 0x2305f8: 0x60f809  jalr        $v1
label_2305fc:
    if (ctx->pc == 0x2305FCu) {
        ctx->pc = 0x2305FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305F8u;
        // 0x2305fc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230600u;
        goto label_230600;
    }
    ctx->pc = 0x2305F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x230600u);
        ctx->pc = 0x2305FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305F8u;
        // 0x2305fc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2305F8u, 0x230600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230600u;
label_230600:
    // 0x230600: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x230600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230604:
    // 0x230604: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_230608:
    if (ctx->pc == 0x230608u) {
        ctx->pc = 0x23060Cu;
        goto label_23060c;
    }
    ctx->pc = 0x230604u;
    {
        const bool branch_taken_0x230604 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x230604) {
            ctx->pc = 0x230624u;
            goto label_230624;
        }
    }
    ctx->pc = 0x23060Cu;
label_23060c:
    // 0x23060c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x23060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_230610:
    // 0x230610: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x230610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230614:
    // 0x230614: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x230614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_230618:
    // 0x230618: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x230618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_23061c:
    // 0x23061c: 0x60f809  jalr        $v1
label_230620:
    if (ctx->pc == 0x230620u) {
        ctx->pc = 0x230620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23061Cu;
        // 0x230620: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230624u;
        goto label_230624;
    }
    ctx->pc = 0x23061Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x230624u);
        ctx->pc = 0x230620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23061Cu;
        // 0x230620: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23061Cu, 0x230624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230624u;
label_230624:
    // 0x230624: 0x3c05e3f9  lui         $a1, 0xE3F9
    ctx->pc = 0x230624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58361 << 16));
label_230628:
    // 0x230628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23062c:
    // 0x23062c: 0xc089d0a  jal         func_227428
label_230630:
    if (ctx->pc == 0x230630u) {
        ctx->pc = 0x230630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23062Cu;
        // 0x230630: 0x34a52003  ori         $a1, $a1, 0x2003 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8195);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230634u;
        goto label_230634;
    }
    ctx->pc = 0x23062Cu;
    SET_GPR_U32(ctx, 31, 0x230634u);
    ctx->pc = 0x230630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23062Cu;
    // 0x230630: 0x34a52003  ori         $a1, $a1, 0x2003 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8195);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227428u, 0x23062Cu, 0x230634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230634u;
label_230634:
    // 0x230634: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_230638:
    if (ctx->pc == 0x230638u) {
        ctx->pc = 0x23063Cu;
        goto label_23063c;
    }
    ctx->pc = 0x230634u;
    {
        const bool branch_taken_0x230634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230634) {
            ctx->pc = 0x230644u;
            goto label_230644;
        }
    }
    ctx->pc = 0x23063Cu;
label_23063c:
    // 0x23063c: 0xc089ce2  jal         func_227388
label_230640:
    if (ctx->pc == 0x230640u) {
        ctx->pc = 0x230640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23063Cu;
        // 0x230640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230644u;
        goto label_230644;
    }
    ctx->pc = 0x23063Cu;
    SET_GPR_U32(ctx, 31, 0x230644u);
    ctx->pc = 0x230640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23063Cu;
    // 0x230640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x23063Cu, 0x230644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230644u;
label_230644:
    // 0x230644: 0xc095018  jal         func_254060
label_230648:
    if (ctx->pc == 0x230648u) {
        ctx->pc = 0x230648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230644u;
        // 0x230648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23064Cu;
        goto label_23064c;
    }
    ctx->pc = 0x230644u;
    SET_GPR_U32(ctx, 31, 0x23064Cu);
    ctx->pc = 0x230648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230644u;
    // 0x230648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x230644u, 0x23064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23064Cu;
label_23064c:
    // 0x23064c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x23064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_230650:
    // 0x230650: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_230654:
    if (ctx->pc == 0x230654u) {
        ctx->pc = 0x230654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230650u;
        // 0x230654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230658u;
        goto label_230658;
    }
    ctx->pc = 0x230650u;
    {
        const bool branch_taken_0x230650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x230654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230650u;
        // 0x230654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230650) {
            ctx->pc = 0x230668u;
            goto label_230668;
        }
    }
    ctx->pc = 0x230658u;
label_230658:
    // 0x230658: 0xc094fca  jal         func_253F28
label_23065c:
    if (ctx->pc == 0x23065Cu) {
        ctx->pc = 0x23065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230658u;
        // 0x23065c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230660u;
        goto label_230660;
    }
    ctx->pc = 0x230658u;
    SET_GPR_U32(ctx, 31, 0x230660u);
    ctx->pc = 0x23065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230658u;
    // 0x23065c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x230658u, 0x230660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230660u;
label_230660:
    // 0x230660: 0x10000003  b           . + 4 + (0x3 << 2)
label_230664:
    if (ctx->pc == 0x230664u) {
        ctx->pc = 0x230668u;
        goto label_230668;
    }
    ctx->pc = 0x230660u;
    {
        const bool branch_taken_0x230660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230660) {
            ctx->pc = 0x230670u;
            goto label_230670;
        }
    }
    ctx->pc = 0x230668u;
label_230668:
    // 0x230668: 0xc094fde  jal         func_253F78
label_23066c:
    if (ctx->pc == 0x23066Cu) {
        ctx->pc = 0x23066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230668u;
        // 0x23066c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230670u;
        goto label_230670;
    }
    ctx->pc = 0x230668u;
    SET_GPR_U32(ctx, 31, 0x230670u);
    ctx->pc = 0x23066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230668u;
    // 0x23066c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x230668u, 0x230670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230670u;
label_230670:
    // 0x230670: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_230674:
    if (ctx->pc == 0x230674u) {
        ctx->pc = 0x230678u;
        goto label_230678;
    }
    ctx->pc = 0x230670u;
    {
        const bool branch_taken_0x230670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x230670) {
            ctx->pc = 0x23068Cu;
            goto label_23068c;
        }
    }
    ctx->pc = 0x230678u;
label_230678:
    // 0x230678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23067c:
    // 0x23067c: 0xc089988  jal         func_226620
label_230680:
    if (ctx->pc == 0x230680u) {
        ctx->pc = 0x230680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23067Cu;
        // 0x230680: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230684u;
        goto label_230684;
    }
    ctx->pc = 0x23067Cu;
    SET_GPR_U32(ctx, 31, 0x230684u);
    ctx->pc = 0x230680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23067Cu;
    // 0x230680: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x23067Cu, 0x230684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230684u;
label_230684:
    // 0x230684: 0x10000006  b           . + 4 + (0x6 << 2)
label_230688:
    if (ctx->pc == 0x230688u) {
        ctx->pc = 0x230688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230684u;
        // 0x230688: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23068Cu;
        goto label_23068c;
    }
    ctx->pc = 0x230684u;
    {
        const bool branch_taken_0x230684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230684u;
        // 0x230688: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230684) {
            ctx->pc = 0x2306A0u;
            goto label_2306a0;
        }
    }
    ctx->pc = 0x23068Cu;
label_23068c:
    // 0x23068c: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x23068cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
label_230690:
    // 0x230690: 0x34a58007  ori         $a1, $a1, 0x8007
    ctx->pc = 0x230690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32775);
label_230694:
    // 0x230694: 0xc089988  jal         func_226620
label_230698:
    if (ctx->pc == 0x230698u) {
        ctx->pc = 0x230698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230694u;
        // 0x230698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23069Cu;
        goto label_23069c;
    }
    ctx->pc = 0x230694u;
    SET_GPR_U32(ctx, 31, 0x23069Cu);
    ctx->pc = 0x230698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230694u;
    // 0x230698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x230694u, 0x23069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23069Cu;
label_23069c:
    // 0x23069c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2306a0:
    // 0x2306a0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2306a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2306a4:
    // 0x2306a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2306a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2306a8:
    // 0x2306a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2306a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2306ac:
    // 0x2306ac: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x2306acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_2306b0:
    // 0x2306b0: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x2306b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_2306b4:
    // 0x2306b4: 0x60f809  jalr        $v1
label_2306b8:
    if (ctx->pc == 0x2306B8u) {
        ctx->pc = 0x2306B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306B4u;
        // 0x2306b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2306BCu;
        goto label_2306bc;
    }
    ctx->pc = 0x2306B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2306BCu);
        ctx->pc = 0x2306B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306B4u;
        // 0x2306b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2306B4u, 0x2306BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2306BCu;
label_2306bc:
    // 0x2306bc: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_2306c0:
    if (ctx->pc == 0x2306C0u) {
        ctx->pc = 0x2306C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306BCu;
        // 0x2306c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2306C4u;
        goto label_2306c4;
    }
    ctx->pc = 0x2306BCu;
    {
        const bool branch_taken_0x2306bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2306bc) {
            ctx->pc = 0x2306C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2306BCu;
            // 0x2306c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2306D8u;
            goto label_2306d8;
        }
    }
    ctx->pc = 0x2306C4u;
label_2306c4:
    // 0x2306c4: 0xc087502  jal         func_21D408
label_2306c8:
    if (ctx->pc == 0x2306C8u) {
        ctx->pc = 0x2306C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306C4u;
        // 0x2306c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2306CCu;
        goto label_2306cc;
    }
    ctx->pc = 0x2306C4u;
    SET_GPR_U32(ctx, 31, 0x2306CCu);
    ctx->pc = 0x2306C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2306C4u;
    // 0x2306c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2306C4u, 0x2306CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2306CCu;
label_2306cc:
    // 0x2306cc: 0xc0a3122  jal         func_28C488
label_2306d0:
    if (ctx->pc == 0x2306D0u) {
        ctx->pc = 0x2306D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306CCu;
        // 0x2306d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2306D4u;
        goto label_2306d4;
    }
    ctx->pc = 0x2306CCu;
    SET_GPR_U32(ctx, 31, 0x2306D4u);
    ctx->pc = 0x2306D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2306CCu;
    // 0x2306d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C488u, 0x2306CCu, 0x2306D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2306D4u;
label_2306d4:
    // 0x2306d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2306d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2306d8:
    // 0x2306d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2306d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2306dc:
    // 0x2306dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2306dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2306e0:
    // 0x2306e0: 0x3e00008  jr          $ra
label_2306e4:
    if (ctx->pc == 0x2306E4u) {
        ctx->pc = 0x2306E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306E0u;
        // 0x2306e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2306E8u;
        goto label_fallthrough_0x2306e0;
    }
    ctx->pc = 0x2306E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2306E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306E0u;
        // 0x2306e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2306E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2306e0:
    ctx->pc = 0x2306E8u;
}
