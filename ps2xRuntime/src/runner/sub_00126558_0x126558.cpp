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

// Function: sub_00126558
// Address: 0x126558 - 0x126878
void sub_00126558_0x126558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126558_0x126558");
#endif

    switch (ctx->pc) {
        case 0x126558u: goto label_126558;
        case 0x12655cu: goto label_12655c;
        case 0x126560u: goto label_126560;
        case 0x126564u: goto label_126564;
        case 0x126568u: goto label_126568;
        case 0x12656cu: goto label_12656c;
        case 0x126570u: goto label_126570;
        case 0x126574u: goto label_126574;
        case 0x126578u: goto label_126578;
        case 0x12657cu: goto label_12657c;
        case 0x126580u: goto label_126580;
        case 0x126584u: goto label_126584;
        case 0x126588u: goto label_126588;
        case 0x12658cu: goto label_12658c;
        case 0x126590u: goto label_126590;
        case 0x126594u: goto label_126594;
        case 0x126598u: goto label_126598;
        case 0x12659cu: goto label_12659c;
        case 0x1265a0u: goto label_1265a0;
        case 0x1265a4u: goto label_1265a4;
        case 0x1265a8u: goto label_1265a8;
        case 0x1265acu: goto label_1265ac;
        case 0x1265b0u: goto label_1265b0;
        case 0x1265b4u: goto label_1265b4;
        case 0x1265b8u: goto label_1265b8;
        case 0x1265bcu: goto label_1265bc;
        case 0x1265c0u: goto label_1265c0;
        case 0x1265c4u: goto label_1265c4;
        case 0x1265c8u: goto label_1265c8;
        case 0x1265ccu: goto label_1265cc;
        case 0x1265d0u: goto label_1265d0;
        case 0x1265d4u: goto label_1265d4;
        case 0x1265d8u: goto label_1265d8;
        case 0x1265dcu: goto label_1265dc;
        case 0x1265e0u: goto label_1265e0;
        case 0x1265e4u: goto label_1265e4;
        case 0x1265e8u: goto label_1265e8;
        case 0x1265ecu: goto label_1265ec;
        case 0x1265f0u: goto label_1265f0;
        case 0x1265f4u: goto label_1265f4;
        case 0x1265f8u: goto label_1265f8;
        case 0x1265fcu: goto label_1265fc;
        case 0x126600u: goto label_126600;
        case 0x126604u: goto label_126604;
        case 0x126608u: goto label_126608;
        case 0x12660cu: goto label_12660c;
        case 0x126610u: goto label_126610;
        case 0x126614u: goto label_126614;
        case 0x126618u: goto label_126618;
        case 0x12661cu: goto label_12661c;
        case 0x126620u: goto label_126620;
        case 0x126624u: goto label_126624;
        case 0x126628u: goto label_126628;
        case 0x12662cu: goto label_12662c;
        case 0x126630u: goto label_126630;
        case 0x126634u: goto label_126634;
        case 0x126638u: goto label_126638;
        case 0x12663cu: goto label_12663c;
        case 0x126640u: goto label_126640;
        case 0x126644u: goto label_126644;
        case 0x126648u: goto label_126648;
        case 0x12664cu: goto label_12664c;
        case 0x126650u: goto label_126650;
        case 0x126654u: goto label_126654;
        case 0x126658u: goto label_126658;
        case 0x12665cu: goto label_12665c;
        case 0x126660u: goto label_126660;
        case 0x126664u: goto label_126664;
        case 0x126668u: goto label_126668;
        case 0x12666cu: goto label_12666c;
        case 0x126670u: goto label_126670;
        case 0x126674u: goto label_126674;
        case 0x126678u: goto label_126678;
        case 0x12667cu: goto label_12667c;
        case 0x126680u: goto label_126680;
        case 0x126684u: goto label_126684;
        case 0x126688u: goto label_126688;
        case 0x12668cu: goto label_12668c;
        case 0x126690u: goto label_126690;
        case 0x126694u: goto label_126694;
        case 0x126698u: goto label_126698;
        case 0x12669cu: goto label_12669c;
        case 0x1266a0u: goto label_1266a0;
        case 0x1266a4u: goto label_1266a4;
        case 0x1266a8u: goto label_1266a8;
        case 0x1266acu: goto label_1266ac;
        case 0x1266b0u: goto label_1266b0;
        case 0x1266b4u: goto label_1266b4;
        case 0x1266b8u: goto label_1266b8;
        case 0x1266bcu: goto label_1266bc;
        case 0x1266c0u: goto label_1266c0;
        case 0x1266c4u: goto label_1266c4;
        case 0x1266c8u: goto label_1266c8;
        case 0x1266ccu: goto label_1266cc;
        case 0x1266d0u: goto label_1266d0;
        case 0x1266d4u: goto label_1266d4;
        case 0x1266d8u: goto label_1266d8;
        case 0x1266dcu: goto label_1266dc;
        case 0x1266e0u: goto label_1266e0;
        case 0x1266e4u: goto label_1266e4;
        case 0x1266e8u: goto label_1266e8;
        case 0x1266ecu: goto label_1266ec;
        case 0x1266f0u: goto label_1266f0;
        case 0x1266f4u: goto label_1266f4;
        case 0x1266f8u: goto label_1266f8;
        case 0x1266fcu: goto label_1266fc;
        case 0x126700u: goto label_126700;
        case 0x126704u: goto label_126704;
        case 0x126708u: goto label_126708;
        case 0x12670cu: goto label_12670c;
        case 0x126710u: goto label_126710;
        case 0x126714u: goto label_126714;
        case 0x126718u: goto label_126718;
        case 0x12671cu: goto label_12671c;
        case 0x126720u: goto label_126720;
        case 0x126724u: goto label_126724;
        case 0x126728u: goto label_126728;
        case 0x12672cu: goto label_12672c;
        case 0x126730u: goto label_126730;
        case 0x126734u: goto label_126734;
        case 0x126738u: goto label_126738;
        case 0x12673cu: goto label_12673c;
        case 0x126740u: goto label_126740;
        case 0x126744u: goto label_126744;
        case 0x126748u: goto label_126748;
        case 0x12674cu: goto label_12674c;
        case 0x126750u: goto label_126750;
        case 0x126754u: goto label_126754;
        case 0x126758u: goto label_126758;
        case 0x12675cu: goto label_12675c;
        case 0x126760u: goto label_126760;
        case 0x126764u: goto label_126764;
        case 0x126768u: goto label_126768;
        case 0x12676cu: goto label_12676c;
        case 0x126770u: goto label_126770;
        case 0x126774u: goto label_126774;
        case 0x126778u: goto label_126778;
        case 0x12677cu: goto label_12677c;
        case 0x126780u: goto label_126780;
        case 0x126784u: goto label_126784;
        case 0x126788u: goto label_126788;
        case 0x12678cu: goto label_12678c;
        case 0x126790u: goto label_126790;
        case 0x126794u: goto label_126794;
        case 0x126798u: goto label_126798;
        case 0x12679cu: goto label_12679c;
        case 0x1267a0u: goto label_1267a0;
        case 0x1267a4u: goto label_1267a4;
        case 0x1267a8u: goto label_1267a8;
        case 0x1267acu: goto label_1267ac;
        case 0x1267b0u: goto label_1267b0;
        case 0x1267b4u: goto label_1267b4;
        case 0x1267b8u: goto label_1267b8;
        case 0x1267bcu: goto label_1267bc;
        case 0x1267c0u: goto label_1267c0;
        case 0x1267c4u: goto label_1267c4;
        case 0x1267c8u: goto label_1267c8;
        case 0x1267ccu: goto label_1267cc;
        case 0x1267d0u: goto label_1267d0;
        case 0x1267d4u: goto label_1267d4;
        case 0x1267d8u: goto label_1267d8;
        case 0x1267dcu: goto label_1267dc;
        case 0x1267e0u: goto label_1267e0;
        case 0x1267e4u: goto label_1267e4;
        case 0x1267e8u: goto label_1267e8;
        case 0x1267ecu: goto label_1267ec;
        case 0x1267f0u: goto label_1267f0;
        case 0x1267f4u: goto label_1267f4;
        case 0x1267f8u: goto label_1267f8;
        case 0x1267fcu: goto label_1267fc;
        case 0x126800u: goto label_126800;
        case 0x126804u: goto label_126804;
        case 0x126808u: goto label_126808;
        case 0x12680cu: goto label_12680c;
        case 0x126810u: goto label_126810;
        case 0x126814u: goto label_126814;
        case 0x126818u: goto label_126818;
        case 0x12681cu: goto label_12681c;
        case 0x126820u: goto label_126820;
        case 0x126824u: goto label_126824;
        case 0x126828u: goto label_126828;
        case 0x12682cu: goto label_12682c;
        case 0x126830u: goto label_126830;
        case 0x126834u: goto label_126834;
        case 0x126838u: goto label_126838;
        case 0x12683cu: goto label_12683c;
        case 0x126840u: goto label_126840;
        case 0x126844u: goto label_126844;
        case 0x126848u: goto label_126848;
        case 0x12684cu: goto label_12684c;
        case 0x126850u: goto label_126850;
        case 0x126854u: goto label_126854;
        case 0x126858u: goto label_126858;
        case 0x12685cu: goto label_12685c;
        case 0x126860u: goto label_126860;
        case 0x126864u: goto label_126864;
        case 0x126868u: goto label_126868;
        case 0x12686cu: goto label_12686c;
        case 0x126870u: goto label_126870;
        case 0x126874u: goto label_126874;
        default: break;
    }

    ctx->pc = 0x126558u;

