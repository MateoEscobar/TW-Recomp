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

// Function: sub_002B0608
// Address: 0x2b0608 - 0x2b07c0
void sub_002B0608_0x2b0608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0608_0x2b0608");
#endif

    switch (ctx->pc) {
        case 0x2b0608u: goto label_2b0608;
        case 0x2b060cu: goto label_2b060c;
        case 0x2b0610u: goto label_2b0610;
        case 0x2b0614u: goto label_2b0614;
        case 0x2b0618u: goto label_2b0618;
        case 0x2b061cu: goto label_2b061c;
        case 0x2b0620u: goto label_2b0620;
        case 0x2b0624u: goto label_2b0624;
        case 0x2b0628u: goto label_2b0628;
        case 0x2b062cu: goto label_2b062c;
        case 0x2b0630u: goto label_2b0630;
        case 0x2b0634u: goto label_2b0634;
        case 0x2b0638u: goto label_2b0638;
        case 0x2b063cu: goto label_2b063c;
        case 0x2b0640u: goto label_2b0640;
        case 0x2b0644u: goto label_2b0644;
        case 0x2b0648u: goto label_2b0648;
        case 0x2b064cu: goto label_2b064c;
        case 0x2b0650u: goto label_2b0650;
        case 0x2b0654u: goto label_2b0654;
        case 0x2b0658u: goto label_2b0658;
        case 0x2b065cu: goto label_2b065c;
        case 0x2b0660u: goto label_2b0660;
        case 0x2b0664u: goto label_2b0664;
        case 0x2b0668u: goto label_2b0668;
        case 0x2b066cu: goto label_2b066c;
        case 0x2b0670u: goto label_2b0670;
        case 0x2b0674u: goto label_2b0674;
        case 0x2b0678u: goto label_2b0678;
        case 0x2b067cu: goto label_2b067c;
        case 0x2b0680u: goto label_2b0680;
        case 0x2b0684u: goto label_2b0684;
        case 0x2b0688u: goto label_2b0688;
        case 0x2b068cu: goto label_2b068c;
        case 0x2b0690u: goto label_2b0690;
        case 0x2b0694u: goto label_2b0694;
        case 0x2b0698u: goto label_2b0698;
        case 0x2b069cu: goto label_2b069c;
        case 0x2b06a0u: goto label_2b06a0;
        case 0x2b06a4u: goto label_2b06a4;
        case 0x2b06a8u: goto label_2b06a8;
        case 0x2b06acu: goto label_2b06ac;
        case 0x2b06b0u: goto label_2b06b0;
        case 0x2b06b4u: goto label_2b06b4;
        case 0x2b06b8u: goto label_2b06b8;
        case 0x2b06bcu: goto label_2b06bc;
        case 0x2b06c0u: goto label_2b06c0;
        case 0x2b06c4u: goto label_2b06c4;
        case 0x2b06c8u: goto label_2b06c8;
        case 0x2b06ccu: goto label_2b06cc;
        case 0x2b06d0u: goto label_2b06d0;
        case 0x2b06d4u: goto label_2b06d4;
        case 0x2b06d8u: goto label_2b06d8;
        case 0x2b06dcu: goto label_2b06dc;
        case 0x2b06e0u: goto label_2b06e0;
        case 0x2b06e4u: goto label_2b06e4;
        case 0x2b06e8u: goto label_2b06e8;
        case 0x2b06ecu: goto label_2b06ec;
        case 0x2b06f0u: goto label_2b06f0;
        case 0x2b06f4u: goto label_2b06f4;
        case 0x2b06f8u: goto label_2b06f8;
        case 0x2b06fcu: goto label_2b06fc;
        case 0x2b0700u: goto label_2b0700;
        case 0x2b0704u: goto label_2b0704;
        case 0x2b0708u: goto label_2b0708;
        case 0x2b070cu: goto label_2b070c;
        case 0x2b0710u: goto label_2b0710;
        case 0x2b0714u: goto label_2b0714;
        case 0x2b0718u: goto label_2b0718;
        case 0x2b071cu: goto label_2b071c;
        case 0x2b0720u: goto label_2b0720;
        case 0x2b0724u: goto label_2b0724;
        case 0x2b0728u: goto label_2b0728;
        case 0x2b072cu: goto label_2b072c;
        case 0x2b0730u: goto label_2b0730;
        case 0x2b0734u: goto label_2b0734;
        case 0x2b0738u: goto label_2b0738;
        case 0x2b073cu: goto label_2b073c;
        case 0x2b0740u: goto label_2b0740;
        case 0x2b0744u: goto label_2b0744;
        case 0x2b0748u: goto label_2b0748;
        case 0x2b074cu: goto label_2b074c;
        case 0x2b0750u: goto label_2b0750;
        case 0x2b0754u: goto label_2b0754;
        case 0x2b0758u: goto label_2b0758;
        case 0x2b075cu: goto label_2b075c;
        case 0x2b0760u: goto label_2b0760;
        case 0x2b0764u: goto label_2b0764;
        case 0x2b0768u: goto label_2b0768;
        case 0x2b076cu: goto label_2b076c;
        case 0x2b0770u: goto label_2b0770;
        case 0x2b0774u: goto label_2b0774;
        case 0x2b0778u: goto label_2b0778;
        case 0x2b077cu: goto label_2b077c;
        case 0x2b0780u: goto label_2b0780;
        case 0x2b0784u: goto label_2b0784;
        case 0x2b0788u: goto label_2b0788;
        case 0x2b078cu: goto label_2b078c;
        case 0x2b0790u: goto label_2b0790;
        case 0x2b0794u: goto label_2b0794;
        case 0x2b0798u: goto label_2b0798;
        case 0x2b079cu: goto label_2b079c;
        case 0x2b07a0u: goto label_2b07a0;
        case 0x2b07a4u: goto label_2b07a4;
        case 0x2b07a8u: goto label_2b07a8;
        case 0x2b07acu: goto label_2b07ac;
        case 0x2b07b0u: goto label_2b07b0;
        case 0x2b07b4u: goto label_2b07b4;
        case 0x2b07b8u: goto label_2b07b8;
        case 0x2b07bcu: goto label_2b07bc;
        default: break;
    }

    ctx->pc = 0x2b0608u;

