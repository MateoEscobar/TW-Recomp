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

// Function: sub_004A0650
// Address: 0x4a0650 - 0x4a08c8
void sub_004A0650_0x4a0650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0650_0x4a0650");
#endif

    switch (ctx->pc) {
        case 0x4a0650u: goto label_4a0650;
        case 0x4a0654u: goto label_4a0654;
        case 0x4a0658u: goto label_4a0658;
        case 0x4a065cu: goto label_4a065c;
        case 0x4a0660u: goto label_4a0660;
        case 0x4a0664u: goto label_4a0664;
        case 0x4a0668u: goto label_4a0668;
        case 0x4a066cu: goto label_4a066c;
        case 0x4a0670u: goto label_4a0670;
        case 0x4a0674u: goto label_4a0674;
        case 0x4a0678u: goto label_4a0678;
        case 0x4a067cu: goto label_4a067c;
        case 0x4a0680u: goto label_4a0680;
        case 0x4a0684u: goto label_4a0684;
        case 0x4a0688u: goto label_4a0688;
        case 0x4a068cu: goto label_4a068c;
        case 0x4a0690u: goto label_4a0690;
        case 0x4a0694u: goto label_4a0694;
        case 0x4a0698u: goto label_4a0698;
        case 0x4a069cu: goto label_4a069c;
        case 0x4a06a0u: goto label_4a06a0;
        case 0x4a06a4u: goto label_4a06a4;
        case 0x4a06a8u: goto label_4a06a8;
        case 0x4a06acu: goto label_4a06ac;
        case 0x4a06b0u: goto label_4a06b0;
        case 0x4a06b4u: goto label_4a06b4;
        case 0x4a06b8u: goto label_4a06b8;
        case 0x4a06bcu: goto label_4a06bc;
        case 0x4a06c0u: goto label_4a06c0;
        case 0x4a06c4u: goto label_4a06c4;
        case 0x4a06c8u: goto label_4a06c8;
        case 0x4a06ccu: goto label_4a06cc;
        case 0x4a06d0u: goto label_4a06d0;
        case 0x4a06d4u: goto label_4a06d4;
        case 0x4a06d8u: goto label_4a06d8;
        case 0x4a06dcu: goto label_4a06dc;
        case 0x4a06e0u: goto label_4a06e0;
        case 0x4a06e4u: goto label_4a06e4;
        case 0x4a06e8u: goto label_4a06e8;
        case 0x4a06ecu: goto label_4a06ec;
        case 0x4a06f0u: goto label_4a06f0;
        case 0x4a06f4u: goto label_4a06f4;
        case 0x4a06f8u: goto label_4a06f8;
        case 0x4a06fcu: goto label_4a06fc;
        case 0x4a0700u: goto label_4a0700;
        case 0x4a0704u: goto label_4a0704;
        case 0x4a0708u: goto label_4a0708;
        case 0x4a070cu: goto label_4a070c;
        case 0x4a0710u: goto label_4a0710;
        case 0x4a0714u: goto label_4a0714;
        case 0x4a0718u: goto label_4a0718;
        case 0x4a071cu: goto label_4a071c;
        case 0x4a0720u: goto label_4a0720;
        case 0x4a0724u: goto label_4a0724;
        case 0x4a0728u: goto label_4a0728;
        case 0x4a072cu: goto label_4a072c;
        case 0x4a0730u: goto label_4a0730;
        case 0x4a0734u: goto label_4a0734;
        case 0x4a0738u: goto label_4a0738;
        case 0x4a073cu: goto label_4a073c;
        case 0x4a0740u: goto label_4a0740;
        case 0x4a0744u: goto label_4a0744;
        case 0x4a0748u: goto label_4a0748;
        case 0x4a074cu: goto label_4a074c;
        case 0x4a0750u: goto label_4a0750;
        case 0x4a0754u: goto label_4a0754;
        case 0x4a0758u: goto label_4a0758;
        case 0x4a075cu: goto label_4a075c;
        case 0x4a0760u: goto label_4a0760;
        case 0x4a0764u: goto label_4a0764;
        case 0x4a0768u: goto label_4a0768;
        case 0x4a076cu: goto label_4a076c;
        case 0x4a0770u: goto label_4a0770;
        case 0x4a0774u: goto label_4a0774;
        case 0x4a0778u: goto label_4a0778;
        case 0x4a077cu: goto label_4a077c;
        case 0x4a0780u: goto label_4a0780;
        case 0x4a0784u: goto label_4a0784;
        case 0x4a0788u: goto label_4a0788;
        case 0x4a078cu: goto label_4a078c;
        case 0x4a0790u: goto label_4a0790;
        case 0x4a0794u: goto label_4a0794;
        case 0x4a0798u: goto label_4a0798;
        case 0x4a079cu: goto label_4a079c;
        case 0x4a07a0u: goto label_4a07a0;
        case 0x4a07a4u: goto label_4a07a4;
        case 0x4a07a8u: goto label_4a07a8;
        case 0x4a07acu: goto label_4a07ac;
        case 0x4a07b0u: goto label_4a07b0;
        case 0x4a07b4u: goto label_4a07b4;
        case 0x4a07b8u: goto label_4a07b8;
        case 0x4a07bcu: goto label_4a07bc;
        case 0x4a07c0u: goto label_4a07c0;
        case 0x4a07c4u: goto label_4a07c4;
        case 0x4a07c8u: goto label_4a07c8;
        case 0x4a07ccu: goto label_4a07cc;
        case 0x4a07d0u: goto label_4a07d0;
        case 0x4a07d4u: goto label_4a07d4;
        case 0x4a07d8u: goto label_4a07d8;
        case 0x4a07dcu: goto label_4a07dc;
        case 0x4a07e0u: goto label_4a07e0;
        case 0x4a07e4u: goto label_4a07e4;
        case 0x4a07e8u: goto label_4a07e8;
        case 0x4a07ecu: goto label_4a07ec;
        case 0x4a07f0u: goto label_4a07f0;
        case 0x4a07f4u: goto label_4a07f4;
        case 0x4a07f8u: goto label_4a07f8;
        case 0x4a07fcu: goto label_4a07fc;
        case 0x4a0800u: goto label_4a0800;
        case 0x4a0804u: goto label_4a0804;
        case 0x4a0808u: goto label_4a0808;
        case 0x4a080cu: goto label_4a080c;
        case 0x4a0810u: goto label_4a0810;
        case 0x4a0814u: goto label_4a0814;
        case 0x4a0818u: goto label_4a0818;
        case 0x4a081cu: goto label_4a081c;
        case 0x4a0820u: goto label_4a0820;
        case 0x4a0824u: goto label_4a0824;
        case 0x4a0828u: goto label_4a0828;
        case 0x4a082cu: goto label_4a082c;
        case 0x4a0830u: goto label_4a0830;
        case 0x4a0834u: goto label_4a0834;
        case 0x4a0838u: goto label_4a0838;
        case 0x4a083cu: goto label_4a083c;
        case 0x4a0840u: goto label_4a0840;
        case 0x4a0844u: goto label_4a0844;
        case 0x4a0848u: goto label_4a0848;
        case 0x4a084cu: goto label_4a084c;
        case 0x4a0850u: goto label_4a0850;
        case 0x4a0854u: goto label_4a0854;
        case 0x4a0858u: goto label_4a0858;
        case 0x4a085cu: goto label_4a085c;
        case 0x4a0860u: goto label_4a0860;
        case 0x4a0864u: goto label_4a0864;
        case 0x4a0868u: goto label_4a0868;
        case 0x4a086cu: goto label_4a086c;
        case 0x4a0870u: goto label_4a0870;
        case 0x4a0874u: goto label_4a0874;
        case 0x4a0878u: goto label_4a0878;
        case 0x4a087cu: goto label_4a087c;
        case 0x4a0880u: goto label_4a0880;
        case 0x4a0884u: goto label_4a0884;
        case 0x4a0888u: goto label_4a0888;
        case 0x4a088cu: goto label_4a088c;
        case 0x4a0890u: goto label_4a0890;
        case 0x4a0894u: goto label_4a0894;
        case 0x4a0898u: goto label_4a0898;
        case 0x4a089cu: goto label_4a089c;
        case 0x4a08a0u: goto label_4a08a0;
        case 0x4a08a4u: goto label_4a08a4;
        case 0x4a08a8u: goto label_4a08a8;
        case 0x4a08acu: goto label_4a08ac;
        case 0x4a08b0u: goto label_4a08b0;
        case 0x4a08b4u: goto label_4a08b4;
        case 0x4a08b8u: goto label_4a08b8;
        case 0x4a08bcu: goto label_4a08bc;
        case 0x4a08c0u: goto label_4a08c0;
        case 0x4a08c4u: goto label_4a08c4;
        default: break;
    }

    ctx->pc = 0x4a0650u;

