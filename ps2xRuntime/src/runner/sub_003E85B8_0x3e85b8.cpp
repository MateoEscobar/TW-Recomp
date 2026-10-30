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

// Function: sub_003E85B8
// Address: 0x3e85b8 - 0x3e8678
void sub_003E85B8_0x3e85b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E85B8_0x3e85b8");
#endif

    switch (ctx->pc) {
        case 0x3e85b8u: goto label_3e85b8;
        case 0x3e85bcu: goto label_3e85bc;
        case 0x3e85c0u: goto label_3e85c0;
        case 0x3e85c4u: goto label_3e85c4;
        case 0x3e85c8u: goto label_3e85c8;
        case 0x3e85ccu: goto label_3e85cc;
        case 0x3e85d0u: goto label_3e85d0;
        case 0x3e85d4u: goto label_3e85d4;
        case 0x3e85d8u: goto label_3e85d8;
        case 0x3e85dcu: goto label_3e85dc;
        case 0x3e85e0u: goto label_3e85e0;
        case 0x3e85e4u: goto label_3e85e4;
        case 0x3e85e8u: goto label_3e85e8;
        case 0x3e85ecu: goto label_3e85ec;
        case 0x3e85f0u: goto label_3e85f0;
        case 0x3e85f4u: goto label_3e85f4;
        case 0x3e85f8u: goto label_3e85f8;
        case 0x3e85fcu: goto label_3e85fc;
        case 0x3e8600u: goto label_3e8600;
        case 0x3e8604u: goto label_3e8604;
        case 0x3e8608u: goto label_3e8608;
        case 0x3e860cu: goto label_3e860c;
        case 0x3e8610u: goto label_3e8610;
        case 0x3e8614u: goto label_3e8614;
        case 0x3e8618u: goto label_3e8618;
        case 0x3e861cu: goto label_3e861c;
        case 0x3e8620u: goto label_3e8620;
        case 0x3e8624u: goto label_3e8624;
        case 0x3e8628u: goto label_3e8628;
        case 0x3e862cu: goto label_3e862c;
        case 0x3e8630u: goto label_3e8630;
        case 0x3e8634u: goto label_3e8634;
        case 0x3e8638u: goto label_3e8638;
        case 0x3e863cu: goto label_3e863c;
        case 0x3e8640u: goto label_3e8640;
        case 0x3e8644u: goto label_3e8644;
        case 0x3e8648u: goto label_3e8648;
        case 0x3e864cu: goto label_3e864c;
        case 0x3e8650u: goto label_3e8650;
        case 0x3e8654u: goto label_3e8654;
        case 0x3e8658u: goto label_3e8658;
        case 0x3e865cu: goto label_3e865c;
        case 0x3e8660u: goto label_3e8660;
        case 0x3e8664u: goto label_3e8664;
        case 0x3e8668u: goto label_3e8668;
        case 0x3e866cu: goto label_3e866c;
        case 0x3e8670u: goto label_3e8670;
        case 0x3e8674u: goto label_3e8674;
        default: break;
    }

    ctx->pc = 0x3e85b8u;

label_3e85b8:
    // 0x3e85b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e85b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e85bc:
    // 0x3e85bc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3e85bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3e85c0:
    // 0x3e85c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3e85c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3e85c4:
    // 0x3e85c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e85c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e85c8:
    // 0x3e85c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e85c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3e85cc:
    // 0x3e85cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e85ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e85d0:
    // 0x3e85d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e85d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e85d4:
    // 0x3e85d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e85d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e85d8:
    // 0x3e85d8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e85d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e85dc:
    // 0x3e85dc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e85e0:
    // 0x3e85e0: 0x40f809  jalr        $v0
label_3e85e4:
    if (ctx->pc == 0x3E85E4u) {
        ctx->pc = 0x3E85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E85E0u;
        // 0x3e85e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E85E8u;
        goto label_3e85e8;
    }
    ctx->pc = 0x3E85E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E85E8u);
        ctx->pc = 0x3E85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E85E0u;
        // 0x3e85e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E85E0u, 0x3E85E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E85E8u;
label_3e85e8:
    // 0x3e85e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e85e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e85ec:
    // 0x3e85ec: 0xc0ea14c  jal         func_3A8530
label_3e85f0:
    if (ctx->pc == 0x3E85F0u) {
        ctx->pc = 0x3E85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E85ECu;
        // 0x3e85f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E85F4u;
        goto label_3e85f4;
    }
    ctx->pc = 0x3E85ECu;
    SET_GPR_U32(ctx, 31, 0x3E85F4u);
    ctx->pc = 0x3E85F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E85ECu;
    // 0x3e85f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E85ECu, 0x3E85F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E85F4u;