label_2b0608:
    // 0x2b0608: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b0608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2b060c:
    // 0x2b060c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2b060cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2b0610:
    // 0x2b0610: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2b0610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2b0614:
    // 0x2b0614: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b0614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b0618:
    // 0x2b0618: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2b0618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2b061c:
    // 0x2b061c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b061cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0620:
    // 0x2b0620: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2b0620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2b0624:
    // 0x2b0624: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2b0624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2b0628:
    // 0x2b0628: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2b0628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2b062c:
    // 0x2b062c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2b062cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2b0630:
    // 0x2b0630: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2b0630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2b0634:
    // 0x2b0634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b0634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b0638:
    // 0x2b0638: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2b0638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2b063c:
    // 0x2b063c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2b0640:
    // 0x2b0640: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2b0640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_2b0644:
    // 0x2b0644: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
label_2b0648:
    if (ctx->pc == 0x2B0648u) {
        ctx->pc = 0x2B0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0644u;
        // 0x2b0648: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B064Cu;
        goto label_2b064c;
    }
    ctx->pc = 0x2B0644u;
    {
        const bool branch_taken_0x2b0644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0644) {
            ctx->pc = 0x2B0648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0644u;
            // 0x2b0648: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0798u;
            goto label_2b0798;
        }
    }
    ctx->pc = 0x2B064Cu;
label_2b064c:
    // 0x2b064c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2b064cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b0650:
    // 0x2b0650: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2b0650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b0654:
    // 0x2b0654: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b0654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b0658:
    // 0x2b0658: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b0658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b065c:
    // 0x2b065c: 0x40f809  jalr        $v0
label_2b0660:
    if (ctx->pc == 0x2B0660u) {
        ctx->pc = 0x2B0660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B065Cu;
        // 0x2b0660: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0664u;
        goto label_2b0664;
    }
    ctx->pc = 0x2B065Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0664u);
        ctx->pc = 0x2B0660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B065Cu;
        // 0x2b0660: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B065Cu, 0x2B0664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0664u;
label_2b0664:
    // 0x2b0664: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b0664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0668:
    // 0x2b0668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b066c:
    // 0x2b066c: 0x56020043  bnel        $s0, $v0, . + 4 + (0x43 << 2)
label_2b0670:
    if (ctx->pc == 0x2B0670u) {
        ctx->pc = 0x2B0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B066Cu;
        // 0x2b0670: 0x9282005b  lbu         $v0, 0x5B($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0674u;
        goto label_2b0674;
    }
    ctx->pc = 0x2B066Cu;
    {
        const bool branch_taken_0x2b066c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b066c) {
            ctx->pc = 0x2B0670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B066Cu;
            // 0x2b0670: 0x9282005b  lbu         $v0, 0x5B($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B077Cu;
            goto label_2b077c;
        }
    }
    ctx->pc = 0x2B0674u;
