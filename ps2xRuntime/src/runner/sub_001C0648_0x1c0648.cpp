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

// Function: sub_001C0648
// Address: 0x1c0648 - 0x1c09f8
void sub_001C0648_0x1c0648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0648_0x1c0648");
#endif

    switch (ctx->pc) {
        case 0x1c0648u: goto label_1c0648;
        case 0x1c064cu: goto label_1c064c;
        case 0x1c0650u: goto label_1c0650;
        case 0x1c0654u: goto label_1c0654;
        case 0x1c0658u: goto label_1c0658;
        case 0x1c065cu: goto label_1c065c;
        case 0x1c0660u: goto label_1c0660;
        case 0x1c0664u: goto label_1c0664;
        case 0x1c0668u: goto label_1c0668;
        case 0x1c066cu: goto label_1c066c;
        case 0x1c0670u: goto label_1c0670;
        case 0x1c0674u: goto label_1c0674;
        case 0x1c0678u: goto label_1c0678;
        case 0x1c067cu: goto label_1c067c;
        case 0x1c0680u: goto label_1c0680;
        case 0x1c0684u: goto label_1c0684;
        case 0x1c0688u: goto label_1c0688;
        case 0x1c068cu: goto label_1c068c;
        case 0x1c0690u: goto label_1c0690;
        case 0x1c0694u: goto label_1c0694;
        case 0x1c0698u: goto label_1c0698;
        case 0x1c069cu: goto label_1c069c;
        case 0x1c06a0u: goto label_1c06a0;
        case 0x1c06a4u: goto label_1c06a4;
        case 0x1c06a8u: goto label_1c06a8;
        case 0x1c06acu: goto label_1c06ac;
        case 0x1c06b0u: goto label_1c06b0;
        case 0x1c06b4u: goto label_1c06b4;
        case 0x1c06b8u: goto label_1c06b8;
        case 0x1c06bcu: goto label_1c06bc;
        case 0x1c06c0u: goto label_1c06c0;
        case 0x1c06c4u: goto label_1c06c4;
        case 0x1c06c8u: goto label_1c06c8;
        case 0x1c06ccu: goto label_1c06cc;
        case 0x1c06d0u: goto label_1c06d0;
        case 0x1c06d4u: goto label_1c06d4;
        case 0x1c06d8u: goto label_1c06d8;
        case 0x1c06dcu: goto label_1c06dc;
        case 0x1c06e0u: goto label_1c06e0;
        case 0x1c06e4u: goto label_1c06e4;
        case 0x1c06e8u: goto label_1c06e8;
        case 0x1c06ecu: goto label_1c06ec;
        case 0x1c06f0u: goto label_1c06f0;
        case 0x1c06f4u: goto label_1c06f4;
        case 0x1c06f8u: goto label_1c06f8;
        case 0x1c06fcu: goto label_1c06fc;
        case 0x1c0700u: goto label_1c0700;
        case 0x1c0704u: goto label_1c0704;
        case 0x1c0708u: goto label_1c0708;
        case 0x1c070cu: goto label_1c070c;
        case 0x1c0710u: goto label_1c0710;
        case 0x1c0714u: goto label_1c0714;
        case 0x1c0718u: goto label_1c0718;
        case 0x1c071cu: goto label_1c071c;
        case 0x1c0720u: goto label_1c0720;
        case 0x1c0724u: goto label_1c0724;
        case 0x1c0728u: goto label_1c0728;
        case 0x1c072cu: goto label_1c072c;
        case 0x1c0730u: goto label_1c0730;
        case 0x1c0734u: goto label_1c0734;
        case 0x1c0738u: goto label_1c0738;
        case 0x1c073cu: goto label_1c073c;
        case 0x1c0740u: goto label_1c0740;
        case 0x1c0744u: goto label_1c0744;
        case 0x1c0748u: goto label_1c0748;
        case 0x1c074cu: goto label_1c074c;
        case 0x1c0750u: goto label_1c0750;
        case 0x1c0754u: goto label_1c0754;
        case 0x1c0758u: goto label_1c0758;
        case 0x1c075cu: goto label_1c075c;
        case 0x1c0760u: goto label_1c0760;
        case 0x1c0764u: goto label_1c0764;
        case 0x1c0768u: goto label_1c0768;
        case 0x1c076cu: goto label_1c076c;
        case 0x1c0770u: goto label_1c0770;
        case 0x1c0774u: goto label_1c0774;
        case 0x1c0778u: goto label_1c0778;
        case 0x1c077cu: goto label_1c077c;
        case 0x1c0780u: goto label_1c0780;
        case 0x1c0784u: goto label_1c0784;
        case 0x1c0788u: goto label_1c0788;
        case 0x1c078cu: goto label_1c078c;
        case 0x1c0790u: goto label_1c0790;
        case 0x1c0794u: goto label_1c0794;
        case 0x1c0798u: goto label_1c0798;
        case 0x1c079cu: goto label_1c079c;
        case 0x1c07a0u: goto label_1c07a0;
        case 0x1c07a4u: goto label_1c07a4;
        case 0x1c07a8u: goto label_1c07a8;
        case 0x1c07acu: goto label_1c07ac;
        case 0x1c07b0u: goto label_1c07b0;
        case 0x1c07b4u: goto label_1c07b4;
        case 0x1c07b8u: goto label_1c07b8;
        case 0x1c07bcu: goto label_1c07bc;
        case 0x1c07c0u: goto label_1c07c0;
        case 0x1c07c4u: goto label_1c07c4;
        case 0x1c07c8u: goto label_1c07c8;
        case 0x1c07ccu: goto label_1c07cc;
        case 0x1c07d0u: goto label_1c07d0;
        case 0x1c07d4u: goto label_1c07d4;
        case 0x1c07d8u: goto label_1c07d8;
        case 0x1c07dcu: goto label_1c07dc;
        case 0x1c07e0u: goto label_1c07e0;
        case 0x1c07e4u: goto label_1c07e4;
        case 0x1c07e8u: goto label_1c07e8;
        case 0x1c07ecu: goto label_1c07ec;
        case 0x1c07f0u: goto label_1c07f0;
        case 0x1c07f4u: goto label_1c07f4;
        case 0x1c07f8u: goto label_1c07f8;
        case 0x1c07fcu: goto label_1c07fc;
        case 0x1c0800u: goto label_1c0800;
        case 0x1c0804u: goto label_1c0804;
        case 0x1c0808u: goto label_1c0808;
        case 0x1c080cu: goto label_1c080c;
        case 0x1c0810u: goto label_1c0810;
        case 0x1c0814u: goto label_1c0814;
        case 0x1c0818u: goto label_1c0818;
        case 0x1c081cu: goto label_1c081c;
        case 0x1c0820u: goto label_1c0820;
        case 0x1c0824u: goto label_1c0824;
        case 0x1c0828u: goto label_1c0828;
        case 0x1c082cu: goto label_1c082c;
        case 0x1c0830u: goto label_1c0830;
        case 0x1c0834u: goto label_1c0834;
        case 0x1c0838u: goto label_1c0838;
        case 0x1c083cu: goto label_1c083c;
        case 0x1c0840u: goto label_1c0840;
        case 0x1c0844u: goto label_1c0844;
        case 0x1c0848u: goto label_1c0848;
        case 0x1c084cu: goto label_1c084c;
        case 0x1c0850u: goto label_1c0850;
        case 0x1c0854u: goto label_1c0854;
        case 0x1c0858u: goto label_1c0858;
        case 0x1c085cu: goto label_1c085c;
        case 0x1c0860u: goto label_1c0860;
        case 0x1c0864u: goto label_1c0864;
        case 0x1c0868u: goto label_1c0868;
        case 0x1c086cu: goto label_1c086c;
        case 0x1c0870u: goto label_1c0870;
        case 0x1c0874u: goto label_1c0874;
        case 0x1c0878u: goto label_1c0878;
        case 0x1c087cu: goto label_1c087c;
        case 0x1c0880u: goto label_1c0880;
        case 0x1c0884u: goto label_1c0884;
        case 0x1c0888u: goto label_1c0888;
        case 0x1c088cu: goto label_1c088c;
        case 0x1c0890u: goto label_1c0890;
        case 0x1c0894u: goto label_1c0894;
        case 0x1c0898u: goto label_1c0898;
        case 0x1c089cu: goto label_1c089c;
        case 0x1c08a0u: goto label_1c08a0;
        case 0x1c08a4u: goto label_1c08a4;
        case 0x1c08a8u: goto label_1c08a8;
        case 0x1c08acu: goto label_1c08ac;
        case 0x1c08b0u: goto label_1c08b0;
        case 0x1c08b4u: goto label_1c08b4;
        case 0x1c08b8u: goto label_1c08b8;
        case 0x1c08bcu: goto label_1c08bc;
        case 0x1c08c0u: goto label_1c08c0;
        case 0x1c08c4u: goto label_1c08c4;
        case 0x1c08c8u: goto label_1c08c8;
        case 0x1c08ccu: goto label_1c08cc;
        case 0x1c08d0u: goto label_1c08d0;
        case 0x1c08d4u: goto label_1c08d4;
        case 0x1c08d8u: goto label_1c08d8;
        case 0x1c08dcu: goto label_1c08dc;
        case 0x1c08e0u: goto label_1c08e0;
        case 0x1c08e4u: goto label_1c08e4;
        case 0x1c08e8u: goto label_1c08e8;
        case 0x1c08ecu: goto label_1c08ec;
        case 0x1c08f0u: goto label_1c08f0;
        case 0x1c08f4u: goto label_1c08f4;
        case 0x1c08f8u: goto label_1c08f8;
        case 0x1c08fcu: goto label_1c08fc;
        case 0x1c0900u: goto label_1c0900;
        case 0x1c0904u: goto label_1c0904;
        case 0x1c0908u: goto label_1c0908;
        case 0x1c090cu: goto label_1c090c;
        case 0x1c0910u: goto label_1c0910;
        case 0x1c0914u: goto label_1c0914;
        case 0x1c0918u: goto label_1c0918;
        case 0x1c091cu: goto label_1c091c;
        case 0x1c0920u: goto label_1c0920;
        case 0x1c0924u: goto label_1c0924;
        case 0x1c0928u: goto label_1c0928;
        case 0x1c092cu: goto label_1c092c;
        case 0x1c0930u: goto label_1c0930;
        case 0x1c0934u: goto label_1c0934;
        case 0x1c0938u: goto label_1c0938;
        case 0x1c093cu: goto label_1c093c;
        case 0x1c0940u: goto label_1c0940;
        case 0x1c0944u: goto label_1c0944;
        case 0x1c0948u: goto label_1c0948;
        case 0x1c094cu: goto label_1c094c;
        case 0x1c0950u: goto label_1c0950;
        case 0x1c0954u: goto label_1c0954;
        case 0x1c0958u: goto label_1c0958;
        case 0x1c095cu: goto label_1c095c;
        case 0x1c0960u: goto label_1c0960;
        case 0x1c0964u: goto label_1c0964;
        case 0x1c0968u: goto label_1c0968;
        case 0x1c096cu: goto label_1c096c;
        case 0x1c0970u: goto label_1c0970;
        case 0x1c0974u: goto label_1c0974;
        case 0x1c0978u: goto label_1c0978;
        case 0x1c097cu: goto label_1c097c;
        case 0x1c0980u: goto label_1c0980;
        case 0x1c0984u: goto label_1c0984;
        case 0x1c0988u: goto label_1c0988;
        case 0x1c098cu: goto label_1c098c;
        case 0x1c0990u: goto label_1c0990;
        case 0x1c0994u: goto label_1c0994;
        case 0x1c0998u: goto label_1c0998;
        case 0x1c099cu: goto label_1c099c;
        case 0x1c09a0u: goto label_1c09a0;
        case 0x1c09a4u: goto label_1c09a4;
        case 0x1c09a8u: goto label_1c09a8;
        case 0x1c09acu: goto label_1c09ac;
        case 0x1c09b0u: goto label_1c09b0;
        case 0x1c09b4u: goto label_1c09b4;
        case 0x1c09b8u: goto label_1c09b8;
        case 0x1c09bcu: goto label_1c09bc;
        case 0x1c09c0u: goto label_1c09c0;
        case 0x1c09c4u: goto label_1c09c4;
        case 0x1c09c8u: goto label_1c09c8;
        case 0x1c09ccu: goto label_1c09cc;
        case 0x1c09d0u: goto label_1c09d0;
        case 0x1c09d4u: goto label_1c09d4;
        case 0x1c09d8u: goto label_1c09d8;
        case 0x1c09dcu: goto label_1c09dc;
        case 0x1c09e0u: goto label_1c09e0;
        case 0x1c09e4u: goto label_1c09e4;
        case 0x1c09e8u: goto label_1c09e8;
        case 0x1c09ecu: goto label_1c09ec;
        case 0x1c09f0u: goto label_1c09f0;
        case 0x1c09f4u: goto label_1c09f4;
        default: break;
    }

    ctx->pc = 0x1c0648u;

