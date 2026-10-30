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

// Function: sub_003CA588
// Address: 0x3ca588 - 0x3ca658
void sub_003CA588_0x3ca588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA588_0x3ca588");
#endif

    switch (ctx->pc) {
        case 0x3ca588u: goto label_3ca588;
        case 0x3ca58cu: goto label_3ca58c;
        case 0x3ca590u: goto label_3ca590;
        case 0x3ca594u: goto label_3ca594;
        case 0x3ca598u: goto label_3ca598;
        case 0x3ca59cu: goto label_3ca59c;
        case 0x3ca5a0u: goto label_3ca5a0;
        case 0x3ca5a4u: goto label_3ca5a4;
        case 0x3ca5a8u: goto label_3ca5a8;
        case 0x3ca5acu: goto label_3ca5ac;
        case 0x3ca5b0u: goto label_3ca5b0;
        case 0x3ca5b4u: goto label_3ca5b4;
        case 0x3ca5b8u: goto label_3ca5b8;
        case 0x3ca5bcu: goto label_3ca5bc;
        case 0x3ca5c0u: goto label_3ca5c0;
        case 0x3ca5c4u: goto label_3ca5c4;
        case 0x3ca5c8u: goto label_3ca5c8;
        case 0x3ca5ccu: goto label_3ca5cc;
        case 0x3ca5d0u: goto label_3ca5d0;
        case 0x3ca5d4u: goto label_3ca5d4;
        case 0x3ca5d8u: goto label_3ca5d8;
        case 0x3ca5dcu: goto label_3ca5dc;
        case 0x3ca5e0u: goto label_3ca5e0;
        case 0x3ca5e4u: goto label_3ca5e4;
        case 0x3ca5e8u: goto label_3ca5e8;
        case 0x3ca5ecu: goto label_3ca5ec;
        case 0x3ca5f0u: goto label_3ca5f0;
        case 0x3ca5f4u: goto label_3ca5f4;
        case 0x3ca5f8u: goto label_3ca5f8;
        case 0x3ca5fcu: goto label_3ca5fc;
        case 0x3ca600u: goto label_3ca600;
        case 0x3ca604u: goto label_3ca604;
        case 0x3ca608u: goto label_3ca608;
        case 0x3ca60cu: goto label_3ca60c;
        case 0x3ca610u: goto label_3ca610;
        case 0x3ca614u: goto label_3ca614;
        case 0x3ca618u: goto label_3ca618;
        case 0x3ca61cu: goto label_3ca61c;
        case 0x3ca620u: goto label_3ca620;
        case 0x3ca624u: goto label_3ca624;
        case 0x3ca628u: goto label_3ca628;
        case 0x3ca62cu: goto label_3ca62c;
        case 0x3ca630u: goto label_3ca630;
        case 0x3ca634u: goto label_3ca634;
        case 0x3ca638u: goto label_3ca638;
        case 0x3ca63cu: goto label_3ca63c;
        case 0x3ca640u: goto label_3ca640;
        case 0x3ca644u: goto label_3ca644;
        case 0x3ca648u: goto label_3ca648;
        case 0x3ca64cu: goto label_3ca64c;
        case 0x3ca650u: goto label_3ca650;
        case 0x3ca654u: goto label_3ca654;
        default: break;
    }

    ctx->pc = 0x3ca588u;

label_3ca588:
    // 0x3ca588: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ca588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ca58c:
    // 0x3ca58c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3ca58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3ca590:
    // 0x3ca590: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3ca590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3ca594:
    // 0x3ca594: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3ca594u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3ca598:
    // 0x3ca598: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3ca598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3ca59c:
    // 0x3ca59c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ca59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ca5a0:
    // 0x3ca5a0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x3ca5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ca5a4:
    // 0x3ca5a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ca5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ca5a8:
    // 0x3ca5a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ca5a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ca5ac:
    // 0x3ca5ac: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x3ca5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_3ca5b0:
    // 0x3ca5b0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3ca5b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3ca5b4:
    // 0x3ca5b4: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x3ca5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_3ca5b8:
    // 0x3ca5b8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3ca5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ca5bc:
    // 0x3ca5bc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3ca5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3ca5c0:
    // 0x3ca5c0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3ca5c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_3ca5c4:
    // 0x3ca5c4: 0xc050fda  jal         func_143F68
label_3ca5c8:
    if (ctx->pc == 0x3CA5C8u) {
        ctx->pc = 0x3CA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA5C4u;
        // 0x3ca5c8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA5CCu;
        goto label_3ca5cc;
    }
    ctx->pc = 0x3CA5C4u;
    SET_GPR_U32(ctx, 31, 0x3CA5CCu);
    ctx->pc = 0x3CA5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA5C4u;
    // 0x3ca5c8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x3CA5C4u, 0x3CA5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA5CCu;
label_3ca5cc:
    // 0x3ca5cc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3ca5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3ca5d0:
    // 0x3ca5d0: 0xc0e8b48  jal         func_3A2D20
label_3ca5d4:
    if (ctx->pc == 0x3CA5D4u) {
        ctx->pc = 0x3CA5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA5D0u;
        // 0x3ca5d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA5D8u;
        goto label_3ca5d8;
    }
    ctx->pc = 0x3CA5D0u;
    SET_GPR_U32(ctx, 31, 0x3CA5D8u);
    ctx->pc = 0x3CA5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA5D0u;
    // 0x3ca5d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3CA5D0u, 0x3CA5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA5D8u;