label_126558:
    // 0x126558: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x126558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_12655c:
    // 0x12655c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x12655cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_126560:
    // 0x126560: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x126560u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_126564:
    // 0x126564: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x126564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_126568:
    // 0x126568: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x126568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_12656c:
    // 0x12656c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12656cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126570:
    // 0x126570: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x126570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_126574:
    // 0x126574: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x126574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_126578:
    // 0x126578: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x126578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_12657c:
    // 0x12657c: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x12657cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_126580:
    // 0x126580: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x126580u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_126584:
    // 0x126584: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x126584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_126588:
    // 0x126588: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x126588u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_12658c:
    // 0x12658c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x12658cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_126590:
    // 0x126590: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_126594:
    if (ctx->pc == 0x126594u) {
        ctx->pc = 0x126594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126590u;
        // 0x126594: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126598u;
        goto label_126598;
    }
    ctx->pc = 0x126590u;
    {
        const bool branch_taken_0x126590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126590u;
        // 0x126594: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126590) {
            ctx->pc = 0x12684Cu;
            goto label_12684c;
        }
    }
    ctx->pc = 0x126598u;
label_126598:
    // 0x126598: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x126598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12659c:
    // 0x12659c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x12659cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1265a0:
    // 0x1265a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1265a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1265a4:
    // 0x1265a4: 0x40f809  jalr        $v0
