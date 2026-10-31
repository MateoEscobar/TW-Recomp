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

// Function: sub_001F47C8
// Address: 0x1f47c8 - 0x1f49d0
void sub_001F47C8_0x1f47c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F47C8_0x1f47c8");
#endif

    switch (ctx->pc) {
        case 0x1f47c8u: goto label_1f47c8;
        case 0x1f47ccu: goto label_1f47cc;
        case 0x1f47d0u: goto label_1f47d0;
        case 0x1f47d4u: goto label_1f47d4;
        case 0x1f47d8u: goto label_1f47d8;
        case 0x1f47dcu: goto label_1f47dc;
        case 0x1f47e0u: goto label_1f47e0;
        case 0x1f47e4u: goto label_1f47e4;
        case 0x1f47e8u: goto label_1f47e8;
        case 0x1f47ecu: goto label_1f47ec;
        case 0x1f47f0u: goto label_1f47f0;
        case 0x1f47f4u: goto label_1f47f4;
        case 0x1f47f8u: goto label_1f47f8;
        case 0x1f47fcu: goto label_1f47fc;
        case 0x1f4800u: goto label_1f4800;
        case 0x1f4804u: goto label_1f4804;
        case 0x1f4808u: goto label_1f4808;
        case 0x1f480cu: goto label_1f480c;
        case 0x1f4810u: goto label_1f4810;
        case 0x1f4814u: goto label_1f4814;
        case 0x1f4818u: goto label_1f4818;
        case 0x1f481cu: goto label_1f481c;
        case 0x1f4820u: goto label_1f4820;
        case 0x1f4824u: goto label_1f4824;
        case 0x1f4828u: goto label_1f4828;
        case 0x1f482cu: goto label_1f482c;
        case 0x1f4830u: goto label_1f4830;
        case 0x1f4834u: goto label_1f4834;
        case 0x1f4838u: goto label_1f4838;
        case 0x1f483cu: goto label_1f483c;
        case 0x1f4840u: goto label_1f4840;
        case 0x1f4844u: goto label_1f4844;
        case 0x1f4848u: goto label_1f4848;
        case 0x1f484cu: goto label_1f484c;
        case 0x1f4850u: goto label_1f4850;
        case 0x1f4854u: goto label_1f4854;
        case 0x1f4858u: goto label_1f4858;
        case 0x1f485cu: goto label_1f485c;
        case 0x1f4860u: goto label_1f4860;
        case 0x1f4864u: goto label_1f4864;
        case 0x1f4868u: goto label_1f4868;
        case 0x1f486cu: goto label_1f486c;
        case 0x1f4870u: goto label_1f4870;
        case 0x1f4874u: goto label_1f4874;
        case 0x1f4878u: goto label_1f4878;
        case 0x1f487cu: goto label_1f487c;
        case 0x1f4880u: goto label_1f4880;
        case 0x1f4884u: goto label_1f4884;
        case 0x1f4888u: goto label_1f4888;
        case 0x1f488cu: goto label_1f488c;
        case 0x1f4890u: goto label_1f4890;
        case 0x1f4894u: goto label_1f4894;
        case 0x1f4898u: goto label_1f4898;
        case 0x1f489cu: goto label_1f489c;
        case 0x1f48a0u: goto label_1f48a0;
        case 0x1f48a4u: goto label_1f48a4;
        case 0x1f48a8u: goto label_1f48a8;
        case 0x1f48acu: goto label_1f48ac;
        case 0x1f48b0u: goto label_1f48b0;
        case 0x1f48b4u: goto label_1f48b4;
        case 0x1f48b8u: goto label_1f48b8;
        case 0x1f48bcu: goto label_1f48bc;
        case 0x1f48c0u: goto label_1f48c0;
        case 0x1f48c4u: goto label_1f48c4;
        case 0x1f48c8u: goto label_1f48c8;
        case 0x1f48ccu: goto label_1f48cc;
        case 0x1f48d0u: goto label_1f48d0;
        case 0x1f48d4u: goto label_1f48d4;
        case 0x1f48d8u: goto label_1f48d8;
        case 0x1f48dcu: goto label_1f48dc;
        case 0x1f48e0u: goto label_1f48e0;
        case 0x1f48e4u: goto label_1f48e4;
        case 0x1f48e8u: goto label_1f48e8;
        case 0x1f48ecu: goto label_1f48ec;
        case 0x1f48f0u: goto label_1f48f0;
        case 0x1f48f4u: goto label_1f48f4;
        case 0x1f48f8u: goto label_1f48f8;
        case 0x1f48fcu: goto label_1f48fc;
        case 0x1f4900u: goto label_1f4900;
        case 0x1f4904u: goto label_1f4904;
        case 0x1f4908u: goto label_1f4908;
        case 0x1f490cu: goto label_1f490c;
        case 0x1f4910u: goto label_1f4910;
        case 0x1f4914u: goto label_1f4914;
        case 0x1f4918u: goto label_1f4918;
        case 0x1f491cu: goto label_1f491c;
        case 0x1f4920u: goto label_1f4920;
        case 0x1f4924u: goto label_1f4924;
        case 0x1f4928u: goto label_1f4928;
        case 0x1f492cu: goto label_1f492c;
        case 0x1f4930u: goto label_1f4930;
        case 0x1f4934u: goto label_1f4934;
        case 0x1f4938u: goto label_1f4938;
        case 0x1f493cu: goto label_1f493c;
        case 0x1f4940u: goto label_1f4940;
        case 0x1f4944u: goto label_1f4944;
        case 0x1f4948u: goto label_1f4948;
        case 0x1f494cu: goto label_1f494c;
        case 0x1f4950u: goto label_1f4950;
        case 0x1f4954u: goto label_1f4954;
        case 0x1f4958u: goto label_1f4958;
        case 0x1f495cu: goto label_1f495c;
        case 0x1f4960u: goto label_1f4960;
        case 0x1f4964u: goto label_1f4964;
        case 0x1f4968u: goto label_1f4968;
        case 0x1f496cu: goto label_1f496c;
        case 0x1f4970u: goto label_1f4970;
        case 0x1f4974u: goto label_1f4974;
        case 0x1f4978u: goto label_1f4978;
        case 0x1f497cu: goto label_1f497c;
        case 0x1f4980u: goto label_1f4980;
        case 0x1f4984u: goto label_1f4984;
        case 0x1f4988u: goto label_1f4988;
        case 0x1f498cu: goto label_1f498c;
        case 0x1f4990u: goto label_1f4990;
        case 0x1f4994u: goto label_1f4994;
        case 0x1f4998u: goto label_1f4998;
        case 0x1f499cu: goto label_1f499c;
        case 0x1f49a0u: goto label_1f49a0;
        case 0x1f49a4u: goto label_1f49a4;
        case 0x1f49a8u: goto label_1f49a8;
        case 0x1f49acu: goto label_1f49ac;
        case 0x1f49b0u: goto label_1f49b0;
        case 0x1f49b4u: goto label_1f49b4;
        case 0x1f49b8u: goto label_1f49b8;
        case 0x1f49bcu: goto label_1f49bc;
        case 0x1f49c0u: goto label_1f49c0;
        case 0x1f49c4u: goto label_1f49c4;
        case 0x1f49c8u: goto label_1f49c8;
        case 0x1f49ccu: goto label_1f49cc;
        default: break;
    }

    ctx->pc = 0x1f47c8u;