label_1c0648:
    // 0x1c0648: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c0648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1c064c:
    // 0x1c064c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1c064cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c0650:
    // 0x1c0650: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1c0650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1c0654:
    // 0x1c0654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0658:
    // 0x1c0658: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1c0658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1c065c:
    // 0x1c065c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1c065cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1c0660:
    // 0x1c0660: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1c0660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1c0664:
    // 0x1c0664: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1c0664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1c0668:
    // 0x1c0668: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1c0668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1c066c:
    // 0x1c066c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c066cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1c0670:
    // 0x1c0670: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1c0670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1c0674:
    // 0x1c0674: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1c0674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1c0678:
    // 0x1c0678: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c0678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c067c:
    // 0x1c067c: 0x10a2003b  beq         $a1, $v0, . + 4 + (0x3B << 2)
label_1c0680:
    if (ctx->pc == 0x1C0680u) {
        ctx->pc = 0x1C0680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C067Cu;
        // 0x1c0680: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0684u;
        goto label_1c0684;
    }
    ctx->pc = 0x1C067Cu;
    {
        const bool branch_taken_0x1c067c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C067Cu;
        // 0x1c0680: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c067c) {
            ctx->pc = 0x1C076Cu;
            goto label_1c076c;
        }
    }
    ctx->pc = 0x1C0684u;
