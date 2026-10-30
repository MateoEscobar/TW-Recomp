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

// Function: sub_00264460
// Address: 0x264460 - 0x264738
void sub_00264460_0x264460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264460_0x264460");
#endif

    switch (ctx->pc) {
        case 0x264460u: goto label_264460;
        case 0x264464u: goto label_264464;
        case 0x264468u: goto label_264468;
        case 0x26446cu: goto label_26446c;
        case 0x264470u: goto label_264470;
        case 0x264474u: goto label_264474;
        case 0x264478u: goto label_264478;
        case 0x26447cu: goto label_26447c;
        case 0x264480u: goto label_264480;
        case 0x264484u: goto label_264484;
        case 0x264488u: goto label_264488;
        case 0x26448cu: goto label_26448c;
        case 0x264490u: goto label_264490;
        case 0x264494u: goto label_264494;
        case 0x264498u: goto label_264498;
        case 0x26449cu: goto label_26449c;
        case 0x2644a0u: goto label_2644a0;
        case 0x2644a4u: goto label_2644a4;
        case 0x2644a8u: goto label_2644a8;
        case 0x2644acu: goto label_2644ac;
        case 0x2644b0u: goto label_2644b0;
        case 0x2644b4u: goto label_2644b4;
        case 0x2644b8u: goto label_2644b8;
        case 0x2644bcu: goto label_2644bc;
        case 0x2644c0u: goto label_2644c0;
        case 0x2644c4u: goto label_2644c4;
        case 0x2644c8u: goto label_2644c8;
        case 0x2644ccu: goto label_2644cc;
        case 0x2644d0u: goto label_2644d0;
        case 0x2644d4u: goto label_2644d4;
        case 0x2644d8u: goto label_2644d8;
        case 0x2644dcu: goto label_2644dc;
        case 0x2644e0u: goto label_2644e0;
        case 0x2644e4u: goto label_2644e4;
        case 0x2644e8u: goto label_2644e8;
        case 0x2644ecu: goto label_2644ec;
        case 0x2644f0u: goto label_2644f0;
        case 0x2644f4u: goto label_2644f4;
        case 0x2644f8u: goto label_2644f8;
        case 0x2644fcu: goto label_2644fc;
        case 0x264500u: goto label_264500;
        case 0x264504u: goto label_264504;
        case 0x264508u: goto label_264508;
        case 0x26450cu: goto label_26450c;
        case 0x264510u: goto label_264510;
        case 0x264514u: goto label_264514;
        case 0x264518u: goto label_264518;
        case 0x26451cu: goto label_26451c;
        case 0x264520u: goto label_264520;
        case 0x264524u: goto label_264524;
        case 0x264528u: goto label_264528;
        case 0x26452cu: goto label_26452c;
        case 0x264530u: goto label_264530;
        case 0x264534u: goto label_264534;
        case 0x264538u: goto label_264538;
        case 0x26453cu: goto label_26453c;
        case 0x264540u: goto label_264540;
        case 0x264544u: goto label_264544;
        case 0x264548u: goto label_264548;
        case 0x26454cu: goto label_26454c;
        case 0x264550u: goto label_264550;
        case 0x264554u: goto label_264554;
        case 0x264558u: goto label_264558;
        case 0x26455cu: goto label_26455c;
        case 0x264560u: goto label_264560;
        case 0x264564u: goto label_264564;
        case 0x264568u: goto label_264568;
        case 0x26456cu: goto label_26456c;
        case 0x264570u: goto label_264570;
        case 0x264574u: goto label_264574;
        case 0x264578u: goto label_264578;
        case 0x26457cu: goto label_26457c;
        case 0x264580u: goto label_264580;
        case 0x264584u: goto label_264584;
        case 0x264588u: goto label_264588;
        case 0x26458cu: goto label_26458c;
        case 0x264590u: goto label_264590;
        case 0x264594u: goto label_264594;
        case 0x264598u: goto label_264598;
        case 0x26459cu: goto label_26459c;
        case 0x2645a0u: goto label_2645a0;
        case 0x2645a4u: goto label_2645a4;
        case 0x2645a8u: goto label_2645a8;
        case 0x2645acu: goto label_2645ac;
        case 0x2645b0u: goto label_2645b0;
        case 0x2645b4u: goto label_2645b4;
        case 0x2645b8u: goto label_2645b8;
        case 0x2645bcu: goto label_2645bc;
        case 0x2645c0u: goto label_2645c0;
        case 0x2645c4u: goto label_2645c4;
        case 0x2645c8u: goto label_2645c8;
        case 0x2645ccu: goto label_2645cc;
        case 0x2645d0u: goto label_2645d0;
        case 0x2645d4u: goto label_2645d4;
        case 0x2645d8u: goto label_2645d8;
        case 0x2645dcu: goto label_2645dc;
        case 0x2645e0u: goto label_2645e0;
        case 0x2645e4u: goto label_2645e4;
        case 0x2645e8u: goto label_2645e8;
        case 0x2645ecu: goto label_2645ec;
        case 0x2645f0u: goto label_2645f0;
        case 0x2645f4u: goto label_2645f4;
        case 0x2645f8u: goto label_2645f8;
        case 0x2645fcu: goto label_2645fc;
        case 0x264600u: goto label_264600;
        case 0x264604u: goto label_264604;
        case 0x264608u: goto label_264608;
        case 0x26460cu: goto label_26460c;
        case 0x264610u: goto label_264610;
        case 0x264614u: goto label_264614;
        case 0x264618u: goto label_264618;
        case 0x26461cu: goto label_26461c;
        case 0x264620u: goto label_264620;
        case 0x264624u: goto label_264624;
        case 0x264628u: goto label_264628;
        case 0x26462cu: goto label_26462c;
        case 0x264630u: goto label_264630;
        case 0x264634u: goto label_264634;
        case 0x264638u: goto label_264638;
        case 0x26463cu: goto label_26463c;
        case 0x264640u: goto label_264640;
        case 0x264644u: goto label_264644;
        case 0x264648u: goto label_264648;
        case 0x26464cu: goto label_26464c;
        case 0x264650u: goto label_264650;
        case 0x264654u: goto label_264654;
        case 0x264658u: goto label_264658;
        case 0x26465cu: goto label_26465c;
        case 0x264660u: goto label_264660;
        case 0x264664u: goto label_264664;
        case 0x264668u: goto label_264668;
        case 0x26466cu: goto label_26466c;
        case 0x264670u: goto label_264670;
        case 0x264674u: goto label_264674;
        case 0x264678u: goto label_264678;
        case 0x26467cu: goto label_26467c;
        case 0x264680u: goto label_264680;
        case 0x264684u: goto label_264684;
        case 0x264688u: goto label_264688;
        case 0x26468cu: goto label_26468c;
        case 0x264690u: goto label_264690;
        case 0x264694u: goto label_264694;
        case 0x264698u: goto label_264698;
        case 0x26469cu: goto label_26469c;
        case 0x2646a0u: goto label_2646a0;
        case 0x2646a4u: goto label_2646a4;
        case 0x2646a8u: goto label_2646a8;
        case 0x2646acu: goto label_2646ac;
        case 0x2646b0u: goto label_2646b0;
        case 0x2646b4u: goto label_2646b4;
        case 0x2646b8u: goto label_2646b8;
        case 0x2646bcu: goto label_2646bc;
        case 0x2646c0u: goto label_2646c0;
        case 0x2646c4u: goto label_2646c4;
        case 0x2646c8u: goto label_2646c8;
        case 0x2646ccu: goto label_2646cc;
        case 0x2646d0u: goto label_2646d0;
        case 0x2646d4u: goto label_2646d4;
        case 0x2646d8u: goto label_2646d8;
        case 0x2646dcu: goto label_2646dc;
        case 0x2646e0u: goto label_2646e0;
        case 0x2646e4u: goto label_2646e4;
        case 0x2646e8u: goto label_2646e8;
        case 0x2646ecu: goto label_2646ec;
        case 0x2646f0u: goto label_2646f0;
        case 0x2646f4u: goto label_2646f4;
        case 0x2646f8u: goto label_2646f8;
        case 0x2646fcu: goto label_2646fc;
        case 0x264700u: goto label_264700;
        case 0x264704u: goto label_264704;
        case 0x264708u: goto label_264708;
        case 0x26470cu: goto label_26470c;
        case 0x264710u: goto label_264710;
        case 0x264714u: goto label_264714;
        case 0x264718u: goto label_264718;
        case 0x26471cu: goto label_26471c;
        case 0x264720u: goto label_264720;
        case 0x264724u: goto label_264724;
        case 0x264728u: goto label_264728;
        case 0x26472cu: goto label_26472c;
        case 0x264730u: goto label_264730;
        case 0x264734u: goto label_264734;
        default: break;
    }

    ctx->pc = 0x264460u;

