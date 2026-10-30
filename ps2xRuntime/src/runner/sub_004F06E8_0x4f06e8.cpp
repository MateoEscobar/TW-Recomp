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

// Function: sub_004F06E8
// Address: 0x4f06e8 - 0x4f0ac0
void sub_004F06E8_0x4f06e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F06E8_0x4f06e8");
#endif

    switch (ctx->pc) {
        case 0x4f06e8u: goto label_4f06e8;
        case 0x4f06ecu: goto label_4f06ec;
        case 0x4f06f0u: goto label_4f06f0;
        case 0x4f06f4u: goto label_4f06f4;
        case 0x4f06f8u: goto label_4f06f8;
        case 0x4f06fcu: goto label_4f06fc;
        case 0x4f0700u: goto label_4f0700;
        case 0x4f0704u: goto label_4f0704;
        case 0x4f0708u: goto label_4f0708;
        case 0x4f070cu: goto label_4f070c;
        case 0x4f0710u: goto label_4f0710;
        case 0x4f0714u: goto label_4f0714;
        case 0x4f0718u: goto label_4f0718;
        case 0x4f071cu: goto label_4f071c;
        case 0x4f0720u: goto label_4f0720;
        case 0x4f0724u: goto label_4f0724;
        case 0x4f0728u: goto label_4f0728;
        case 0x4f072cu: goto label_4f072c;
        case 0x4f0730u: goto label_4f0730;
        case 0x4f0734u: goto label_4f0734;
        case 0x4f0738u: goto label_4f0738;
        case 0x4f073cu: goto label_4f073c;
        case 0x4f0740u: goto label_4f0740;
        case 0x4f0744u: goto label_4f0744;
        case 0x4f0748u: goto label_4f0748;
        case 0x4f074cu: goto label_4f074c;
        case 0x4f0750u: goto label_4f0750;
        case 0x4f0754u: goto label_4f0754;
        case 0x4f0758u: goto label_4f0758;
        case 0x4f075cu: goto label_4f075c;
        case 0x4f0760u: goto label_4f0760;
        case 0x4f0764u: goto label_4f0764;
        case 0x4f0768u: goto label_4f0768;
        case 0x4f076cu: goto label_4f076c;
        case 0x4f0770u: goto label_4f0770;
        case 0x4f0774u: goto label_4f0774;
        case 0x4f0778u: goto label_4f0778;
        case 0x4f077cu: goto label_4f077c;
        case 0x4f0780u: goto label_4f0780;
        case 0x4f0784u: goto label_4f0784;
        case 0x4f0788u: goto label_4f0788;
        case 0x4f078cu: goto label_4f078c;
        case 0x4f0790u: goto label_4f0790;
        case 0x4f0794u: goto label_4f0794;
        case 0x4f0798u: goto label_4f0798;
        case 0x4f079cu: goto label_4f079c;
        case 0x4f07a0u: goto label_4f07a0;
        case 0x4f07a4u: goto label_4f07a4;
        case 0x4f07a8u: goto label_4f07a8;
        case 0x4f07acu: goto label_4f07ac;
        case 0x4f07b0u: goto label_4f07b0;
        case 0x4f07b4u: goto label_4f07b4;
        case 0x4f07b8u: goto label_4f07b8;
        case 0x4f07bcu: goto label_4f07bc;
        case 0x4f07c0u: goto label_4f07c0;
        case 0x4f07c4u: goto label_4f07c4;
        case 0x4f07c8u: goto label_4f07c8;
        case 0x4f07ccu: goto label_4f07cc;
        case 0x4f07d0u: goto label_4f07d0;
        case 0x4f07d4u: goto label_4f07d4;
        case 0x4f07d8u: goto label_4f07d8;
        case 0x4f07dcu: goto label_4f07dc;
        case 0x4f07e0u: goto label_4f07e0;
        case 0x4f07e4u: goto label_4f07e4;
        case 0x4f07e8u: goto label_4f07e8;
        case 0x4f07ecu: goto label_4f07ec;
        case 0x4f07f0u: goto label_4f07f0;
        case 0x4f07f4u: goto label_4f07f4;
        case 0x4f07f8u: goto label_4f07f8;
        case 0x4f07fcu: goto label_4f07fc;
        case 0x4f0800u: goto label_4f0800;
        case 0x4f0804u: goto label_4f0804;
        case 0x4f0808u: goto label_4f0808;
        case 0x4f080cu: goto label_4f080c;
        case 0x4f0810u: goto label_4f0810;
        case 0x4f0814u: goto label_4f0814;
        case 0x4f0818u: goto label_4f0818;
        case 0x4f081cu: goto label_4f081c;
        case 0x4f0820u: goto label_4f0820;
        case 0x4f0824u: goto label_4f0824;
        case 0x4f0828u: goto label_4f0828;
        case 0x4f082cu: goto label_4f082c;
        case 0x4f0830u: goto label_4f0830;
        case 0x4f0834u: goto label_4f0834;
        case 0x4f0838u: goto label_4f0838;
        case 0x4f083cu: goto label_4f083c;
        case 0x4f0840u: goto label_4f0840;
        case 0x4f0844u: goto label_4f0844;
        case 0x4f0848u: goto label_4f0848;
        case 0x4f084cu: goto label_4f084c;
        case 0x4f0850u: goto label_4f0850;
        case 0x4f0854u: goto label_4f0854;
        case 0x4f0858u: goto label_4f0858;
        case 0x4f085cu: goto label_4f085c;
        case 0x4f0860u: goto label_4f0860;
        case 0x4f0864u: goto label_4f0864;
        case 0x4f0868u: goto label_4f0868;
        case 0x4f086cu: goto label_4f086c;
        case 0x4f0870u: goto label_4f0870;
        case 0x4f0874u: goto label_4f0874;
        case 0x4f0878u: goto label_4f0878;
        case 0x4f087cu: goto label_4f087c;
        case 0x4f0880u: goto label_4f0880;
        case 0x4f0884u: goto label_4f0884;
        case 0x4f0888u: goto label_4f0888;
        case 0x4f088cu: goto label_4f088c;
        case 0x4f0890u: goto label_4f0890;
        case 0x4f0894u: goto label_4f0894;
        case 0x4f0898u: goto label_4f0898;
        case 0x4f089cu: goto label_4f089c;
        case 0x4f08a0u: goto label_4f08a0;
        case 0x4f08a4u: goto label_4f08a4;
        case 0x4f08a8u: goto label_4f08a8;
        case 0x4f08acu: goto label_4f08ac;
        case 0x4f08b0u: goto label_4f08b0;
        case 0x4f08b4u: goto label_4f08b4;
        case 0x4f08b8u: goto label_4f08b8;
        case 0x4f08bcu: goto label_4f08bc;
        case 0x4f08c0u: goto label_4f08c0;
        case 0x4f08c4u: goto label_4f08c4;
        case 0x4f08c8u: goto label_4f08c8;
        case 0x4f08ccu: goto label_4f08cc;
        case 0x4f08d0u: goto label_4f08d0;
        case 0x4f08d4u: goto label_4f08d4;
        case 0x4f08d8u: goto label_4f08d8;
        case 0x4f08dcu: goto label_4f08dc;
        case 0x4f08e0u: goto label_4f08e0;
        case 0x4f08e4u: goto label_4f08e4;
        case 0x4f08e8u: goto label_4f08e8;
        case 0x4f08ecu: goto label_4f08ec;
        case 0x4f08f0u: goto label_4f08f0;
        case 0x4f08f4u: goto label_4f08f4;
        case 0x4f08f8u: goto label_4f08f8;
        case 0x4f08fcu: goto label_4f08fc;
        case 0x4f0900u: goto label_4f0900;
        case 0x4f0904u: goto label_4f0904;
        case 0x4f0908u: goto label_4f0908;
        case 0x4f090cu: goto label_4f090c;
        case 0x4f0910u: goto label_4f0910;
        case 0x4f0914u: goto label_4f0914;
        case 0x4f0918u: goto label_4f0918;
        case 0x4f091cu: goto label_4f091c;
        case 0x4f0920u: goto label_4f0920;
        case 0x4f0924u: goto label_4f0924;
        case 0x4f0928u: goto label_4f0928;
        case 0x4f092cu: goto label_4f092c;
        case 0x4f0930u: goto label_4f0930;
        case 0x4f0934u: goto label_4f0934;
        case 0x4f0938u: goto label_4f0938;
        case 0x4f093cu: goto label_4f093c;
        case 0x4f0940u: goto label_4f0940;
        case 0x4f0944u: goto label_4f0944;
        case 0x4f0948u: goto label_4f0948;
        case 0x4f094cu: goto label_4f094c;
        case 0x4f0950u: goto label_4f0950;
        case 0x4f0954u: goto label_4f0954;
        case 0x4f0958u: goto label_4f0958;
        case 0x4f095cu: goto label_4f095c;
        case 0x4f0960u: goto label_4f0960;
        case 0x4f0964u: goto label_4f0964;
        case 0x4f0968u: goto label_4f0968;
        case 0x4f096cu: goto label_4f096c;
        case 0x4f0970u: goto label_4f0970;
        case 0x4f0974u: goto label_4f0974;
        case 0x4f0978u: goto label_4f0978;
        case 0x4f097cu: goto label_4f097c;
        case 0x4f0980u: goto label_4f0980;
        case 0x4f0984u: goto label_4f0984;
        case 0x4f0988u: goto label_4f0988;
        case 0x4f098cu: goto label_4f098c;
        case 0x4f0990u: goto label_4f0990;
        case 0x4f0994u: goto label_4f0994;
        case 0x4f0998u: goto label_4f0998;
        case 0x4f099cu: goto label_4f099c;
        case 0x4f09a0u: goto label_4f09a0;
        case 0x4f09a4u: goto label_4f09a4;
        case 0x4f09a8u: goto label_4f09a8;
        case 0x4f09acu: goto label_4f09ac;
        case 0x4f09b0u: goto label_4f09b0;
        case 0x4f09b4u: goto label_4f09b4;
        case 0x4f09b8u: goto label_4f09b8;
        case 0x4f09bcu: goto label_4f09bc;
        case 0x4f09c0u: goto label_4f09c0;
        case 0x4f09c4u: goto label_4f09c4;
        case 0x4f09c8u: goto label_4f09c8;
        case 0x4f09ccu: goto label_4f09cc;
        case 0x4f09d0u: goto label_4f09d0;
        case 0x4f09d4u: goto label_4f09d4;
        case 0x4f09d8u: goto label_4f09d8;
        case 0x4f09dcu: goto label_4f09dc;
        case 0x4f09e0u: goto label_4f09e0;
        case 0x4f09e4u: goto label_4f09e4;
        case 0x4f09e8u: goto label_4f09e8;
        case 0x4f09ecu: goto label_4f09ec;
        case 0x4f09f0u: goto label_4f09f0;
        case 0x4f09f4u: goto label_4f09f4;
        case 0x4f09f8u: goto label_4f09f8;
        case 0x4f09fcu: goto label_4f09fc;
        case 0x4f0a00u: goto label_4f0a00;
        case 0x4f0a04u: goto label_4f0a04;
        case 0x4f0a08u: goto label_4f0a08;
        case 0x4f0a0cu: goto label_4f0a0c;
        case 0x4f0a10u: goto label_4f0a10;
        case 0x4f0a14u: goto label_4f0a14;
        case 0x4f0a18u: goto label_4f0a18;
        case 0x4f0a1cu: goto label_4f0a1c;
        case 0x4f0a20u: goto label_4f0a20;
        case 0x4f0a24u: goto label_4f0a24;
        case 0x4f0a28u: goto label_4f0a28;
        case 0x4f0a2cu: goto label_4f0a2c;
        case 0x4f0a30u: goto label_4f0a30;
        case 0x4f0a34u: goto label_4f0a34;
        case 0x4f0a38u: goto label_4f0a38;
        case 0x4f0a3cu: goto label_4f0a3c;
        case 0x4f0a40u: goto label_4f0a40;
        case 0x4f0a44u: goto label_4f0a44;
        case 0x4f0a48u: goto label_4f0a48;
        case 0x4f0a4cu: goto label_4f0a4c;
        case 0x4f0a50u: goto label_4f0a50;
        case 0x4f0a54u: goto label_4f0a54;
        case 0x4f0a58u: goto label_4f0a58;
        case 0x4f0a5cu: goto label_4f0a5c;
        case 0x4f0a60u: goto label_4f0a60;
        case 0x4f0a64u: goto label_4f0a64;
        case 0x4f0a68u: goto label_4f0a68;
        case 0x4f0a6cu: goto label_4f0a6c;
        case 0x4f0a70u: goto label_4f0a70;
        case 0x4f0a74u: goto label_4f0a74;
        case 0x4f0a78u: goto label_4f0a78;
        case 0x4f0a7cu: goto label_4f0a7c;
        case 0x4f0a80u: goto label_4f0a80;
        case 0x4f0a84u: goto label_4f0a84;
        case 0x4f0a88u: goto label_4f0a88;
        case 0x4f0a8cu: goto label_4f0a8c;
        case 0x4f0a90u: goto label_4f0a90;
        case 0x4f0a94u: goto label_4f0a94;
        case 0x4f0a98u: goto label_4f0a98;
        case 0x4f0a9cu: goto label_4f0a9c;
        case 0x4f0aa0u: goto label_4f0aa0;
        case 0x4f0aa4u: goto label_4f0aa4;
        case 0x4f0aa8u: goto label_4f0aa8;
        case 0x4f0aacu: goto label_4f0aac;
        case 0x4f0ab0u: goto label_4f0ab0;
        case 0x4f0ab4u: goto label_4f0ab4;
        case 0x4f0ab8u: goto label_4f0ab8;
        case 0x4f0abcu: goto label_4f0abc;
        default: break;
    }

    ctx->pc = 0x4f06e8u;

