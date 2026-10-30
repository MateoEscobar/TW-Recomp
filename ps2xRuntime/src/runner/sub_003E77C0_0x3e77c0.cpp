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

// Function: sub_003E77C0
// Address: 0x3e77c0 - 0x3e7958
void sub_003E77C0_0x3e77c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E77C0_0x3e77c0");
#endif

    switch (ctx->pc) {
        case 0x3e77c0u: goto label_3e77c0;
        case 0x3e77c4u: goto label_3e77c4;
        case 0x3e77c8u: goto label_3e77c8;
        case 0x3e77ccu: goto label_3e77cc;
        case 0x3e77d0u: goto label_3e77d0;
        case 0x3e77d4u: goto label_3e77d4;
        case 0x3e77d8u: goto label_3e77d8;
        case 0x3e77dcu: goto label_3e77dc;
        case 0x3e77e0u: goto label_3e77e0;
        case 0x3e77e4u: goto label_3e77e4;
        case 0x3e77e8u: goto label_3e77e8;
        case 0x3e77ecu: goto label_3e77ec;
        case 0x3e77f0u: goto label_3e77f0;
        case 0x3e77f4u: goto label_3e77f4;
        case 0x3e77f8u: goto label_3e77f8;
        case 0x3e77fcu: goto label_3e77fc;
        case 0x3e7800u: goto label_3e7800;
        case 0x3e7804u: goto label_3e7804;
        case 0x3e7808u: goto label_3e7808;
        case 0x3e780cu: goto label_3e780c;
        case 0x3e7810u: goto label_3e7810;
        case 0x3e7814u: goto label_3e7814;
        case 0x3e7818u: goto label_3e7818;
        case 0x3e781cu: goto label_3e781c;
        case 0x3e7820u: goto label_3e7820;
        case 0x3e7824u: goto label_3e7824;
        case 0x3e7828u: goto label_3e7828;
        case 0x3e782cu: goto label_3e782c;
        case 0x3e7830u: goto label_3e7830;
        case 0x3e7834u: goto label_3e7834;
        case 0x3e7838u: goto label_3e7838;
        case 0x3e783cu: goto label_3e783c;
        case 0x3e7840u: goto label_3e7840;
        case 0x3e7844u: goto label_3e7844;
        case 0x3e7848u: goto label_3e7848;
        case 0x3e784cu: goto label_3e784c;
        case 0x3e7850u: goto label_3e7850;
        case 0x3e7854u: goto label_3e7854;
        case 0x3e7858u: goto label_3e7858;
        case 0x3e785cu: goto label_3e785c;
        case 0x3e7860u: goto label_3e7860;
        case 0x3e7864u: goto label_3e7864;
        case 0x3e7868u: goto label_3e7868;
        case 0x3e786cu: goto label_3e786c;
        case 0x3e7870u: goto label_3e7870;
        case 0x3e7874u: goto label_3e7874;
        case 0x3e7878u: goto label_3e7878;
        case 0x3e787cu: goto label_3e787c;
        case 0x3e7880u: goto label_3e7880;
        case 0x3e7884u: goto label_3e7884;
        case 0x3e7888u: goto label_3e7888;
        case 0x3e788cu: goto label_3e788c;
        case 0x3e7890u: goto label_3e7890;
        case 0x3e7894u: goto label_3e7894;
        case 0x3e7898u: goto label_3e7898;
        case 0x3e789cu: goto label_3e789c;
        case 0x3e78a0u: goto label_3e78a0;
        case 0x3e78a4u: goto label_3e78a4;
        case 0x3e78a8u: goto label_3e78a8;
        case 0x3e78acu: goto label_3e78ac;
        case 0x3e78b0u: goto label_3e78b0;
        case 0x3e78b4u: goto label_3e78b4;
        case 0x3e78b8u: goto label_3e78b8;
        case 0x3e78bcu: goto label_3e78bc;
        case 0x3e78c0u: goto label_3e78c0;
        case 0x3e78c4u: goto label_3e78c4;
        case 0x3e78c8u: goto label_3e78c8;
        case 0x3e78ccu: goto label_3e78cc;
        case 0x3e78d0u: goto label_3e78d0;
        case 0x3e78d4u: goto label_3e78d4;
        case 0x3e78d8u: goto label_3e78d8;
        case 0x3e78dcu: goto label_3e78dc;
        case 0x3e78e0u: goto label_3e78e0;
        case 0x3e78e4u: goto label_3e78e4;
        case 0x3e78e8u: goto label_3e78e8;
        case 0x3e78ecu: goto label_3e78ec;
        case 0x3e78f0u: goto label_3e78f0;
        case 0x3e78f4u: goto label_3e78f4;
        case 0x3e78f8u: goto label_3e78f8;
        case 0x3e78fcu: goto label_3e78fc;
        case 0x3e7900u: goto label_3e7900;
        case 0x3e7904u: goto label_3e7904;
        case 0x3e7908u: goto label_3e7908;
        case 0x3e790cu: goto label_3e790c;
        case 0x3e7910u: goto label_3e7910;
        case 0x3e7914u: goto label_3e7914;
        case 0x3e7918u: goto label_3e7918;
        case 0x3e791cu: goto label_3e791c;
        case 0x3e7920u: goto label_3e7920;
        case 0x3e7924u: goto label_3e7924;
        case 0x3e7928u: goto label_3e7928;
        case 0x3e792cu: goto label_3e792c;
        case 0x3e7930u: goto label_3e7930;
        case 0x3e7934u: goto label_3e7934;
        case 0x3e7938u: goto label_3e7938;
        case 0x3e793cu: goto label_3e793c;
        case 0x3e7940u: goto label_3e7940;
        case 0x3e7944u: goto label_3e7944;
        case 0x3e7948u: goto label_3e7948;
        case 0x3e794cu: goto label_3e794c;
        case 0x3e7950u: goto label_3e7950;
        case 0x3e7954u: goto label_3e7954;
        default: break;
    }

    ctx->pc = 0x3e77c0u;