label_1265a8:
    if (ctx->pc == 0x1265A8u) {
        ctx->pc = 0x1265A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265A4u;
        // 0x1265a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265ACu;
        goto label_1265ac;
    }
    ctx->pc = 0x1265A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1265ACu);
        ctx->pc = 0x1265A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265A4u;
        // 0x1265a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1265A4u, 0x1265ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1265ACu;
label_1265ac:
    // 0x1265ac: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x1265acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_1265b0:
    // 0x1265b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1265b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1265b4:
    // 0x1265b4: 0xc0e409a  jal         func_390268
label_1265b8:
    if (ctx->pc == 0x1265B8u) {
        ctx->pc = 0x1265B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265B4u;
        // 0x1265b8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265BCu;
        goto label_1265bc;
    }
    ctx->pc = 0x1265B4u;
    SET_GPR_U32(ctx, 31, 0x1265BCu);
    ctx->pc = 0x1265B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1265B4u;
    // 0x1265b8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1265B4u, 0x1265BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265BCu;
label_1265bc:
    // 0x1265bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1265bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1265c0:
    // 0x1265c0: 0x524000a3  beql        $s2, $zero, . + 4 + (0xA3 << 2)
label_1265c4:
    if (ctx->pc == 0x1265C4u) {
        ctx->pc = 0x1265C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265C0u;
        // 0x1265c4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265C8u;
        goto label_1265c8;
    }
    ctx->pc = 0x1265C0u;
    {
        const bool branch_taken_0x1265c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1265c0) {
            ctx->pc = 0x1265C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1265C0u;
            // 0x1265c4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126850u;
            goto label_126850;
        }
    }
    ctx->pc = 0x1265C8u;
label_1265c8:
    // 0x1265c8: 0x122000a0  beqz        $s1, . + 4 + (0xA0 << 2)
label_1265cc:
    if (ctx->pc == 0x1265CCu) {
        ctx->pc = 0x1265CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265C8u;
        // 0x1265cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265D0u;
        goto label_1265d0;
    }
    ctx->pc = 0x1265C8u;
    {
        const bool branch_taken_0x1265c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1265CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265C8u;
        // 0x1265cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265c8) {
            ctx->pc = 0x12684Cu;
            goto label_12684c;
        }
    }
    ctx->pc = 0x1265D0u;
label_1265d0:
    // 0x1265d0: 0xc047e6c  jal         func_11F9B0
label_1265d4:
    if (ctx->pc == 0x1265D4u) {
        ctx->pc = 0x1265D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265D0u;
        // 0x1265d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265D8u;
        goto label_1265d8;
    }
    ctx->pc = 0x1265D0u;
    SET_GPR_U32(ctx, 31, 0x1265D8u);
    ctx->pc = 0x1265D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1265D0u;
    // 0x1265d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1265D0u, 0x1265D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265D8u;
label_1265d8:
    // 0x1265d8: 0x50500005  beql        $v0, $s0, . + 4 + (0x5 << 2)
label_1265dc:
    if (ctx->pc == 0x1265DCu) {
        ctx->pc = 0x1265DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265D8u;
        // 0x1265dc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265E0u;
        goto label_1265e0;
    }
    ctx->pc = 0x1265D8u;
    {
        const bool branch_taken_0x1265d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1265d8) {
            ctx->pc = 0x1265DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1265D8u;
            // 0x1265dc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1265F0u;
            goto label_1265f0;
        }
    }
    ctx->pc = 0x1265E0u;
label_1265e0:
    // 0x1265e0: 0xc047e6c  jal         func_11F9B0
label_1265e4:
    if (ctx->pc == 0x1265E4u) {
        ctx->pc = 0x1265E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265E0u;
        // 0x1265e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265E8u;
        goto label_1265e8;
    }
    ctx->pc = 0x1265E0u;
    SET_GPR_U32(ctx, 31, 0x1265E8u);
    ctx->pc = 0x1265E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1265E0u;
    // 0x1265e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1265E0u, 0x1265E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265E8u;