label_4f06e8:
    // 0x4f06e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f06e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f06ec:
    // 0x4f06ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4f06ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4f06f0:
    // 0x4f06f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4f06f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4f06f4:
    // 0x4f06f4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4f06f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4f06f8:
    // 0x4f06f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f06f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f06fc:
    // 0x4f06fc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4f06fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4f0700:
    // 0x4f0700: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4f0700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4f0704:
    // 0x4f0704: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4f0704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f0708:
    // 0x4f0708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f0708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f070c:
    // 0x4f070c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4f070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f0710:
    // 0x4f0710: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_4f0714:
    if (ctx->pc == 0x4F0714u) {
        ctx->pc = 0x4F0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0710u;
        // 0x4f0714: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0718u;
        goto label_4f0718;
    }
    ctx->pc = 0x4F0710u;
    {
        const bool branch_taken_0x4f0710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0710u;
        // 0x4f0714: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0710) {
            ctx->pc = 0x4F0734u;
            goto label_4f0734;
        }
    }
    ctx->pc = 0x4F0718u;
label_4f0718:
    // 0x4f0718: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4f071c:
    if (ctx->pc == 0x4F071Cu) {
        ctx->pc = 0x4F071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0718u;
        // 0x4f071c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0720u;
        goto label_4f0720;
    }
    ctx->pc = 0x4F0718u;
    {
        const bool branch_taken_0x4f0718 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0718u;
        // 0x4f071c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0718) {
            ctx->pc = 0x4F0738u;
            goto label_4f0738;
        }
    }
    ctx->pc = 0x4F0720u;