label_1c0684:
    // 0x1c0684: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1c0684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c0688:
    // 0x1c0688: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1c068c:
    if (ctx->pc == 0x1C068Cu) {
        ctx->pc = 0x1C068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0688u;
        // 0x1c068c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0690u;
        goto label_1c0690;
    }
    ctx->pc = 0x1C0688u;
    {
        const bool branch_taken_0x1c0688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0688) {
            ctx->pc = 0x1C068Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0688u;
            // 0x1c068c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C06A0u;
            goto label_1c06a0;
        }
    }
    ctx->pc = 0x1C0690u;
label_1c0690:
    // 0x1c0690: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1c0694:
    if (ctx->pc == 0x1C0694u) {
        ctx->pc = 0x1C0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0690u;
        // 0x1c0694: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0698u;
        goto label_1c0698;
    }
    ctx->pc = 0x1C0690u;
    {
        const bool branch_taken_0x1c0690 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0690u;
        // 0x1c0694: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0690) {
            ctx->pc = 0x1C06B8u;
            goto label_1c06b8;
        }
    }
    ctx->pc = 0x1C0698u;
label_1c0698:
    // 0x1c0698: 0x100000cd  b           . + 4 + (0xCD << 2)
label_1c069c:
    if (ctx->pc == 0x1C069Cu) {
        ctx->pc = 0x1C069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0698u;
        // 0x1c069c: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06A0u;
        goto label_1c06a0;
    }
    ctx->pc = 0x1C0698u;
    {
        const bool branch_taken_0x1c0698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0698u;
        // 0x1c069c: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0698) {
            ctx->pc = 0x1C09D0u;
            goto label_1c09d0;
        }
    }
    ctx->pc = 0x1C06A0u;