label_1265e8:
    // 0x1265e8: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
label_1265ec:
    if (ctx->pc == 0x1265ECu) {
        ctx->pc = 0x1265ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265E8u;
        // 0x1265ec: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265F0u;
        goto label_1265f0;
    }
    ctx->pc = 0x1265E8u;
    {
        const bool branch_taken_0x1265e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1265e8) {
            ctx->pc = 0x1265ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1265E8u;
            // 0x1265ec: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1265F0u;
            goto label_1265f0;
        }
    }
    ctx->pc = 0x1265F0u;
label_1265f0:
    // 0x1265f0: 0x52800097  beql        $s4, $zero, . + 4 + (0x97 << 2)
label_1265f4:
    if (ctx->pc == 0x1265F4u) {
        ctx->pc = 0x1265F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265F0u;
        // 0x1265f4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265F8u;
        goto label_1265f8;
    }
    ctx->pc = 0x1265F0u;
    {
        const bool branch_taken_0x1265f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1265f0) {
            ctx->pc = 0x1265F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1265F0u;
            // 0x1265f4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126850u;
            goto label_126850;
        }
    }
    ctx->pc = 0x1265F8u;
label_1265f8:
    // 0x1265f8: 0x92020465  lbu         $v0, 0x465($s0)
    ctx->pc = 0x1265f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1125)));
label_1265fc:
    // 0x1265fc: 0x54400094  bnel        $v0, $zero, . + 4 + (0x94 << 2)
label_126600:
    if (ctx->pc == 0x126600u) {
        ctx->pc = 0x126600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265FCu;
        // 0x126600: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126604u;
        goto label_126604;
    }
    ctx->pc = 0x1265FCu;
    {
        const bool branch_taken_0x1265fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1265fc) {
            ctx->pc = 0x126600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1265FCu;
            // 0x126600: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126850u;
            goto label_126850;
        }
    }
    ctx->pc = 0x126604u;
label_126604:
    // 0x126604: 0xc048892  jal         func_122248
label_126608:
    if (ctx->pc == 0x126608u) {
        ctx->pc = 0x126608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126604u;
        // 0x126608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12660Cu;
        goto label_12660c;
    }
    ctx->pc = 0x126604u;
    SET_GPR_U32(ctx, 31, 0x12660Cu);
    ctx->pc = 0x126608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126604u;
    // 0x126608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x126604u, 0x12660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12660Cu;
label_12660c:
    // 0x12660c: 0x54400090  bnel        $v0, $zero, . + 4 + (0x90 << 2)
label_126610:
    if (ctx->pc == 0x126610u) {
        ctx->pc = 0x126610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12660Cu;
        // 0x126610: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126614u;
        goto label_126614;
    }
    ctx->pc = 0x12660Cu;
    {
        const bool branch_taken_0x12660c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12660c) {
            ctx->pc = 0x126610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12660Cu;
            // 0x126610: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126850u;
            goto label_126850;
        }
    }
    ctx->pc = 0x126614u;
label_126614:
    // 0x126614: 0xc048892  jal         func_122248
label_126618:
    if (ctx->pc == 0x126618u) {
        ctx->pc = 0x126618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126614u;
        // 0x126618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12661Cu;
        goto label_12661c;
    }
    ctx->pc = 0x126614u;
    SET_GPR_U32(ctx, 31, 0x12661Cu);
    ctx->pc = 0x126618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126614u;
    // 0x126618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x126614u, 0x12661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12661Cu;
label_12661c:
    // 0x12661c: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_126620:
    if (ctx->pc == 0x126620u) {
        ctx->pc = 0x126620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12661Cu;
        // 0x126620: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126624u;
        goto label_126624;
    }
    ctx->pc = 0x12661Cu;
    {
        const bool branch_taken_0x12661c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12661Cu;
        // 0x126620: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12661c) {
            ctx->pc = 0x12684Cu;
            goto label_12684c;
        }
    }
    ctx->pc = 0x126624u;
label_126624:
    // 0x126624: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x126624u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_126628:
    // 0x126628: 0x86260092  lh          $a2, 0x92($s1)
    ctx->pc = 0x126628u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_12662c:
    // 0x12662c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x12662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_126630:
    // 0x126630: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x126630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_126634:
    // 0x126634: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x126634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_126638:
    // 0x126638: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x126638u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_12663c:
    // 0x12663c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x12663cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_126640:
    // 0x126640: 0xc136afa  jal         func_4DABE8
label_126644:
    if (ctx->pc == 0x126644u) {
        ctx->pc = 0x126644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126640u;
        // 0x126644: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126648u;
        goto label_126648;
    }
    ctx->pc = 0x126640u;
    SET_GPR_U32(ctx, 31, 0x126648u);
    ctx->pc = 0x126644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126640u;
    // 0x126644: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x126640u, 0x126648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126648u;