label_264460:
    // 0x264460: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x264460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_264464:
    // 0x264464: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x264464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_264468:
    // 0x264468: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x264468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_26446c:
    // 0x26446c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26446cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_264470:
    // 0x264470: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x264470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_264474:
    // 0x264474: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x264474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_264478:
    // 0x264478: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x264478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_26447c:
    // 0x26447c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26447cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_264480:
    // 0x264480: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x264480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_264484:
    // 0x264484: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x264484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_264488:
    // 0x264488: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x264488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_26448c:
    // 0x26448c: 0x24150019  addiu       $s5, $zero, 0x19
    ctx->pc = 0x26448cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_264490:
    // 0x264490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_264494:
    // 0x264494: 0xc088ee6  jal         func_223B98
label_264498:
    if (ctx->pc == 0x264498u) {
        ctx->pc = 0x264498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264494u;
        // 0x264498: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26449Cu;
        goto label_26449c;
    }
    ctx->pc = 0x264494u;
    SET_GPR_U32(ctx, 31, 0x26449Cu);
    ctx->pc = 0x264498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264494u;
    // 0x264498: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x264494u, 0x26449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26449Cu;
label_26449c:
    // 0x26449c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2644a0:
    if (ctx->pc == 0x2644A0u) {
        ctx->pc = 0x2644A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26449Cu;
        // 0x2644a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2644A4u;
        goto label_2644a4;
    }
    ctx->pc = 0x26449Cu;
    {
        const bool branch_taken_0x26449c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2644A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26449Cu;
        // 0x2644a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26449c) {
            ctx->pc = 0x2644C4u;
            goto label_2644c4;
        }
    }
    ctx->pc = 0x2644A4u;