label_1c06a0:
    // 0x1c06a0: 0x10a20060  beq         $a1, $v0, . + 4 + (0x60 << 2)
label_1c06a4:
    if (ctx->pc == 0x1C06A4u) {
        ctx->pc = 0x1C06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06A0u;
        // 0x1c06a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06A8u;
        goto label_1c06a8;
    }
    ctx->pc = 0x1C06A0u;
    {
        const bool branch_taken_0x1c06a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06A0u;
        // 0x1c06a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06a0) {
            ctx->pc = 0x1C0824u;
            goto label_1c0824;
        }
    }
    ctx->pc = 0x1C06A8u;
label_1c06a8:
    // 0x1c06a8: 0x10a20094  beq         $a1, $v0, . + 4 + (0x94 << 2)
label_1c06ac:
    if (ctx->pc == 0x1C06ACu) {
        ctx->pc = 0x1C06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06A8u;
        // 0x1c06ac: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06B0u;
        goto label_1c06b0;
    }
    ctx->pc = 0x1C06A8u;
    {
        const bool branch_taken_0x1c06a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06A8u;
        // 0x1c06ac: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06a8) {
            ctx->pc = 0x1C08FCu;
            goto label_1c08fc;
        }
    }
    ctx->pc = 0x1C06B0u;
label_1c06b0:
    // 0x1c06b0: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_1c06b4:
    if (ctx->pc == 0x1C06B4u) {
        ctx->pc = 0x1C06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06B0u;
        // 0x1c06b4: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06B8u;
        goto label_1c06b8;
    }
    ctx->pc = 0x1C06B0u;
    {
        const bool branch_taken_0x1c06b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06B0u;
        // 0x1c06b4: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06b0) {
            ctx->pc = 0x1C09D0u;
            goto label_1c09d0;
        }
    }
    ctx->pc = 0x1C06B8u;
label_1c06b8:
    // 0x1c06b8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1c06b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c06bc:
    // 0x1c06bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1c06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c06c0:
    // 0x1c06c0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1c06c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1c06c4:
    // 0x1c06c4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1c06c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c06c8:
    // 0x1c06c8: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x1c06c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_1c06cc:
    // 0x1c06cc: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x1c06ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_1c06d0:
    // 0x1c06d0: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x1c06d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c06d4:
    // 0x1c06d4: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1c06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1c06d8:
    // 0x1c06d8: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x1c06d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
label_1c06dc:
    // 0x1c06dc: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x1c06dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_1c06e0:
    // 0x1c06e0: 0xa3a40004  sb          $a0, 0x4($sp)
    ctx->pc = 0x1c06e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 4));
label_1c06e4:
    // 0x1c06e4: 0x24f20300  addiu       $s2, $a3, 0x300
    ctx->pc = 0x1c06e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 768));
label_1c06e8:
    // 0x1c06e8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1c06e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c06ec:
    // 0x1c06ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c06ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c06f0:
    // 0x1c06f0: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1c06f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
label_1c06f4:
    // 0x1c06f4: 0x24f50640  addiu       $s5, $a3, 0x640
    ctx->pc = 0x1c06f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), 1600));
label_1c06f8:
    // 0x1c06f8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1c06f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c06fc:
    // 0x1c06fc: 0x37b00008  ori         $s0, $sp, 0x8
    ctx->pc = 0x1c06fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_1c0700:
    // 0x1c0700: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1c0700u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1c0704:
    // 0x1c0704: 0x241700aa  addiu       $s7, $zero, 0xAA
    ctx->pc = 0x1c0704u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_1c0708:
    // 0x1c0708: 0xace40038  sw          $a0, 0x38($a3)
    ctx->pc = 0x1c0708u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 4));
label_1c070c:
    // 0x1c070c: 0x2414002b  addiu       $s4, $zero, 0x2B
    ctx->pc = 0x1c070cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_1c0710:
    // 0x1c0710: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x1c0710u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c0714:
    // 0x1c0714: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1c0714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c0718:
    // 0x1c0718: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c0718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1c071c:
    // 0x1c071c: 0xace200a8  sw          $v0, 0xA8($a3)
    ctx->pc = 0x1c071cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 2));
label_1c0720:
    // 0x1c0720: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c0720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c0724:
    // 0x1c0724: 0x0  nop
    ctx->pc = 0x1c0724u;
    // NOP
label_1c0728:
    // 0x1c0728: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c072c:
    // 0x1c072c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c072cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c0730:
    // 0x1c0730: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x1c0730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_1c0734:
    // 0x1c0734: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1c0734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1c0738:
    // 0x1c0738: 0xa3b70008  sb          $s7, 0x8($sp)
    ctx->pc = 0x1c0738u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 23));
label_1c073c:
    // 0x1c073c: 0xa2140001  sb          $s4, 0x1($s0)
    ctx->pc = 0x1c073cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 20));
label_1c0740:
    // 0x1c0740: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1c0740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1c0744:
    // 0x1c0744: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x1c0744u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