label_1f47c8:
    // 0x1f47c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f47c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f47cc:
    // 0x1f47cc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f47ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1f47d0:
    // 0x1f47d0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f47d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1f47d4:
    // 0x1f47d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f47d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f47d8:
    // 0x1f47d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f47d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f47dc:
    // 0x1f47dc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f47dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1f47e0:
    // 0x1f47e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f47e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1f47e4:
    // 0x1f47e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f47e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f47e8:
    // 0x1f47e8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1f47e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f47ec:
    // 0x1f47ec: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_1f47f0:
    if (ctx->pc == 0x1F47F0u) {
        ctx->pc = 0x1F47F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47ECu;
        // 0x1f47f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F47F4u;
        goto label_1f47f4;
    }
    ctx->pc = 0x1F47ECu;
    {
        const bool branch_taken_0x1f47ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F47F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47ECu;
        // 0x1f47f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f47ec) {
            ctx->pc = 0x1F49B4u;
            goto label_1f49b4;
        }
    }
    ctx->pc = 0x1F47F4u;
label_1f47f4:
    // 0x1f47f4: 0xc07cd72  jal         func_1F35C8
label_1f47f8:
    if (ctx->pc == 0x1F47F8u) {
        ctx->pc = 0x1F47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47F4u;
        // 0x1f47f8: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F47FCu;
        goto label_1f47fc;
    }
    ctx->pc = 0x1F47F4u;
    SET_GPR_U32(ctx, 31, 0x1F47FCu);
    ctx->pc = 0x1F47F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F47F4u;
    // 0x1f47f8: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F35C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F35C8u, 0x1F47F4u, 0x1F47FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F47FCu;