label_4a0650:
    // 0x4a0650: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4a0650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a0654:
    // 0x4a0654: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a0654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4a0658:
    // 0x4a0658: 0xe2001b  divu        $zero, $a3, $v0
    ctx->pc = 0x4a0658u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_4a065c:
    // 0x4a065c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a065cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4a0660:
    // 0x4a0660: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a0660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4a0664:
    // 0x4a0664: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4a0664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4a0668:
    // 0x4a0668: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a0668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a066c:
    // 0x4a066c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4a066cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a0670:
    // 0x4a0670: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a0670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_4a0674:
    // 0x4a0674: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a0674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a0678:
    // 0x4a0678: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4a0678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_4a067c:
    // 0x4a067c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4a067cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a0680:
    // 0x4a0680: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a0680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4a0684:
    // 0x4a0684: 0x2475f7a0  addiu       $s5, $v1, -0x860
    ctx->pc = 0x4a0684u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965152));
label_4a0688:
    // 0x4a0688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a068c:
    // 0x4a068c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4a0690:
    if (ctx->pc == 0x4A0690u) {
        ctx->pc = 0x4A0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A068Cu;
        // 0x4a0690: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0694u;
        goto label_4a0694;
    }
    ctx->pc = 0x4A068Cu;
    {
        const bool branch_taken_0x4a068c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a068c) {
            ctx->pc = 0x4A0690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A068Cu;
            // 0x4a0690: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0694u;
            goto label_4a0694;
        }
    }
    ctx->pc = 0x4A0694u;
