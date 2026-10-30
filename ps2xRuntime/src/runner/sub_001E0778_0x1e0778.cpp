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

// Function: sub_001E0778
// Address: 0x1e0778 - 0x1e0998
void sub_001E0778_0x1e0778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0778_0x1e0778");
#endif

    switch (ctx->pc) {
        case 0x1e0778u: goto label_1e0778;
        case 0x1e077cu: goto label_1e077c;
        case 0x1e0780u: goto label_1e0780;
        case 0x1e0784u: goto label_1e0784;
        case 0x1e0788u: goto label_1e0788;
        case 0x1e078cu: goto label_1e078c;
        case 0x1e0790u: goto label_1e0790;
        case 0x1e0794u: goto label_1e0794;
        case 0x1e0798u: goto label_1e0798;
        case 0x1e079cu: goto label_1e079c;
        case 0x1e07a0u: goto label_1e07a0;
        case 0x1e07a4u: goto label_1e07a4;
        case 0x1e07a8u: goto label_1e07a8;
        case 0x1e07acu: goto label_1e07ac;
        case 0x1e07b0u: goto label_1e07b0;
        case 0x1e07b4u: goto label_1e07b4;
        case 0x1e07b8u: goto label_1e07b8;
        case 0x1e07bcu: goto label_1e07bc;
        case 0x1e07c0u: goto label_1e07c0;
        case 0x1e07c4u: goto label_1e07c4;
        case 0x1e07c8u: goto label_1e07c8;
        case 0x1e07ccu: goto label_1e07cc;
        case 0x1e07d0u: goto label_1e07d0;
        case 0x1e07d4u: goto label_1e07d4;
        case 0x1e07d8u: goto label_1e07d8;
        case 0x1e07dcu: goto label_1e07dc;
        case 0x1e07e0u: goto label_1e07e0;
        case 0x1e07e4u: goto label_1e07e4;
        case 0x1e07e8u: goto label_1e07e8;
        case 0x1e07ecu: goto label_1e07ec;
        case 0x1e07f0u: goto label_1e07f0;
        case 0x1e07f4u: goto label_1e07f4;
        case 0x1e07f8u: goto label_1e07f8;
        case 0x1e07fcu: goto label_1e07fc;
        case 0x1e0800u: goto label_1e0800;
        case 0x1e0804u: goto label_1e0804;
        case 0x1e0808u: goto label_1e0808;
        case 0x1e080cu: goto label_1e080c;
        case 0x1e0810u: goto label_1e0810;
        case 0x1e0814u: goto label_1e0814;
        case 0x1e0818u: goto label_1e0818;
        case 0x1e081cu: goto label_1e081c;
        case 0x1e0820u: goto label_1e0820;
        case 0x1e0824u: goto label_1e0824;
        case 0x1e0828u: goto label_1e0828;
        case 0x1e082cu: goto label_1e082c;
        case 0x1e0830u: goto label_1e0830;
        case 0x1e0834u: goto label_1e0834;
        case 0x1e0838u: goto label_1e0838;
        case 0x1e083cu: goto label_1e083c;
        case 0x1e0840u: goto label_1e0840;
        case 0x1e0844u: goto label_1e0844;
        case 0x1e0848u: goto label_1e0848;
        case 0x1e084cu: goto label_1e084c;
        case 0x1e0850u: goto label_1e0850;
        case 0x1e0854u: goto label_1e0854;
        case 0x1e0858u: goto label_1e0858;
        case 0x1e085cu: goto label_1e085c;
        case 0x1e0860u: goto label_1e0860;
        case 0x1e0864u: goto label_1e0864;
        case 0x1e0868u: goto label_1e0868;
        case 0x1e086cu: goto label_1e086c;
        case 0x1e0870u: goto label_1e0870;
        case 0x1e0874u: goto label_1e0874;
        case 0x1e0878u: goto label_1e0878;
        case 0x1e087cu: goto label_1e087c;
        case 0x1e0880u: goto label_1e0880;
        case 0x1e0884u: goto label_1e0884;
        case 0x1e0888u: goto label_1e0888;
        case 0x1e088cu: goto label_1e088c;
        case 0x1e0890u: goto label_1e0890;
        case 0x1e0894u: goto label_1e0894;
        case 0x1e0898u: goto label_1e0898;
        case 0x1e089cu: goto label_1e089c;
        case 0x1e08a0u: goto label_1e08a0;
        case 0x1e08a4u: goto label_1e08a4;
        case 0x1e08a8u: goto label_1e08a8;
        case 0x1e08acu: goto label_1e08ac;
        case 0x1e08b0u: goto label_1e08b0;
        case 0x1e08b4u: goto label_1e08b4;
        case 0x1e08b8u: goto label_1e08b8;
        case 0x1e08bcu: goto label_1e08bc;
        case 0x1e08c0u: goto label_1e08c0;
        case 0x1e08c4u: goto label_1e08c4;
        case 0x1e08c8u: goto label_1e08c8;
        case 0x1e08ccu: goto label_1e08cc;
        case 0x1e08d0u: goto label_1e08d0;
        case 0x1e08d4u: goto label_1e08d4;
        case 0x1e08d8u: goto label_1e08d8;
        case 0x1e08dcu: goto label_1e08dc;
        case 0x1e08e0u: goto label_1e08e0;
        case 0x1e08e4u: goto label_1e08e4;
        case 0x1e08e8u: goto label_1e08e8;
        case 0x1e08ecu: goto label_1e08ec;
        case 0x1e08f0u: goto label_1e08f0;
        case 0x1e08f4u: goto label_1e08f4;
        case 0x1e08f8u: goto label_1e08f8;
        case 0x1e08fcu: goto label_1e08fc;
        case 0x1e0900u: goto label_1e0900;
        case 0x1e0904u: goto label_1e0904;
        case 0x1e0908u: goto label_1e0908;
        case 0x1e090cu: goto label_1e090c;
        case 0x1e0910u: goto label_1e0910;
        case 0x1e0914u: goto label_1e0914;
        case 0x1e0918u: goto label_1e0918;
        case 0x1e091cu: goto label_1e091c;
        case 0x1e0920u: goto label_1e0920;
        case 0x1e0924u: goto label_1e0924;
        case 0x1e0928u: goto label_1e0928;
        case 0x1e092cu: goto label_1e092c;
        case 0x1e0930u: goto label_1e0930;
        case 0x1e0934u: goto label_1e0934;
        case 0x1e0938u: goto label_1e0938;
        case 0x1e093cu: goto label_1e093c;
        case 0x1e0940u: goto label_1e0940;
        case 0x1e0944u: goto label_1e0944;
        case 0x1e0948u: goto label_1e0948;
        case 0x1e094cu: goto label_1e094c;
        case 0x1e0950u: goto label_1e0950;
        case 0x1e0954u: goto label_1e0954;
        case 0x1e0958u: goto label_1e0958;
        case 0x1e095cu: goto label_1e095c;
        case 0x1e0960u: goto label_1e0960;
        case 0x1e0964u: goto label_1e0964;
        case 0x1e0968u: goto label_1e0968;
        case 0x1e096cu: goto label_1e096c;
        case 0x1e0970u: goto label_1e0970;
        case 0x1e0974u: goto label_1e0974;
        case 0x1e0978u: goto label_1e0978;
        case 0x1e097cu: goto label_1e097c;
        case 0x1e0980u: goto label_1e0980;
        case 0x1e0984u: goto label_1e0984;
        case 0x1e0988u: goto label_1e0988;
        case 0x1e098cu: goto label_1e098c;
        case 0x1e0990u: goto label_1e0990;
        case 0x1e0994u: goto label_1e0994;
        default: break;
    }

    ctx->pc = 0x1e0778u;