label_1c0748:
    // 0x1c0748: 0xa2160003  sb          $s6, 0x3($s0)
    ctx->pc = 0x1c0748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 22));
label_1c074c:
    // 0x1c074c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1c074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1c0750:
    // 0x1c0750: 0x40f809  jalr        $v0
label_1c0754:
    if (ctx->pc == 0x1C0754u) {
        ctx->pc = 0x1C0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0750u;
        // 0x1c0754: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0758u;
        goto label_1c0758;
    }
    ctx->pc = 0x1C0750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0758u);
        ctx->pc = 0x1C0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0750u;
        // 0x1c0754: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0750u, 0x1C0758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0758u;
label_1c0758:
    // 0x1c0758: 0x2e630003  sltiu       $v1, $s3, 0x3
    ctx->pc = 0x1c0758u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1c075c:
    // 0x1c075c: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
label_1c0760:
    if (ctx->pc == 0x1C0760u) {
        ctx->pc = 0x1C0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C075Cu;
        // 0x1c0760: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0764u;
        goto label_1c0764;
    }
    ctx->pc = 0x1C075Cu;
    {
        const bool branch_taken_0x1c075c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c075c) {
            ctx->pc = 0x1C0760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C075Cu;
            // 0x1c0760: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0728;
        }
    }
    ctx->pc = 0x1C0764u;
label_1c0764:
    // 0x1c0764: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1c0768:
    if (ctx->pc == 0x1C0768u) {
        ctx->pc = 0x1C0768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0764u;
        // 0x1c0768: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C076Cu;
        goto label_1c076c;
    }
    ctx->pc = 0x1C0764u;
    {
        const bool branch_taken_0x1c0764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0764u;
        // 0x1c0768: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0764) {
            ctx->pc = 0x1C08E0u;
            goto label_1c08e0;
        }
    }
    ctx->pc = 0x1C076Cu;
label_1c076c:
    // 0x1c076c: 0x240300aa  addiu       $v1, $zero, 0xAA
    ctx->pc = 0x1c076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_1c0770:
    // 0x1c0770: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x1c0770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1c0774:
    // 0x1c0774: 0xa3a3000c  sb          $v1, 0xC($sp)
    ctx->pc = 0x1c0774u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 3));
label_1c0778:
    // 0x1c0778: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x1c0778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_1c077c:
    // 0x1c077c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1c077cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c0780:
    // 0x1c0780: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x1c0780u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
label_1c0784:
    // 0x1c0784: 0xa0460003  sb          $a2, 0x3($v0)
    ctx->pc = 0x1c0784u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 6));
label_1c0788:
    // 0x1c0788: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1c0788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c078c:
    // 0x1c078c: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x1c078cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
label_1c0790:
    // 0x1c0790: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1c0790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c0794:
    // 0x1c0794: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x1c0794u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
label_1c0798:
    // 0x1c0798: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1c0798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1c079c:
    // 0x1c079c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1c079cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1c07a0:
    // 0x1c07a0: 0x24f10300  addiu       $s1, $a3, 0x300
    ctx->pc = 0x1c07a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 768));
label_1c07a4:
    // 0x1c07a4: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x1c07a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
label_1c07a8:
    // 0x1c07a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c07a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c07ac:
    // 0x1c07ac: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1c07acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_1c07b0:
    // 0x1c07b0: 0x24f50640  addiu       $s5, $a3, 0x640
    ctx->pc = 0x1c07b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), 1600));
label_1c07b4:
    // 0x1c07b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c07b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c07b8:
    // 0x1c07b8: 0x27b00014  addiu       $s0, $sp, 0x14
    ctx->pc = 0x1c07b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1c07bc:
    // 0x1c07bc: 0xace40038  sw          $a0, 0x38($a3)
    ctx->pc = 0x1c07bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 4));
label_1c07c0:
    // 0x1c07c0: 0x241700aa  addiu       $s7, $zero, 0xAA
    ctx->pc = 0x1c07c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_1c07c4:
    // 0x1c07c4: 0x2413002b  addiu       $s3, $zero, 0x2B
    ctx->pc = 0x1c07c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_1c07c8:
    // 0x1c07c8: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x1c07c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c07cc:
    // 0x1c07cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c07d0:
    // 0x1c07d0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1c07d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c07d4:
    // 0x1c07d4: 0xace200a8  sw          $v0, 0xA8($a3)
    ctx->pc = 0x1c07d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 2));
label_1c07d8:
    // 0x1c07d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c07d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c07dc:
    // 0x1c07dc: 0x0  nop
    ctx->pc = 0x1c07dcu;
    // NOP
label_1c07e0:
    // 0x1c07e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c07e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c07e4:
    // 0x1c07e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c07e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1c07e8:
    // 0x1c07e8: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1c07e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1c07ec:
    // 0x1c07ec: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1c07ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1c07f0:
    // 0x1c07f0: 0xa3b70014  sb          $s7, 0x14($sp)
    ctx->pc = 0x1c07f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 23));
label_1c07f4:
    // 0x1c07f4: 0xa2130001  sb          $s3, 0x1($s0)
    ctx->pc = 0x1c07f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 19));
label_1c07f8:
    // 0x1c07f8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1c07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1c07fc:
    // 0x1c07fc: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x1c07fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
