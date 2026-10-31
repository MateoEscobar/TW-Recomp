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

// Function: sub_00272878
// Address: 0x272878 - 0x272918
void sub_00272878_0x272878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272878_0x272878");
#endif

    switch (ctx->pc) {
        case 0x272878u: goto label_272878;
        case 0x27287cu: goto label_27287c;
        case 0x272880u: goto label_272880;
        case 0x272884u: goto label_272884;
        case 0x272888u: goto label_272888;
        case 0x27288cu: goto label_27288c;
        case 0x272890u: goto label_272890;
        case 0x272894u: goto label_272894;
        case 0x272898u: goto label_272898;
        case 0x27289cu: goto label_27289c;
        case 0x2728a0u: goto label_2728a0;
        case 0x2728a4u: goto label_2728a4;
        case 0x2728a8u: goto label_2728a8;
        case 0x2728acu: goto label_2728ac;
        case 0x2728b0u: goto label_2728b0;
        case 0x2728b4u: goto label_2728b4;
        case 0x2728b8u: goto label_2728b8;
        case 0x2728bcu: goto label_2728bc;
        case 0x2728c0u: goto label_2728c0;
        case 0x2728c4u: goto label_2728c4;
        case 0x2728c8u: goto label_2728c8;
        case 0x2728ccu: goto label_2728cc;
        case 0x2728d0u: goto label_2728d0;
        case 0x2728d4u: goto label_2728d4;
        case 0x2728d8u: goto label_2728d8;
        case 0x2728dcu: goto label_2728dc;
        case 0x2728e0u: goto label_2728e0;
        case 0x2728e4u: goto label_2728e4;
        case 0x2728e8u: goto label_2728e8;
        case 0x2728ecu: goto label_2728ec;
        case 0x2728f0u: goto label_2728f0;
        case 0x2728f4u: goto label_2728f4;
        case 0x2728f8u: goto label_2728f8;
        case 0x2728fcu: goto label_2728fc;
        case 0x272900u: goto label_272900;
        case 0x272904u: goto label_272904;
        case 0x272908u: goto label_272908;
        case 0x27290cu: goto label_27290c;
        case 0x272910u: goto label_272910;
        case 0x272914u: goto label_272914;
        default: break;
    }

    ctx->pc = 0x272878u;

label_272878:
    // 0x272878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_27287c:
    // 0x27287c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27287cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_272880:
    // 0x272880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x272880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_272884:
    // 0x272884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_272888:
    // 0x272888: 0xc0e409a  jal         func_390268
label_27288c:
    if (ctx->pc == 0x27288Cu) {
        ctx->pc = 0x27288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272888u;
        // 0x27288c: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272890u;
        goto label_272890;
    }
    ctx->pc = 0x272888u;
    SET_GPR_U32(ctx, 31, 0x272890u);
    ctx->pc = 0x27288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272888u;
    // 0x27288c: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x272888u, 0x272890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272890u;
label_272890:
    // 0x272890: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_272894:
    if (ctx->pc == 0x272894u) {
        ctx->pc = 0x272894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272890u;
        // 0x272894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272898u;
        goto label_272898;
    }
    ctx->pc = 0x272890u;
    {
        const bool branch_taken_0x272890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272890u;
        // 0x272894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272890) {
            ctx->pc = 0x2728A8u;
            goto label_2728a8;
        }
    }
    ctx->pc = 0x272898u;
label_272898:
    // 0x272898: 0xc08b35e  jal         func_22CD78
label_27289c:
    if (ctx->pc == 0x27289Cu) {
        ctx->pc = 0x27289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272898u;
        // 0x27289c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2728A0u;
        goto label_2728a0;
    }
    ctx->pc = 0x272898u;
    SET_GPR_U32(ctx, 31, 0x2728A0u);
    ctx->pc = 0x27289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272898u;
    // 0x27289c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CD78u, 0x272898u, 0x2728A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728A0u;
label_2728a0:
    // 0x2728a0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2728a4:
    if (ctx->pc == 0x2728A4u) {
        ctx->pc = 0x2728A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728A0u;
        // 0x2728a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2728A8u;
        goto label_2728a8;
    }
    ctx->pc = 0x2728A0u;
    {
        const bool branch_taken_0x2728a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2728A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728A0u;
        // 0x2728a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728a0) {
            ctx->pc = 0x27290Cu;
            goto label_27290c;
        }
    }
    ctx->pc = 0x2728A8u;