label_2b0674:
    // 0x2b0674: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2b0674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_2b0678:
    // 0x2b0678: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b0678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b067c:
    // 0x2b067c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2b067cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0680:
    // 0x2b0680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b0680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0684:
    // 0x2b0684: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x2b0684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_2b0688:
    // 0x2b0688: 0xc071462  jal         func_1C5188
label_2b068c:
    if (ctx->pc == 0x2B068Cu) {
        ctx->pc = 0x2B068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0688u;
        // 0x2b068c: 0x248415d0  addiu       $a0, $a0, 0x15D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0690u;
        goto label_2b0690;
    }
    ctx->pc = 0x2B0688u;
    SET_GPR_U32(ctx, 31, 0x2B0690u);
    ctx->pc = 0x2B068Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0688u;
    // 0x2b068c: 0x248415d0  addiu       $a0, $a0, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x2B0688u, 0x2B0690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0690u;
label_2b0690:
    // 0x2b0690: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2b0690u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2b0694:
    // 0x2b0694: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b0694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b0698:
    // 0x2b0698: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b0698u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b069c:
    // 0x2b069c: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
label_2b06a0:
    if (ctx->pc == 0x2B06A0u) {
        ctx->pc = 0x2B06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B069Cu;
        // 0x2b06a0: 0xa282005b  sb          $v0, 0x5B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B06A4u;
        goto label_2b06a4;
    }
    ctx->pc = 0x2B069Cu;
    {
        const bool branch_taken_0x2b069c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B069Cu;
        // 0x2b06a0: 0xa282005b  sb          $v0, 0x5B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b069c) {
            ctx->pc = 0x2B0794u;
            goto label_2b0794;
        }
    }
    ctx->pc = 0x2B06A4u;
label_2b06a4:
    // 0x2b06a4: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x2b06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_2b06a8:
    // 0x2b06a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b06a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b06ac:
    // 0x2b06ac: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2b06acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2b06b0:
    // 0x2b06b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b06b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b06b4:
    // 0x2b06b4: 0xc0e409a  jal         func_390268
label_2b06b8:
    if (ctx->pc == 0x2B06B8u) {
        ctx->pc = 0x2B06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06B4u;
        // 0x2b06b8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B06BCu;
        goto label_2b06bc;
    }
    ctx->pc = 0x2B06B4u;
    SET_GPR_U32(ctx, 31, 0x2B06BCu);
    ctx->pc = 0x2B06B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B06B4u;
    // 0x2b06b8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B06B4u, 0x2B06BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B06BCu;
label_2b06bc:
    // 0x2b06bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b06bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b06c0:
    // 0x2b06c0: 0xc0a34d6  jal         func_28D358
label_2b06c4:
    if (ctx->pc == 0x2B06C4u) {
        ctx->pc = 0x2B06C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06C0u;
        // 0x2b06c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B06C8u;
        goto label_2b06c8;
    }
    ctx->pc = 0x2B06C0u;
    SET_GPR_U32(ctx, 31, 0x2B06C8u);
    ctx->pc = 0x2B06C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B06C0u;
    // 0x2b06c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B06C0u, 0x2B06C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B06C8u;
label_2b06c8:
    // 0x2b06c8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2b06cc:
    if (ctx->pc == 0x2B06CCu) {
        ctx->pc = 0x2B06D0u;
        goto label_2b06d0;
    }
    ctx->pc = 0x2B06C8u;
    {
        const bool branch_taken_0x2b06c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b06c8) {
            ctx->pc = 0x2B0734u;
            goto label_2b0734;
        }
    }
    ctx->pc = 0x2B06D0u;
label_2b06d0:
    // 0x2b06d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b06d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b06d4:
    // 0x2b06d4: 0xc087502  jal         func_21D408
label_2b06d8:
    if (ctx->pc == 0x2B06D8u) {
        ctx->pc = 0x2B06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06D4u;
        // 0x2b06d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B06DCu;
        goto label_2b06dc;
    }
    ctx->pc = 0x2B06D4u;
    SET_GPR_U32(ctx, 31, 0x2B06DCu);
    ctx->pc = 0x2B06D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B06D4u;
    // 0x2b06d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B06D4u, 0x2B06DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B06DCu;
label_2b06dc:
    // 0x2b06dc: 0x8c56020c  lw          $s6, 0x20C($v0)
    ctx->pc = 0x2b06dcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b06e0:
    // 0x2b06e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2b06e4:
    // 0x2b06e4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2b06e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2b06e8:
    // 0x2b06e8: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x2b06e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2b06ec:
    // 0x2b06ec: 0x18800011  blez        $a0, . + 4 + (0x11 << 2)