label_126648:
    // 0x126648: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x126648u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12664c:
    // 0x12664c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12664cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_126650:
    // 0x126650: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x126650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126654:
    // 0x126654: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x126654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126658:
    // 0x126658: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x126658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12665c:
    // 0x12665c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12665cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_126660:
    // 0x126660: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x126660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
label_126664:
    // 0x126664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126668:
    // 0x126668: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x126668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12666c:
    // 0x12666c: 0x0  nop
    ctx->pc = 0x12666cu;
    // NOP
label_126670:
    // 0x126670: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x126670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126674:
    // 0x126674: 0x0  nop
    ctx->pc = 0x126674u;
    // NOP
label_126678:
    // 0x126678: 0x45010074  bc1t        . + 4 + (0x74 << 2)
label_12667c:
    if (ctx->pc == 0x12667Cu) {
        ctx->pc = 0x12667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126678u;
        // 0x12667c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126680u;
        goto label_126680;
    }
    ctx->pc = 0x126678u;
    {
        const bool branch_taken_0x126678 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126678u;
        // 0x12667c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126678) {
            ctx->pc = 0x12684Cu;
            goto label_12684c;
        }
    }
    ctx->pc = 0x126680u;
label_126680:
    // 0x126680: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x126680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_126684:
    // 0x126684: 0xc103840  jal         func_40E100
label_126688:
    if (ctx->pc == 0x126688u) {
        ctx->pc = 0x126688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126684u;
        // 0x126688: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12668Cu;
        goto label_12668c;
    }
    ctx->pc = 0x126684u;
    SET_GPR_U32(ctx, 31, 0x12668Cu);
    ctx->pc = 0x126688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126684u;
    // 0x126688: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E100u, 0x126684u, 0x12668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12668Cu;
label_12668c:
    // 0x12668c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x12668cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_126690:
    // 0x126690: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x126690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_126694:
    // 0x126694: 0x0  nop
    ctx->pc = 0x126694u;
    // NOP
label_126698:
    // 0x126698: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x126698u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_12669c:
    // 0x12669c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12669cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1266a0:
    // 0x1266a0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1266a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1266a4:
    // 0x1266a4: 0x0  nop
    ctx->pc = 0x1266a4u;
    // NOP
label_1266a8:
    // 0x1266a8: 0x45020062  bc1fl       . + 4 + (0x62 << 2)
label_1266ac:
    if (ctx->pc == 0x1266ACu) {
        ctx->pc = 0x1266ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266A8u;
        // 0x1266ac: 0x8e020320  lw          $v0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1266B0u;
        goto label_1266b0;
    }
    ctx->pc = 0x1266A8u;
    {
        const bool branch_taken_0x1266a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1266a8) {
            ctx->pc = 0x1266ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1266A8u;
            // 0x1266ac: 0x8e020320  lw          $v0, 0x320($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126834u;
            goto label_126834;
        }
    }
    ctx->pc = 0x1266B0u;
label_1266b0:
    // 0x1266b0: 0xc048892  jal         func_122248
label_1266b4:
    if (ctx->pc == 0x1266B4u) {
        ctx->pc = 0x1266B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266B0u;
        // 0x1266b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1266B8u;
        goto label_1266b8;
    }
    ctx->pc = 0x1266B0u;
    SET_GPR_U32(ctx, 31, 0x1266B8u);
    ctx->pc = 0x1266B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1266B0u;
    // 0x1266b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x1266B0u, 0x1266B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1266B8u;
label_1266b8:
    // 0x1266b8: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
label_1266bc:
    if (ctx->pc == 0x1266BCu) {
        ctx->pc = 0x1266BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266B8u;
        // 0x1266bc: 0x8e020320  lw          $v0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1266C0u;
        goto label_1266c0;
    }
    ctx->pc = 0x1266B8u;
    {
        const bool branch_taken_0x1266b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1266BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266B8u;
        // 0x1266bc: 0x8e020320  lw          $v0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266b8) {
            ctx->pc = 0x126834u;
            goto label_126834;
        }
    }
    ctx->pc = 0x1266C0u;
label_1266c0:
    // 0x1266c0: 0x14530008  bne         $v0, $s3, . + 4 + (0x8 << 2)
label_1266c4:
    if (ctx->pc == 0x1266C4u) {
        ctx->pc = 0x1266C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266C0u;
        // 0x1266c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1266C8u;
        goto label_1266c8;
    }
    ctx->pc = 0x1266C0u;
    {
        const bool branch_taken_0x1266c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1266C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266C0u;
        // 0x1266c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266c0) {
            ctx->pc = 0x1266E4u;
            goto label_1266e4;
        }
    }
    ctx->pc = 0x1266C8u;
label_1266c8:
    // 0x1266c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1266c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1266cc:
    // 0x1266cc: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x1266ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_1266d0:
    // 0x1266d0: 0xae040320  sw          $a0, 0x320($s0)
    ctx->pc = 0x1266d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 4));