label_1e0778:
    // 0x1e0778: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e0778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e077c:
    // 0x1e077c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e077cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e0780:
    // 0x1e0780: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e0780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1e0784:
    // 0x1e0784: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e0784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0788:
    // 0x1e0788: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e0788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1e078c:
    // 0x1e078c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e078cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e0790:
    // 0x1e0790: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1e0790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1e0794:
    // 0x1e0794: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1e0794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1e0798:
    // 0x1e0798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e079c:
    // 0x1e079c: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1e079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1e07a0:
    // 0x1e07a0: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
label_1e07a4:
    if (ctx->pc == 0x1E07A4u) {
        ctx->pc = 0x1E07A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07A0u;
        // 0x1e07a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07A8u;
        goto label_1e07a8;
    }
    ctx->pc = 0x1E07A0u;
    {
        const bool branch_taken_0x1e07a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E07A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07A0u;
        // 0x1e07a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07a0) {
            ctx->pc = 0x1E0978u;
            goto label_1e0978;
        }
    }
    ctx->pc = 0x1E07A8u;
label_1e07a8:
    // 0x1e07a8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1e07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1e07ac:
    // 0x1e07ac: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_1e07b0:
    if (ctx->pc == 0x1E07B0u) {
        ctx->pc = 0x1E07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07ACu;
        // 0x1e07b0: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07B4u;
        goto label_1e07b4;
    }
    ctx->pc = 0x1E07ACu;
    {
        const bool branch_taken_0x1e07ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07ACu;
        // 0x1e07b0: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07ac) {
            ctx->pc = 0x1E097Cu;
            goto label_1e097c;
        }
    }
    ctx->pc = 0x1E07B4u;