label_1f47fc:
    // 0x1f47fc: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1f47fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4800:
    // 0x1f4800: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x1f4800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1f4804:
    // 0x1f4804: 0x26107540  addiu       $s0, $s0, 0x7540
    ctx->pc = 0x1f4804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30016));
label_1f4808:
    // 0x1f4808: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f4808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f480c:
    // 0x1f480c: 0xc073462  jal         func_1CD188
label_1f4810:
    if (ctx->pc == 0x1F4810u) {
        ctx->pc = 0x1F4810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F480Cu;
        // 0x1f4810: 0x26320148  addiu       $s2, $s1, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4814u;
        goto label_1f4814;
    }
    ctx->pc = 0x1F480Cu;
    SET_GPR_U32(ctx, 31, 0x1F4814u);
    ctx->pc = 0x1F4810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F480Cu;
    // 0x1f4810: 0x26320148  addiu       $s2, $s1, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1F480Cu, 0x1F4814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4814u;
label_1f4814:
    // 0x1f4814: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x1f4814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1f4818:
    // 0x1f4818: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f481c:
    // 0x1f481c: 0xc139138  jal         func_4E44E0
label_1f4820:
    if (ctx->pc == 0x1F4820u) {
        ctx->pc = 0x1F4820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F481Cu;
        // 0x1f4820: 0x24060198  addiu       $a2, $zero, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4824u;
        goto label_1f4824;
    }
    ctx->pc = 0x1F481Cu;
    SET_GPR_U32(ctx, 31, 0x1F4824u);
    ctx->pc = 0x1F4820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F481Cu;
    // 0x1f4820: 0x24060198  addiu       $a2, $zero, 0x198 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1F481Cu, 0x1F4824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4824u;
label_1f4824:
    // 0x1f4824: 0x8e250170  lw          $a1, 0x170($s1)
    ctx->pc = 0x1f4824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_1f4828:
    // 0x1f4828: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f4828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f482c:
    // 0x1f482c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1f482cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1f4830:
    // 0x1f4830: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1f4830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1f4834:
    // 0x1f4834: 0x60f809  jalr        $v1
label_1f4838:
    if (ctx->pc == 0x1F4838u) {
        ctx->pc = 0x1F4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4834u;
        // 0x1f4838: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F483Cu;
        goto label_1f483c;
    }
    ctx->pc = 0x1F4834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F483Cu);
        ctx->pc = 0x1F4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4834u;
        // 0x1f4838: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4834u, 0x1F483Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F483Cu;