label_1c0800:
    // 0x1c0800: 0xa2160003  sb          $s6, 0x3($s0)
    ctx->pc = 0x1c0800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 22));
label_1c0804:
    // 0x1c0804: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1c0804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1c0808:
    // 0x1c0808: 0x40f809  jalr        $v0
label_1c080c:
    if (ctx->pc == 0x1C080Cu) {
        ctx->pc = 0x1C080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0808u;
        // 0x1c080c: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0810u;
        goto label_1c0810;
    }
    ctx->pc = 0x1C0808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0810u);
        ctx->pc = 0x1C080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0808u;
        // 0x1c080c: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0808u, 0x1C0810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0810u;
label_1c0810:
    // 0x1c0810: 0x2e830003  sltiu       $v1, $s4, 0x3
    ctx->pc = 0x1c0810u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1c0814:
    // 0x1c0814: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
label_1c0818:
    if (ctx->pc == 0x1C0818u) {
        ctx->pc = 0x1C0818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0814u;
        // 0x1c0818: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C081Cu;
        goto label_1c081c;
    }
    ctx->pc = 0x1C0814u;
    {
        const bool branch_taken_0x1c0814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0814) {
            ctx->pc = 0x1C0818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0814u;
            // 0x1c0818: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C07E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c07e0;
        }
    }
    ctx->pc = 0x1C081Cu;
label_1c081c:
    // 0x1c081c: 0x10000030  b           . + 4 + (0x30 << 2)
label_1c0820:
    if (ctx->pc == 0x1C0820u) {
        ctx->pc = 0x1C0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C081Cu;
        // 0x1c0820: 0x24040181  addiu       $a0, $zero, 0x181 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0824u;
        goto label_1c0824;
    }
    ctx->pc = 0x1C081Cu;
    {
        const bool branch_taken_0x1c081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C081Cu;
        // 0x1c0820: 0x24040181  addiu       $a0, $zero, 0x181 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c081c) {
            ctx->pc = 0x1C08E0u;
            goto label_1c08e0;
        }
    }
    ctx->pc = 0x1C0824u;
label_1c0824:
    // 0x1c0824: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1c0824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c0828:
    // 0x1c0828: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x1c0828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_1c082c:
    // 0x1c082c: 0xa3a30018  sb          $v1, 0x18($sp)
    ctx->pc = 0x1c082cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 3));
label_1c0830:
    // 0x1c0830: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1c0830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c0834:
    // 0x1c0834: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1c0834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1c0838:
    // 0x1c0838: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1c0838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
label_1c083c:
    // 0x1c083c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1c083cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1c0840:
    // 0x1c0840: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1c0840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1c0844:
    // 0x1c0844: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1c0844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c0848:
    // 0x1c0848: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x1c0848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_1c084c:
    // 0x1c084c: 0xa3a4001c  sb          $a0, 0x1C($sp)
    ctx->pc = 0x1c084cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 4));
label_1c0850:
    // 0x1c0850: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x1c0850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1c0854:
    // 0x1c0854: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1c0854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1c0858:
    // 0x1c0858: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x1c0858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_1c085c:
    // 0x1c085c: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x1c085cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
label_1c0860:
    // 0x1c0860: 0x24f20300  addiu       $s2, $a3, 0x300
    ctx->pc = 0x1c0860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 768));
label_1c0864:
    // 0x1c0864: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1c0864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_1c0868:
    // 0x1c0868: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c0868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c086c:
    // 0x1c086c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c086cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c0870:
    // 0x1c0870: 0x24f50640  addiu       $s5, $a3, 0x640
    ctx->pc = 0x1c0870u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), 1600));
label_1c0874:
    // 0x1c0874: 0xace60038  sw          $a2, 0x38($a3)
    ctx->pc = 0x1c0874u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 6));
label_1c0878:
    // 0x1c0878: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1c0878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c087c:
    // 0x1c087c: 0x241e0023  addiu       $fp, $zero, 0x23
    ctx->pc = 0x1c087cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1c0880:
    // 0x1c0880: 0x24170053  addiu       $s7, $zero, 0x53
    ctx->pc = 0x1c0880u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1c0884:
    // 0x1c0884: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1c0884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1c0888:
    // 0x1c0888: 0x241600bc  addiu       $s6, $zero, 0xBC
    ctx->pc = 0x1c0888u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_1c088c:
    // 0x1c088c: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x1c088cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c0890:
    // 0x1c0890: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1c0890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c0894:
    // 0x1c0894: 0xace200a8  sw          $v0, 0xA8($a3)
    ctx->pc = 0x1c0894u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 2));
label_1c0898:
    // 0x1c0898: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c0898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c089c:
    // 0x1c089c: 0x0  nop
    ctx->pc = 0x1c089cu;
    // NOP
label_1c08a0:
    // 0x1c08a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c08a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c08a4:
    // 0x1c08a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c08a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c08a8:
    // 0x1c08a8: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x1c08a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_1c08ac:
    // 0x1c08ac: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1c08acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1c08b0:
    // 0x1c08b0: 0xa3be0020  sb          $fp, 0x20($sp)
    ctx->pc = 0x1c08b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 30));
label_1c08b4:
    // 0x1c08b4: 0xa2170001  sb          $s7, 0x1($s0)
    ctx->pc = 0x1c08b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 23));