label_1266d4:
    // 0x1266d4: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x1266d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_1266d8:
    // 0x1266d8: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
label_1266dc:
    if (ctx->pc == 0x1266DCu) {
        ctx->pc = 0x1266DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266D8u;
        // 0x1266dc: 0xae0003fc  sw          $zero, 0x3FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1266E0u;
        goto label_1266e0;
    }
    ctx->pc = 0x1266D8u;
    {
        const bool branch_taken_0x1266d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1266d8) {
            ctx->pc = 0x1266DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1266D8u;
            // 0x1266dc: 0xae0003fc  sw          $zero, 0x3FC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1266E0u;
            goto label_1266e0;
        }
    }
    ctx->pc = 0x1266E0u;
label_1266e0:
    // 0x1266e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1266e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1266e4:
    // 0x1266e4: 0xc04890e  jal         func_122438
label_1266e8:
    if (ctx->pc == 0x1266E8u) {
        ctx->pc = 0x1266E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266E4u;
        // 0x1266e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1266ECu;
        goto label_1266ec;
    }
    ctx->pc = 0x1266E4u;
    SET_GPR_U32(ctx, 31, 0x1266ECu);
    ctx->pc = 0x1266E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1266E4u;
    // 0x1266e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122438u, 0x1266E4u, 0x1266ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1266ECu;
label_1266ec:
    // 0x1266ec: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1266ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1266f0:
    // 0x1266f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1266f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1266f4:
    // 0x1266f4: 0xc0488ac  jal         func_1222B0
label_1266f8:
    if (ctx->pc == 0x1266F8u) {
        ctx->pc = 0x1266F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266F4u;
        // 0x1266f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1266FCu;
        goto label_1266fc;
    }
    ctx->pc = 0x1266F4u;
    SET_GPR_U32(ctx, 31, 0x1266FCu);
    ctx->pc = 0x1266F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1266F4u;
    // 0x1266f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x1266F4u, 0x1266FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1266FCu;
label_1266fc:
    // 0x1266fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1266fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126700:
    // 0x126700: 0xc049f52  jal         func_127D48
label_126704:
    if (ctx->pc == 0x126704u) {
        ctx->pc = 0x126704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126700u;
        // 0x126704: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126708u;
        goto label_126708;
    }
    ctx->pc = 0x126700u;
    SET_GPR_U32(ctx, 31, 0x126708u);
    ctx->pc = 0x126704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126700u;
    // 0x126704: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D48u, 0x126700u, 0x126708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126708u;
label_126708:
    // 0x126708: 0x7a020180  lq          $v0, 0x180($s0)
    ctx->pc = 0x126708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 384)));
label_12670c:
    // 0x12670c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12670cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126710:
    // 0x126710: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x126710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_126714:
    // 0x126714: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x126714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_126718:
    // 0x126718: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x126718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12671c:
    // 0x12671c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x12671cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_126720:
    // 0x126720: 0x7e020240  sq          $v0, 0x240($s0)
    ctx->pc = 0x126720u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 576), GPR_VEC(ctx, 2));
label_126724:
    // 0x126724: 0xc0493ce  jal         func_124F38
label_126728:
    if (ctx->pc == 0x126728u) {
        ctx->pc = 0x126728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126724u;
        // 0x126728: 0x7e020270  sq          $v0, 0x270($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 624), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12672Cu;
        goto label_12672c;
    }
    ctx->pc = 0x126724u;
    SET_GPR_U32(ctx, 31, 0x12672Cu);
    ctx->pc = 0x126728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126724u;
    // 0x126728: 0x7e020270  sq          $v0, 0x270($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 624), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F38u, 0x126724u, 0x12672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12672Cu;
label_12672c:
    // 0x12672c: 0xc60003d8  lwc1        $f0, 0x3D8($s0)
    ctx->pc = 0x12672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_126730:
    // 0x126730: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x126730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126734:
    // 0x126734: 0x0  nop
    ctx->pc = 0x126734u;
    // NOP
label_126738:
    // 0x126738: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_12673c:
    if (ctx->pc == 0x12673Cu) {
        ctx->pc = 0x12673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126738u;
        // 0x12673c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126740u;
        goto label_126740;
    }
    ctx->pc = 0x126738u;
    {
        const bool branch_taken_0x126738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126738u;
        // 0x12673c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126738) {
            ctx->pc = 0x126748u;
            goto label_126748;
        }
    }
    ctx->pc = 0x126740u;
label_126740:
    // 0x126740: 0xc6000394  lwc1        $f0, 0x394($s0)
    ctx->pc = 0x126740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_126744:
    // 0x126744: 0xe60003d8  swc1        $f0, 0x3D8($s0)
    ctx->pc = 0x126744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 984), bits); }