label_2728a8:
    // 0x2728a8: 0x820401b0  lb          $a0, 0x1B0($s0)
    ctx->pc = 0x2728a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_2728ac:
    // 0x2728ac: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x2728acu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_2728b0:
    // 0x2728b0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_2728b4:
    if (ctx->pc == 0x2728B4u) {
        ctx->pc = 0x2728B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728B0u;
        // 0x2728b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2728B8u;
        goto label_2728b8;
    }
    ctx->pc = 0x2728B0u;
    {
        const bool branch_taken_0x2728b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2728b0) {
            ctx->pc = 0x2728B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2728B0u;
            // 0x2728b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27290Cu;
            goto label_27290c;
        }
    }
    ctx->pc = 0x2728B8u;
label_2728b8:
    // 0x2728b8: 0xc047e72  jal         func_11F9C8
label_2728bc:
    if (ctx->pc == 0x2728BCu) {
        ctx->pc = 0x2728C0u;
        goto label_2728c0;
    }
    ctx->pc = 0x2728B8u;
    SET_GPR_U32(ctx, 31, 0x2728C0u);
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x2728B8u, 0x2728C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728C0u;
label_2728c0:
    // 0x2728c0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_2728c4:
    if (ctx->pc == 0x2728C4u) {
        ctx->pc = 0x2728C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728C0u;
        // 0x2728c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2728C8u;
        goto label_2728c8;
    }
    ctx->pc = 0x2728C0u;
    {
        const bool branch_taken_0x2728c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2728c0) {
            ctx->pc = 0x2728C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2728C0u;
            // 0x2728c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27290Cu;
            goto label_27290c;
        }
    }
    ctx->pc = 0x2728C8u;
label_2728c8:
    // 0x2728c8: 0xc047e72  jal         func_11F9C8
label_2728cc:
    if (ctx->pc == 0x2728CCu) {
        ctx->pc = 0x2728CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728C8u;
        // 0x2728cc: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2728D0u;
        goto label_2728d0;
    }
    ctx->pc = 0x2728C8u;
    SET_GPR_U32(ctx, 31, 0x2728D0u);
    ctx->pc = 0x2728CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2728C8u;
    // 0x2728cc: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x2728C8u, 0x2728D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728D0u;
label_2728d0:
    // 0x2728d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2728d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2728d4:
    // 0x2728d4: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x2728d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_2728d8:
    // 0x2728d8: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x2728d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_2728dc:
    // 0x2728dc: 0xa0f809  jalr        $a1
label_2728e0:
    if (ctx->pc == 0x2728E0u) {
        ctx->pc = 0x2728E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728DCu;
        // 0x2728e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2728E4u;
        goto label_2728e4;
    }
    ctx->pc = 0x2728DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2728E4u);
        ctx->pc = 0x2728E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728DCu;
        // 0x2728e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2728DCu, 0x2728E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2728E4u;
label_2728e4:
    // 0x2728e4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2728e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2728e8:
    // 0x2728e8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_2728ec:
    if (ctx->pc == 0x2728ECu) {
        ctx->pc = 0x2728ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728E8u;
        // 0x2728ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2728F0u;
        goto label_2728f0;
    }
    ctx->pc = 0x2728E8u;
    {
        const bool branch_taken_0x2728e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2728e8) {
            ctx->pc = 0x2728ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2728E8u;
            // 0x2728ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27290Cu;
            goto label_27290c;
        }
    }
    ctx->pc = 0x2728F0u;
label_2728f0:
    // 0x2728f0: 0x820401b0  lb          $a0, 0x1B0($s0)
    ctx->pc = 0x2728f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_2728f4:
    // 0x2728f4: 0xc047f60  jal         func_11FD80
label_2728f8:
    if (ctx->pc == 0x2728F8u) {
        ctx->pc = 0x2728F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728F4u;
        // 0x2728f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2728FCu;
        goto label_2728fc;
    }
    ctx->pc = 0x2728F4u;
    SET_GPR_U32(ctx, 31, 0x2728FCu);
    ctx->pc = 0x2728F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2728F4u;
    // 0x2728f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD80u, 0x2728F4u, 0x2728FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728FCu;
label_2728fc:
    // 0x2728fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2728fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272900:
    // 0x272900: 0xac400248  sw          $zero, 0x248($v0)
    ctx->pc = 0x272900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
label_272904:
    // 0x272904: 0xac43024c  sw          $v1, 0x24C($v0)
    ctx->pc = 0x272904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 588), GPR_U32(ctx, 3));
label_272908:
    // 0x272908: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x272908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27290c:
    // 0x27290c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27290cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_272910:
    // 0x272910: 0x3e00008  jr          $ra
label_272914:
    if (ctx->pc == 0x272914u) {
        ctx->pc = 0x272914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272910u;
        // 0x272914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272918u;
        goto label_fallthrough_0x272910;
    }
    ctx->pc = 0x272910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272910u;
        // 0x272914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x272910:
    ctx->pc = 0x272918u;
}