label_4a0694:
    // 0x4a0694: 0x3812  mflo        $a3
    ctx->pc = 0x4a0694u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_4a0698:
    // 0x4a0698: 0x10000071  b           . + 4 + (0x71 << 2)
label_4a069c:
    if (ctx->pc == 0x4A069Cu) {
        ctx->pc = 0x4A069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0698u;
        // 0x4a069c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A06A0u;
        goto label_4a06a0;
    }
    ctx->pc = 0x4A0698u;
    {
        const bool branch_taken_0x4a0698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0698u;
        // 0x4a069c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0698) {
            ctx->pc = 0x4A0860u;
            goto label_4a0860;
        }
    }
    ctx->pc = 0x4A06A0u;
label_4a06a0:
    // 0x4a06a0: 0x3c0a7c00  lui         $t2, 0x7C00
    ctx->pc = 0x4a06a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)31744 << 16));
label_4a06a4:
    // 0x4a06a4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a06a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_4a06a8:
    // 0x4a06a8: 0x7aa80000  lq          $t0, 0x0($s5)
    ctx->pc = 0x4a06a8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_4a06ac:
    // 0x4a06ac: 0x2458f700  addiu       $t8, $v0, -0x900
    ctx->pc = 0x4a06acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_4a06b0:
    // 0x4a06b0: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x4a06b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_4a06b4:
    // 0x4a06b4: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x4a06b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a06b8:
    // 0x4a06b8: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x4a06b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a06bc:
    // 0x4a06bc: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x4a06bcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
label_4a06c0:
    // 0x4a06c0: 0x3c0c0400  lui         $t4, 0x400
    ctx->pc = 0x4a06c0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1024 << 16));
label_4a06c4:
    // 0x4a06c4: 0x3c0b0100  lui         $t3, 0x100
    ctx->pc = 0x4a06c4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)256 << 16));
label_4a06c8:
    // 0x4a06c8: 0x356b0404  ori         $t3, $t3, 0x404
    ctx->pc = 0x4a06c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1028);
label_4a06cc:
    // 0x4a06cc: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x4a06ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
label_4a06d0:
    // 0x4a06d0: 0x354a8000  ori         $t2, $t2, 0x8000
    ctx->pc = 0x4a06d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