label_1e07b4:
    // 0x1e07b4: 0xc06ec70  jal         func_1BB1C0
label_1e07b8:
    if (ctx->pc == 0x1E07B8u) {
        ctx->pc = 0x1E07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07B4u;
        // 0x1e07b8: 0x26440880  addiu       $a0, $s2, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07BCu;
        goto label_1e07bc;
    }
    ctx->pc = 0x1E07B4u;
    SET_GPR_U32(ctx, 31, 0x1E07BCu);
    ctx->pc = 0x1E07B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E07B4u;
    // 0x1e07b8: 0x26440880  addiu       $a0, $s2, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1E07B4u, 0x1E07BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E07BCu;
label_1e07bc:
    // 0x1e07bc: 0xc06ec70  jal         func_1BB1C0
label_1e07c0:
    if (ctx->pc == 0x1E07C0u) {
        ctx->pc = 0x1E07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07BCu;
        // 0x1e07c0: 0x26440170  addiu       $a0, $s2, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07C4u;
        goto label_1e07c4;
    }
    ctx->pc = 0x1E07BCu;
    SET_GPR_U32(ctx, 31, 0x1E07C4u);
    ctx->pc = 0x1E07C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E07BCu;
    // 0x1e07c0: 0x26440170  addiu       $a0, $s2, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1E07BCu, 0x1E07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E07C4u;
label_1e07c4:
    // 0x1e07c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e07c8:
    // 0x1e07c8: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1e07c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1e07cc:
    // 0x1e07cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e07d0:
    // 0x1e07d0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e07d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e07d4:
    // 0x1e07d4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e07d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e07d8:
    // 0x1e07d8: 0x40f809  jalr        $v0
label_1e07dc:
    if (ctx->pc == 0x1E07DCu) {
        ctx->pc = 0x1E07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07D8u;
        // 0x1e07dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07E0u;
        goto label_1e07e0;
    }
    ctx->pc = 0x1E07D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E07E0u);
        ctx->pc = 0x1E07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07D8u;
        // 0x1e07dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E07D8u, 0x1E07E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E07E0u;