label_2b06f0:
    if (ctx->pc == 0x2B06F0u) {
        ctx->pc = 0x2B06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06ECu;
        // 0x2b06f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B06F4u;
        goto label_2b06f4;
    }
    ctx->pc = 0x2B06ECu;
    {
        const bool branch_taken_0x2b06ec = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06ECu;
        // 0x2b06f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06ec) {
            ctx->pc = 0x2B0734u;
            goto label_2b0734;
        }
    }
    ctx->pc = 0x2B06F4u;
label_2b06f4:
    // 0x2b06f4: 0x24100228  addiu       $s0, $zero, 0x228
    ctx->pc = 0x2b06f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_2b06f8:
    // 0x2b06f8: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x2b06f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_2b06fc:
    // 0x2b06fc: 0xc0e409a  jal         func_390268
label_2b0700:
    if (ctx->pc == 0x2B0700u) {
        ctx->pc = 0x2B0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06FCu;
        // 0x2b0700: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0704u;
        goto label_2b0704;
    }
    ctx->pc = 0x2B06FCu;
    SET_GPR_U32(ctx, 31, 0x2B0704u);
    ctx->pc = 0x2B0700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B06FCu;
    // 0x2b0700: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B06FCu, 0x2B0704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0704u;
label_2b0704:
    // 0x2b0704: 0xc087502  jal         func_21D408
label_2b0708:
    if (ctx->pc == 0x2B0708u) {
        ctx->pc = 0x2B0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0704u;
        // 0x2b0708: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B070Cu;
        goto label_2b070c;
    }
    ctx->pc = 0x2B0704u;
    SET_GPR_U32(ctx, 31, 0x2B070Cu);
    ctx->pc = 0x2B0708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0704u;
    // 0x2b0708: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B0704u, 0x2B070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B070Cu;
label_2b070c:
    // 0x2b070c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2b070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b0710:
    // 0x2b0710: 0x50760001  beql        $v1, $s6, . + 4 + (0x1 << 2)
label_2b0714:
    if (ctx->pc == 0x2B0714u) {
        ctx->pc = 0x2B0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0710u;
        // 0x2b0714: 0x36310001  ori         $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0718u;
        goto label_2b0718;
    }
    ctx->pc = 0x2B0710u;
    {
        const bool branch_taken_0x2b0710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x2b0710) {
            ctx->pc = 0x2B0714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0710u;
            // 0x2b0714: 0x36310001  ori         $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0718u;
            goto label_2b0718;
        }
    }
    ctx->pc = 0x2B0718u;
label_2b0718:
    // 0x2b0718: 0x11882b  sltu        $s1, $zero, $s1
    ctx->pc = 0x2b0718u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2b071c:
    // 0x2b071c: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x2b071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_2b0720:
    // 0x2b0720: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b0720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b0724:
    // 0x2b0724: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2b0724u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2b0728:
    // 0x2b0728: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2b0728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b072c:
    // 0x2b072c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_2b0730:
    if (ctx->pc == 0x2B0730u) {
        ctx->pc = 0x2B0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B072Cu;
        // 0x2b0730: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0734u;
        goto label_2b0734;
    }
    ctx->pc = 0x2B072Cu;
    {
        const bool branch_taken_0x2b072c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B072Cu;
        // 0x2b0730: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b072c) {
            ctx->pc = 0x2B06F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b06f8;
        }
    }
    ctx->pc = 0x2B0734u;
label_2b0734:
    // 0x2b0734: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_2b0738:
    if (ctx->pc == 0x2B0738u) {
        ctx->pc = 0x2B0738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0734u;
        // 0x2b0738: 0x26f00840  addiu       $s0, $s7, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B073Cu;
        goto label_2b073c;
    }
    ctx->pc = 0x2B0734u;
    {
        const bool branch_taken_0x2b0734 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0734u;
        // 0x2b0738: 0x26f00840  addiu       $s0, $s7, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 2112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0734) {
            ctx->pc = 0x2B0748u;
            goto label_2b0748;
        }
    }
    ctx->pc = 0x2B073Cu;
label_2b073c:
    // 0x2b073c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0740:
    // 0x2b0740: 0x10000014  b           . + 4 + (0x14 << 2)
label_2b0744:
    if (ctx->pc == 0x2B0744u) {
        ctx->pc = 0x2B0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0740u;
        // 0x2b0744: 0xa282005b  sb          $v0, 0x5B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0748u;
        goto label_2b0748;
    }
    ctx->pc = 0x2B0740u;
    {
        const bool branch_taken_0x2b0740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0740u;
        // 0x2b0744: 0xa282005b  sb          $v0, 0x5B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0740) {
            ctx->pc = 0x2B0794u;
            goto label_2b0794;
        }
    }
    ctx->pc = 0x2B0748u;