label_3e77c0:
    // 0x3e77c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3e77c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3e77c4:
    // 0x3e77c4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3e77c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3e77c8:
    // 0x3e77c8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3e77c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3e77cc:
    // 0x3e77cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e77ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e77d0:
    // 0x3e77d0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3e77d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3e77d4:
    // 0x3e77d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3e77d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e77d8:
    // 0x3e77d8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3e77d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3e77dc:
    // 0x3e77dc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3e77dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e77e0:
    // 0x3e77e0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3e77e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3e77e4:
    // 0x3e77e4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3e77e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3e77e8:
    // 0x3e77e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e77e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3e77ec:
    // 0x3e77ec: 0xc0ea146  jal         func_3A8518
label_3e77f0:
    if (ctx->pc == 0x3E77F0u) {
        ctx->pc = 0x3E77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E77ECu;
        // 0x3e77f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E77F4u;
        goto label_3e77f4;
    }
    ctx->pc = 0x3E77ECu;
    SET_GPR_U32(ctx, 31, 0x3E77F4u);
    ctx->pc = 0x3E77F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E77ECu;
    // 0x3e77f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E77ECu, 0x3E77F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E77F4u;
label_3e77f4:
    // 0x3e77f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e77f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e77f8:
    // 0x3e77f8: 0xc0ea12a  jal         func_3A84A8
label_3e77fc:
    if (ctx->pc == 0x3E77FCu) {
        ctx->pc = 0x3E77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E77F8u;
        // 0x3e77fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7800u;
        goto label_3e7800;
    }
    ctx->pc = 0x3E77F8u;
    SET_GPR_U32(ctx, 31, 0x3E7800u);
    ctx->pc = 0x3E77FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E77F8u;
    // 0x3e77fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E77F8u, 0x3E7800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7800u;
label_3e7800:
    // 0x3e7800: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e7800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e7804:
    // 0x3e7804: 0xc0ea12a  jal         func_3A84A8
label_3e7808:
    if (ctx->pc == 0x3E7808u) {
        ctx->pc = 0x3E7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7804u;
        // 0x3e7808: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E780Cu;
        goto label_3e780c;
    }
    ctx->pc = 0x3E7804u;
    SET_GPR_U32(ctx, 31, 0x3E780Cu);
    ctx->pc = 0x3E7808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7804u;
    // 0x3e7808: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E7804u, 0x3E780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E780Cu;
label_3e780c:
    // 0x3e780c: 0xc0ea146  jal         func_3A8518
label_3e7810:
    if (ctx->pc == 0x3E7810u) {
        ctx->pc = 0x3E7810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E780Cu;
        // 0x3e7810: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7814u;
        goto label_3e7814;
    }
    ctx->pc = 0x3E780Cu;
    SET_GPR_U32(ctx, 31, 0x3E7814u);
    ctx->pc = 0x3E7810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E780Cu;
    // 0x3e7810: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E780Cu, 0x3E7814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7814u;
label_3e7814:
    // 0x3e7814: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e7814u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7818:
    // 0x3e7818: 0xc0ea14c  jal         func_3A8530