label_1e07e0:
    // 0x1e07e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e07e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e07e4:
    // 0x1e07e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e07e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e07e8:
    // 0x1e07e8: 0x8c64eec0  lw          $a0, -0x1140($v1)
    ctx->pc = 0x1e07e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962880)));
label_1e07ec:
    // 0x1e07ec: 0x8e420704  lw          $v0, 0x704($s2)
    ctx->pc = 0x1e07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1796)));
label_1e07f0:
    // 0x1e07f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e07f4:
    // 0x1e07f4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1e07f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1e07f8:
    // 0x1e07f8: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_1e07fc:
    if (ctx->pc == 0x1E07FCu) {
        ctx->pc = 0x1E07FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07F8u;
        // 0x1e07fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0800u;
        goto label_1e0800;
    }
    ctx->pc = 0x1E07F8u;
    {
        const bool branch_taken_0x1e07f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07F8u;
        // 0x1e07fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07f8) {
            ctx->pc = 0x1E0974u;
            goto label_1e0974;
        }
    }
    ctx->pc = 0x1E0800u;
label_1e0800:
    // 0x1e0800: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1e0800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1e0804:
    // 0x1e0804: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1e0804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_1e0808:
    // 0x1e0808: 0x24a565a0  addiu       $a1, $a1, 0x65A0
    ctx->pc = 0x1e0808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26016));
label_1e080c:
    // 0x1e080c: 0xc043e94  jal         func_10FA50
label_1e0810:
    if (ctx->pc == 0x1E0810u) {
        ctx->pc = 0x1E0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E080Cu;
        // 0x1e0810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0814u;
        goto label_1e0814;
    }
    ctx->pc = 0x1E080Cu;
    SET_GPR_U32(ctx, 31, 0x1E0814u);
    ctx->pc = 0x1E0810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E080Cu;
    // 0x1e0810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x1E080Cu, 0x1E0814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0814u;
label_1e0814:
    // 0x1e0814: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1e0814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1e0818:
    // 0x1e0818: 0x8e420704  lw          $v0, 0x704($s2)
    ctx->pc = 0x1e0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1796)));
label_1e081c:
    // 0x1e081c: 0x8c83eebc  lw          $v1, -0x1144($a0)
    ctx->pc = 0x1e081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962876)));
label_1e0820:
    // 0x1e0820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e0824:
    // 0x1e0824: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1e0824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1e0828:
    // 0x1e0828: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
label_1e082c:
    if (ctx->pc == 0x1E082Cu) {
        ctx->pc = 0x1E082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0828u;
        // 0x1e082c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0830u;
        goto label_1e0830;
    }
    ctx->pc = 0x1E0828u;
    {
        const bool branch_taken_0x1e0828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0828) {
            ctx->pc = 0x1E082Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0828u;
            // 0x1e082c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0978u;
            goto label_1e0978;
        }
    }
    ctx->pc = 0x1E0830u;
label_1e0830:
    // 0x1e0830: 0x8e420708  lw          $v0, 0x708($s2)
    ctx->pc = 0x1e0830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1800)));
label_1e0834:
    // 0x1e0834: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e0838:
    if (ctx->pc == 0x1E0838u) {
        ctx->pc = 0x1E0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0834u;
        // 0x1e0838: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E083Cu;
        goto label_1e083c;
    }
    ctx->pc = 0x1E0834u;
    {
        const bool branch_taken_0x1e0834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0834u;
        // 0x1e0838: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0834) {
            ctx->pc = 0x1E0848u;
            goto label_1e0848;
        }
    }
    ctx->pc = 0x1E083Cu;
label_1e083c:
    // 0x1e083c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0840:
    // 0x1e0840: 0xae500700  sw          $s0, 0x700($s2)
    ctx->pc = 0x1e0840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1792), GPR_U32(ctx, 16));
label_1e0844:
    // 0x1e0844: 0xae420708  sw          $v0, 0x708($s2)
    ctx->pc = 0x1e0844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1800), GPR_U32(ctx, 2));