label_4f0720:
    // 0x4f0720: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4f0720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4f0724:
    // 0x4f0724: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4f0724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4f0728:
    // 0x4f0728: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4f0728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f072c:
    // 0x4f072c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4f0730:
    if (ctx->pc == 0x4F0730u) {
        ctx->pc = 0x4F0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F072Cu;
        // 0x4f0730: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0734u;
        goto label_4f0734;
    }
    ctx->pc = 0x4F072Cu;
    {
        const bool branch_taken_0x4f072c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F072Cu;
        // 0x4f0730: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f072c) {
            ctx->pc = 0x4F07CCu;
            goto label_4f07cc;
        }
    }
    ctx->pc = 0x4F0734u;
label_4f0734:
    // 0x4f0734: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f0734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f0738:
    // 0x4f0738: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x4f0738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_4f073c:
    // 0x4f073c: 0x8c4327e4  lw          $v1, 0x27E4($v0)
    ctx->pc = 0x4f073cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f0740:
    // 0x4f0740: 0x3c080057  lui         $t0, 0x57
    ctx->pc = 0x4f0740u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)87 << 16));
label_4f0744:
    // 0x4f0744: 0x3c0a0057  lui         $t2, 0x57
    ctx->pc = 0x4f0744u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)87 << 16));
label_4f0748:
    // 0x4f0748: 0x24a56ee8  addiu       $a1, $a1, 0x6EE8
    ctx->pc = 0x4f0748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28392));
label_4f074c:
    // 0x4f074c: 0x8c6c000c  lw          $t4, 0xC($v1)
    ctx->pc = 0x4f074cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4f0750:
    // 0x4f0750: 0x25086ea0  addiu       $t0, $t0, 0x6EA0
    ctx->pc = 0x4f0750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28320));
label_4f0754:
    // 0x4f0754: 0x254a6ef0  addiu       $t2, $t2, 0x6EF0
    ctx->pc = 0x4f0754u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28400));
label_4f0758:
    // 0x4f0758: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4f0758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4f075c:
    // 0x4f075c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4f075cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4f0760:
    // 0x4f0760: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f0760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f0764:
    // 0x4f0764: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x4f0764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_4f0768:
    // 0x4f0768: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4f0768u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f076c:
    // 0x4f076c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4f076cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4f0770:
    // 0x4f0770: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4f0770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4f0774:
    // 0x4f0774: 0x40f809  jalr        $v0
