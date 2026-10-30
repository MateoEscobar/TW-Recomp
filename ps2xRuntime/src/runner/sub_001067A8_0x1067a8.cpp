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

// Function: sub_001067A8
// Address: 0x1067a8 - 0x106908
void sub_001067A8_0x1067a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001067A8_0x1067a8");
#endif

    switch (ctx->pc) {
        case 0x1067a8u: goto label_1067a8;
        case 0x1067acu: goto label_1067ac;
        case 0x1067b0u: goto label_1067b0;
        case 0x1067b4u: goto label_1067b4;
        case 0x1067b8u: goto label_1067b8;
        case 0x1067bcu: goto label_1067bc;
        case 0x1067c0u: goto label_1067c0;
        case 0x1067c4u: goto label_1067c4;
        case 0x1067c8u: goto label_1067c8;
        case 0x1067ccu: goto label_1067cc;
        case 0x1067d0u: goto label_1067d0;
        case 0x1067d4u: goto label_1067d4;
        case 0x1067d8u: goto label_1067d8;
        case 0x1067dcu: goto label_1067dc;
        case 0x1067e0u: goto label_1067e0;
        case 0x1067e4u: goto label_1067e4;
        case 0x1067e8u: goto label_1067e8;
        case 0x1067ecu: goto label_1067ec;
        case 0x1067f0u: goto label_1067f0;
        case 0x1067f4u: goto label_1067f4;
        case 0x1067f8u: goto label_1067f8;
        case 0x1067fcu: goto label_1067fc;
        case 0x106800u: goto label_106800;
        case 0x106804u: goto label_106804;
        case 0x106808u: goto label_106808;
        case 0x10680cu: goto label_10680c;
        case 0x106810u: goto label_106810;
        case 0x106814u: goto label_106814;
        case 0x106818u: goto label_106818;
        case 0x10681cu: goto label_10681c;
        case 0x106820u: goto label_106820;
        case 0x106824u: goto label_106824;
        case 0x106828u: goto label_106828;
        case 0x10682cu: goto label_10682c;
        case 0x106830u: goto label_106830;
        case 0x106834u: goto label_106834;
        case 0x106838u: goto label_106838;
        case 0x10683cu: goto label_10683c;
        case 0x106840u: goto label_106840;
        case 0x106844u: goto label_106844;
        case 0x106848u: goto label_106848;
        case 0x10684cu: goto label_10684c;
        case 0x106850u: goto label_106850;
        case 0x106854u: goto label_106854;
        case 0x106858u: goto label_106858;
        case 0x10685cu: goto label_10685c;
        case 0x106860u: goto label_106860;
        case 0x106864u: goto label_106864;
        case 0x106868u: goto label_106868;
        case 0x10686cu: goto label_10686c;
        case 0x106870u: goto label_106870;
        case 0x106874u: goto label_106874;
        case 0x106878u: goto label_106878;
        case 0x10687cu: goto label_10687c;
        case 0x106880u: goto label_106880;
        case 0x106884u: goto label_106884;
        case 0x106888u: goto label_106888;
        case 0x10688cu: goto label_10688c;
        case 0x106890u: goto label_106890;
        case 0x106894u: goto label_106894;
        case 0x106898u: goto label_106898;
        case 0x10689cu: goto label_10689c;
        case 0x1068a0u: goto label_1068a0;
        case 0x1068a4u: goto label_1068a4;
        case 0x1068a8u: goto label_1068a8;
        case 0x1068acu: goto label_1068ac;
        case 0x1068b0u: goto label_1068b0;
        case 0x1068b4u: goto label_1068b4;
        case 0x1068b8u: goto label_1068b8;
        case 0x1068bcu: goto label_1068bc;
        case 0x1068c0u: goto label_1068c0;
        case 0x1068c4u: goto label_1068c4;
        case 0x1068c8u: goto label_1068c8;
        case 0x1068ccu: goto label_1068cc;
        case 0x1068d0u: goto label_1068d0;
        case 0x1068d4u: goto label_1068d4;
        case 0x1068d8u: goto label_1068d8;
        case 0x1068dcu: goto label_1068dc;
        case 0x1068e0u: goto label_1068e0;
        case 0x1068e4u: goto label_1068e4;
        case 0x1068e8u: goto label_1068e8;
        case 0x1068ecu: goto label_1068ec;
        case 0x1068f0u: goto label_1068f0;
        case 0x1068f4u: goto label_1068f4;
        case 0x1068f8u: goto label_1068f8;
        case 0x1068fcu: goto label_1068fc;
        case 0x106900u: goto label_106900;
        case 0x106904u: goto label_106904;
        default: break;
    }

    ctx->pc = 0x1067a8u;

