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

// Function: sub_004E85E0
// Address: 0x4e85e0 - 0x4e8700
void sub_004E85E0_0x4e85e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E85E0_0x4e85e0");
#endif

    switch (ctx->pc) {
        case 0x4e85e0u: goto label_4e85e0;
        case 0x4e85e4u: goto label_4e85e4;
        case 0x4e85e8u: goto label_4e85e8;
        case 0x4e85ecu: goto label_4e85ec;
        case 0x4e85f0u: goto label_4e85f0;
        case 0x4e85f4u: goto label_4e85f4;
        case 0x4e85f8u: goto label_4e85f8;
        case 0x4e85fcu: goto label_4e85fc;
        case 0x4e8600u: goto label_4e8600;
        case 0x4e8604u: goto label_4e8604;
        case 0x4e8608u: goto label_4e8608;
        case 0x4e860cu: goto label_4e860c;
        case 0x4e8610u: goto label_4e8610;
        case 0x4e8614u: goto label_4e8614;
        case 0x4e8618u: goto label_4e8618;
        case 0x4e861cu: goto label_4e861c;
        case 0x4e8620u: goto label_4e8620;
        case 0x4e8624u: goto label_4e8624;
        case 0x4e8628u: goto label_4e8628;
        case 0x4e862cu: goto label_4e862c;
        case 0x4e8630u: goto label_4e8630;
        case 0x4e8634u: goto label_4e8634;
        case 0x4e8638u: goto label_4e8638;
        case 0x4e863cu: goto label_4e863c;
        case 0x4e8640u: goto label_4e8640;
        case 0x4e8644u: goto label_4e8644;
        case 0x4e8648u: goto label_4e8648;
        case 0x4e864cu: goto label_4e864c;
        case 0x4e8650u: goto label_4e8650;
        case 0x4e8654u: goto label_4e8654;
        case 0x4e8658u: goto label_4e8658;
        case 0x4e865cu: goto label_4e865c;
        case 0x4e8660u: goto label_4e8660;
        case 0x4e8664u: goto label_4e8664;
        case 0x4e8668u: goto label_4e8668;
        case 0x4e866cu: goto label_4e866c;
        case 0x4e8670u: goto label_4e8670;
        case 0x4e8674u: goto label_4e8674;
        case 0x4e8678u: goto label_4e8678;
        case 0x4e867cu: goto label_4e867c;
        case 0x4e8680u: goto label_4e8680;
        case 0x4e8684u: goto label_4e8684;
        case 0x4e8688u: goto label_4e8688;
        case 0x4e868cu: goto label_4e868c;
        case 0x4e8690u: goto label_4e8690;
        case 0x4e8694u: goto label_4e8694;
        case 0x4e8698u: goto label_4e8698;
        case 0x4e869cu: goto label_4e869c;
        case 0x4e86a0u: goto label_4e86a0;
        case 0x4e86a4u: goto label_4e86a4;
        case 0x4e86a8u: goto label_4e86a8;
        case 0x4e86acu: goto label_4e86ac;
        case 0x4e86b0u: goto label_4e86b0;
        case 0x4e86b4u: goto label_4e86b4;
        case 0x4e86b8u: goto label_4e86b8;
        case 0x4e86bcu: goto label_4e86bc;
        case 0x4e86c0u: goto label_4e86c0;
        case 0x4e86c4u: goto label_4e86c4;
        case 0x4e86c8u: goto label_4e86c8;
        case 0x4e86ccu: goto label_4e86cc;
        case 0x4e86d0u: goto label_4e86d0;
        case 0x4e86d4u: goto label_4e86d4;
        case 0x4e86d8u: goto label_4e86d8;
        case 0x4e86dcu: goto label_4e86dc;
        case 0x4e86e0u: goto label_4e86e0;
        case 0x4e86e4u: goto label_4e86e4;
        case 0x4e86e8u: goto label_4e86e8;
        case 0x4e86ecu: goto label_4e86ec;
        case 0x4e86f0u: goto label_4e86f0;
        case 0x4e86f4u: goto label_4e86f4;
        case 0x4e86f8u: goto label_4e86f8;
        case 0x4e86fcu: goto label_4e86fc;
        default: break;
    }

    ctx->pc = 0x4e85e0u;