label_126748:
    // 0x126748: 0xc60103d0  lwc1        $f1, 0x3D0($s0)
    ctx->pc = 0x126748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12674c:
    // 0x12674c: 0xc4408aa4  lwc1        $f0, -0x755C($v0)
    ctx->pc = 0x12674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_126750:
    // 0x126750: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x126750u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126754:
    // 0x126754: 0x0  nop
    ctx->pc = 0x126754u;
    // NOP
label_126758:
    // 0x126758: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_12675c:
    if (ctx->pc == 0x12675Cu) {
        ctx->pc = 0x126760u;
        goto label_126760;
    }
    ctx->pc = 0x126758u;
    {
        const bool branch_taken_0x126758 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126758) {
            ctx->pc = 0x126768u;
            goto label_126768;
        }
    }
    ctx->pc = 0x126760u;
label_126760:
    // 0x126760: 0xc60003b4  lwc1        $f0, 0x3B4($s0)
    ctx->pc = 0x126760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_126764:
    // 0x126764: 0xe60003d0  swc1        $f0, 0x3D0($s0)
    ctx->pc = 0x126764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 976), bits); }
label_126768:
    // 0x126768: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x126768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
label_12676c:
    // 0x12676c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12676cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_126770:
    // 0x126770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126774:
    // 0x126774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126778:
    // 0x126778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12677c:
    // 0x12677c: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x12677cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
label_126780:
    // 0x126780: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x126780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_126784:
    // 0x126784: 0xc0496d8  jal         func_125B60
label_126788:
    if (ctx->pc == 0x126788u) {
        ctx->pc = 0x126788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126784u;
        // 0x126788: 0xa2020465  sb          $v0, 0x465($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1125), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12678Cu;
        goto label_12678c;
    }
    ctx->pc = 0x126784u;
    SET_GPR_U32(ctx, 31, 0x12678Cu);
    ctx->pc = 0x126788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126784u;
    // 0x126788: 0xa2020465  sb          $v0, 0x465($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1125), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125B60u, 0x126784u, 0x12678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12678Cu;
label_12678c:
    // 0x12678c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_126790:
    // 0x126790: 0xe6140394  swc1        $f20, 0x394($s0)
    ctx->pc = 0x126790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 916), bits); }
label_126794:
    // 0x126794: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x126794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_126798:
    // 0x126798: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x126798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_12679c:
    // 0x12679c: 0x60f809  jalr        $v1
label_1267a0:
    if (ctx->pc == 0x1267A0u) {
        ctx->pc = 0x1267A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12679Cu;
        // 0x1267a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1267A4u;
        goto label_1267a4;
    }
    ctx->pc = 0x12679Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1267A4u);
        ctx->pc = 0x1267A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12679Cu;
        // 0x1267a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12679Cu, 0x1267A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1267A4u;
label_1267a4:
    // 0x1267a4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1267a4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1267a8:
    // 0x1267a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1267a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1267ac:
    // 0x1267ac: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x1267acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1267b0:
    // 0x1267b0: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x1267b0u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
label_1267b4:
    // 0x1267b4: 0xe614039c  swc1        $f20, 0x39C($s0)
    ctx->pc = 0x1267b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 924), bits); }
label_1267b8:
    // 0x1267b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1267b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1267bc:
    // 0x1267bc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1267bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1267c0:
    // 0x1267c0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1267c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1267c4:
    // 0x1267c4: 0x40f809  jalr        $v0
label_1267c8:
    if (ctx->pc == 0x1267C8u) {
        ctx->pc = 0x1267C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267C4u;
        // 0x1267c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1267CCu;
        goto label_1267cc;
    }
    ctx->pc = 0x1267C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1267CCu);
        ctx->pc = 0x1267C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267C4u;
        // 0x1267c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1267C4u, 0x1267CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1267CCu;
label_1267cc:
    // 0x1267cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1267ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1267d0:
    // 0x1267d0: 0x3c01c325  lui         $at, 0xC325
    ctx->pc = 0x1267d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49957 << 16));
label_1267d4:
    // 0x1267d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1267d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1267d8:
    // 0x1267d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1267dc:
    if (ctx->pc == 0x1267DCu) {
        ctx->pc = 0x1267DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267D8u;
        // 0x1267dc: 0xc60003c8  lwc1        $f0, 0x3C8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1267E0u;
        goto label_1267e0;
    }
    ctx->pc = 0x1267D8u;
    {
        const bool branch_taken_0x1267d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1267DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267D8u;
        // 0x1267dc: 0xc60003c8  lwc1        $f0, 0x3C8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1267d8) {
            ctx->pc = 0x1267E8u;
            goto label_1267e8;
        }
    }
    ctx->pc = 0x1267E0u;
label_1267e0:
    // 0x1267e0: 0x3c014325  lui         $at, 0x4325
    ctx->pc = 0x1267e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17189 << 16));
label_1267e4:
    // 0x1267e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1267e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1267e8:
    // 0x1267e8: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x1267e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1267ec:
    // 0x1267ec: 0x0  nop
    ctx->pc = 0x1267ecu;
    // NOP