label_1f483c:
    // 0x1f483c: 0x8e240170  lw          $a0, 0x170($s1)
    ctx->pc = 0x1f483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_1f4840:
    // 0x1f4840: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4844:
    // 0x1f4844: 0xc138e72  jal         func_4E39C8
label_1f4848:
    if (ctx->pc == 0x1F4848u) {
        ctx->pc = 0x1F4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4844u;
        // 0x1f4848: 0x2406019b  addiu       $a2, $zero, 0x19B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 411));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F484Cu;
        goto label_1f484c;
    }
    ctx->pc = 0x1F4844u;
    SET_GPR_U32(ctx, 31, 0x1F484Cu);
    ctx->pc = 0x1F4848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4844u;
    // 0x1f4848: 0x2406019b  addiu       $a2, $zero, 0x19B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 411));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1F4844u, 0x1F484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F484Cu;
label_1f484c:
    // 0x1f484c: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x1f484cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1f4850:
    // 0x1f4850: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x1f4850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_1f4854:
    // 0x1f4854: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1f4854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1f4858:
    // 0x1f4858: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1f4858u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f485c:
    // 0x1f485c: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1f485cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f4860:
    // 0x1f4860: 0xa0f809  jalr        $a1
label_1f4864:
    if (ctx->pc == 0x1F4864u) {
        ctx->pc = 0x1F4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4860u;
        // 0x1f4864: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4868u;
        goto label_1f4868;
    }
    ctx->pc = 0x1F4860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F4868u);
        ctx->pc = 0x1F4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4860u;
        // 0x1f4864: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4860u, 0x1F4868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4868u;
label_1f4868:
    // 0x1f4868: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x1f4868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1f486c:
    // 0x1f486c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f486cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4870:
    // 0x1f4870: 0xc13a72a  jal         func_4E9CA8
label_1f4874:
    if (ctx->pc == 0x1F4874u) {
        ctx->pc = 0x1F4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4870u;
        // 0x1f4874: 0x2406019e  addiu       $a2, $zero, 0x19E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 414));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4878u;
        goto label_1f4878;
    }
    ctx->pc = 0x1F4870u;
    SET_GPR_U32(ctx, 31, 0x1F4878u);
    ctx->pc = 0x1F4874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4870u;
    // 0x1f4874: 0x2406019e  addiu       $a2, $zero, 0x19E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 414));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9CA8u, 0x1F4870u, 0x1F4878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4878u;
label_1f4878:
    // 0x1f4878: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1f4878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1f487c:
    // 0x1f487c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f4880:
    // 0x1f4880: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f4880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f4884:
    // 0x1f4884: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f4884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f4888:
    // 0x1f4888: 0x60f809  jalr        $v1
label_1f488c:
    if (ctx->pc == 0x1F488Cu) {
        ctx->pc = 0x1F488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4888u;
        // 0x1f488c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4890u;
        goto label_1f4890;
    }
    ctx->pc = 0x1F4888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4890u);
        ctx->pc = 0x1F488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4888u;
        // 0x1f488c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4888u, 0x1F4890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4890u;
label_1f4890:
    // 0x1f4890: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x1f4890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1f4894:
    // 0x1f4894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4898:
    // 0x1f4898: 0xc13a560  jal         func_4E9580
label_1f489c:
    if (ctx->pc == 0x1F489Cu) {
        ctx->pc = 0x1F489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4898u;
        // 0x1f489c: 0x240601a1  addiu       $a2, $zero, 0x1A1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F48A0u;
        goto label_1f48a0;
    }
    ctx->pc = 0x1F4898u;
    SET_GPR_U32(ctx, 31, 0x1F48A0u);
    ctx->pc = 0x1F489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4898u;
    // 0x1f489c: 0x240601a1  addiu       $a2, $zero, 0x1A1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9580u, 0x1F4898u, 0x1F48A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48A0u;