label_1c08b8:
    // 0x1c08b8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1c08b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1c08bc:
    // 0x1c08bc: 0xa2160002  sb          $s6, 0x2($s0)
    ctx->pc = 0x1c08bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 22));
label_1c08c0:
    // 0x1c08c0: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x1c08c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
label_1c08c4:
    // 0x1c08c4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1c08c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1c08c8:
    // 0x1c08c8: 0x40f809  jalr        $v0
label_1c08cc:
    if (ctx->pc == 0x1C08CCu) {
        ctx->pc = 0x1C08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08C8u;
        // 0x1c08cc: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C08D0u;
        goto label_1c08d0;
    }
    ctx->pc = 0x1C08C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C08D0u);
        ctx->pc = 0x1C08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08C8u;
        // 0x1c08cc: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C08C8u, 0x1C08D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C08D0u;
label_1c08d0:
    // 0x1c08d0: 0x2e630003  sltiu       $v1, $s3, 0x3
    ctx->pc = 0x1c08d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1c08d4:
    // 0x1c08d4: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
label_1c08d8:
    if (ctx->pc == 0x1C08D8u) {
        ctx->pc = 0x1C08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08D4u;
        // 0x1c08d8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C08DCu;
        goto label_1c08dc;
    }
    ctx->pc = 0x1C08D4u;
    {
        const bool branch_taken_0x1c08d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c08d4) {
            ctx->pc = 0x1C08D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C08D4u;
            // 0x1c08d8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C08A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c08a0;
        }
    }
    ctx->pc = 0x1C08DCu;
label_1c08dc:
    // 0x1c08dc: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x1c08dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1c08e0:
    // 0x1c08e0: 0xc067b9c  jal         func_19EE70
label_1c08e4:
    if (ctx->pc == 0x1C08E4u) {
        ctx->pc = 0x1C08E8u;
        goto label_1c08e8;
    }
    ctx->pc = 0x1C08E0u;
    SET_GPR_U32(ctx, 31, 0x1C08E8u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1C08E0u, 0x1C08E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C08E8u;
label_1c08e8:
    // 0x1c08e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c08e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c08ec:
    // 0x1c08ec: 0xc06ec94  jal         func_1BB250
label_1c08f0:
    if (ctx->pc == 0x1C08F0u) {
        ctx->pc = 0x1C08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08ECu;
        // 0x1c08f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C08F4u;
        goto label_1c08f4;
    }
    ctx->pc = 0x1C08ECu;
    SET_GPR_U32(ctx, 31, 0x1C08F4u);
    ctx->pc = 0x1C08F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C08ECu;
    // 0x1c08f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1C08ECu, 0x1C08F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C08F4u;
label_1c08f4:
    // 0x1c08f4: 0x10000035  b           . + 4 + (0x35 << 2)
label_1c08f8:
    if (ctx->pc == 0x1C08F8u) {
        ctx->pc = 0x1C08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08F4u;
        // 0x1c08f8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C08FCu;
        goto label_1c08fc;
    }
    ctx->pc = 0x1C08F4u;
    {
        const bool branch_taken_0x1c08f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08F4u;
        // 0x1c08f8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c08f4) {
            ctx->pc = 0x1C09CCu;
            goto label_1c09cc;
        }
    }
    ctx->pc = 0x1C08FCu;
label_1c08fc:
    // 0x1c08fc: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1c08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1c0900:
    // 0x1c0900: 0x27a30024  addiu       $v1, $sp, 0x24
    ctx->pc = 0x1c0900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_1c0904:
    // 0x1c0904: 0xa3a20024  sb          $v0, 0x24($sp)
    ctx->pc = 0x1c0904u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 36), (uint8_t)GPR_U32(ctx, 2));
label_1c0908:
    // 0x1c0908: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1c0908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c090c:
    // 0x1c090c: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x1c090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1c0910:
    // 0x1c0910: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x1c0910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_1c0914:
    // 0x1c0914: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1c0914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_1c0918:
    // 0x1c0918: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c0918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c091c:
    // 0x1c091c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c091cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c0920:
    // 0x1c0920: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x1c0920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_1c0924:
    // 0x1c0924: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x1c0924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
label_1c0928:
    // 0x1c0928: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1c0928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1c092c:
    // 0x1c092c: 0xa3a50028  sb          $a1, 0x28($sp)
    ctx->pc = 0x1c092cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 5));
label_1c0930:
    // 0x1c0930: 0x24f20300  addiu       $s2, $a3, 0x300
    ctx->pc = 0x1c0930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 768));
label_1c0934:
    // 0x1c0934: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1c0934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1c0938:
    // 0x1c0938: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c0938u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c093c:
    // 0x1c093c: 0xa0460003  sb          $a2, 0x3($v0)
    ctx->pc = 0x1c093cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 6));
label_1c0940:
    // 0x1c0940: 0x24f50640  addiu       $s5, $a3, 0x640
    ctx->pc = 0x1c0940u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), 1600));
label_1c0944:
    // 0x1c0944: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x1c0944u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
label_1c0948:
    // 0x1c0948: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x1c0948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1c094c:
    // 0x1c094c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1c094cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c0950:
    // 0x1c0950: 0x241e0023  addiu       $fp, $zero, 0x23
    ctx->pc = 0x1c0950u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1c0954:
    // 0x1c0954: 0xace30038  sw          $v1, 0x38($a3)
    ctx->pc = 0x1c0954u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 3));
