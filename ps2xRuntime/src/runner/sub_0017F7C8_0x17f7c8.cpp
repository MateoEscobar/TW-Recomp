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

// Function: sub_0017F7C8
// Address: 0x17f7c8 - 0x17f8f8
void sub_0017F7C8_0x17f7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F7C8_0x17f7c8");
#endif

    switch (ctx->pc) {
        case 0x17f7c8u: goto label_17f7c8;
        case 0x17f7ccu: goto label_17f7cc;
        case 0x17f7d0u: goto label_17f7d0;
        case 0x17f7d4u: goto label_17f7d4;
        case 0x17f7d8u: goto label_17f7d8;
        case 0x17f7dcu: goto label_17f7dc;
        case 0x17f7e0u: goto label_17f7e0;
        case 0x17f7e4u: goto label_17f7e4;
        case 0x17f7e8u: goto label_17f7e8;
        case 0x17f7ecu: goto label_17f7ec;
        case 0x17f7f0u: goto label_17f7f0;
        case 0x17f7f4u: goto label_17f7f4;
        case 0x17f7f8u: goto label_17f7f8;
        case 0x17f7fcu: goto label_17f7fc;
        case 0x17f800u: goto label_17f800;
        case 0x17f804u: goto label_17f804;
        case 0x17f808u: goto label_17f808;
        case 0x17f80cu: goto label_17f80c;
        case 0x17f810u: goto label_17f810;
        case 0x17f814u: goto label_17f814;
        case 0x17f818u: goto label_17f818;
        case 0x17f81cu: goto label_17f81c;
        case 0x17f820u: goto label_17f820;
        case 0x17f824u: goto label_17f824;
        case 0x17f828u: goto label_17f828;
        case 0x17f82cu: goto label_17f82c;
        case 0x17f830u: goto label_17f830;
        case 0x17f834u: goto label_17f834;
        case 0x17f838u: goto label_17f838;
        case 0x17f83cu: goto label_17f83c;
        case 0x17f840u: goto label_17f840;
        case 0x17f844u: goto label_17f844;
        case 0x17f848u: goto label_17f848;
        case 0x17f84cu: goto label_17f84c;
        case 0x17f850u: goto label_17f850;
        case 0x17f854u: goto label_17f854;
        case 0x17f858u: goto label_17f858;
        case 0x17f85cu: goto label_17f85c;
        case 0x17f860u: goto label_17f860;
        case 0x17f864u: goto label_17f864;
        case 0x17f868u: goto label_17f868;
        case 0x17f86cu: goto label_17f86c;
        case 0x17f870u: goto label_17f870;
        case 0x17f874u: goto label_17f874;
        case 0x17f878u: goto label_17f878;
        case 0x17f87cu: goto label_17f87c;
        case 0x17f880u: goto label_17f880;
        case 0x17f884u: goto label_17f884;
        case 0x17f888u: goto label_17f888;
        case 0x17f88cu: goto label_17f88c;
        case 0x17f890u: goto label_17f890;
        case 0x17f894u: goto label_17f894;
        case 0x17f898u: goto label_17f898;
        case 0x17f89cu: goto label_17f89c;
        case 0x17f8a0u: goto label_17f8a0;
        case 0x17f8a4u: goto label_17f8a4;
        case 0x17f8a8u: goto label_17f8a8;
        case 0x17f8acu: goto label_17f8ac;
        case 0x17f8b0u: goto label_17f8b0;
        case 0x17f8b4u: goto label_17f8b4;
        case 0x17f8b8u: goto label_17f8b8;
        case 0x17f8bcu: goto label_17f8bc;
        case 0x17f8c0u: goto label_17f8c0;
        case 0x17f8c4u: goto label_17f8c4;
        case 0x17f8c8u: goto label_17f8c8;
        case 0x17f8ccu: goto label_17f8cc;
        case 0x17f8d0u: goto label_17f8d0;
        case 0x17f8d4u: goto label_17f8d4;
        case 0x17f8d8u: goto label_17f8d8;
        case 0x17f8dcu: goto label_17f8dc;
        case 0x17f8e0u: goto label_17f8e0;
        case 0x17f8e4u: goto label_17f8e4;
        case 0x17f8e8u: goto label_17f8e8;
        case 0x17f8ecu: goto label_17f8ec;
        case 0x17f8f0u: goto label_17f8f0;
        case 0x17f8f4u: goto label_17f8f4;
        default: break;
    }

    ctx->pc = 0x17f7c8u;