label_2b0748:
    // 0x2b0748: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x2b0748u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
label_2b074c:
    // 0x2b074c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b074cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0750:
    // 0x2b0750: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b0750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b0754:
    // 0x2b0754: 0x34c680ff  ori         $a2, $a2, 0x80FF
    ctx->pc = 0x2b0754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33023);
label_2b0758:
    // 0x2b0758: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2b0758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b075c:
    // 0x2b075c: 0xc06ca64  jal         func_1B2990
label_2b0760:
    if (ctx->pc == 0x2B0760u) {
        ctx->pc = 0x2B0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B075Cu;
        // 0x2b0760: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0764u;
        goto label_2b0764;
    }
    ctx->pc = 0x2B075Cu;
    SET_GPR_U32(ctx, 31, 0x2B0764u);
    ctx->pc = 0x2B0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B075Cu;
    // 0x2b0760: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x2B075Cu, 0x2B0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0764u;
label_2b0764:
    // 0x2b0764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0768:
    // 0x2b0768: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b0768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b076c:
    // 0x2b076c: 0xc06ccb8  jal         func_1B32E0
label_2b0770:
    if (ctx->pc == 0x2B0770u) {
        ctx->pc = 0x2B0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B076Cu;
        // 0x2b0770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0774u;
        goto label_2b0774;
    }
    ctx->pc = 0x2B076Cu;
    SET_GPR_U32(ctx, 31, 0x2B0774u);
    ctx->pc = 0x2B0770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B076Cu;
    // 0x2b0770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B32E0u, 0x2B076Cu, 0x2B0774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0774u;
label_2b0774:
    // 0x2b0774: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b0778:
    if (ctx->pc == 0x2B0778u) {
        ctx->pc = 0x2B0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0774u;
        // 0x2b0778: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B077Cu;
        goto label_2b077c;
    }
    ctx->pc = 0x2B0774u;
    {
        const bool branch_taken_0x2b0774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0774u;
        // 0x2b0778: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0774) {
            ctx->pc = 0x2B0798u;
            goto label_2b0798;
        }
    }
    ctx->pc = 0x2B077Cu;
label_2b077c:
    // 0x2b077c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2b0780:
    if (ctx->pc == 0x2B0780u) {
        ctx->pc = 0x2B0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B077Cu;
        // 0x2b0780: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0784u;
        goto label_2b0784;
    }
    ctx->pc = 0x2B077Cu;
    {
        const bool branch_taken_0x2b077c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B077Cu;
        // 0x2b0780: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b077c) {
            ctx->pc = 0x2B0798u;
            goto label_2b0798;
        }
    }
    ctx->pc = 0x2B0784u;
label_2b0784:
    // 0x2b0784: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2b0784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_2b0788:
    // 0x2b0788: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b0788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b078c:
    // 0x2b078c: 0xc06cad6  jal         func_1B2B58
label_2b0790:
    if (ctx->pc == 0x2B0790u) {
        ctx->pc = 0x2B0790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B078Cu;
        // 0x2b0790: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0794u;
        goto label_2b0794;
    }
    ctx->pc = 0x2B078Cu;
    SET_GPR_U32(ctx, 31, 0x2B0794u);
    ctx->pc = 0x2B0790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B078Cu;
    // 0x2b0790: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B58u, 0x2B078Cu, 0x2B0794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0794u;
label_2b0794:
    // 0x2b0794: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2b0794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2b0798:
    // 0x2b0798: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2b0798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b079c:
    // 0x2b079c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2b079cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b07a0:
    // 0x2b07a0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2b07a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b07a4:
    // 0x2b07a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2b07a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b07a8:
    // 0x2b07a8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2b07a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b07ac:
    // 0x2b07ac: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2b07acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b07b0:
    // 0x2b07b0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2b07b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b07b4:
    // 0x2b07b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b07b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b07b8:
    // 0x2b07b8: 0x3e00008  jr          $ra
label_2b07bc:
    if (ctx->pc == 0x2B07BCu) {
        ctx->pc = 0x2B07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07B8u;
        // 0x2b07bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B07C0u;
        goto label_fallthrough_0x2b07b8;
    }
    ctx->pc = 0x2B07B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07B8u;
        // 0x2b07bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B07B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b07b8:
    ctx->pc = 0x2B07C0u;
}