label_4e85e0:
    // 0x4e85e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e85e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e85e4:
    // 0x4e85e4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4e85e8:
    // 0x4e85e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e85e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e85ec:
    // 0x4e85ec: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4e85ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_4e85f0:
    // 0x4e85f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e85f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e85f4:
    // 0x4e85f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e85f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e85f8:
    // 0x4e85f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e85f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e85fc:
    // 0x4e85fc: 0x2442bd98  addiu       $v0, $v0, -0x4268
    ctx->pc = 0x4e85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950296));
label_4e8600:
    // 0x4e8600: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e8600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e8604:
    // 0x4e8604: 0x2463bdc0  addiu       $v1, $v1, -0x4240
    ctx->pc = 0x4e8604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950336));
label_4e8608:
    // 0x4e8608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e8608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e860c:
    // 0x4e860c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e860cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e8610:
    // 0x4e8610: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x4e8610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_4e8614:
    // 0x4e8614: 0x26243bb0  addiu       $a0, $s1, 0x3BB0
    ctx->pc = 0x4e8614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15280));
label_4e8618:
    // 0x4e8618: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e8618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e861c:
    // 0x4e861c: 0xc079550  jal         func_1E5540
label_4e8620:
    if (ctx->pc == 0x4E8620u) {
        ctx->pc = 0x4E8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E861Cu;
        // 0x4e8620: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8624u;
        goto label_4e8624;
    }
    ctx->pc = 0x4E861Cu;
    SET_GPR_U32(ctx, 31, 0x4E8624u);
    ctx->pc = 0x4E8620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E861Cu;
    // 0x4e8620: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5540u, 0x4E861Cu, 0x4E8624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8624u;
label_4e8624:
    // 0x4e8624: 0x26243a90  addiu       $a0, $s1, 0x3A90
    ctx->pc = 0x4e8624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14992));
label_4e8628:
    // 0x4e8628: 0xc06870c  jal         func_1A1C30
label_4e862c:
    if (ctx->pc == 0x4E862Cu) {
        ctx->pc = 0x4E862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8628u;
        // 0x4e862c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8630u;
        goto label_4e8630;
    }
    ctx->pc = 0x4E8628u;
    SET_GPR_U32(ctx, 31, 0x4E8630u);
    ctx->pc = 0x4E862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8628u;
    // 0x4e862c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4E8628u, 0x4E8630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8630u;
label_4e8630:
    // 0x4e8630: 0x262430a0  addiu       $a0, $s1, 0x30A0
    ctx->pc = 0x4e8630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12448));
label_4e8634:
    // 0x4e8634: 0xc079262  jal         func_1E4988
label_4e8638:
    if (ctx->pc == 0x4E8638u) {
        ctx->pc = 0x4E8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8634u;
        // 0x4e8638: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E863Cu;
        goto label_4e863c;
    }
    ctx->pc = 0x4E8634u;
    SET_GPR_U32(ctx, 31, 0x4E863Cu);
    ctx->pc = 0x4E8638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8634u;
    // 0x4e8638: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4988u, 0x4E8634u, 0x4E863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E863Cu;
label_4e863c:
    // 0x4e863c: 0x26242dd0  addiu       $a0, $s1, 0x2DD0
    ctx->pc = 0x4e863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11728));
label_4e8640:
    // 0x4e8640: 0xc073aac  jal         func_1CEAB0
label_4e8644:
    if (ctx->pc == 0x4E8644u) {
        ctx->pc = 0x4E8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8640u;
        // 0x4e8644: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8648u;
        goto label_4e8648;
    }
    ctx->pc = 0x4E8640u;
    SET_GPR_U32(ctx, 31, 0x4E8648u);
    ctx->pc = 0x4E8644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8640u;
    // 0x4e8644: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEAB0u, 0x4E8640u, 0x4E8648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8648u;
label_4e8648:
    // 0x4e8648: 0x26242cd0  addiu       $a0, $s1, 0x2CD0
    ctx->pc = 0x4e8648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11472));
label_4e864c:
    // 0x4e864c: 0xc06870c  jal         func_1A1C30
label_4e8650:
    if (ctx->pc == 0x4E8650u) {
        ctx->pc = 0x4E8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E864Cu;
        // 0x4e8650: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8654u;
        goto label_4e8654;
    }
    ctx->pc = 0x4E864Cu;
    SET_GPR_U32(ctx, 31, 0x4E8654u);
    ctx->pc = 0x4E8650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E864Cu;
    // 0x4e8650: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4E864Cu, 0x4E8654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8654u;