label_4f0778:
    if (ctx->pc == 0x4F0778u) {
        ctx->pc = 0x4F0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0774u;
        // 0x4f0778: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F077Cu;
        goto label_4f077c;
    }
    ctx->pc = 0x4F0774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F077Cu);
        ctx->pc = 0x4F0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0774u;
        // 0x4f0778: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0774u, 0x4F077Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F077Cu;
label_4f077c:
    // 0x4f077c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4f077cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f0780:
    // 0x4f0780: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4f0780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4f0784:
    // 0x4f0784: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4f0788:
    if (ctx->pc == 0x4F0788u) {
        ctx->pc = 0x4F0788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0784u;
        // 0x4f0788: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F078Cu;
        goto label_4f078c;
    }
    ctx->pc = 0x4F0784u;
    {
        const bool branch_taken_0x4f0784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0784u;
        // 0x4f0788: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0784) {
            ctx->pc = 0x4F079Cu;
            goto label_4f079c;
        }
    }
    ctx->pc = 0x4F078Cu;
label_4f078c:
    // 0x4f078c: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4f078cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4f0790:
    // 0x4f0790: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4f0790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4f0794:
    // 0x4f0794: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4f0794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f0798:
    // 0x4f0798: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4f0798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f079c:
    // 0x4f079c: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x4f079cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_4f07a0:
    // 0x4f07a0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4f07a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f07a4:
    // 0x4f07a4: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
label_4f07a8:
    if (ctx->pc == 0x4F07A8u) {
        ctx->pc = 0x4F07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F07A4u;
        // 0x4f07a8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F07ACu;
        goto label_4f07ac;
    }
    ctx->pc = 0x4F07A4u;
    {
        const bool branch_taken_0x4f07a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f07a4) {
            ctx->pc = 0x4F07A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F07A4u;
            // 0x4f07a8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F07BCu;
            goto label_4f07bc;
        }
    }
    ctx->pc = 0x4F07ACu;
label_4f07ac:
    // 0x4f07ac: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x4f07acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_4f07b0:
    // 0x4f07b0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4f07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f07b4:
    // 0x4f07b4: 0x10000023  b           . + 4 + (0x23 << 2)
label_4f07b8:
    if (ctx->pc == 0x4F07B8u) {
        ctx->pc = 0x4F07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F07B4u;
        // 0x4f07b8: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F07BCu;
        goto label_4f07bc;
    }
    ctx->pc = 0x4F07B4u;
    {
        const bool branch_taken_0x4f07b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F07B4u;
        // 0x4f07b8: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f07b4) {
            ctx->pc = 0x4F0844u;
            goto label_4f0844;
        }
    }
    ctx->pc = 0x4F07BCu;
label_4f07bc:
    // 0x4f07bc: 0x52020021  beql        $s0, $v0, . + 4 + (0x21 << 2)
label_4f07c0:
    if (ctx->pc == 0x4F07C0u) {
        ctx->pc = 0x4F07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F07BCu;
        // 0x4f07c0: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F07C4u;
        goto label_4f07c4;
    }
    ctx->pc = 0x4F07BCu;
    {
        const bool branch_taken_0x4f07bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f07bc) {
            ctx->pc = 0x4F07C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F07BCu;
            // 0x4f07c0: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0844u;
            goto label_4f0844;
        }
    }
    ctx->pc = 0x4F07C4u;
label_4f07c4:
    // 0x4f07c4: 0x10000020  b           . + 4 + (0x20 << 2)
label_4f07c8:
    if (ctx->pc == 0x4F07C8u) {
        ctx->pc = 0x4F07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F07C4u;
        // 0x4f07c8: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F07CCu;
        goto label_4f07cc;
    }
    ctx->pc = 0x4F07C4u;
    {
        const bool branch_taken_0x4f07c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F07C4u;
        // 0x4f07c8: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f07c4) {
            ctx->pc = 0x4F0848u;
            goto label_4f0848;
        }
    }
    ctx->pc = 0x4F07CCu;
label_4f07cc:
    // 0x4f07cc: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x4f07ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_4f07d0:
    // 0x4f07d0: 0x8c4327e4  lw          $v1, 0x27E4($v0)
    ctx->pc = 0x4f07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f07d4:
    // 0x4f07d4: 0x3c080057  lui         $t0, 0x57
    ctx->pc = 0x4f07d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)87 << 16));
label_4f07d8:
    // 0x4f07d8: 0x3c0a0057  lui         $t2, 0x57
    ctx->pc = 0x4f07d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)87 << 16));
label_4f07dc:
    // 0x4f07dc: 0x24a56ee8  addiu       $a1, $a1, 0x6EE8
    ctx->pc = 0x4f07dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28392));
label_4f07e0:
    // 0x4f07e0: 0x8c6c000c  lw          $t4, 0xC($v1)
    ctx->pc = 0x4f07e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4f07e4:
    // 0x4f07e4: 0x25086ea0  addiu       $t0, $t0, 0x6EA0
    ctx->pc = 0x4f07e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28320));
label_4f07e8:
    // 0x4f07e8: 0x254a6ef0  addiu       $t2, $t2, 0x6EF0
    ctx->pc = 0x4f07e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28400));
label_4f07ec:
    // 0x4f07ec: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4f07ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4f07f0:
    // 0x4f07f0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4f07f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4f07f4:
    // 0x4f07f4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f07f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f07f8:
    // 0x4f07f8: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x4f07f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_4f07fc:
    // 0x4f07fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4f07fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f0800:
    // 0x4f0800: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4f0800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4f0804:
    // 0x4f0804: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4f0804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4f0808:
    // 0x4f0808: 0x40f809  jalr        $v0
label_4f080c:
    if (ctx->pc == 0x4F080Cu) {
        ctx->pc = 0x4F080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0808u;
        // 0x4f080c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0810u;
        goto label_4f0810;
    }
    ctx->pc = 0x4F0808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F0810u);
        ctx->pc = 0x4F080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0808u;
        // 0x4f080c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0808u, 0x4F0810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F0810u;