label_2644a4:
    // 0x2644a4: 0xc095018  jal         func_254060
label_2644a8:
    if (ctx->pc == 0x2644A8u) {
        ctx->pc = 0x2644A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644A4u;
        // 0x2644a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2644ACu;
        goto label_2644ac;
    }
    ctx->pc = 0x2644A4u;
    SET_GPR_U32(ctx, 31, 0x2644ACu);
    ctx->pc = 0x2644A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2644A4u;
    // 0x2644a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x2644A4u, 0x2644ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2644ACu;
label_2644ac:
    // 0x2644ac: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2644acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2644b0:
    // 0x2644b0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2644b4:
    if (ctx->pc == 0x2644B4u) {
        ctx->pc = 0x2644B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644B0u;
        // 0x2644b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2644B8u;
        goto label_2644b8;
    }
    ctx->pc = 0x2644B0u;
    {
        const bool branch_taken_0x2644b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2644B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644B0u;
        // 0x2644b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644b0) {
            ctx->pc = 0x2644C4u;
            goto label_2644c4;
        }
    }
    ctx->pc = 0x2644B8u;
label_2644b8:
    // 0x2644b8: 0xc094fca  jal         func_253F28
label_2644bc:
    if (ctx->pc == 0x2644BCu) {
        ctx->pc = 0x2644BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644B8u;
        // 0x2644bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2644C0u;
        goto label_2644c0;
    }
    ctx->pc = 0x2644B8u;
    SET_GPR_U32(ctx, 31, 0x2644C0u);
    ctx->pc = 0x2644BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2644B8u;
    // 0x2644bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x2644B8u, 0x2644C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2644C0u;
label_2644c0:
    // 0x2644c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2644c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2644c4:
    // 0x2644c4: 0x12420016  beq         $s2, $v0, . + 4 + (0x16 << 2)
label_2644c8:
    if (ctx->pc == 0x2644C8u) {
        ctx->pc = 0x2644C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644C4u;
        // 0x2644c8: 0x2e420003  sltiu       $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2644CCu;
        goto label_2644cc;
    }
    ctx->pc = 0x2644C4u;
    {
        const bool branch_taken_0x2644c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2644C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644C4u;
        // 0x2644c8: 0x2e420003  sltiu       $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644c4) {
            ctx->pc = 0x264520u;
            goto label_264520;
        }
    }
    ctx->pc = 0x2644CCu;
label_2644cc:
    // 0x2644cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2644d0:
    if (ctx->pc == 0x2644D0u) {
        ctx->pc = 0x2644D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644CCu;
        // 0x2644d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2644D4u;
        goto label_2644d4;
    }
    ctx->pc = 0x2644CCu;
    {
        const bool branch_taken_0x2644cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2644D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644CCu;
        // 0x2644d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644cc) {
            ctx->pc = 0x2644E4u;
            goto label_2644e4;
        }
    }
    ctx->pc = 0x2644D4u;
label_2644d4:
    // 0x2644d4: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
label_2644d8:
    if (ctx->pc == 0x2644D8u) {
        ctx->pc = 0x2644D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644D4u;
        // 0x2644d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2644DCu;
        goto label_2644dc;
    }
    ctx->pc = 0x2644D4u;
    {
        const bool branch_taken_0x2644d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2644D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644D4u;
        // 0x2644d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644d4) {
            ctx->pc = 0x2644F8u;
            goto label_2644f8;
        }
    }
    ctx->pc = 0x2644DCu;
label_2644dc:
    // 0x2644dc: 0x10000018  b           . + 4 + (0x18 << 2)
label_2644e0:
    if (ctx->pc == 0x2644E0u) {
        ctx->pc = 0x2644E4u;
        goto label_2644e4;
    }
    ctx->pc = 0x2644DCu;
    {
        const bool branch_taken_0x2644dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2644dc) {
            ctx->pc = 0x264540u;
            goto label_264540;
        }
    }
    ctx->pc = 0x2644E4u;