label_3e781c:
    if (ctx->pc == 0x3E781Cu) {
        ctx->pc = 0x3E781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7818u;
        // 0x3e781c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7820u;
        goto label_3e7820;
    }
    ctx->pc = 0x3E7818u;
    SET_GPR_U32(ctx, 31, 0x3E7820u);
    ctx->pc = 0x3E781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7818u;
    // 0x3e781c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E7818u, 0x3E7820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7820u;
label_3e7820:
    // 0x3e7820: 0xc08a61a  jal         func_229868
label_3e7824:
    if (ctx->pc == 0x3E7824u) {
        ctx->pc = 0x3E7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7820u;
        // 0x3e7824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7828u;
        goto label_3e7828;
    }
    ctx->pc = 0x3E7820u;
    SET_GPR_U32(ctx, 31, 0x3E7828u);
    ctx->pc = 0x3E7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7820u;
    // 0x3e7824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3E7820u, 0x3E7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7828u;
label_3e7828:
    // 0x3e7828: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e7828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e782c:
    // 0x3e782c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e782cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7830:
    // 0x3e7830: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3e7830u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3e7834:
    // 0x3e7834: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3e7834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3e7838:
    // 0x3e7838: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3e7838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3e783c:
    // 0x3e783c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3e783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3e7840:
    // 0x3e7840: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e7840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7844:
    // 0x3e7844: 0x40f809  jalr        $v0
label_3e7848:
    if (ctx->pc == 0x3E7848u) {
        ctx->pc = 0x3E7848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7844u;
        // 0x3e7848: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E784Cu;
        goto label_3e784c;
    }
    ctx->pc = 0x3E7844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E784Cu);
        ctx->pc = 0x3E7848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7844u;
        // 0x3e7848: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7844u, 0x3E784Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E784Cu;
label_3e784c:
    // 0x3e784c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e784cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e7850:
    // 0x3e7850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e7850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7854:
    // 0x3e7854: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3e7854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3e7858:
    // 0x3e7858: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3e7858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3e785c:
    // 0x3e785c: 0x40f809  jalr        $v0
label_3e7860:
    if (ctx->pc == 0x3E7860u) {
        ctx->pc = 0x3E7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E785Cu;
        // 0x3e7860: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7864u;
        goto label_3e7864;
    }
    ctx->pc = 0x3E785Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E7864u);
        ctx->pc = 0x3E7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E785Cu;
        // 0x3e7860: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E785Cu, 0x3E7864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7864u;
label_3e7864:
    // 0x3e7864: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3e7864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e7868:
    // 0x3e7868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e7868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e786c:
    // 0x3e786c: 0xc0e8604  jal         func_3A1810
label_3e7870:
    if (ctx->pc == 0x3E7870u) {
        ctx->pc = 0x3E7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E786Cu;
        // 0x3e7870: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7874u;
        goto label_3e7874;
    }
    ctx->pc = 0x3E786Cu;
    SET_GPR_U32(ctx, 31, 0x3E7874u);
    ctx->pc = 0x3E7870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E786Cu;
    // 0x3e7870: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3E786Cu, 0x3E7874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7874u;
label_3e7874:
    // 0x3e7874: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x3e7874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3e7878:
    // 0x3e7878: 0x3c03f9ff  lui         $v1, 0xF9FF
    ctx->pc = 0x3e7878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63999 << 16));
label_3e787c:
    // 0x3e787c: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x3e787cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_3e7880:
    // 0x3e7880: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3e7880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3e7884:
    // 0x3e7884: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3e7884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3e7888:
    // 0x3e7888: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3e7888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e788c:
    // 0x3e788c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e7890:
    // 0x3e7890: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x3e7890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3e7894:
    // 0x3e7894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e7894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e7898:
    // 0x3e7898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e789c:
    // 0x3e789c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e789cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e78a0:
    // 0x3e78a0: 0xc0e8ee8  jal         func_3A3BA0
label_3e78a4:
    if (ctx->pc == 0x3E78A4u) {
        ctx->pc = 0x3E78A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E78A0u;
        // 0x3e78a4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E78A8u;
        goto label_3e78a8;
    }
    ctx->pc = 0x3E78A0u;
    SET_GPR_U32(ctx, 31, 0x3E78A8u);
    ctx->pc = 0x3E78A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E78A0u;
    // 0x3e78a4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3BA0u, 0x3E78A0u, 0x3E78A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E78A8u;
label_3e78a8:
    // 0x3e78a8: 0xc087408  jal         func_21D020
label_3e78ac:
    if (ctx->pc == 0x3E78ACu) {
        ctx->pc = 0x3E78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E78A8u;
        // 0x3e78ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E78B0u;
        goto label_3e78b0;
    }
    ctx->pc = 0x3E78A8u;
    SET_GPR_U32(ctx, 31, 0x3E78B0u);
    ctx->pc = 0x3E78ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E78A8u;
    // 0x3e78ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x3E78A8u, 0x3E78B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E78B0u;