label_17f7c8:
    // 0x17f7c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17f7cc:
    // 0x17f7cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17f7d0:
    // 0x17f7d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17f7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17f7d4:
    // 0x17f7d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17f7d8:
    // 0x17f7d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17f7dc:
    // 0x17f7dc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x17f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_17f7e0:
    // 0x17f7e0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_17f7e4:
    if (ctx->pc == 0x17F7E4u) {
        ctx->pc = 0x17F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7E0u;
        // 0x17f7e4: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F7E8u;
        goto label_17f7e8;
    }
    ctx->pc = 0x17F7E0u;
    {
        const bool branch_taken_0x17f7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f7e0) {
            ctx->pc = 0x17F7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F7E0u;
            // 0x17f7e4: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F800u;
            goto label_17f800;
        }
    }
    ctx->pc = 0x17F7E8u;
label_17f7e8:
    // 0x17f7e8: 0xc05fe7a  jal         func_17F9E8
label_17f7ec:
    if (ctx->pc == 0x17F7ECu) {
        ctx->pc = 0x17F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7E8u;
        // 0x17f7ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F7F0u;
        goto label_17f7f0;
    }
    ctx->pc = 0x17F7E8u;
    SET_GPR_U32(ctx, 31, 0x17F7F0u);
    ctx->pc = 0x17F7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7E8u;
    // 0x17f7ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9E8u, 0x17F7E8u, 0x17F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7F0u;
label_17f7f0:
    // 0x17f7f0: 0xc11a4fc  jal         func_4693F0
label_17f7f4:
    if (ctx->pc == 0x17F7F4u) {
        ctx->pc = 0x17F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7F0u;
        // 0x17f7f4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F7F8u;
        goto label_17f7f8;
    }
    ctx->pc = 0x17F7F0u;
    SET_GPR_U32(ctx, 31, 0x17F7F8u);
    ctx->pc = 0x17F7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7F0u;
    // 0x17f7f4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x17F7F0u, 0x17F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7F8u;
label_17f7f8:
    // 0x17f7f8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x17f7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_17f7fc:
    // 0x17f7fc: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x17f7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_17f800:
    // 0x17f800: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_17f804:
    if (ctx->pc == 0x17F804u) {
        ctx->pc = 0x17F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F800u;
        // 0x17f804: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F808u;
        goto label_17f808;
    }
    ctx->pc = 0x17F800u;
    {
        const bool branch_taken_0x17f800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F800u;
        // 0x17f804: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f800) {
            ctx->pc = 0x17F830u;
            goto label_17f830;
        }
    }
    ctx->pc = 0x17F808u;
label_17f808:
    // 0x17f808: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17f80c:
    // 0x17f80c: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x17f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_17f810:
    // 0x17f810: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17f810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17f814:
    // 0x17f814: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17f814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_17f818:
    // 0x17f818: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17f818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17f81c:
    // 0x17f81c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x17f81cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_17f820:
    // 0x17f820: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x17f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17f824:
    // 0x17f824: 0x40f809  jalr        $v0
label_17f828:
    if (ctx->pc == 0x17F828u) {
        ctx->pc = 0x17F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F824u;
        // 0x17f828: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F82Cu;
        goto label_17f82c;
    }
    ctx->pc = 0x17F824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17F82Cu);
        ctx->pc = 0x17F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F824u;
        // 0x17f828: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F824u, 0x17F82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F82Cu;
label_17f82c:
    // 0x17f82c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_17f830:
    // 0x17f830: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x17f830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_17f834:
    // 0x17f834: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_17f838:
    if (ctx->pc == 0x17F838u) {
        ctx->pc = 0x17F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F834u;
        // 0x17f838: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F83Cu;
        goto label_17f83c;
    }
    ctx->pc = 0x17F834u;
    {
        const bool branch_taken_0x17f834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F834u;
        // 0x17f838: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f834) {
            ctx->pc = 0x17F864u;
            goto label_17f864;
        }
    }
    ctx->pc = 0x17F83Cu;
label_17f83c:
    // 0x17f83c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17f840:
    // 0x17f840: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x17f840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_17f844:
    // 0x17f844: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17f848:
    // 0x17f848: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17f848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_17f84c:
    // 0x17f84c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17f850:
    // 0x17f850: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x17f850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_17f854:
    // 0x17f854: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x17f854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17f858:
    // 0x17f858: 0x40f809  jalr        $v0