label_4e8654:
    // 0x4e8654: 0x26242bd0  addiu       $a0, $s1, 0x2BD0
    ctx->pc = 0x4e8654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11216));
label_4e8658:
    // 0x4e8658: 0xc06870c  jal         func_1A1C30
label_4e865c:
    if (ctx->pc == 0x4E865Cu) {
        ctx->pc = 0x4E865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8658u;
        // 0x4e865c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8660u;
        goto label_4e8660;
    }
    ctx->pc = 0x4E8658u;
    SET_GPR_U32(ctx, 31, 0x4E8660u);
    ctx->pc = 0x4E865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8658u;
    // 0x4e865c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4E8658u, 0x4E8660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8660u;
label_4e8660:
    // 0x4e8660: 0x26242b00  addiu       $a0, $s1, 0x2B00
    ctx->pc = 0x4e8660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11008));
label_4e8664:
    // 0x4e8664: 0xc074fde  jal         func_1D3F78
label_4e8668:
    if (ctx->pc == 0x4E8668u) {
        ctx->pc = 0x4E8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8664u;
        // 0x4e8668: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E866Cu;
        goto label_4e866c;
    }
    ctx->pc = 0x4E8664u;
    SET_GPR_U32(ctx, 31, 0x4E866Cu);
    ctx->pc = 0x4E8668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8664u;
    // 0x4e8668: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3F78u, 0x4E8664u, 0x4E866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E866Cu;
label_4e866c:
    // 0x4e866c: 0x262220d0  addiu       $v0, $s1, 0x20D0
    ctx->pc = 0x4e866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8400));
label_4e8670:
    // 0x4e8670: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4e8674:
    if (ctx->pc == 0x4E8674u) {
        ctx->pc = 0x4E8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8670u;
        // 0x4e8674: 0x26302af0  addiu       $s0, $s1, 0x2AF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 10992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8678u;
        goto label_4e8678;
    }
    ctx->pc = 0x4E8670u;
    {
        const bool branch_taken_0x4e8670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8670u;
        // 0x4e8674: 0x26302af0  addiu       $s0, $s1, 0x2AF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 10992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8670) {
            ctx->pc = 0x4E86A8u;
            goto label_4e86a8;
        }
    }
    ctx->pc = 0x4E8678u;
label_4e8678:
    // 0x4e8678: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
label_4e867c:
    if (ctx->pc == 0x4E867Cu) {
        ctx->pc = 0x4E867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8678u;
        // 0x4e867c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8680u;
        goto label_4e8680;
    }
    ctx->pc = 0x4E8678u;
    {
        const bool branch_taken_0x4e8678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x4E867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8678u;
        // 0x4e867c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8678) {
            ctx->pc = 0x4E86A8u;
            goto label_4e86a8;
        }
    }
    ctx->pc = 0x4E8680u;
label_4e8680:
    // 0x4e8680: 0x2610fca0  addiu       $s0, $s0, -0x360
    ctx->pc = 0x4e8680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966432));
label_4e8684:
    // 0x4e8684: 0x0  nop
    ctx->pc = 0x4e8684u;
    // NOP
label_4e8688:
    // 0x4e8688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e8688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e868c:
    // 0x4e868c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e8690:
    // 0x4e8690: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e8690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e8694:
    // 0x4e8694: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e8694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e8698:
    // 0x4e8698: 0x60f809  jalr        $v1
label_4e869c:
    if (ctx->pc == 0x4E869Cu) {
        ctx->pc = 0x4E869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8698u;
        // 0x4e869c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E86A0u;
        goto label_4e86a0;
    }
    ctx->pc = 0x4E8698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E86A0u);
        ctx->pc = 0x4E869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8698u;
        // 0x4e869c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8698u, 0x4E86A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E86A0u;
label_4e86a0:
    // 0x4e86a0: 0x1650fff9  bne         $s2, $s0, . + 4 + (-0x7 << 2)
label_4e86a4:
    if (ctx->pc == 0x4E86A4u) {
        ctx->pc = 0x4E86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E86A0u;
        // 0x4e86a4: 0x2610fca0  addiu       $s0, $s0, -0x360 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E86A8u;
        goto label_4e86a8;
    }
    ctx->pc = 0x4E86A0u;
    {
        const bool branch_taken_0x4e86a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x4E86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E86A0u;
        // 0x4e86a4: 0x2610fca0  addiu       $s0, $s0, -0x360 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e86a0) {
            ctx->pc = 0x4E8688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e8688;
        }
    }
    ctx->pc = 0x4E86A8u;