label_2644e4:
    // 0x2644e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2644e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2644e8:
    // 0x2644e8: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
label_2644ec:
    if (ctx->pc == 0x2644ECu) {
        ctx->pc = 0x2644ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644E8u;
        // 0x2644ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2644F0u;
        goto label_2644f0;
    }
    ctx->pc = 0x2644E8u;
    {
        const bool branch_taken_0x2644e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2644ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644E8u;
        // 0x2644ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644e8) {
            ctx->pc = 0x26450Cu;
            goto label_26450c;
        }
    }
    ctx->pc = 0x2644F0u;
label_2644f0:
    // 0x2644f0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2644f4:
    if (ctx->pc == 0x2644F4u) {
        ctx->pc = 0x2644F8u;
        goto label_2644f8;
    }
    ctx->pc = 0x2644F0u;
    {
        const bool branch_taken_0x2644f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2644f0) {
            ctx->pc = 0x264540u;
            goto label_264540;
        }
    }
    ctx->pc = 0x2644F8u;
label_2644f8:
    // 0x2644f8: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
label_2644fc:
    if (ctx->pc == 0x2644FCu) {
        ctx->pc = 0x2644FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644F8u;
        // 0x2644fc: 0x24050402  addiu       $a1, $zero, 0x402 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264500u;
        goto label_264500;
    }
    ctx->pc = 0x2644F8u;
    {
        const bool branch_taken_0x2644f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2644FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644F8u;
        // 0x2644fc: 0x24050402  addiu       $a1, $zero, 0x402 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644f8) {
            ctx->pc = 0x264540u;
            goto label_264540;
        }
    }
    ctx->pc = 0x264500u;
label_264500:
    // 0x264500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264504:
    // 0x264504: 0x1000000a  b           . + 4 + (0xA << 2)
label_264508:
    if (ctx->pc == 0x264508u) {
        ctx->pc = 0x26450Cu;
        goto label_26450c;
    }
    ctx->pc = 0x264504u;
    {
        const bool branch_taken_0x264504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264504) {
            ctx->pc = 0x264530u;
            goto label_264530;
        }
    }
    ctx->pc = 0x26450Cu;
label_26450c:
    // 0x26450c: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_264510:
    if (ctx->pc == 0x264510u) {
        ctx->pc = 0x264510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26450Cu;
        // 0x264510: 0x2415001b  addiu       $s5, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264514u;
        goto label_264514;
    }
    ctx->pc = 0x26450Cu;
    {
        const bool branch_taken_0x26450c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x264510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26450Cu;
        // 0x264510: 0x2415001b  addiu       $s5, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26450c) {
            ctx->pc = 0x26453Cu;
            goto label_26453c;
        }
    }
    ctx->pc = 0x264514u;
label_264514:
    // 0x264514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264518:
    // 0x264518: 0x10000005  b           . + 4 + (0x5 << 2)
label_26451c:
    if (ctx->pc == 0x26451Cu) {
        ctx->pc = 0x26451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264518u;
        // 0x26451c: 0x24050202  addiu       $a1, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264520u;
        goto label_264520;
    }
    ctx->pc = 0x264518u;
    {
        const bool branch_taken_0x264518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264518u;
        // 0x26451c: 0x24050202  addiu       $a1, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264518) {
            ctx->pc = 0x264530u;
            goto label_264530;
        }
    }
    ctx->pc = 0x264520u;
label_264520:
    // 0x264520: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_264524:
    if (ctx->pc == 0x264524u) {
        ctx->pc = 0x264524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264520u;
        // 0x264524: 0x2415001d  addiu       $s5, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264528u;
        goto label_264528;
    }
    ctx->pc = 0x264520u;
    {
        const bool branch_taken_0x264520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x264524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264520u;
        // 0x264524: 0x2415001d  addiu       $s5, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264520) {
            ctx->pc = 0x26453Cu;
            goto label_26453c;
        }
    }
    ctx->pc = 0x264528u;
label_264528:
    // 0x264528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26452c:
    // 0x26452c: 0x24050102  addiu       $a1, $zero, 0x102
    ctx->pc = 0x26452cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_264530:
    // 0x264530: 0xc09ea8e  jal         func_27AA38
label_264534:
    if (ctx->pc == 0x264534u) {
        ctx->pc = 0x264538u;
        goto label_264538;
    }
    ctx->pc = 0x264530u;
    SET_GPR_U32(ctx, 31, 0x264538u);
    ctx->pc = 0x27AA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AA38u, 0x264530u, 0x264538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264538u;
label_264538:
    // 0x264538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26453c:
    // 0x26453c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26453cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264540:
    // 0x264540: 0xc08a658  jal         func_229960