label_1c0958:
    // 0x1c0958: 0x24170053  addiu       $s7, $zero, 0x53
    ctx->pc = 0x1c0958u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1c095c:
    // 0x1c095c: 0x241600bc  addiu       $s6, $zero, 0xBC
    ctx->pc = 0x1c095cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_1c0960:
    // 0x1c0960: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x1c0960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c0964:
    // 0x1c0964: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c0968:
    // 0x1c0968: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1c0968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c096c:
    // 0x1c096c: 0xace200a8  sw          $v0, 0xA8($a3)
    ctx->pc = 0x1c096cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 2));
label_1c0970:
    // 0x1c0970: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c0970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c0974:
    // 0x1c0974: 0x0  nop
    ctx->pc = 0x1c0974u;
    // NOP
label_1c0978:
    // 0x1c0978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c097c:
    // 0x1c097c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c097cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c0980:
    // 0x1c0980: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x1c0980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_1c0984:
    // 0x1c0984: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1c0984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1c0988:
    // 0x1c0988: 0xa3be002c  sb          $fp, 0x2C($sp)
    ctx->pc = 0x1c0988u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 30));
label_1c098c:
    // 0x1c098c: 0xa2170001  sb          $s7, 0x1($s0)
    ctx->pc = 0x1c098cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 23));
label_1c0990:
    // 0x1c0990: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1c0990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1c0994:
    // 0x1c0994: 0xa2160002  sb          $s6, 0x2($s0)
    ctx->pc = 0x1c0994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 22));
label_1c0998:
    // 0x1c0998: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x1c0998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
label_1c099c:
    // 0x1c099c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1c099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1c09a0:
    // 0x1c09a0: 0x40f809  jalr        $v0
label_1c09a4:
    if (ctx->pc == 0x1C09A4u) {
        ctx->pc = 0x1C09A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09A0u;
        // 0x1c09a4: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C09A8u;
        goto label_1c09a8;
    }
    ctx->pc = 0x1C09A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C09A8u);
        ctx->pc = 0x1C09A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09A0u;
        // 0x1c09a4: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C09A0u, 0x1C09A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C09A8u;
label_1c09a8:
    // 0x1c09a8: 0x2e630003  sltiu       $v1, $s3, 0x3
    ctx->pc = 0x1c09a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1c09ac:
    // 0x1c09ac: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
label_1c09b0:
    if (ctx->pc == 0x1C09B0u) {
        ctx->pc = 0x1C09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09ACu;
        // 0x1c09b0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C09B4u;
        goto label_1c09b4;
    }
    ctx->pc = 0x1C09ACu;
    {
        const bool branch_taken_0x1c09ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c09ac) {
            ctx->pc = 0x1C09B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C09ACu;
            // 0x1c09b0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0978;
        }
    }
    ctx->pc = 0x1C09B4u;
label_1c09b4:
    // 0x1c09b4: 0xc067b9c  jal         func_19EE70
label_1c09b8:
    if (ctx->pc == 0x1C09B8u) {
        ctx->pc = 0x1C09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09B4u;
        // 0x1c09b8: 0x24040181  addiu       $a0, $zero, 0x181 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C09BCu;
        goto label_1c09bc;
    }
    ctx->pc = 0x1C09B4u;
    SET_GPR_U32(ctx, 31, 0x1C09BCu);
    ctx->pc = 0x1C09B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09B4u;
    // 0x1c09b8: 0x24040181  addiu       $a0, $zero, 0x181 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1C09B4u, 0x1C09BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09BCu;
label_1c09bc:
    // 0x1c09bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c09bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c09c0:
    // 0x1c09c0: 0xc06ec94  jal         func_1BB250
label_1c09c4:
    if (ctx->pc == 0x1C09C4u) {
        ctx->pc = 0x1C09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09C0u;
        // 0x1c09c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C09C8u;
        goto label_1c09c8;
    }
    ctx->pc = 0x1C09C0u;
    SET_GPR_U32(ctx, 31, 0x1C09C8u);
    ctx->pc = 0x1C09C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09C0u;
    // 0x1c09c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1C09C0u, 0x1C09C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09C8u;
label_1c09c8:
    // 0x1c09c8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1c09c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1c09cc:
    // 0x1c09cc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1c09ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c09d0:
    // 0x1c09d0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1c09d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c09d4:
    // 0x1c09d4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1c09d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c09d8:
    // 0x1c09d8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1c09d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c09dc:
    // 0x1c09dc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1c09dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c09e0:
    // 0x1c09e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c09e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c09e4:
    // 0x1c09e4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1c09e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c09e8:
    // 0x1c09e8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1c09e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c09ec:
    // 0x1c09ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c09ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c09f0:
    // 0x1c09f0: 0x3e00008  jr          $ra
label_1c09f4:
    if (ctx->pc == 0x1C09F4u) {
        ctx->pc = 0x1C09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09F0u;
        // 0x1c09f4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C09F8u;
        goto label_fallthrough_0x1c09f0;
    }
    ctx->pc = 0x1C09F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09F0u;
        // 0x1c09f4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C09F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c09f0:
    ctx->pc = 0x1C09F8u;
}