label_1f48a0:
    // 0x1f48a0: 0xc073462  jal         func_1CD188
label_1f48a4:
    if (ctx->pc == 0x1F48A4u) {
        ctx->pc = 0x1F48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48A0u;
        // 0x1f48a4: 0x8e240174  lw          $a0, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F48A8u;
        goto label_1f48a8;
    }
    ctx->pc = 0x1F48A0u;
    SET_GPR_U32(ctx, 31, 0x1F48A8u);
    ctx->pc = 0x1F48A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48A0u;
    // 0x1f48a4: 0x8e240174  lw          $a0, 0x174($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1F48A0u, 0x1F48A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48A8u;
label_1f48a8:
    // 0x1f48a8: 0x8e240174  lw          $a0, 0x174($s1)
    ctx->pc = 0x1f48a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
label_1f48ac:
    // 0x1f48ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f48acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f48b0:
    // 0x1f48b0: 0xc139138  jal         func_4E44E0
label_1f48b4:
    if (ctx->pc == 0x1F48B4u) {
        ctx->pc = 0x1F48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48B0u;
        // 0x1f48b4: 0x240601a4  addiu       $a2, $zero, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F48B8u;
        goto label_1f48b8;
    }
    ctx->pc = 0x1F48B0u;
    SET_GPR_U32(ctx, 31, 0x1F48B8u);
    ctx->pc = 0x1F48B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48B0u;
    // 0x1f48b4: 0x240601a4  addiu       $a2, $zero, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1F48B0u, 0x1F48B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48B8u;
label_1f48b8:
    // 0x1f48b8: 0x8e240178  lw          $a0, 0x178($s1)
    ctx->pc = 0x1f48b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_1f48bc:
    // 0x1f48bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f48bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f48c0:
    // 0x1f48c0: 0xc13a5a0  jal         func_4E9680
label_1f48c4:
    if (ctx->pc == 0x1F48C4u) {
        ctx->pc = 0x1F48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48C0u;
        // 0x1f48c4: 0x240601a6  addiu       $a2, $zero, 0x1A6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F48C8u;
        goto label_1f48c8;
    }
    ctx->pc = 0x1F48C0u;
    SET_GPR_U32(ctx, 31, 0x1F48C8u);
    ctx->pc = 0x1F48C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48C0u;
    // 0x1f48c4: 0x240601a6  addiu       $a2, $zero, 0x1A6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9680u, 0x1F48C0u, 0x1F48C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48C8u;
label_1f48c8:
    // 0x1f48c8: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x1f48c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f48cc:
    // 0x1f48cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f48ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f48d0:
    // 0x1f48d0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f48d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f48d4:
    // 0x1f48d4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f48d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f48d8:
    // 0x1f48d8: 0x60f809  jalr        $v1
label_1f48dc:
    if (ctx->pc == 0x1F48DCu) {
        ctx->pc = 0x1F48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48D8u;
        // 0x1f48dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F48E0u;
        goto label_1f48e0;
    }
    ctx->pc = 0x1F48D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F48E0u);
        ctx->pc = 0x1F48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48D8u;
        // 0x1f48dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F48D8u, 0x1F48E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F48E0u;
label_1f48e0:
    // 0x1f48e0: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1f48e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f48e4:
    // 0x1f48e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f48e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f48e8:
    // 0x1f48e8: 0xc139fc8  jal         func_4E7F20
label_1f48ec:
    if (ctx->pc == 0x1F48ECu) {
        ctx->pc = 0x1F48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48E8u;
        // 0x1f48ec: 0x240601b1  addiu       $a2, $zero, 0x1B1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 433));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F48F0u;
        goto label_1f48f0;
    }
    ctx->pc = 0x1F48E8u;
    SET_GPR_U32(ctx, 31, 0x1F48F0u);
    ctx->pc = 0x1F48ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48E8u;
    // 0x1f48ec: 0x240601b1  addiu       $a2, $zero, 0x1B1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 433));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x1F48E8u, 0x1F48F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48F0u;