label_1067a8:
    // 0x1067a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1067a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1067ac:
    // 0x1067ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1067acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1067b0:
    // 0x1067b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1067b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1067b4:
    // 0x1067b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1067b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1067b8:
    // 0x1067b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1067b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1067bc:
    // 0x1067bc: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1067bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1067c0:
    // 0x1067c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1067c4:
    if (ctx->pc == 0x1067C4u) {
        ctx->pc = 0x1067C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067C0u;
        // 0x1067c4: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1067C8u;
        goto label_1067c8;
    }
    ctx->pc = 0x1067C0u;
    {
        const bool branch_taken_0x1067c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1067c0) {
            ctx->pc = 0x1067C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1067C0u;
            // 0x1067c4: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1067D8u;
            goto label_1067d8;
        }
    }
    ctx->pc = 0x1067C8u;
label_1067c8:
    // 0x1067c8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1067c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1067cc:
    // 0x1067cc: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_1067d0:
    if (ctx->pc == 0x1067D0u) {
        ctx->pc = 0x1067D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067CCu;
        // 0x1067d0: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1067D4u;
        goto label_1067d4;
    }
    ctx->pc = 0x1067CCu;
    {
        const bool branch_taken_0x1067cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1067cc) {
            ctx->pc = 0x1067D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1067CCu;
            // 0x1067d0: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106878u;
            goto label_106878;
        }
    }
    ctx->pc = 0x1067D4u;
label_1067d4:
    // 0x1067d4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1067d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1067d8:
    // 0x1067d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1067d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1067dc:
    // 0x1067dc: 0xc0e409a  jal         func_390268
label_1067e0:
    if (ctx->pc == 0x1067E0u) {
        ctx->pc = 0x1067E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067DCu;
        // 0x1067e0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1067E4u;
        goto label_1067e4;
    }
    ctx->pc = 0x1067DCu;
    SET_GPR_U32(ctx, 31, 0x1067E4u);
    ctx->pc = 0x1067E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1067DCu;
    // 0x1067e0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1067DCu, 0x1067E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1067E4u;
label_1067e4:
    // 0x1067e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1067e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1067e8:
    // 0x1067e8: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
label_1067ec:
    if (ctx->pc == 0x1067ECu) {
        ctx->pc = 0x1067ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067E8u;
        // 0x1067ec: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1067F0u;
        goto label_1067f0;
    }
    ctx->pc = 0x1067E8u;
    {
        const bool branch_taken_0x1067e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1067e8) {
            ctx->pc = 0x1067ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1067E8u;
            // 0x1067ec: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106878u;
            goto label_106878;
        }
    }
    ctx->pc = 0x1067F0u;
label_1067f0:
    // 0x1067f0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1067f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1067f4:
    // 0x1067f4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1067f8:
    if (ctx->pc == 0x1067F8u) {
        ctx->pc = 0x1067F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067F4u;
        // 0x1067f8: 0x31827  nor         $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1067FCu;
        goto label_1067fc;
    }
    ctx->pc = 0x1067F4u;
    {
        const bool branch_taken_0x1067f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067F4u;
        // 0x1067f8: 0x31827  nor         $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067f4) {
            ctx->pc = 0x106860u;
            goto label_106860;
        }
    }
    ctx->pc = 0x1067FCu;
label_1067fc:
    // 0x1067fc: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x1067fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_106800:
    // 0x106800: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x106800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_106804:
    // 0x106804: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x106804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_106808:
    // 0x106808: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x106808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10680c:
    // 0x10680c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x10680cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_106810:
    // 0x106810: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x106810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_106814:
    // 0x106814: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x106814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_106818:
    // 0x106818: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
label_10681c:
    if (ctx->pc == 0x10681Cu) {
        ctx->pc = 0x10681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106818u;
        // 0x10681c: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106820u;
        goto label_106820;
    }
    ctx->pc = 0x106818u;
    {
        const bool branch_taken_0x106818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x106818) {
            ctx->pc = 0x10681Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106818u;
            // 0x10681c: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106864u;
            goto label_106864;
        }
    }
    ctx->pc = 0x106820u;