label_4f0810:
    // 0x4f0810: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4f0810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f0814:
    // 0x4f0814: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4f0814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4f0818:
    // 0x4f0818: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4f081c:
    if (ctx->pc == 0x4F081Cu) {
        ctx->pc = 0x4F081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0818u;
        // 0x4f081c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0820u;
        goto label_4f0820;
    }
    ctx->pc = 0x4F0818u;
    {
        const bool branch_taken_0x4f0818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0818u;
        // 0x4f081c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0818) {
            ctx->pc = 0x4F0830u;
            goto label_4f0830;
        }
    }
    ctx->pc = 0x4F0820u;
label_4f0820:
    // 0x4f0820: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4f0820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4f0824:
    // 0x4f0824: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4f0824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4f0828:
    // 0x4f0828: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4f0828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f082c:
    // 0x4f082c: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4f082cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f0830:
    // 0x4f0830: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4f0830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4f0834:
    // 0x4f0834: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4f0834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f0838:
    // 0x4f0838: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4f0838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4f083c:
    // 0x4f083c: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_4f0840:
    if (ctx->pc == 0x4F0840u) {
        ctx->pc = 0x4F0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F083Cu;
        // 0x4f0840: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0844u;
        goto label_4f0844;
    }
    ctx->pc = 0x4F083Cu;
    {
        const bool branch_taken_0x4f083c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f083c) {
            ctx->pc = 0x4F0840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F083Cu;
            // 0x4f0840: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0844u;
            goto label_4f0844;
        }
    }
    ctx->pc = 0x4F0844u;
label_4f0844:
    // 0x4f0844: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x4f0844u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_4f0848:
    // 0x4f0848: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4f0848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4f084c:
    // 0x4f084c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4f084cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_4f0850:
    // 0x4f0850: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4f0850u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_4f0854:
    // 0x4f0854: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4f0854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f0858:
    // 0x4f0858: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4f0858u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4f085c:
    // 0x4f085c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4f085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4f0860:
    // 0x4f0860: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
label_4f0864:
    if (ctx->pc == 0x4F0864u) {
        ctx->pc = 0x4F0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0860u;
        // 0x4f0864: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0868u;
        goto label_4f0868;
    }
    ctx->pc = 0x4F0860u;
    {
        const bool branch_taken_0x4f0860 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0860u;
        // 0x4f0864: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0860) {
            ctx->pc = 0x4F0A84u;
            goto label_4f0a84;
        }
    }
    ctx->pc = 0x4F0868u;
label_4f0868:
    // 0x4f0868: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f0868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f086c:
    // 0x4f086c: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_4f0870:
    if (ctx->pc == 0x4F0870u) {
        ctx->pc = 0x4F0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F086Cu;
        // 0x4f0870: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0874u;
        goto label_4f0874;
    }
    ctx->pc = 0x4F086Cu;
    {
        const bool branch_taken_0x4f086c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f086c) {
            ctx->pc = 0x4F0870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F086Cu;
            // 0x4f0870: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0A88u;
            goto label_4f0a88;
        }
    }
    ctx->pc = 0x4F0874u;
label_4f0874:
    // 0x4f0874: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4f0874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f0878:
    // 0x4f0878: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4f0878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f087c:
    // 0x4f087c: 0x0  nop
    ctx->pc = 0x4f087cu;
    // NOP
label_4f0880:
    // 0x4f0880: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4f0880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4f0884:
    // 0x4f0884: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4f0884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4f0888:
    // 0x4f0888: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
label_4f088c:
    if (ctx->pc == 0x4F088Cu) {
        ctx->pc = 0x4F0890u;
        goto label_4f0890;
    }
    ctx->pc = 0x4F0888u;
    {
        const bool branch_taken_0x4f0888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f0888) {
            ctx->pc = 0x4F0974u;
            goto label_4f0974;
        }
    }
    ctx->pc = 0x4F0890u;
label_4f0890:
    // 0x4f0890: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f0890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f0894:
    // 0x4f0894: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4f0898:
    if (ctx->pc == 0x4F0898u) {
        ctx->pc = 0x4F0898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0894u;
        // 0x4f0898: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F089Cu;
        goto label_4f089c;
    }
    ctx->pc = 0x4F0894u;
    {
        const bool branch_taken_0x4f0894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0894) {
            ctx->pc = 0x4F0898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0894u;
            // 0x4f0898: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F08B4u;
            goto label_4f08b4;
        }
    }
    ctx->pc = 0x4F089Cu;
label_4f089c:
    // 0x4f089c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f08a0:
    // 0x4f08a0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4f08a4:
    if (ctx->pc == 0x4F08A4u) {
        ctx->pc = 0x4F08A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F08A0u;
        // 0x4f08a4: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F08A8u;
        goto label_4f08a8;
    }
    ctx->pc = 0x4F08A0u;
    {
        const bool branch_taken_0x4f08a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f08a0) {
            ctx->pc = 0x4F08A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F08A0u;
            // 0x4f08a4: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F08B4u;
            goto label_4f08b4;
        }
    }
    ctx->pc = 0x4F08A8u;
label_4f08a8:
    // 0x4f08a8: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4f08a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4f08ac:
    // 0x4f08ac: 0x10000038  b           . + 4 + (0x38 << 2)
label_4f08b0:
    if (ctx->pc == 0x4F08B0u) {
        ctx->pc = 0x4F08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F08ACu;
        // 0x4f08b0: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F08B4u;
        goto label_4f08b4;
    }
    ctx->pc = 0x4F08ACu;
    {
        const bool branch_taken_0x4f08ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F08ACu;
        // 0x4f08b0: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f08ac) {
            ctx->pc = 0x4F0990u;
            goto label_4f0990;
        }
    }
    ctx->pc = 0x4F08B4u;
label_4f08b4:
    // 0x4f08b4: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4f08b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4f08b8:
    // 0x4f08b8: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4f08bc:
    if (ctx->pc == 0x4F08BCu) {
        ctx->pc = 0x4F08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F08B8u;
        // 0x4f08bc: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F08C0u;
        goto label_4f08c0;
    }
    ctx->pc = 0x4F08B8u;
    {
        const bool branch_taken_0x4f08b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f08b8) {
            ctx->pc = 0x4F08BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F08B8u;
            // 0x4f08bc: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0910u;
            goto label_4f0910;
        }
    }
    ctx->pc = 0x4F08C0u;