label_264544:
    if (ctx->pc == 0x264544u) {
        ctx->pc = 0x264544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264540u;
        // 0x264544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264548u;
        goto label_264548;
    }
    ctx->pc = 0x264540u;
    SET_GPR_U32(ctx, 31, 0x264548u);
    ctx->pc = 0x264544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264540u;
    // 0x264544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x264540u, 0x264548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264548u;
label_264548:
    // 0x264548: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_26454c:
    if (ctx->pc == 0x26454Cu) {
        ctx->pc = 0x26454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264548u;
        // 0x26454c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x264550u;
        goto label_264550;
    }
    ctx->pc = 0x264548u;
    {
        const bool branch_taken_0x264548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264548u;
        // 0x26454c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264548) {
            ctx->pc = 0x2645F0u;
            goto label_2645f0;
        }
    }
    ctx->pc = 0x264550u;
label_264550:
    // 0x264550: 0xc089b98  jal         func_226E60
label_264554:
    if (ctx->pc == 0x264554u) {
        ctx->pc = 0x264554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264550u;
        // 0x264554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264558u;
        goto label_264558;
    }
    ctx->pc = 0x264550u;
    SET_GPR_U32(ctx, 31, 0x264558u);
    ctx->pc = 0x264554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264550u;
    // 0x264554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x264550u, 0x264558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264558u;
label_264558:
    // 0x264558: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
label_26455c:
    if (ctx->pc == 0x26455Cu) {
        ctx->pc = 0x264560u;
        goto label_264560;
    }
    ctx->pc = 0x264558u;
    {
        const bool branch_taken_0x264558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x264558) {
            ctx->pc = 0x2645F0u;
            goto label_2645f0;
        }
    }
    ctx->pc = 0x264560u;
label_264560:
    // 0x264560: 0xc08940c  jal         func_225030
label_264564:
    if (ctx->pc == 0x264564u) {
        ctx->pc = 0x264564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264560u;
        // 0x264564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264568u;
        goto label_264568;
    }
    ctx->pc = 0x264560u;
    SET_GPR_U32(ctx, 31, 0x264568u);
    ctx->pc = 0x264564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264560u;
    // 0x264564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225030u, 0x264560u, 0x264568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264568u;
label_264568:
    // 0x264568: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_26456c:
    if (ctx->pc == 0x26456Cu) {
        ctx->pc = 0x26456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264568u;
        // 0x26456c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264570u;
        goto label_264570;
    }
    ctx->pc = 0x264568u;
    {
        const bool branch_taken_0x264568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264568u;
        // 0x26456c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264568) {
            ctx->pc = 0x2645F0u;
            goto label_2645f0;
        }
    }
    ctx->pc = 0x264570u;
label_264570:
    // 0x264570: 0xc095142  jal         func_254508
label_264574:
    if (ctx->pc == 0x264574u) {
        ctx->pc = 0x264574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264570u;
        // 0x264574: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264578u;
        goto label_264578;
    }
    ctx->pc = 0x264570u;
    SET_GPR_U32(ctx, 31, 0x264578u);
    ctx->pc = 0x264574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264570u;
    // 0x264574: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x264570u, 0x264578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264578u;
label_264578:
    // 0x264578: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x264578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26457c:
    // 0x26457c: 0x0  nop
    ctx->pc = 0x26457cu;
    // NOP
label_264580:
    // 0x264580: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_264584:
    if (ctx->pc == 0x264584u) {
        ctx->pc = 0x264584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264580u;
        // 0x264584: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264588u;
        goto label_264588;
    }
    ctx->pc = 0x264580u;
    {
        const bool branch_taken_0x264580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x264584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264580u;
        // 0x264584: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264580) {
            ctx->pc = 0x2645F8u;
            goto label_2645f8;
        }
    }
    ctx->pc = 0x264588u;
label_264588:
    // 0x264588: 0x8c4302c4  lw          $v1, 0x2C4($v0)
    ctx->pc = 0x264588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 708)));
label_26458c:
    // 0x26458c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_264590:
    if (ctx->pc == 0x264590u) {
        ctx->pc = 0x264590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26458Cu;
        // 0x264590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264594u;
        goto label_264594;
    }
    ctx->pc = 0x26458Cu;
    {
        const bool branch_taken_0x26458c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26458Cu;
        // 0x264590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26458c) {
            ctx->pc = 0x2645CCu;
            goto label_2645cc;
        }
    }
    ctx->pc = 0x264594u;
label_264594:
    // 0x264594: 0xc095358  jal         func_254D60
label_264598:
    if (ctx->pc == 0x264598u) {
        ctx->pc = 0x264598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264594u;
        // 0x264598: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26459Cu;
        goto label_26459c;
    }
    ctx->pc = 0x264594u;
    SET_GPR_U32(ctx, 31, 0x26459Cu);
    ctx->pc = 0x264598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264594u;
    // 0x264598: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D60u, 0x264594u, 0x26459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26459Cu;