label_106820:
    // 0x106820: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x106820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_106824:
    // 0x106824: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x106824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_106828:
    // 0x106828: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x106828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_10682c:
    // 0x10682c: 0x40f809  jalr        $v0
label_106830:
    if (ctx->pc == 0x106830u) {
        ctx->pc = 0x106830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10682Cu;
        // 0x106830: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106834u;
        goto label_106834;
    }
    ctx->pc = 0x10682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106834u);
        ctx->pc = 0x106830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10682Cu;
        // 0x106830: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10682Cu, 0x106834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106834u;
label_106834:
    // 0x106834: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_106838:
    if (ctx->pc == 0x106838u) {
        ctx->pc = 0x106838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106834u;
        // 0x106838: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10683Cu;
        goto label_10683c;
    }
    ctx->pc = 0x106834u;
    {
        const bool branch_taken_0x106834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106834) {
            ctx->pc = 0x106838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106834u;
            // 0x106838: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106864u;
            goto label_106864;
        }
    }
    ctx->pc = 0x10683Cu;
label_10683c:
    // 0x10683c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_106840:
    // 0x106840: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x106840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_106844:
    // 0x106844: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x106844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_106848:
    // 0x106848: 0x40f809  jalr        $v0
label_10684c:
    if (ctx->pc == 0x10684Cu) {
        ctx->pc = 0x10684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106848u;
        // 0x10684c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106850u;
        goto label_106850;
    }
    ctx->pc = 0x106848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106850u);
        ctx->pc = 0x10684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106848u;
        // 0x10684c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106848u, 0x106850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106850u;
label_106850:
    // 0x106850: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x106850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_106854:
    // 0x106854: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x106854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_106858:
    // 0x106858: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x106858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10685c:
    // 0x10685c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x10685cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_106860:
    // 0x106860: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x106860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_106864:
    // 0x106864: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_106868:
    if (ctx->pc == 0x106868u) {
        ctx->pc = 0x106868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106864u;
        // 0x106868: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10686Cu;
        goto label_10686c;
    }
    ctx->pc = 0x106864u;
    {
        const bool branch_taken_0x106864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106864) {
            ctx->pc = 0x106868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106864u;
            // 0x106868: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106878u;
            goto label_106878;
        }
    }
    ctx->pc = 0x10686Cu;
label_10686c:
    // 0x10686c: 0x40f809  jalr        $v0
label_106870:
    if (ctx->pc == 0x106870u) {
        ctx->pc = 0x106870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10686Cu;
        // 0x106870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106874u;
        goto label_106874;
    }
    ctx->pc = 0x10686Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106874u);
        ctx->pc = 0x106870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10686Cu;
        // 0x106870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10686Cu, 0x106874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106874u;
label_106874:
    // 0x106874: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x106874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_106878:
    // 0x106878: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x106878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10687c:
    // 0x10687c: 0xc05d448  jal         func_175120
label_106880:
    if (ctx->pc == 0x106880u) {
        ctx->pc = 0x106880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10687Cu;
        // 0x106880: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106884u;
        goto label_106884;
    }
    ctx->pc = 0x10687Cu;
    SET_GPR_U32(ctx, 31, 0x106884u);
    ctx->pc = 0x106880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10687Cu;
    // 0x106880: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10687Cu, 0x106884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106884u;
label_106884:
    // 0x106884: 0xc042ef4  jal         func_10BBD0
label_106888:
    if (ctx->pc == 0x106888u) {
        ctx->pc = 0x106888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106884u;
        // 0x106888: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10688Cu;
        goto label_10688c;
    }
    ctx->pc = 0x106884u;
    SET_GPR_U32(ctx, 31, 0x10688Cu);
    ctx->pc = 0x106888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106884u;
    // 0x106888: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x106884u, 0x10688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10688Cu;
label_10688c:
    // 0x10688c: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x10688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_106890:
    // 0x106890: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x106890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_106894:
    // 0x106894: 0x0  nop
    ctx->pc = 0x106894u;
    // NOP
label_106898:
    // 0x106898: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x106898u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10689c:
    // 0x10689c: 0x0  nop
    ctx->pc = 0x10689cu;
    // NOP