label_1f48f0:
    // 0x1f48f0: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1f48f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f48f4:
    // 0x1f48f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f48f8:
    // 0x1f48f8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f48f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f48fc:
    // 0x1f48fc: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f48fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f4900:
    // 0x1f4900: 0x60f809  jalr        $v1
label_1f4904:
    if (ctx->pc == 0x1F4904u) {
        ctx->pc = 0x1F4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4900u;
        // 0x1f4904: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4908u;
        goto label_1f4908;
    }
    ctx->pc = 0x1F4900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4908u);
        ctx->pc = 0x1F4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4900u;
        // 0x1f4904: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4900u, 0x1F4908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4908u;
label_1f4908:
    // 0x1f4908: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x1f4908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f490c:
    // 0x1f490c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f490cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4910:
    // 0x1f4910: 0xc139fc8  jal         func_4E7F20
label_1f4914:
    if (ctx->pc == 0x1F4914u) {
        ctx->pc = 0x1F4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4910u;
        // 0x1f4914: 0x240601b4  addiu       $a2, $zero, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4918u;
        goto label_1f4918;
    }
    ctx->pc = 0x1F4910u;
    SET_GPR_U32(ctx, 31, 0x1F4918u);
    ctx->pc = 0x1F4914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4910u;
    // 0x1f4914: 0x240601b4  addiu       $a2, $zero, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x1F4910u, 0x1F4918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4918u;
label_1f4918:
    // 0x1f4918: 0x8e2500a8  lw          $a1, 0xA8($s1)
    ctx->pc = 0x1f4918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1f491c:
    // 0x1f491c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f4920:
    // 0x1f4920: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f4920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f4924:
    // 0x1f4924: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f4924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f4928:
    // 0x1f4928: 0x60f809  jalr        $v1
label_1f492c:
    if (ctx->pc == 0x1F492Cu) {
        ctx->pc = 0x1F492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4928u;
        // 0x1f492c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4930u;
        goto label_1f4930;
    }
    ctx->pc = 0x1F4928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4930u);
        ctx->pc = 0x1F492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4928u;
        // 0x1f492c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4928u, 0x1F4930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4930u;
label_1f4930:
    // 0x1f4930: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x1f4930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1f4934:
    // 0x1f4934: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4938:
    // 0x1f4938: 0xc13a560  jal         func_4E9580
label_1f493c:
    if (ctx->pc == 0x1F493Cu) {
        ctx->pc = 0x1F493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4938u;
        // 0x1f493c: 0x240601b7  addiu       $a2, $zero, 0x1B7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4940u;
        goto label_1f4940;
    }
    ctx->pc = 0x1F4938u;
    SET_GPR_U32(ctx, 31, 0x1F4940u);
    ctx->pc = 0x1F493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4938u;
    // 0x1f493c: 0x240601b7  addiu       $a2, $zero, 0x1B7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9580u, 0x1F4938u, 0x1F4940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4940u;
label_1f4940:
    // 0x1f4940: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x1f4940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1f4944:
    // 0x1f4944: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f4944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f4948:
    // 0x1f4948: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f4948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f494c:
    // 0x1f494c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f4950:
    // 0x1f4950: 0x60f809  jalr        $v1
label_1f4954:
    if (ctx->pc == 0x1F4954u) {
        ctx->pc = 0x1F4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4950u;
        // 0x1f4954: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4958u;
        goto label_1f4958;
    }
    ctx->pc = 0x1F4950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4958u);
        ctx->pc = 0x1F4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4950u;
        // 0x1f4954: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4950u, 0x1F4958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4958u;
label_1f4958:
    // 0x1f4958: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x1f4958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1f495c:
    // 0x1f495c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f495cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4960:
    // 0x1f4960: 0xc139fe8  jal         func_4E7FA0