label_26459c:
    // 0x26459c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x26459cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2645a0:
    // 0x2645a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2645a4:
    if (ctx->pc == 0x2645A4u) {
        ctx->pc = 0x2645A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645A0u;
        // 0x2645a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2645A8u;
        goto label_2645a8;
    }
    ctx->pc = 0x2645A0u;
    {
        const bool branch_taken_0x2645a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645A0u;
        // 0x2645a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645a0) {
            ctx->pc = 0x2645CCu;
            goto label_2645cc;
        }
    }
    ctx->pc = 0x2645A8u;
label_2645a8:
    // 0x2645a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2645a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2645ac:
    // 0x2645ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2645acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2645b0:
    // 0x2645b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2645b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2645b4:
    // 0x2645b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2645b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2645b8:
    // 0x2645b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2645b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2645bc:
    // 0x2645bc: 0xc09d59e  jal         func_275678
label_2645c0:
    if (ctx->pc == 0x2645C0u) {
        ctx->pc = 0x2645C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645BCu;
        // 0x2645c0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2645C4u;
        goto label_2645c4;
    }
    ctx->pc = 0x2645BCu;
    SET_GPR_U32(ctx, 31, 0x2645C4u);
    ctx->pc = 0x2645C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2645BCu;
    // 0x2645c0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275678u, 0x2645BCu, 0x2645C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2645C4u;
label_2645c4:
    // 0x2645c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_2645c8:
    if (ctx->pc == 0x2645C8u) {
        ctx->pc = 0x2645C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645C4u;
        // 0x2645c8: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2645CCu;
        goto label_2645cc;
    }
    ctx->pc = 0x2645C4u;
    {
        const bool branch_taken_0x2645c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645C4u;
        // 0x2645c8: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645c4) {
            ctx->pc = 0x2645FCu;
            goto label_2645fc;
        }
    }
    ctx->pc = 0x2645CCu;
label_2645cc:
    // 0x2645cc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2645ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2645d0:
    // 0x2645d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2645d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2645d4:
    // 0x2645d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2645d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2645d8:
    // 0x2645d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2645d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2645dc:
    // 0x2645dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2645dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2645e0:
    // 0x2645e0: 0xc09d872  jal         func_2761C8
label_2645e4:
    if (ctx->pc == 0x2645E4u) {
        ctx->pc = 0x2645E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645E0u;
        // 0x2645e4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2645E8u;
        goto label_2645e8;
    }
    ctx->pc = 0x2645E0u;
    SET_GPR_U32(ctx, 31, 0x2645E8u);
    ctx->pc = 0x2645E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2645E0u;
    // 0x2645e4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761C8u, 0x2645E0u, 0x2645E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2645E8u;
label_2645e8:
    // 0x2645e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2645ec:
    if (ctx->pc == 0x2645ECu) {
        ctx->pc = 0x2645ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645E8u;
        // 0x2645ec: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2645F0u;
        goto label_2645f0;
    }
    ctx->pc = 0x2645E8u;
    {
        const bool branch_taken_0x2645e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645E8u;
        // 0x2645ec: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645e8) {
            ctx->pc = 0x2645FCu;
            goto label_2645fc;
        }
    }
    ctx->pc = 0x2645F0u;
label_2645f0:
    // 0x2645f0: 0x16600047  bnez        $s3, . + 4 + (0x47 << 2)
label_2645f4:
    if (ctx->pc == 0x2645F4u) {
        ctx->pc = 0x2645F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645F0u;
        // 0x2645f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2645F8u;
        goto label_2645f8;
    }
    ctx->pc = 0x2645F0u;
    {
        const bool branch_taken_0x2645f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2645F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645F0u;
        // 0x2645f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645f0) {
            ctx->pc = 0x264710u;
            goto label_264710;
        }
    }
    ctx->pc = 0x2645F8u;
label_2645f8:
    // 0x2645f8: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2645f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2645fc:
    // 0x2645fc: 0x8e3400d8  lw          $s4, 0xD8($s1)
    ctx->pc = 0x2645fcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_264600:
    // 0x264600: 0x2610dd30  addiu       $s0, $s0, -0x22D0
    ctx->pc = 0x264600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958384));
label_264604:
    // 0x264604: 0xc041532  jal         func_1054C8
label_264608:
    if (ctx->pc == 0x264608u) {
        ctx->pc = 0x264608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264604u;
        // 0x264608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26460Cu;
        goto label_26460c;
    }
    ctx->pc = 0x264604u;
    SET_GPR_U32(ctx, 31, 0x26460Cu);
    ctx->pc = 0x264608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264604u;
    // 0x264608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x264604u, 0x26460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26460Cu;
label_26460c:
    // 0x26460c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26460cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264610:
    // 0x264610: 0xc041532  jal         func_1054C8