label_4a06d4:
    // 0x4a06d4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4a06d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_4a06d8:
    // 0x4a06d8: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x4a06d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4a06dc:
    // 0x4a06dc: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x4a06dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4a06e0:
    // 0x4a06e0: 0x202300b  movn        $a2, $s0, $v0
    ctx->pc = 0x4a06e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
label_4a06e4:
    // 0x4a06e4: 0xce2018  mult        $a0, $a2, $t6
    ctx->pc = 0x4a06e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a06e8:
    // 0x4a06e8: 0xcc1825  or          $v1, $a2, $t4
    ctx->pc = 0x4a06e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
label_4a06ec:
    // 0x4a06ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a06ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a06f0:
    // 0x4a06f0: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x4a06f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4a06f4:
    // 0x4a06f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4a06f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4a06f8:
    // 0x4a06f8: 0x6b2825  or          $a1, $v1, $t3
    ctx->pc = 0x4a06f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_4a06fc:
    // 0x4a06fc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x4a06fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_4a0700:
    // 0x4a0700: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a0700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4a0704:
    // 0x4a0704: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x4a0704u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_4a0708:
    // 0x4a0708: 0x4d1825  or          $v1, $v0, $t5
    ctx->pc = 0x4a0708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_4a070c:
    // 0x4a070c: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x4a070cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_4a0710:
    // 0x4a0710: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a0710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a0714:
    // 0x4a0714: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a0714u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a0718:
    // 0x4a0718: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a0718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a071c:
    // 0x4a071c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a071cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a0720:
    // 0x4a0720: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a0720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4a0724:
    // 0x4a0724: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x4a0724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
label_4a0728:
    // 0x4a0728: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x4a0728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_4a072c:
    // 0x4a072c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x4a072cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_4a0730:
    // 0x4a0730: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4a0730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4a0734:
    // 0x4a0734: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x4a0734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_4a0738:
    // 0x4a0738: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4a0738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4a073c:
    // 0x4a073c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x4a073cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_4a0740:
    // 0x4a0740: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x4a0740u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_4a0744:
    // 0x4a0744: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a0744u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a0748:
    // 0x4a0748: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a0748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a074c:
    // 0x4a074c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4a074cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4a0750:
    // 0x4a0750: 0x10c9003b  beq         $a2, $t1, . + 4 + (0x3B << 2)
label_4a0754:
    if (ctx->pc == 0x4A0754u) {
        ctx->pc = 0x4A0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0750u;
        // 0x4a0754: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0758u;
        goto label_4a0758;
    }
    ctx->pc = 0x4A0750u;
    {
        const bool branch_taken_0x4a0750 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x4A0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0750u;
        // 0x4a0754: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0750) {
            ctx->pc = 0x4A0840u;
            goto label_4a0840;
        }
    }
    ctx->pc = 0x4A0758u;
label_4a0758:
    // 0x4a0758: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a0758u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4a075c:
    // 0x4a075c: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x4a075cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_4a0760:
    // 0x4a0760: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a0760u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a0764:
    // 0x4a0764: 0x0  nop
    ctx->pc = 0x4a0764u;
    // NOP
label_4a0768:
    // 0x4a0768: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a076c:
    // 0x4a076c: 0x78a2ff80  lq          $v0, -0x80($a1)
    ctx->pc = 0x4a076cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967168)));
label_4a0770:
    // 0x4a0770: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a0770u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a0774:
    // 0x4a0774: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a0774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0778:
    // 0x4a0778: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a077c:
    // 0x4a077c: 0x78a2ff90  lq          $v0, -0x70($a1)
    ctx->pc = 0x4a077cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967184)));
label_4a0780:
    // 0x4a0780: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a0780u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a0784:
    // 0x4a0784: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a0784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0788:
    // 0x4a0788: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0788u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a078c:
    // 0x4a078c: 0x78a2ffa0  lq          $v0, -0x60($a1)
    ctx->pc = 0x4a078cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967200)));
label_4a0790:
    // 0x4a0790: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a0790u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4a0794:
    // 0x4a0794: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a0794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4a0798:
    // 0x4a0798: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0798u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a079c:
    // 0x4a079c: 0x78a2ffb0  lq          $v0, -0x50($a1)
    ctx->pc = 0x4a079cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967216)));