label_4f08c0:
    // 0x4f08c0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4f08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f08c4:
    // 0x4f08c4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4f08c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f08c8:
    // 0x4f08c8: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4f08c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4f08cc:
    // 0x4f08cc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4f08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f08d0:
    // 0x4f08d0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4f08d4:
    if (ctx->pc == 0x4F08D4u) {
        ctx->pc = 0x4F08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F08D0u;
        // 0x4f08d4: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F08D8u;
        goto label_4f08d8;
    }
    ctx->pc = 0x4F08D0u;
    {
        const bool branch_taken_0x4f08d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f08d0) {
            ctx->pc = 0x4F08D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F08D0u;
            // 0x4f08d4: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F08D8u;
            goto label_4f08d8;
        }
    }
    ctx->pc = 0x4F08D8u;
label_4f08d8:
    // 0x4f08d8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4f08d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f08dc:
    // 0x4f08dc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4f08dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4f08e0:
    // 0x4f08e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f08e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f08e4:
    // 0x4f08e4: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4f08e8:
    if (ctx->pc == 0x4F08E8u) {
        ctx->pc = 0x4F08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F08E4u;
        // 0x4f08e8: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F08ECu;
        goto label_4f08ec;
    }
    ctx->pc = 0x4F08E4u;
    {
        const bool branch_taken_0x4f08e4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f08e4) {
            ctx->pc = 0x4F08E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F08E4u;
            // 0x4f08e8: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F08F4u;
            goto label_4f08f4;
        }
    }
    ctx->pc = 0x4F08ECu;
label_4f08ec:
    // 0x4f08ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_4f08f0:
    if (ctx->pc == 0x4F08F0u) {
        ctx->pc = 0x4F08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F08ECu;
        // 0x4f08f0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F08F4u;
        goto label_4f08f4;
    }
    ctx->pc = 0x4F08ECu;
    {
        const bool branch_taken_0x4f08ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F08ECu;
        // 0x4f08f0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f08ec) {
            ctx->pc = 0x4F0904u;
            goto label_4f0904;
        }
    }
    ctx->pc = 0x4F08F4u;
label_4f08f4:
    // 0x4f08f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4f08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4f08f8:
    // 0x4f08f8: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4f08fc:
    if (ctx->pc == 0x4F08FCu) {
        ctx->pc = 0x4F08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F08F8u;
        // 0x4f08fc: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0900u;
        goto label_4f0900;
    }
    ctx->pc = 0x4F08F8u;
    {
        const bool branch_taken_0x4f08f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f08f8) {
            ctx->pc = 0x4F08FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F08F8u;
            // 0x4f08fc: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0904u;
            goto label_4f0904;
        }
    }
    ctx->pc = 0x4F0900u;
label_4f0900:
    // 0x4f0900: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4f0900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4f0904:
    // 0x4f0904: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x4f0904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_4f0908:
    // 0x4f0908: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4f0908u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4f090c:
    // 0x4f090c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4f090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f0910:
    // 0x4f0910: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4f0910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4f0914:
    // 0x4f0914: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4f0914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f0918:
    // 0x4f0918: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4f0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4f091c:
    // 0x4f091c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4f091cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4f0920:
    // 0x4f0920: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4f0920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f0924:
    // 0x4f0924: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4f0924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4f0928:
    // 0x4f0928: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4f0928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f092c:
    // 0x4f092c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4f092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4f0930:
    // 0x4f0930: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4f0930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4f0934:
    // 0x4f0934: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4f0934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4f0938:
    // 0x4f0938: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4f093c:
    if (ctx->pc == 0x4F093Cu) {
        ctx->pc = 0x4F093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0938u;
        // 0x4f093c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0940u;
        goto label_4f0940;
    }
    ctx->pc = 0x4F0938u;
    {
        const bool branch_taken_0x4f0938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0938) {
            ctx->pc = 0x4F093Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0938u;
            // 0x4f093c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0940u;
            goto label_4f0940;
        }
    }
    ctx->pc = 0x4F0940u;
label_4f0940:
    // 0x4f0940: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4f0940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4f0944:
    // 0x4f0944: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4f0944u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4f0948:
    // 0x4f0948: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f0948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f094c:
    // 0x4f094c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4f0950:
    if (ctx->pc == 0x4F0950u) {
        ctx->pc = 0x4F0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F094Cu;
        // 0x4f0950: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0954u;
        goto label_4f0954;
    }
    ctx->pc = 0x4F094Cu;
    {
        const bool branch_taken_0x4f094c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f094c) {
            ctx->pc = 0x4F0950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F094Cu;
            // 0x4f0950: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F095Cu;
            goto label_4f095c;
        }
    }
    ctx->pc = 0x4F0954u;
label_4f0954:
    // 0x4f0954: 0x10000005  b           . + 4 + (0x5 << 2)
label_4f0958:
    if (ctx->pc == 0x4F0958u) {
        ctx->pc = 0x4F0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0954u;
        // 0x4f0958: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F095Cu;
        goto label_4f095c;
    }
    ctx->pc = 0x4F0954u;
    {
        const bool branch_taken_0x4f0954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0954u;
        // 0x4f0958: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0954) {
            ctx->pc = 0x4F096Cu;
            goto label_4f096c;
        }
    }
    ctx->pc = 0x4F095Cu;
label_4f095c:
    // 0x4f095c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4f095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4f0960:
    // 0x4f0960: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4f0964:
    if (ctx->pc == 0x4F0964u) {
        ctx->pc = 0x4F0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0960u;
        // 0x4f0964: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0968u;
        goto label_4f0968;
    }
    ctx->pc = 0x4F0960u;
    {
        const bool branch_taken_0x4f0960 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f0960) {
            ctx->pc = 0x4F0964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0960u;
            // 0x4f0964: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F096Cu;
            goto label_4f096c;
        }
    }
    ctx->pc = 0x4F0968u;