label_264614:
    if (ctx->pc == 0x264614u) {
        ctx->pc = 0x264614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264610u;
        // 0x264614: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264618u;
        goto label_264618;
    }
    ctx->pc = 0x264610u;
    SET_GPR_U32(ctx, 31, 0x264618u);
    ctx->pc = 0x264614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264610u;
    // 0x264614: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x264610u, 0x264618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264618u;
label_264618:
    // 0x264618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26461c:
    // 0x26461c: 0xc041532  jal         func_1054C8
label_264620:
    if (ctx->pc == 0x264620u) {
        ctx->pc = 0x264620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26461Cu;
        // 0x264620: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264624u;
        goto label_264624;
    }
    ctx->pc = 0x26461Cu;
    SET_GPR_U32(ctx, 31, 0x264624u);
    ctx->pc = 0x264620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26461Cu;
    // 0x264620: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26461Cu, 0x264624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264624u;
label_264624:
    // 0x264624: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_264628:
    if (ctx->pc == 0x264628u) {
        ctx->pc = 0x264628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264624u;
        // 0x264628: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26462Cu;
        goto label_26462c;
    }
    ctx->pc = 0x264624u;
    {
        const bool branch_taken_0x264624 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x264628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264624u;
        // 0x264628: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264624) {
            ctx->pc = 0x264650u;
            goto label_264650;
        }
    }
    ctx->pc = 0x26462Cu;
label_26462c:
    // 0x26462c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_264630:
    // 0x264630: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x264630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_264634:
    // 0x264634: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x264634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_264638:
    // 0x264638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x264638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26463c:
    // 0x26463c: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26463cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_264640:
    // 0x264640: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x264640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264644:
    // 0x264644: 0xc04159e  jal         func_105678
label_264648:
    if (ctx->pc == 0x264648u) {
        ctx->pc = 0x264648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264644u;
        // 0x264648: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26464Cu;
        goto label_26464c;
    }
    ctx->pc = 0x264644u;
    SET_GPR_U32(ctx, 31, 0x26464Cu);
    ctx->pc = 0x264648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264644u;
    // 0x264648: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x264644u, 0x26464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26464Cu;
label_26464c:
    // 0x26464c: 0x0  nop
    ctx->pc = 0x26464cu;
    // NOP
label_264650:
    // 0x264650: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x264650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_264654:
    // 0x264654: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x264654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_264658:
    // 0x264658: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_26465c:
    if (ctx->pc == 0x26465Cu) {
        ctx->pc = 0x26465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264658u;
        // 0x26465c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264660u;
        goto label_264660;
    }
    ctx->pc = 0x264658u;
    {
        const bool branch_taken_0x264658 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264658u;
        // 0x26465c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264658) {
            ctx->pc = 0x2646A0u;
            goto label_2646a0;
        }
    }
    ctx->pc = 0x264660u;
label_264660:
    // 0x264660: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x264660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_264664:
    // 0x264664: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x264664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_264668:
    // 0x264668: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x264668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26466c:
    // 0x26466c: 0x40f809  jalr        $v0
label_264670:
    if (ctx->pc == 0x264670u) {
        ctx->pc = 0x264670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26466Cu;
        // 0x264670: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264674u;
        goto label_264674;
    }
    ctx->pc = 0x26466Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x264674u);
        ctx->pc = 0x264670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26466Cu;
        // 0x264670: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26466Cu, 0x264674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264674u;
label_264674:
    // 0x264674: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x264674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_264678:
    // 0x264678: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x264678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26467c:
    // 0x26467c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26467cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_264680:
    // 0x264680: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x264680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_264684:
    // 0x264684: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x264684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_264688:
    // 0x264688: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x264688u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26468c:
    // 0x26468c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26468cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_264690:
    // 0x264690: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x264690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_264694:
    // 0x264694: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x264694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_264698:
    // 0x264698: 0xc041664  jal         func_105990
label_26469c:
    if (ctx->pc == 0x26469Cu) {
        ctx->pc = 0x26469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264698u;
        // 0x26469c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2646A0u;
        goto label_2646a0;
    }
    ctx->pc = 0x264698u;
    SET_GPR_U32(ctx, 31, 0x2646A0u);
    ctx->pc = 0x26469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264698u;
    // 0x26469c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x264698u, 0x2646A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2646A0u;
label_2646a0:
    // 0x2646a0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2646a4:
    if (ctx->pc == 0x2646A4u) {
        ctx->pc = 0x2646A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646A0u;
        // 0x2646a4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2646A8u;
        goto label_2646a8;
    }
    ctx->pc = 0x2646A0u;
    {
        const bool branch_taken_0x2646a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2646A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646A0u;
        // 0x2646a4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646a0) {
            ctx->pc = 0x2646C0u;
            goto label_2646c0;
        }
    }
    ctx->pc = 0x2646A8u;