label_3e78b0:
    // 0x3e78b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3e78b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3e78b4:
    // 0x3e78b4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3e78b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3e78b8:
    // 0x3e78b8: 0xc136b24  jal         func_4DAC90
label_3e78bc:
    if (ctx->pc == 0x3E78BCu) {
        ctx->pc = 0x3E78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E78B8u;
        // 0x3e78bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E78C0u;
        goto label_3e78c0;
    }
    ctx->pc = 0x3E78B8u;
    SET_GPR_U32(ctx, 31, 0x3E78C0u);
    ctx->pc = 0x3E78BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E78B8u;
    // 0x3e78bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E78B8u, 0x3E78C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E78C0u;
label_3e78c0:
    // 0x3e78c0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3e78c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e78c4:
    // 0x3e78c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e78c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e78c8:
    // 0x3e78c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3e78c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e78cc:
    // 0x3e78cc: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3e78ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3e78d0:
    // 0x3e78d0: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x3e78d0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_3e78d4:
    // 0x3e78d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e78d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e78d8:
    // 0x3e78d8: 0xc0e8ee8  jal         func_3A3BA0
label_3e78dc:
    if (ctx->pc == 0x3E78DCu) {
        ctx->pc = 0x3E78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E78D8u;
        // 0x3e78dc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E78E0u;
        goto label_3e78e0;
    }
    ctx->pc = 0x3E78D8u;
    SET_GPR_U32(ctx, 31, 0x3E78E0u);
    ctx->pc = 0x3E78DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E78D8u;
    // 0x3e78dc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3BA0u, 0x3E78D8u, 0x3E78E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E78E0u;
label_3e78e0:
    // 0x3e78e0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e78e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e78e4:
    // 0x3e78e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e78e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e78e8:
    // 0x3e78e8: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x3e78e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_3e78ec:
    // 0x3e78ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e78ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e78f0:
    // 0x3e78f0: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x3e78f0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_3e78f4:
    // 0x3e78f4: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3e78f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3e78f8:
    // 0x3e78f8: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3e78f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_3e78fc:
    // 0x3e78fc: 0xc0ea176  jal         func_3A85D8
label_3e7900:
    if (ctx->pc == 0x3E7900u) {
        ctx->pc = 0x3E7900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E78FCu;
        // 0x3e7900: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7904u;
        goto label_3e7904;
    }
    ctx->pc = 0x3E78FCu;
    SET_GPR_U32(ctx, 31, 0x3E7904u);
    ctx->pc = 0x3E7900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E78FCu;
    // 0x3e7900: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3E78FCu, 0x3E7904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7904u;
label_3e7904:
    // 0x3e7904: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e7904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e7908:
    // 0x3e7908: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3e7908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e790c:
    // 0x3e790c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3e790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e7910:
    // 0x3e7910: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3e7910u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3e7914:
    // 0x3e7914: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3e7914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3e7918:
    // 0x3e7918: 0x60f809  jalr        $v1
label_3e791c:
    if (ctx->pc == 0x3E791Cu) {
        ctx->pc = 0x3E791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7918u;
        // 0x3e791c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7920u;
        goto label_3e7920;
    }
    ctx->pc = 0x3E7918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E7920u);
        ctx->pc = 0x3E791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7918u;
        // 0x3e791c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7918u, 0x3E7920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7920u;
label_3e7920:
    // 0x3e7920: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e7920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e7924:
    // 0x3e7924: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x3e7924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_3e7928:
    // 0x3e7928: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3e7928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3e792c:
    // 0x3e792c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e7930:
    // 0x3e7930: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3e7930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3e7934:
    // 0x3e7934: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3e7934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3e7938:
    // 0x3e7938: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3e7938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3e793c:
    // 0x3e793c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3e793cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e7940:
    // 0x3e7940: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3e7940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e7944:
    // 0x3e7944: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3e7944u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e7948:
    // 0x3e7948: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e7948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3e794c:
    // 0x3e794c: 0x3e00008  jr          $ra
label_3e7950:
    if (ctx->pc == 0x3E7950u) {
        ctx->pc = 0x3E7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E794Cu;
        // 0x3e7950: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7954u;
        goto label_3e7954;
    }
    ctx->pc = 0x3E794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E794Cu;
        // 0x3e7950: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E794Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7954u;
label_3e7954:
    // 0x3e7954: 0x0  nop
    ctx->pc = 0x3e7954u;
    // NOP
    ctx->pc = 0x3e7958u;
}