label_4f0968:
    // 0x4f0968: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x4f0968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_4f096c:
    // 0x4f096c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4f0970:
    if (ctx->pc == 0x4F0970u) {
        ctx->pc = 0x4F0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F096Cu;
        // 0x4f0970: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0974u;
        goto label_4f0974;
    }
    ctx->pc = 0x4F096Cu;
    {
        const bool branch_taken_0x4f096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F096Cu;
        // 0x4f0970: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f096c) {
            ctx->pc = 0x4F0A64u;
            goto label_4f0a64;
        }
    }
    ctx->pc = 0x4F0974u;
label_4f0974:
    // 0x4f0974: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_4f0978:
    if (ctx->pc == 0x4F0978u) {
        ctx->pc = 0x4F0978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0974u;
        // 0x4f0978: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F097Cu;
        goto label_4f097c;
    }
    ctx->pc = 0x4F0974u;
    {
        const bool branch_taken_0x4f0974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0974) {
            ctx->pc = 0x4F0978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0974u;
            // 0x4f0978: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F09A8u;
            goto label_4f09a8;
        }
    }
    ctx->pc = 0x4F097Cu;
label_4f097c:
    // 0x4f097c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f0980:
    // 0x4f0980: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4f0984:
    if (ctx->pc == 0x4F0984u) {
        ctx->pc = 0x4F0984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0980u;
        // 0x4f0984: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0988u;
        goto label_4f0988;
    }
    ctx->pc = 0x4F0980u;
    {
        const bool branch_taken_0x4f0980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0980) {
            ctx->pc = 0x4F0984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0980u;
            // 0x4f0984: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F09A8u;
            goto label_4f09a8;
        }
    }
    ctx->pc = 0x4F0988u;
label_4f0988:
    // 0x4f0988: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4f0988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_4f098c:
    // 0x4f098c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4f098cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4f0990:
    // 0x4f0990: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4f0990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f0994:
    // 0x4f0994: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4f0994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4f0998:
    // 0x4f0998: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4f0998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4f099c:
    // 0x4f099c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4f099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f09a0:
    // 0x4f09a0: 0x10000031  b           . + 4 + (0x31 << 2)
label_4f09a4:
    if (ctx->pc == 0x4F09A4u) {
        ctx->pc = 0x4F09A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F09A0u;
        // 0x4f09a4: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F09A8u;
        goto label_4f09a8;
    }
    ctx->pc = 0x4F09A0u;
    {
        const bool branch_taken_0x4f09a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F09A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F09A0u;
        // 0x4f09a4: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f09a0) {
            ctx->pc = 0x4F0A68u;
            goto label_4f0a68;
        }
    }
    ctx->pc = 0x4F09A8u;
label_4f09a8:
    // 0x4f09a8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4f09a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4f09ac:
    // 0x4f09ac: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4f09b0:
    if (ctx->pc == 0x4F09B0u) {
        ctx->pc = 0x4F09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F09ACu;
        // 0x4f09b0: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F09B4u;
        goto label_4f09b4;
    }
    ctx->pc = 0x4F09ACu;
    {
        const bool branch_taken_0x4f09ac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f09ac) {
            ctx->pc = 0x4F09B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F09ACu;
            // 0x4f09b0: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0A04u;
            goto label_4f0a04;
        }
    }
    ctx->pc = 0x4F09B4u;
label_4f09b4:
    // 0x4f09b4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4f09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4f09b8:
    // 0x4f09b8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4f09b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f09bc:
    // 0x4f09bc: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x4f09bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_4f09c0:
    // 0x4f09c0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4f09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4f09c4:
    // 0x4f09c4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4f09c8:
    if (ctx->pc == 0x4F09C8u) {
        ctx->pc = 0x4F09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F09C4u;
        // 0x4f09c8: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F09CCu;
        goto label_4f09cc;
    }
    ctx->pc = 0x4F09C4u;
    {
        const bool branch_taken_0x4f09c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f09c4) {
            ctx->pc = 0x4F09C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F09C4u;
            // 0x4f09c8: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F09CCu;
            goto label_4f09cc;
        }
    }
    ctx->pc = 0x4F09CCu;
label_4f09cc:
    // 0x4f09cc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4f09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f09d0:
    // 0x4f09d0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4f09d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4f09d4:
    // 0x4f09d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f09d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f09d8:
    // 0x4f09d8: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4f09dc:
    if (ctx->pc == 0x4F09DCu) {
        ctx->pc = 0x4F09DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F09D8u;
        // 0x4f09dc: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F09E0u;
        goto label_4f09e0;
    }
    ctx->pc = 0x4F09D8u;
    {
        const bool branch_taken_0x4f09d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f09d8) {
            ctx->pc = 0x4F09DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F09D8u;
            // 0x4f09dc: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F09E8u;
            goto label_4f09e8;
        }
    }
    ctx->pc = 0x4F09E0u;
label_4f09e0:
    // 0x4f09e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_4f09e4:
    if (ctx->pc == 0x4F09E4u) {
        ctx->pc = 0x4F09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F09E0u;
        // 0x4f09e4: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F09E8u;
        goto label_4f09e8;
    }
    ctx->pc = 0x4F09E0u;
    {
        const bool branch_taken_0x4f09e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F09E0u;
        // 0x4f09e4: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f09e0) {
            ctx->pc = 0x4F09F8u;
            goto label_4f09f8;
        }
    }
    ctx->pc = 0x4F09E8u;
label_4f09e8:
    // 0x4f09e8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4f09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4f09ec:
    // 0x4f09ec: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4f09f0:
    if (ctx->pc == 0x4F09F0u) {
        ctx->pc = 0x4F09F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F09ECu;
        // 0x4f09f0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F09F4u;
        goto label_4f09f4;
    }
    ctx->pc = 0x4F09ECu;
    {
        const bool branch_taken_0x4f09ec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f09ec) {
            ctx->pc = 0x4F09F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F09ECu;
            // 0x4f09f0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F09F8u;
            goto label_4f09f8;
        }
    }
    ctx->pc = 0x4F09F4u;