label_1e0848:
    // 0x1e0848: 0x8e440700  lw          $a0, 0x700($s2)
    ctx->pc = 0x1e0848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1792)));
label_1e084c:
    // 0x1e084c: 0x8c62eeb8  lw          $v0, -0x1148($v1)
    ctx->pc = 0x1e084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962872)));
label_1e0850:
    // 0x1e0850: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1e0850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e0854:
    // 0x1e0854: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e0854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e0858:
    // 0x1e0858: 0x50182b  sltu        $v1, $v0, $s0
    ctx->pc = 0x1e0858u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1e085c:
    // 0x1e085c: 0x5460003b  bnel        $v1, $zero, . + 4 + (0x3B << 2)
label_1e0860:
    if (ctx->pc == 0x1E0860u) {
        ctx->pc = 0x1E0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E085Cu;
        // 0x1e0860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0864u;
        goto label_1e0864;
    }
    ctx->pc = 0x1E085Cu;
    {
        const bool branch_taken_0x1e085c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e085c) {
            ctx->pc = 0x1E0860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E085Cu;
            // 0x1e0860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E094Cu;
            goto label_1e094c;
        }
    }
    ctx->pc = 0x1E0864u;
label_1e0864:
    // 0x1e0864: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1e0864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e0868:
    // 0x1e0868: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1e086c:
    if (ctx->pc == 0x1E086Cu) {
        ctx->pc = 0x1E086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0868u;
        // 0x1e086c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0870u;
        goto label_1e0870;
    }
    ctx->pc = 0x1E0868u;
    {
        const bool branch_taken_0x1e0868 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1E086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0868u;
        // 0x1e086c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0868) {
            ctx->pc = 0x1E0884u;
            goto label_1e0884;
        }
    }
    ctx->pc = 0x1E0870u;
label_1e0870:
    // 0x1e0870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e0874:
    // 0x1e0874: 0x0  nop
    ctx->pc = 0x1e0874u;
    // NOP
label_1e0878:
    // 0x1e0878: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e087c:
    // 0x1e087c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e0880:
    if (ctx->pc == 0x1E0880u) {
        ctx->pc = 0x1E0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E087Cu;
        // 0x1e0880: 0x8ca2eeb8  lw          $v0, -0x1148($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0884u;
        goto label_1e0884;
    }
    ctx->pc = 0x1E087Cu;
    {
        const bool branch_taken_0x1e087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E087Cu;
        // 0x1e0880: 0x8ca2eeb8  lw          $v0, -0x1148($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e087c) {
            ctx->pc = 0x1E08A0u;
            goto label_1e08a0;
        }
    }
    ctx->pc = 0x1E0884u;
label_1e0884:
    // 0x1e0884: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e0888:
    // 0x1e0888: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e0888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e088c:
    // 0x1e088c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e088cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e0890:
    // 0x1e0890: 0x0  nop
    ctx->pc = 0x1e0890u;
    // NOP
label_1e0894:
    // 0x1e0894: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e0898:
    // 0x1e0898: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e0898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e089c:
    // 0x1e089c: 0x8ca2eeb8  lw          $v0, -0x1148($a1)
    ctx->pc = 0x1e089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962872)));
label_1e08a0:
    // 0x1e08a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1e08a4:
    if (ctx->pc == 0x1E08A4u) {
        ctx->pc = 0x1E08A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08A0u;
        // 0x1e08a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E08A8u;
        goto label_1e08a8;
    }
    ctx->pc = 0x1E08A0u;
    {
        const bool branch_taken_0x1e08a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1E08A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08A0u;
        // 0x1e08a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e08a0) {
            ctx->pc = 0x1E08BCu;
            goto label_1e08bc;
        }
    }
    ctx->pc = 0x1E08A8u;