label_4a07a0:
    // 0x4a07a0: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a07a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_4a07a4:
    // 0x4a07a4: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a07a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_4a07a8:
    // 0x4a07a8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a07a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a07ac:
    // 0x4a07ac: 0x78a2ffc0  lq          $v0, -0x40($a1)
    ctx->pc = 0x4a07acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967232)));
label_4a07b0:
    // 0x4a07b0: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a07b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_4a07b4:
    // 0x4a07b4: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a07b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4a07b8:
    // 0x4a07b8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a07b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a07bc:
    // 0x4a07bc: 0x78a2ffd0  lq          $v0, -0x30($a1)
    ctx->pc = 0x4a07bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967248)));
label_4a07c0:
    // 0x4a07c0: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4a07c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_4a07c4:
    // 0x4a07c4: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4a07c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_4a07c8:
    // 0x4a07c8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a07c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a07cc:
    // 0x4a07cc: 0x78a2ffe0  lq          $v0, -0x20($a1)
    ctx->pc = 0x4a07ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967264)));
label_4a07d0:
    // 0x4a07d0: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4a07d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_4a07d4:
    // 0x4a07d4: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x4a07d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_4a07d8:
    // 0x4a07d8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a07d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a07dc:
    // 0x4a07dc: 0x78a2fff0  lq          $v0, -0x10($a1)
    ctx->pc = 0x4a07dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_4a07e0:
    // 0x4a07e0: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x4a07e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_4a07e4:
    // 0x4a07e4: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x4a07e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_4a07e8:
    // 0x4a07e8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a07e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a07ec:
    // 0x4a07ec: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4a07ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4a07f0:
    // 0x4a07f0: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x4a07f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_4a07f4:
    // 0x4a07f4: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x4a07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_4a07f8:
    // 0x4a07f8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a07f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a07fc:
    // 0x4a07fc: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4a07fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_4a0800:
    // 0x4a0800: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x4a0800u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_4a0804:
    // 0x4a0804: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x4a0804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_4a0808:
    // 0x4a0808: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a080c:
    // 0x4a080c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x4a080cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_4a0810:
    // 0x4a0810: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x4a0810u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_4a0814:
    // 0x4a0814: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x4a0814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_4a0818:
    // 0x4a0818: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a081c:
    // 0x4a081c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4a081cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_4a0820:
    // 0x4a0820: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x4a0820u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_4a0824:
    // 0x4a0824: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x4a0824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_4a0828:
    // 0x4a0828: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a082c:
    // 0x4a082c: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x4a082cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_4a0830:
    // 0x4a0830: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4a0830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4a0834:
    // 0x4a0834: 0x14c7ffcc  bne         $a2, $a3, . + 4 + (-0x34 << 2)
label_4a0838:
    if (ctx->pc == 0x4A0838u) {
        ctx->pc = 0x4A0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0834u;
        // 0x4a0838: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A083Cu;
        goto label_4a083c;
    }
    ctx->pc = 0x4A0834u;
    {
        const bool branch_taken_0x4a0834 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x4A0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0834u;
        // 0x4a0838: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0834) {
            ctx->pc = 0x4A0768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0768;
        }
    }
    ctx->pc = 0x4A083Cu;
label_4a083c:
    // 0x4a083c: 0x0  nop
    ctx->pc = 0x4a083cu;
    // NOP
label_4a0840:
    // 0x4a0840: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a0840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a0844:
    // 0x4a0844: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x4a0844u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_4a0848:
    // 0x4a0848: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a0848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a084c:
    // 0x4a084c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a084cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a0850:
    // 0x4a0850: 0x1600ffa1  bnez        $s0, . + 4 + (-0x5F << 2)
label_4a0854:
    if (ctx->pc == 0x4A0854u) {
        ctx->pc = 0x4A0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0850u;
        // 0x4a0854: 0x7b080000  lq          $t0, 0x0($t8) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0858u;
        goto label_4a0858;
    }
    ctx->pc = 0x4A0850u;
    {
        const bool branch_taken_0x4a0850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0850u;
        // 0x4a0854: 0x7b080000  lq          $t0, 0x0($t8) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0850) {
            ctx->pc = 0x4A06D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a06d8;
        }
    }
    ctx->pc = 0x4A0858u;