label_4f09f4:
    // 0x4f09f4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4f09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4f09f8:
    // 0x4f09f8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x4f09f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_4f09fc:
    // 0x4f09fc: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4f09fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4f0a00:
    // 0x4f0a00: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4f0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f0a04:
    // 0x4f0a04: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4f0a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4f0a08:
    // 0x4f0a08: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4f0a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f0a0c:
    // 0x4f0a0c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4f0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4f0a10:
    // 0x4f0a10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4f0a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4f0a14:
    // 0x4f0a14: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4f0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f0a18:
    // 0x4f0a18: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4f0a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4f0a1c:
    // 0x4f0a1c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4f0a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4f0a20:
    // 0x4f0a20: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4f0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4f0a24:
    // 0x4f0a24: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4f0a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4f0a28:
    // 0x4f0a28: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4f0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4f0a2c:
    // 0x4f0a2c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4f0a30:
    if (ctx->pc == 0x4F0A30u) {
        ctx->pc = 0x4F0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0A2Cu;
        // 0x4f0a30: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0A34u;
        goto label_4f0a34;
    }
    ctx->pc = 0x4F0A2Cu;
    {
        const bool branch_taken_0x4f0a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0a2c) {
            ctx->pc = 0x4F0A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0A2Cu;
            // 0x4f0a30: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0A34u;
            goto label_4f0a34;
        }
    }
    ctx->pc = 0x4F0A34u;
label_4f0a34:
    // 0x4f0a34: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4f0a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4f0a38:
    // 0x4f0a38: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4f0a38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4f0a3c:
    // 0x4f0a3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f0a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f0a40:
    // 0x4f0a40: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4f0a44:
    if (ctx->pc == 0x4F0A44u) {
        ctx->pc = 0x4F0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0A40u;
        // 0x4f0a44: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0A48u;
        goto label_4f0a48;
    }
    ctx->pc = 0x4F0A40u;
    {
        const bool branch_taken_0x4f0a40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f0a40) {
            ctx->pc = 0x4F0A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0A40u;
            // 0x4f0a44: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0A50u;
            goto label_4f0a50;
        }
    }
    ctx->pc = 0x4F0A48u;
label_4f0a48:
    // 0x4f0a48: 0x10000005  b           . + 4 + (0x5 << 2)
label_4f0a4c:
    if (ctx->pc == 0x4F0A4Cu) {
        ctx->pc = 0x4F0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0A48u;
        // 0x4f0a4c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0A50u;
        goto label_4f0a50;
    }
    ctx->pc = 0x4F0A48u;
    {
        const bool branch_taken_0x4f0a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0A48u;
        // 0x4f0a4c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0a48) {
            ctx->pc = 0x4F0A60u;
            goto label_4f0a60;
        }
    }
    ctx->pc = 0x4F0A50u;
label_4f0a50:
    // 0x4f0a50: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4f0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4f0a54:
    // 0x4f0a54: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4f0a58:
    if (ctx->pc == 0x4F0A58u) {
        ctx->pc = 0x4F0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0A54u;
        // 0x4f0a58: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0A5Cu;
        goto label_4f0a5c;
    }
    ctx->pc = 0x4F0A54u;
    {
        const bool branch_taken_0x4f0a54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f0a54) {
            ctx->pc = 0x4F0A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0A54u;
            // 0x4f0a58: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0A60u;
            goto label_4f0a60;
        }
    }
    ctx->pc = 0x4F0A5Cu;
label_4f0a5c:
    // 0x4f0a5c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4f0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_4f0a60:
    // 0x4f0a60: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4f0a60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_4f0a64:
    // 0x4f0a64: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4f0a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4f0a68:
    // 0x4f0a68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f0a6c:
    // 0x4f0a6c: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
label_4f0a70:
    if (ctx->pc == 0x4F0A70u) {
        ctx->pc = 0x4F0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0A6Cu;
        // 0x4f0a70: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0A74u;
        goto label_4f0a74;
    }
    ctx->pc = 0x4F0A6Cu;
    {
        const bool branch_taken_0x4f0a6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f0a6c) {
            ctx->pc = 0x4F0A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0A6Cu;
            // 0x4f0a70: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0A88u;
            goto label_4f0a88;
        }
    }
    ctx->pc = 0x4F0A74u;
label_4f0a74:
    // 0x4f0a74: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4f0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f0a78:
    // 0x4f0a78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4f0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f0a7c:
    // 0x4f0a7c: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
label_4f0a80:
    if (ctx->pc == 0x4F0A80u) {
        ctx->pc = 0x4F0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0A7Cu;
        // 0x4f0a80: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0A84u;
        goto label_4f0a84;
    }
    ctx->pc = 0x4F0A7Cu;
    {
        const bool branch_taken_0x4f0a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0a7c) {
            ctx->pc = 0x4F0A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0A7Cu;
            // 0x4f0a80: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f0880;
        }
    }
    ctx->pc = 0x4F0A84u;
label_4f0a84:
    // 0x4f0a84: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4f0a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f0a88:
    // 0x4f0a88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4f0a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f0a8c:
    // 0x4f0a8c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4f0a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f0a90:
    // 0x4f0a90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4f0a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f0a94:
    // 0x4f0a94: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4f0a94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4f0a98:
    // 0x4f0a98: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4f0a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f0a9c:
    // 0x4f0a9c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4f0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4f0aa0:
    // 0x4f0aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f0aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0aa4:
    // 0x4f0aa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4f0aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4f0aa8:
    // 0x4f0aa8: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4f0aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4f0aac:
    // 0x4f0aac: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4f0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_4f0ab0:
    // 0x4f0ab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f0ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f0ab4:
    // 0x4f0ab4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4f0ab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0ab8:
    // 0x4f0ab8: 0x3e00008  jr          $ra
label_4f0abc:
    if (ctx->pc == 0x4F0ABCu) {
        ctx->pc = 0x4F0ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0AB8u;
        // 0x4f0abc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0AC0u;
        goto label_fallthrough_0x4f0ab8;
    }
    ctx->pc = 0x4F0AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0AB8u;
        // 0x4f0abc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f0ab8:
    ctx->pc = 0x4F0AC0u;
}