label_1e08a8:
    // 0x1e08a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e08a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e08ac:
    // 0x1e08ac: 0x0  nop
    ctx->pc = 0x1e08acu;
    // NOP
label_1e08b0:
    // 0x1e08b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e08b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1e08b4:
    // 0x1e08b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e08b8:
    if (ctx->pc == 0x1E08B8u) {
        ctx->pc = 0x1E08BCu;
        goto label_1e08bc;
    }
    ctx->pc = 0x1E08B4u;
    {
        const bool branch_taken_0x1e08b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e08b4) {
            ctx->pc = 0x1E08D4u;
            goto label_1e08d4;
        }
    }
    ctx->pc = 0x1E08BCu;
label_1e08bc:
    // 0x1e08bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e08bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e08c0:
    // 0x1e08c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e08c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e08c4:
    // 0x1e08c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e08c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e08c8:
    // 0x1e08c8: 0x0  nop
    ctx->pc = 0x1e08c8u;
    // NOP
label_1e08cc:
    // 0x1e08cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e08ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1e08d0:
    // 0x1e08d0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1e08d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1e08d4:
    // 0x1e08d4: 0x0  nop
    ctx->pc = 0x1e08d4u;
    // NOP
label_1e08d8:
    // 0x1e08d8: 0x0  nop
    ctx->pc = 0x1e08d8u;
    // NOP
label_1e08dc:
    // 0x1e08dc: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1e08dcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1e08e0:
    // 0x1e08e0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1e08e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1e08e4:
    // 0x1e08e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e08e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e08e8:
    // 0x1e08e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e08e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e08ec:
    // 0x1e08ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e08ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e08f0:
    // 0x1e08f0: 0x26530360  addiu       $s3, $s2, 0x360
    ctx->pc = 0x1e08f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
label_1e08f4:
    // 0x1e08f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e08f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e08f8:
    // 0x1e08f8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1e08f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e08fc:
    // 0x1e08fc: 0x265107b0  addiu       $s1, $s2, 0x7B0
    ctx->pc = 0x1e08fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1968));
label_1e0900:
    // 0x1e0900: 0x26520430  addiu       $s2, $s2, 0x430
    ctx->pc = 0x1e0900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
label_1e0904:
    // 0x1e0904: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1e0904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0908:
    // 0x1e0908: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x1e0908u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e090c:
    // 0x1e090c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e090cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1e0910:
    // 0x1e0910: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e0910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e0914:
    // 0x1e0914: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0914u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1e0918:
    // 0x1e0918: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1e0918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1e091c:
    // 0x1e091c: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1e091cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1e0920:
    // 0x1e0920: 0xc075392  jal         func_1D4E48
label_1e0924:
    if (ctx->pc == 0x1E0924u) {
        ctx->pc = 0x1E0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0920u;
        // 0x1e0924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0928u;
        goto label_1e0928;
    }
    ctx->pc = 0x1E0920u;
    SET_GPR_U32(ctx, 31, 0x1E0928u);
    ctx->pc = 0x1E0924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0920u;
    // 0x1e0924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4E48u, 0x1E0920u, 0x1E0928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0928u;
label_1e0928:
    // 0x1e0928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e092c:
    // 0x1e092c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e092cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e0930:
    // 0x1e0930: 0xc075392  jal         func_1D4E48
label_1e0934:
    if (ctx->pc == 0x1E0934u) {
        ctx->pc = 0x1E0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0930u;
        // 0x1e0934: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0938u;
        goto label_1e0938;
    }
    ctx->pc = 0x1E0930u;
    SET_GPR_U32(ctx, 31, 0x1E0938u);
    ctx->pc = 0x1E0934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0930u;
    // 0x1e0934: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4E48u, 0x1E0930u, 0x1E0938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0938u;
label_1e0938:
    // 0x1e0938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e0938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e093c:
    // 0x1e093c: 0xc073b26  jal         func_1CEC98