label_1f4964:
    if (ctx->pc == 0x1F4964u) {
        ctx->pc = 0x1F4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4960u;
        // 0x1f4964: 0x240601ba  addiu       $a2, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4968u;
        goto label_1f4968;
    }
    ctx->pc = 0x1F4960u;
    SET_GPR_U32(ctx, 31, 0x1F4968u);
    ctx->pc = 0x1F4964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4960u;
    // 0x1f4964: 0x240601ba  addiu       $a2, $zero, 0x1BA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x1F4960u, 0x1F4968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4968u;
label_1f4968:
    // 0x1f4968: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f4968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f496c:
    // 0x1f496c: 0x0  nop
    ctx->pc = 0x1f496cu;
    // NOP
label_1f4970:
    // 0x1f4970: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f4970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f4974:
    // 0x1f4974: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f4974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f4978:
    // 0x1f4978: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1f4978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1f497c:
    // 0x1f497c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1f497cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1f4980:
    // 0x1f4980: 0x60f809  jalr        $v1
label_1f4984:
    if (ctx->pc == 0x1F4984u) {
        ctx->pc = 0x1F4984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4980u;
        // 0x1f4984: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4988u;
        goto label_1f4988;
    }
    ctx->pc = 0x1F4980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4988u);
        ctx->pc = 0x1F4984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4980u;
        // 0x1f4984: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4980u, 0x1F4988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4988u;
label_1f4988:
    // 0x1f4988: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f498c:
    // 0x1f498c: 0x26857540  addiu       $a1, $s4, 0x7540
    ctx->pc = 0x1f498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 30016));
label_1f4990:
    // 0x1f4990: 0x240601be  addiu       $a2, $zero, 0x1BE
    ctx->pc = 0x1f4990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
label_1f4994:
    // 0x1f4994: 0xc138e72  jal         func_4E39C8
label_1f4998:
    if (ctx->pc == 0x1F4998u) {
        ctx->pc = 0x1F4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4994u;
        // 0x1f4998: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F499Cu;
        goto label_1f499c;
    }
    ctx->pc = 0x1F4994u;
    SET_GPR_U32(ctx, 31, 0x1F499Cu);
    ctx->pc = 0x1F4998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4994u;
    // 0x1f4998: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1F4994u, 0x1F499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F499Cu;
label_1f499c:
    // 0x1f499c: 0x2e620009  sltiu       $v0, $s3, 0x9
    ctx->pc = 0x1f499cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f49a0:
    // 0x1f49a0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_1f49a4:
    if (ctx->pc == 0x1F49A4u) {
        ctx->pc = 0x1F49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F49A0u;
        // 0x1f49a4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F49A8u;
        goto label_1f49a8;
    }
    ctx->pc = 0x1F49A0u;
    {
        const bool branch_taken_0x1f49a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f49a0) {
            ctx->pc = 0x1F49A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F49A0u;
            // 0x1f49a4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4970;
        }
    }
    ctx->pc = 0x1F49A8u;
label_1f49a8:
    // 0x1f49a8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1f49a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1f49ac:
    // 0x1f49ac: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1f49acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1f49b0:
    // 0x1f49b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f49b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f49b4:
    // 0x1f49b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f49b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f49b8:
    // 0x1f49b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f49b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f49bc:
    // 0x1f49bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f49bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f49c0:
    // 0x1f49c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f49c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f49c4:
    // 0x1f49c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f49c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f49c8:
    // 0x1f49c8: 0x3e00008  jr          $ra
label_1f49cc:
    if (ctx->pc == 0x1F49CCu) {
        ctx->pc = 0x1F49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F49C8u;
        // 0x1f49cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F49D0u;
        goto label_fallthrough_0x1f49c8;
    }
    ctx->pc = 0x1F49C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F49C8u;
        // 0x1f49cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F49C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f49c8:
    ctx->pc = 0x1F49D0u;
}