label_3ca5d8:
    // 0x3ca5d8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3ca5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3ca5dc:
    // 0x3ca5dc: 0xc0e8b68  jal         func_3A2DA0
label_3ca5e0:
    if (ctx->pc == 0x3CA5E0u) {
        ctx->pc = 0x3CA5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA5DCu;
        // 0x3ca5e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA5E4u;
        goto label_3ca5e4;
    }
    ctx->pc = 0x3CA5DCu;
    SET_GPR_U32(ctx, 31, 0x3CA5E4u);
    ctx->pc = 0x3CA5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA5DCu;
    // 0x3ca5e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3CA5DCu, 0x3CA5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA5E4u;
label_3ca5e4:
    // 0x3ca5e4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3ca5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3ca5e8:
    // 0x3ca5e8: 0xc0e8b58  jal         func_3A2D60
label_3ca5ec:
    if (ctx->pc == 0x3CA5ECu) {
        ctx->pc = 0x3CA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA5E8u;
        // 0x3ca5ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA5F0u;
        goto label_3ca5f0;
    }
    ctx->pc = 0x3CA5E8u;
    SET_GPR_U32(ctx, 31, 0x3CA5F0u);
    ctx->pc = 0x3CA5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA5E8u;
    // 0x3ca5ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3CA5E8u, 0x3CA5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA5F0u;
label_3ca5f0:
    // 0x3ca5f0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3ca5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3ca5f4:
    // 0x3ca5f4: 0xc0e8b58  jal         func_3A2D60
label_3ca5f8:
    if (ctx->pc == 0x3CA5F8u) {
        ctx->pc = 0x3CA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA5F4u;
        // 0x3ca5f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA5FCu;
        goto label_3ca5fc;
    }
    ctx->pc = 0x3CA5F4u;
    SET_GPR_U32(ctx, 31, 0x3CA5FCu);
    ctx->pc = 0x3CA5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA5F4u;
    // 0x3ca5f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3CA5F4u, 0x3CA5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA5FCu;
label_3ca5fc:
    // 0x3ca5fc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3ca5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3ca600:
    // 0x3ca600: 0xc0e8b70  jal         func_3A2DC0
label_3ca604:
    if (ctx->pc == 0x3CA604u) {
        ctx->pc = 0x3CA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA600u;
        // 0x3ca604: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA608u;
        goto label_3ca608;
    }
    ctx->pc = 0x3CA600u;
    SET_GPR_U32(ctx, 31, 0x3CA608u);
    ctx->pc = 0x3CA604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA600u;
    // 0x3ca604: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x3CA600u, 0x3CA608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA608u;
label_3ca608:
    // 0x3ca608: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3ca608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3ca60c:
    // 0x3ca60c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3ca60cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3ca610:
    // 0x3ca610: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ca610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ca614:
    // 0x3ca614: 0xc0e8b98  jal         func_3A2E60
label_3ca618:
    if (ctx->pc == 0x3CA618u) {
        ctx->pc = 0x3CA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA614u;
        // 0x3ca618: 0x24a54698  addiu       $a1, $a1, 0x4698 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA61Cu;
        goto label_3ca61c;
    }
    ctx->pc = 0x3CA614u;
    SET_GPR_U32(ctx, 31, 0x3CA61Cu);
    ctx->pc = 0x3CA618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA614u;
    // 0x3ca618: 0x24a54698  addiu       $a1, $a1, 0x4698 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E60u, 0x3CA614u, 0x3CA61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA61Cu;
label_3ca61c:
    // 0x3ca61c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3ca61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3ca620:
    // 0x3ca620: 0xc0e8b50  jal         func_3A2D40
label_3ca624:
    if (ctx->pc == 0x3CA624u) {
        ctx->pc = 0x3CA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA620u;
        // 0x3ca624: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA628u;
        goto label_3ca628;
    }
    ctx->pc = 0x3CA620u;
    SET_GPR_U32(ctx, 31, 0x3CA628u);
    ctx->pc = 0x3CA624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA620u;
    // 0x3ca624: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3CA620u, 0x3CA628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA628u;
label_3ca628:
    // 0x3ca628: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ca628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ca62c:
    // 0x3ca62c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3ca62cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3ca630:
    // 0x3ca630: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3ca630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3ca634:
    // 0x3ca634: 0x40f809  jalr        $v0
label_3ca638:
    if (ctx->pc == 0x3CA638u) {
        ctx->pc = 0x3CA638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA634u;
        // 0x3ca638: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA63Cu;
        goto label_3ca63c;
    }
    ctx->pc = 0x3CA634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA63Cu);
        ctx->pc = 0x3CA638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA634u;
        // 0x3ca638: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA634u, 0x3CA63Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA63Cu;
label_3ca63c:
    // 0x3ca63c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3ca63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ca640:
    // 0x3ca640: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3ca640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ca644:
    // 0x3ca644: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3ca644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ca648:
    // 0x3ca648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ca648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ca64c:
    // 0x3ca64c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ca64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ca650:
    // 0x3ca650: 0x3e00008  jr          $ra
label_3ca654:
    if (ctx->pc == 0x3CA654u) {
        ctx->pc = 0x3CA654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA650u;
        // 0x3ca654: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA658u;
        goto label_fallthrough_0x3ca650;
    }
    ctx->pc = 0x3CA650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA650u;
        // 0x3ca654: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ca650:
    ctx->pc = 0x3CA658u;
}