label_1e0940:
    if (ctx->pc == 0x1E0940u) {
        ctx->pc = 0x1E0940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E093Cu;
        // 0x1e0940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0944u;
        goto label_1e0944;
    }
    ctx->pc = 0x1E093Cu;
    SET_GPR_U32(ctx, 31, 0x1E0944u);
    ctx->pc = 0x1E0940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E093Cu;
    // 0x1e0940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC98u, 0x1E093Cu, 0x1E0944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0944u;
label_1e0944:
    // 0x1e0944: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e0948:
    if (ctx->pc == 0x1E0948u) {
        ctx->pc = 0x1E0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0944u;
        // 0x1e0948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E094Cu;
        goto label_1e094c;
    }
    ctx->pc = 0x1E0944u;
    {
        const bool branch_taken_0x1e0944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0944u;
        // 0x1e0948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0944) {
            ctx->pc = 0x1E095Cu;
            goto label_1e095c;
        }
    }
    ctx->pc = 0x1E094Cu;
label_1e094c:
    // 0x1e094c: 0x26550430  addiu       $s5, $s2, 0x430
    ctx->pc = 0x1e094cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
label_1e0950:
    // 0x1e0950: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x1e0950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_1e0954:
    // 0x1e0954: 0x26440360  addiu       $a0, $s2, 0x360
    ctx->pc = 0x1e0954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
label_1e0958:
    // 0x1e0958: 0x265407b0  addiu       $s4, $s2, 0x7B0
    ctx->pc = 0x1e0958u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1968));
label_1e095c:
    // 0x1e095c: 0xc0754b2  jal         func_1D52C8
label_1e0960:
    if (ctx->pc == 0x1E0960u) {
        ctx->pc = 0x1E0964u;
        goto label_1e0964;
    }
    ctx->pc = 0x1E095Cu;
    SET_GPR_U32(ctx, 31, 0x1E0964u);
    ctx->pc = 0x1D52C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52C8u, 0x1E095Cu, 0x1E0964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0964u;
label_1e0964:
    // 0x1e0964: 0xc0754b2  jal         func_1D52C8
label_1e0968:
    if (ctx->pc == 0x1E0968u) {
        ctx->pc = 0x1E0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0964u;
        // 0x1e0968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E096Cu;
        goto label_1e096c;
    }
    ctx->pc = 0x1E0964u;
    SET_GPR_U32(ctx, 31, 0x1E096Cu);
    ctx->pc = 0x1E0968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0964u;
    // 0x1e0968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D52C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52C8u, 0x1E0964u, 0x1E096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E096Cu;
label_1e096c:
    // 0x1e096c: 0xc073b62  jal         func_1CED88
label_1e0970:
    if (ctx->pc == 0x1E0970u) {
        ctx->pc = 0x1E0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E096Cu;
        // 0x1e0970: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0974u;
        goto label_1e0974;
    }
    ctx->pc = 0x1E096Cu;
    SET_GPR_U32(ctx, 31, 0x1E0974u);
    ctx->pc = 0x1E0970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E096Cu;
    // 0x1e0970: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED88u, 0x1E096Cu, 0x1E0974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0974u;
label_1e0974:
    // 0x1e0974: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e0974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e0978:
    // 0x1e0978: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e0978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e097c:
    // 0x1e097c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e097cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e0980:
    // 0x1e0980: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e0980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e0984:
    // 0x1e0984: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1e0984u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0988:
    // 0x1e0988: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1e0988u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e098c:
    // 0x1e098c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e098cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0990:
    // 0x1e0990: 0x3e00008  jr          $ra
label_1e0994:
    if (ctx->pc == 0x1E0994u) {
        ctx->pc = 0x1E0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0990u;
        // 0x1e0994: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0998u;
        goto label_fallthrough_0x1e0990;
    }
    ctx->pc = 0x1E0990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0990u;
        // 0x1e0994: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0990:
    ctx->pc = 0x1E0998u;
}