label_17f85c:
    if (ctx->pc == 0x17F85Cu) {
        ctx->pc = 0x17F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F858u;
        // 0x17f85c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F860u;
        goto label_17f860;
    }
    ctx->pc = 0x17F858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17F860u);
        ctx->pc = 0x17F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F858u;
        // 0x17f85c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F858u, 0x17F860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F860u;
label_17f860:
    // 0x17f860: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17f860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_17f864:
    // 0x17f864: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x17f864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_17f868:
    // 0x17f868: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_17f86c:
    if (ctx->pc == 0x17F86Cu) {
        ctx->pc = 0x17F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F868u;
        // 0x17f86c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F870u;
        goto label_17f870;
    }
    ctx->pc = 0x17F868u;
    {
        const bool branch_taken_0x17f868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F868u;
        // 0x17f86c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f868) {
            ctx->pc = 0x17F898u;
            goto label_17f898;
        }
    }
    ctx->pc = 0x17F870u;
label_17f870:
    // 0x17f870: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17f874:
    // 0x17f874: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x17f874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_17f878:
    // 0x17f878: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17f878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17f87c:
    // 0x17f87c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_17f880:
    // 0x17f880: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17f880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17f884:
    // 0x17f884: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x17f884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_17f888:
    // 0x17f888: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x17f888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17f88c:
    // 0x17f88c: 0x40f809  jalr        $v0
label_17f890:
    if (ctx->pc == 0x17F890u) {
        ctx->pc = 0x17F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F88Cu;
        // 0x17f890: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F894u;
        goto label_17f894;
    }
    ctx->pc = 0x17F88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17F894u);
        ctx->pc = 0x17F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F88Cu;
        // 0x17f890: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F88Cu, 0x17F894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F894u;
label_17f894:
    // 0x17f894: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17f894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_17f898:
    // 0x17f898: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x17f898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_17f89c:
    // 0x17f89c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_17f8a0:
    if (ctx->pc == 0x17F8A0u) {
        ctx->pc = 0x17F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F89Cu;
        // 0x17f8a0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F8A4u;
        goto label_17f8a4;
    }
    ctx->pc = 0x17F89Cu;
    {
        const bool branch_taken_0x17f89c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F89Cu;
        // 0x17f8a0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f89c) {
            ctx->pc = 0x17F8CCu;
            goto label_17f8cc;
        }
    }
    ctx->pc = 0x17F8A4u;
label_17f8a4:
    // 0x17f8a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17f8a8:
    // 0x17f8a8: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x17f8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_17f8ac:
    // 0x17f8ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17f8b0:
    // 0x17f8b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_17f8b4:
    // 0x17f8b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17f8b8:
    // 0x17f8b8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x17f8b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_17f8bc:
    // 0x17f8bc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x17f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17f8c0:
    // 0x17f8c0: 0x40f809  jalr        $v0
label_17f8c4:
    if (ctx->pc == 0x17F8C4u) {
        ctx->pc = 0x17F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8C0u;
        // 0x17f8c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F8C8u;
        goto label_17f8c8;
    }
    ctx->pc = 0x17F8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17F8C8u);
        ctx->pc = 0x17F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8C0u;
        // 0x17f8c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F8C0u, 0x17F8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F8C8u;
label_17f8c8:
    // 0x17f8c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_17f8cc:
    // 0x17f8cc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x17f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_17f8d0:
    // 0x17f8d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17f8d4:
    // 0x17f8d4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x17f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_17f8d8:
    // 0x17f8d8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x17f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_17f8dc:
    // 0x17f8dc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x17f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_17f8e0:
    // 0x17f8e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17f8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17f8e4:
    // 0x17f8e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f8e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17f8e8:
    // 0x17f8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f8ec:
    // 0x17f8ec: 0x3e00008  jr          $ra
label_17f8f0:
    if (ctx->pc == 0x17F8F0u) {
        ctx->pc = 0x17F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8ECu;
        // 0x17f8f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F8F4u;
        goto label_17f8f4;
    }
    ctx->pc = 0x17F8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8ECu;
        // 0x17f8f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F8F4u;
label_17f8f4:
    // 0x17f8f4: 0x0  nop
    ctx->pc = 0x17f8f4u;
    // NOP
    ctx->pc = 0x17f8f8u;
}