label_4a0858:
    // 0x4a0858: 0xc127ec8  jal         func_49FB20
label_4a085c:
    if (ctx->pc == 0x4A085Cu) {
        ctx->pc = 0x4A0860u;
        goto label_4a0860;
    }
    ctx->pc = 0x4A0858u;
    SET_GPR_U32(ctx, 31, 0x4A0860u);
    ctx->pc = 0x49FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FB20u, 0x4A0858u, 0x4A0860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0860u;
label_4a0860:
    // 0x4a0860: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_4a0864:
    if (ctx->pc == 0x4A0864u) {
        ctx->pc = 0x4A0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0860u;
        // 0x4a0864: 0x8f90879c  lw          $s0, -0x7864($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0868u;
        goto label_4a0868;
    }
    ctx->pc = 0x4A0860u;
    {
        const bool branch_taken_0x4a0860 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0860u;
        // 0x4a0864: 0x8f90879c  lw          $s0, -0x7864($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0860) {
            ctx->pc = 0x4A0898u;
            goto label_4a0898;
        }
    }
    ctx->pc = 0x4A0868u;
label_4a0868:
    // 0x4a0868: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a0868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a086c:
    // 0x4a086c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4a086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a0870:
    // 0x4a0870: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4a0870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a0874:
    // 0x4a0874: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x4a0874u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4a0878:
    // 0x4a0878: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x4a0878u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4a087c:
    // 0x4a087c: 0x243800a  movz        $s0, $s2, $v1
    ctx->pc = 0x4a087cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_4a0880:
    // 0x4a0880: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4a0880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a0884:
    // 0x4a0884: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a0884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0888:
    // 0x4a0888: 0x40f809  jalr        $v0
label_4a088c:
    if (ctx->pc == 0x4A088Cu) {
        ctx->pc = 0x4A088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0888u;
        // 0x4a088c: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0890u;
        goto label_4a0890;
    }
    ctx->pc = 0x4A0888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A0890u);
        ctx->pc = 0x4A088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0888u;
        // 0x4a088c: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0888u, 0x4A0890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A0890u;
label_4a0890:
    // 0x4a0890: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a0894:
    if (ctx->pc == 0x4A0894u) {
        ctx->pc = 0x4A0898u;
        goto label_4a0898;
    }
    ctx->pc = 0x4A0890u;
    {
        const bool branch_taken_0x4a0890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0890) {
            ctx->pc = 0x4A089Cu;
            goto label_4a089c;
        }
    }
    ctx->pc = 0x4A0898u;
label_4a0898:
    // 0x4a0898: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a0898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a089c:
    // 0x4a089c: 0x1600ff80  bnez        $s0, . + 4 + (-0x80 << 2)
label_4a08a0:
    if (ctx->pc == 0x4A08A0u) {
        ctx->pc = 0x4A08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A089Cu;
        // 0x4a08a0: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A08A4u;
        goto label_4a08a4;
    }
    ctx->pc = 0x4A089Cu;
    {
        const bool branch_taken_0x4a089c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A089Cu;
        // 0x4a08a0: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a089c) {
            ctx->pc = 0x4A06A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a06a0;
        }
    }
    ctx->pc = 0x4A08A4u;
label_4a08a4:
    // 0x4a08a4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a08a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a08a8:
    // 0x4a08a8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a08a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a08ac:
    // 0x4a08ac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a08acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a08b0:
    // 0x4a08b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a08b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a08b4:
    // 0x4a08b4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a08b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a08b8:
    // 0x4a08b8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4a08b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a08bc:
    // 0x4a08bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a08bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a08c0:
    // 0x4a08c0: 0x3e00008  jr          $ra
label_4a08c4:
    if (ctx->pc == 0x4A08C4u) {
        ctx->pc = 0x4A08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A08C0u;
        // 0x4a08c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A08C8u;
        goto label_fallthrough_0x4a08c0;
    }
    ctx->pc = 0x4A08C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A08C0u;
        // 0x4a08c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A08C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a08c0:
    ctx->pc = 0x4A08C8u;
}