label_4e86a8:
    // 0x4e86a8: 0x26241bd0  addiu       $a0, $s1, 0x1BD0
    ctx->pc = 0x4e86a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7120));
label_4e86ac:
    // 0x4e86ac: 0xc0759b4  jal         func_1D66D0
label_4e86b0:
    if (ctx->pc == 0x4E86B0u) {
        ctx->pc = 0x4E86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E86ACu;
        // 0x4e86b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E86B4u;
        goto label_4e86b4;
    }
    ctx->pc = 0x4E86ACu;
    SET_GPR_U32(ctx, 31, 0x4E86B4u);
    ctx->pc = 0x4E86B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E86ACu;
    // 0x4e86b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66D0u, 0x4E86ACu, 0x4E86B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E86B4u;
label_4e86b4:
    // 0x4e86b4: 0x26240960  addiu       $a0, $s1, 0x960
    ctx->pc = 0x4e86b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2400));
label_4e86b8:
    // 0x4e86b8: 0xc070e36  jal         func_1C38D8
label_4e86bc:
    if (ctx->pc == 0x4E86BCu) {
        ctx->pc = 0x4E86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E86B8u;
        // 0x4e86bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E86C0u;
        goto label_4e86c0;
    }
    ctx->pc = 0x4E86B8u;
    SET_GPR_U32(ctx, 31, 0x4E86C0u);
    ctx->pc = 0x4E86BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E86B8u;
    // 0x4e86bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38D8u, 0x4E86B8u, 0x4E86C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E86C0u;
label_4e86c0:
    // 0x4e86c0: 0x26240880  addiu       $a0, $s1, 0x880
    ctx->pc = 0x4e86c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2176));
label_4e86c4:
    // 0x4e86c4: 0xc070e36  jal         func_1C38D8
label_4e86c8:
    if (ctx->pc == 0x4E86C8u) {
        ctx->pc = 0x4E86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E86C4u;
        // 0x4e86c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E86CCu;
        goto label_4e86cc;
    }
    ctx->pc = 0x4E86C4u;
    SET_GPR_U32(ctx, 31, 0x4E86CCu);
    ctx->pc = 0x4E86C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E86C4u;
    // 0x4e86c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38D8u, 0x4E86C4u, 0x4E86CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E86CCu;
label_4e86cc:
    // 0x4e86cc: 0x262407a0  addiu       $a0, $s1, 0x7A0
    ctx->pc = 0x4e86ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
label_4e86d0:
    // 0x4e86d0: 0xc070e36  jal         func_1C38D8
label_4e86d4:
    if (ctx->pc == 0x4E86D4u) {
        ctx->pc = 0x4E86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E86D0u;
        // 0x4e86d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E86D8u;
        goto label_4e86d8;
    }
    ctx->pc = 0x4E86D0u;
    SET_GPR_U32(ctx, 31, 0x4E86D8u);
    ctx->pc = 0x4E86D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E86D0u;
    // 0x4e86d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38D8u, 0x4E86D0u, 0x4E86D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E86D8u;
label_4e86d8:
    // 0x4e86d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e86d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e86dc:
    // 0x4e86dc: 0xc074636  jal         func_1D18D8
label_4e86e0:
    if (ctx->pc == 0x4E86E0u) {
        ctx->pc = 0x4E86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E86DCu;
        // 0x4e86e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E86E4u;
        goto label_4e86e4;
    }
    ctx->pc = 0x4E86DCu;
    SET_GPR_U32(ctx, 31, 0x4E86E4u);
    ctx->pc = 0x4E86E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E86DCu;
    // 0x4e86e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18D8u, 0x4E86DCu, 0x4E86E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E86E4u;
label_4e86e4:
    // 0x4e86e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e86e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e86e8:
    // 0x4e86e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e86e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e86ec:
    // 0x4e86ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e86ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e86f0:
    // 0x4e86f0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e86f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e86f4:
    // 0x4e86f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e86f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e86f8:
    // 0x4e86f8: 0x3e00008  jr          $ra
label_4e86fc:
    if (ctx->pc == 0x4E86FCu) {
        ctx->pc = 0x4E86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E86F8u;
        // 0x4e86fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8700u;
        goto label_fallthrough_0x4e86f8;
    }
    ctx->pc = 0x4E86F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E86F8u;
        // 0x4e86fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E86F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e86f8:
    ctx->pc = 0x4E8700u;
}