label_3e85f4:
    // 0x3e85f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e85f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e85f8:
    // 0x3e85f8: 0xc0ea12a  jal         func_3A84A8
label_3e85fc:
    if (ctx->pc == 0x3E85FCu) {
        ctx->pc = 0x3E85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E85F8u;
        // 0x3e85fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8600u;
        goto label_3e8600;
    }
    ctx->pc = 0x3E85F8u;
    SET_GPR_U32(ctx, 31, 0x3E8600u);
    ctx->pc = 0x3E85FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E85F8u;
    // 0x3e85fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E85F8u, 0x3E8600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8600u;
label_3e8600:
    // 0x3e8600: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e8600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e8604:
    // 0x3e8604: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e8604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e8608:
    // 0x3e8608: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e8608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e860c:
    // 0x3e860c: 0xc0ea12a  jal         func_3A84A8
label_3e8610:
    if (ctx->pc == 0x3E8610u) {
        ctx->pc = 0x3E8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E860Cu;
        // 0x3e8610: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8614u;
        goto label_3e8614;
    }
    ctx->pc = 0x3E860Cu;
    SET_GPR_U32(ctx, 31, 0x3E8614u);
    ctx->pc = 0x3E8610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E860Cu;
    // 0x3e8610: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E860Cu, 0x3E8614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8614u;
label_3e8614:
    // 0x3e8614: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e8614u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e8618:
    // 0x3e8618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e8618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e861c:
    // 0x3e861c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3e861cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3e8620:
    // 0x3e8620: 0xc0e858c  jal         func_3A1630
label_3e8624:
    if (ctx->pc == 0x3E8624u) {
        ctx->pc = 0x3E8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8620u;
        // 0x3e8624: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8628u;
        goto label_3e8628;
    }
    ctx->pc = 0x3E8620u;
    SET_GPR_U32(ctx, 31, 0x3E8628u);
    ctx->pc = 0x3E8624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8620u;
    // 0x3e8624: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E8620u, 0x3E8628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8628u;
label_3e8628:
    // 0x3e8628: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e8628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e862c:
    // 0x3e862c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e8630:
    // 0x3e8630: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3e8630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3e8634:
    // 0x3e8634: 0x3c05fae6  lui         $a1, 0xFAE6
    ctx->pc = 0x3e8634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64230 << 16));
label_3e8638:
    // 0x3e8638: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3e8638u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3e863c:
    // 0x3e863c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3e863cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e8640:
    // 0x3e8640: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3e8640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3e8644:
    // 0x3e8644: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e8644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e8648:
    // 0x3e8648: 0xc045cb2  jal         func_1172C8
label_3e864c:
    if (ctx->pc == 0x3E864Cu) {
        ctx->pc = 0x3E864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8648u;
        // 0x3e864c: 0x34a53afd  ori         $a1, $a1, 0x3AFD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15101);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8650u;
        goto label_3e8650;
    }
    ctx->pc = 0x3E8648u;
    SET_GPR_U32(ctx, 31, 0x3E8650u);
    ctx->pc = 0x3E864Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8648u;
    // 0x3e864c: 0x34a53afd  ori         $a1, $a1, 0x3AFD (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15101);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3E8648u, 0x3E8650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8650u;
label_3e8650:
    // 0x3e8650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e8650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e8654:
    // 0x3e8654: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3e8654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3e8658:
    // 0x3e8658: 0xc045d08  jal         func_117420
label_3e865c:
    if (ctx->pc == 0x3E865Cu) {
        ctx->pc = 0x3E865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8658u;
        // 0x3e865c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8660u;
        goto label_3e8660;
    }
    ctx->pc = 0x3E8658u;
    SET_GPR_U32(ctx, 31, 0x3E8660u);
    ctx->pc = 0x3E865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8658u;
    // 0x3e865c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117420u, 0x3E8658u, 0x3E8660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8660u;
label_3e8660:
    // 0x3e8660: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3e8660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e8664:
    // 0x3e8664: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3e8664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e8668:
    // 0x3e8668: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e8668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e866c:
    // 0x3e866c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e866cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e8670:
    // 0x3e8670: 0x3e00008  jr          $ra
label_3e8674:
    if (ctx->pc == 0x3E8674u) {
        ctx->pc = 0x3E8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8670u;
        // 0x3e8674: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8678u;
        goto label_fallthrough_0x3e8670;
    }
    ctx->pc = 0x3E8670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8670u;
        // 0x3e8674: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e8670:
    ctx->pc = 0x3E8678u;
}