label_1267f0:
    // 0x1267f0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1267f4:
    if (ctx->pc == 0x1267F4u) {
        ctx->pc = 0x1267F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267F0u;
        // 0x1267f4: 0xe60103f0  swc1        $f1, 0x3F0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1008), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1267F8u;
        goto label_1267f8;
    }
    ctx->pc = 0x1267F0u;
    {
        const bool branch_taken_0x1267f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1267F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267F0u;
        // 0x1267f4: 0xe60103f0  swc1        $f1, 0x3F0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1008), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1267f0) {
            ctx->pc = 0x126818u;
            goto label_126818;
        }
    }
    ctx->pc = 0x1267F8u;
label_1267f8:
    // 0x1267f8: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x1267f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1267fc:
    // 0x1267fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1267fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126800:
    // 0x126800: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x126800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_126804:
    // 0x126804: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x126804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_126808:
    // 0x126808: 0xc601032c  lwc1        $f1, 0x32C($s0)
    ctx->pc = 0x126808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12680c:
    // 0x12680c: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x12680cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_126810:
    // 0x126810: 0xc04967a  jal         func_1259E8
label_126814:
    if (ctx->pc == 0x126814u) {
        ctx->pc = 0x126814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126810u;
        // 0x126814: 0xe60103c8  swc1        $f1, 0x3C8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 968), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126818u;
        goto label_126818;
    }
    ctx->pc = 0x126810u;
    SET_GPR_U32(ctx, 31, 0x126818u);
    ctx->pc = 0x126814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126810u;
    // 0x126814: 0xe60103c8  swc1        $f1, 0x3C8($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 968), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1259E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1259E8u, 0x126810u, 0x126818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126818u;
label_126818:
    // 0x126818: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x126818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12681c:
    // 0x12681c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12681cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_126820:
    // 0x126820: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x126820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_126824:
    // 0x126824: 0xe600032c  swc1        $f0, 0x32C($s0)
    ctx->pc = 0x126824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 812), bits); }
label_126828:
    // 0x126828: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x126828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12682c:
    // 0x12682c: 0x10000007  b           . + 4 + (0x7 << 2)
label_126830:
    if (ctx->pc == 0x126830u) {
        ctx->pc = 0x126830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12682Cu;
        // 0x126830: 0xe6000330  swc1        $f0, 0x330($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126834u;
        goto label_126834;
    }
    ctx->pc = 0x12682Cu;
    {
        const bool branch_taken_0x12682c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12682Cu;
        // 0x126830: 0xe6000330  swc1        $f0, 0x330($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12682c) {
            ctx->pc = 0x12684Cu;
            goto label_12684c;
        }
    }
    ctx->pc = 0x126834u;
label_126834:
    // 0x126834: 0x10530005  beq         $v0, $s3, . + 4 + (0x5 << 2)
label_126838:
    if (ctx->pc == 0x126838u) {
        ctx->pc = 0x126838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126834u;
        // 0x126838: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12683Cu;
        goto label_12683c;
    }
    ctx->pc = 0x126834u;
    {
        const bool branch_taken_0x126834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x126838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126834u;
        // 0x126838: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126834) {
            ctx->pc = 0x12684Cu;
            goto label_12684c;
        }
    }
    ctx->pc = 0x12683Cu;
label_12683c:
    // 0x12683c: 0xae130320  sw          $s3, 0x320($s0)
    ctx->pc = 0x12683cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 19));
label_126840:
    // 0x126840: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x126840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_126844:
    // 0x126844: 0x52630001  beql        $s3, $v1, . + 4 + (0x1 << 2)
label_126848:
    if (ctx->pc == 0x126848u) {
        ctx->pc = 0x126848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126844u;
        // 0x126848: 0xae0003fc  sw          $zero, 0x3FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12684Cu;
        goto label_12684c;
    }
    ctx->pc = 0x126844u;
    {
        const bool branch_taken_0x126844 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x126844) {
            ctx->pc = 0x126848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126844u;
            // 0x126848: 0xae0003fc  sw          $zero, 0x3FC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12684Cu;
            goto label_12684c;
        }
    }
    ctx->pc = 0x12684Cu;
label_12684c:
    // 0x12684c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x12684cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_126850:
    // 0x126850: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x126850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_126854:
    // 0x126854: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x126854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_126858:
    // 0x126858: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x126858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12685c:
    // 0x12685c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x12685cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_126860:
    // 0x126860: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x126860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_126864:
    // 0x126864: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x126864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_126868:
    // 0x126868: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x126868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12686c:
    // 0x12686c: 0x3e00008  jr          $ra
label_126870:
    if (ctx->pc == 0x126870u) {
        ctx->pc = 0x126870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12686Cu;
        // 0x126870: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126874u;
        goto label_126874;
    }
    ctx->pc = 0x12686Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12686Cu;
        // 0x126870: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12686Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126874u;
label_126874:
    // 0x126874: 0x0  nop
    ctx->pc = 0x126874u;
    // NOP
    ctx->pc = 0x126878u;
}