label_2646a8:
    // 0x2646a8: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x2646a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2646ac:
    // 0x2646ac: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2646acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2646b0:
    // 0x2646b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2646b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2646b4:
    // 0x2646b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2646b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2646b8:
    // 0x2646b8: 0xc041b20  jal         func_106C80
label_2646bc:
    if (ctx->pc == 0x2646BCu) {
        ctx->pc = 0x2646BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646B8u;
        // 0x2646bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2646C0u;
        goto label_2646c0;
    }
    ctx->pc = 0x2646B8u;
    SET_GPR_U32(ctx, 31, 0x2646C0u);
    ctx->pc = 0x2646BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2646B8u;
    // 0x2646bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2646B8u, 0x2646C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2646C0u;
label_2646c0:
    // 0x2646c0: 0xc05d484  jal         func_175210
label_2646c4:
    if (ctx->pc == 0x2646C4u) {
        ctx->pc = 0x2646C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646C0u;
        // 0x2646c4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2646C8u;
        goto label_2646c8;
    }
    ctx->pc = 0x2646C0u;
    SET_GPR_U32(ctx, 31, 0x2646C8u);
    ctx->pc = 0x2646C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2646C0u;
    // 0x2646c4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2646C0u, 0x2646C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2646C8u;
label_2646c8:
    // 0x2646c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2646c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2646cc:
    // 0x2646cc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2646ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2646d0:
    // 0x2646d0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2646d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2646d4:
    // 0x2646d4: 0xa0f809  jalr        $a1
label_2646d8:
    if (ctx->pc == 0x2646D8u) {
        ctx->pc = 0x2646D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646D4u;
        // 0x2646d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2646DCu;
        goto label_2646dc;
    }
    ctx->pc = 0x2646D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2646DCu);
        ctx->pc = 0x2646D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646D4u;
        // 0x2646d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2646D4u, 0x2646DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2646DCu;
label_2646dc:
    // 0x2646dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2646dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2646e0:
    // 0x2646e0: 0xc087016  jal         func_21C058
label_2646e4:
    if (ctx->pc == 0x2646E4u) {
        ctx->pc = 0x2646E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646E0u;
        // 0x2646e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2646E8u;
        goto label_2646e8;
    }
    ctx->pc = 0x2646E0u;
    SET_GPR_U32(ctx, 31, 0x2646E8u);
    ctx->pc = 0x2646E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2646E0u;
    // 0x2646e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2646E0u, 0x2646E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2646E8u;
label_2646e8:
    // 0x2646e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2646e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2646ec:
    // 0x2646ec: 0xc089990  jal         func_226640
label_2646f0:
    if (ctx->pc == 0x2646F0u) {
        ctx->pc = 0x2646F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646ECu;
        // 0x2646f0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2646F4u;
        goto label_2646f4;
    }
    ctx->pc = 0x2646ECu;
    SET_GPR_U32(ctx, 31, 0x2646F4u);
    ctx->pc = 0x2646F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2646ECu;
    // 0x2646f0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2646ECu, 0x2646F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2646F4u;
label_2646f4:
    // 0x2646f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2646f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2646f8:
    // 0x2646f8: 0xc05d4f6  jal         func_1753D8
label_2646fc:
    if (ctx->pc == 0x2646FCu) {
        ctx->pc = 0x2646FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646F8u;
        // 0x2646fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264700u;
        goto label_264700;
    }
    ctx->pc = 0x2646F8u;
    SET_GPR_U32(ctx, 31, 0x264700u);
    ctx->pc = 0x2646FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2646F8u;
    // 0x2646fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2646F8u, 0x264700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264700u;
label_264700:
    // 0x264700: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x264700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_264704:
    // 0x264704: 0xc05d53a  jal         func_1754E8
label_264708:
    if (ctx->pc == 0x264708u) {
        ctx->pc = 0x264708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264704u;
        // 0x264708: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26470Cu;
        goto label_26470c;
    }
    ctx->pc = 0x264704u;
    SET_GPR_U32(ctx, 31, 0x26470Cu);
    ctx->pc = 0x264708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264704u;
    // 0x264708: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x264704u, 0x26470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26470Cu;
label_26470c:
    // 0x26470c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_264710:
    // 0x264710: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x264710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_264714:
    // 0x264714: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x264714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_264718:
    // 0x264718: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x264718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26471c:
    // 0x26471c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26471cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_264720:
    // 0x264720: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x264720u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_264724:
    // 0x264724: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x264724u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_264728:
    // 0x264728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26472c:
    // 0x26472c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x26472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_264730:
    // 0x264730: 0x3e00008  jr          $ra
label_264734:
    if (ctx->pc == 0x264734u) {
        ctx->pc = 0x264734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264730u;
        // 0x264734: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264738u;
        goto label_fallthrough_0x264730;
    }
    ctx->pc = 0x264730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264730u;
        // 0x264734: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x264730:
    ctx->pc = 0x264738u;
}