label_1068a0:
    // 0x1068a0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1068a4:
    if (ctx->pc == 0x1068A4u) {
        ctx->pc = 0x1068A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068A0u;
        // 0x1068a4: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1068A8u;
        goto label_1068a8;
    }
    ctx->pc = 0x1068A0u;
    {
        const bool branch_taken_0x1068a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1068A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068A0u;
        // 0x1068a4: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068a0) {
            ctx->pc = 0x1068F0u;
            goto label_1068f0;
        }
    }
    ctx->pc = 0x1068A8u;
label_1068a8:
    // 0x1068a8: 0xc05d462  jal         func_175188
label_1068ac:
    if (ctx->pc == 0x1068ACu) {
        ctx->pc = 0x1068ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068A8u;
        // 0x1068ac: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1068B0u;
        goto label_1068b0;
    }
    ctx->pc = 0x1068A8u;
    SET_GPR_U32(ctx, 31, 0x1068B0u);
    ctx->pc = 0x1068ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1068A8u;
    // 0x1068ac: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x1068A8u, 0x1068B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1068B0u;
label_1068b0:
    // 0x1068b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1068b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1068b4:
    // 0x1068b4: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1068b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1068b8:
    // 0x1068b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1068b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1068bc:
    // 0x1068bc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1068c0:
    if (ctx->pc == 0x1068C0u) {
        ctx->pc = 0x1068C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068BCu;
        // 0x1068c0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1068C4u;
        goto label_1068c4;
    }
    ctx->pc = 0x1068BCu;
    {
        const bool branch_taken_0x1068bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1068C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068BCu;
        // 0x1068c0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068bc) {
            ctx->pc = 0x1068DCu;
            goto label_1068dc;
        }
    }
    ctx->pc = 0x1068C4u;
label_1068c4:
    // 0x1068c4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1068c8:
    if (ctx->pc == 0x1068C8u) {
        ctx->pc = 0x1068C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068C4u;
        // 0x1068c8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1068CCu;
        goto label_1068cc;
    }
    ctx->pc = 0x1068C4u;
    {
        const bool branch_taken_0x1068c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1068C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068C4u;
        // 0x1068c8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068c4) {
            ctx->pc = 0x1068DCu;
            goto label_1068dc;
        }
    }
    ctx->pc = 0x1068CCu;
label_1068cc:
    // 0x1068cc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1068d0:
    if (ctx->pc == 0x1068D0u) {
        ctx->pc = 0x1068D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068CCu;
        // 0x1068d0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1068D4u;
        goto label_1068d4;
    }
    ctx->pc = 0x1068CCu;
    {
        const bool branch_taken_0x1068cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1068D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068CCu;
        // 0x1068d0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068cc) {
            ctx->pc = 0x1068DCu;
            goto label_1068dc;
        }
    }
    ctx->pc = 0x1068D4u;
label_1068d4:
    // 0x1068d4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1068d8:
    if (ctx->pc == 0x1068D8u) {
        ctx->pc = 0x1068D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068D4u;
        // 0x1068d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1068DCu;
        goto label_1068dc;
    }
    ctx->pc = 0x1068D4u;
    {
        const bool branch_taken_0x1068d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1068D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068D4u;
        // 0x1068d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068d4) {
            ctx->pc = 0x1068F4u;
            goto label_1068f4;
        }
    }
    ctx->pc = 0x1068DCu;
label_1068dc:
    // 0x1068dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1068dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1068e0:
    // 0x1068e0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1068e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1068e4:
    // 0x1068e4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1068e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1068e8:
    // 0x1068e8: 0x60f809  jalr        $v1
label_1068ec:
    if (ctx->pc == 0x1068ECu) {
        ctx->pc = 0x1068ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068E8u;
        // 0x1068ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1068F0u;
        goto label_1068f0;
    }
    ctx->pc = 0x1068E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1068F0u);
        ctx->pc = 0x1068ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068E8u;
        // 0x1068ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1068E8u, 0x1068F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1068F0u;
label_1068f0:
    // 0x1068f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1068f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1068f4:
    // 0x1068f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1068f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1068f8:
    // 0x1068f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1068f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1068fc:
    // 0x1068fc: 0x3e00008  jr          $ra
label_106900:
    if (ctx->pc == 0x106900u) {
        ctx->pc = 0x106900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068FCu;
        // 0x106900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106904u;
        goto label_106904;
    }
    ctx->pc = 0x1068FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068FCu;
        // 0x106900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1068FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106904u;
label_106904:
    // 0x106904: 0x0  nop
    ctx->pc = 0x106904u;
    // NOP
    ctx->pc = 0x106908u;
}
