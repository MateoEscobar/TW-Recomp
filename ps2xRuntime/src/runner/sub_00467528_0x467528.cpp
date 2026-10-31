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

// Function: sub_00467528
// Address: 0x467528 - 0x467708
void sub_00467528_0x467528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467528_0x467528");
#endif

    switch (ctx->pc) {
        case 0x467528u: goto label_467528;
        case 0x46752cu: goto label_46752c;
        case 0x467530u: goto label_467530;
        case 0x467534u: goto label_467534;
        case 0x467538u: goto label_467538;
        case 0x46753cu: goto label_46753c;
        case 0x467540u: goto label_467540;
        case 0x467544u: goto label_467544;
        case 0x467548u: goto label_467548;
        case 0x46754cu: goto label_46754c;
        case 0x467550u: goto label_467550;
        case 0x467554u: goto label_467554;
        case 0x467558u: goto label_467558;
        case 0x46755cu: goto label_46755c;
        case 0x467560u: goto label_467560;
        case 0x467564u: goto label_467564;
        case 0x467568u: goto label_467568;
        case 0x46756cu: goto label_46756c;
        case 0x467570u: goto label_467570;
        case 0x467574u: goto label_467574;
        case 0x467578u: goto label_467578;
        case 0x46757cu: goto label_46757c;
        case 0x467580u: goto label_467580;
        case 0x467584u: goto label_467584;
        case 0x467588u: goto label_467588;
        case 0x46758cu: goto label_46758c;
        case 0x467590u: goto label_467590;
        case 0x467594u: goto label_467594;
        case 0x467598u: goto label_467598;
        case 0x46759cu: goto label_46759c;
        case 0x4675a0u: goto label_4675a0;
        case 0x4675a4u: goto label_4675a4;
        case 0x4675a8u: goto label_4675a8;
        case 0x4675acu: goto label_4675ac;
        case 0x4675b0u: goto label_4675b0;
        case 0x4675b4u: goto label_4675b4;
        case 0x4675b8u: goto label_4675b8;
        case 0x4675bcu: goto label_4675bc;
        case 0x4675c0u: goto label_4675c0;
        case 0x4675c4u: goto label_4675c4;
        case 0x4675c8u: goto label_4675c8;
        case 0x4675ccu: goto label_4675cc;
        case 0x4675d0u: goto label_4675d0;
        case 0x4675d4u: goto label_4675d4;
        case 0x4675d8u: goto label_4675d8;
        case 0x4675dcu: goto label_4675dc;
        case 0x4675e0u: goto label_4675e0;
        case 0x4675e4u: goto label_4675e4;
        case 0x4675e8u: goto label_4675e8;
        case 0x4675ecu: goto label_4675ec;
        case 0x4675f0u: goto label_4675f0;
        case 0x4675f4u: goto label_4675f4;
        case 0x4675f8u: goto label_4675f8;
        case 0x4675fcu: goto label_4675fc;
        case 0x467600u: goto label_467600;
        case 0x467604u: goto label_467604;
        case 0x467608u: goto label_467608;
        case 0x46760cu: goto label_46760c;
        case 0x467610u: goto label_467610;
        case 0x467614u: goto label_467614;
        case 0x467618u: goto label_467618;
        case 0x46761cu: goto label_46761c;
        case 0x467620u: goto label_467620;
        case 0x467624u: goto label_467624;
        case 0x467628u: goto label_467628;
        case 0x46762cu: goto label_46762c;
        case 0x467630u: goto label_467630;
        case 0x467634u: goto label_467634;
        case 0x467638u: goto label_467638;
        case 0x46763cu: goto label_46763c;
        case 0x467640u: goto label_467640;
        case 0x467644u: goto label_467644;
        case 0x467648u: goto label_467648;
        case 0x46764cu: goto label_46764c;
        case 0x467650u: goto label_467650;
        case 0x467654u: goto label_467654;
        case 0x467658u: goto label_467658;
        case 0x46765cu: goto label_46765c;
        case 0x467660u: goto label_467660;
        case 0x467664u: goto label_467664;
        case 0x467668u: goto label_467668;
        case 0x46766cu: goto label_46766c;
        case 0x467670u: goto label_467670;
        case 0x467674u: goto label_467674;
        case 0x467678u: goto label_467678;
        case 0x46767cu: goto label_46767c;
        case 0x467680u: goto label_467680;
        case 0x467684u: goto label_467684;
        case 0x467688u: goto label_467688;
        case 0x46768cu: goto label_46768c;
        case 0x467690u: goto label_467690;
        case 0x467694u: goto label_467694;
        case 0x467698u: goto label_467698;
        case 0x46769cu: goto label_46769c;
        case 0x4676a0u: goto label_4676a0;
        case 0x4676a4u: goto label_4676a4;
        case 0x4676a8u: goto label_4676a8;
        case 0x4676acu: goto label_4676ac;
        case 0x4676b0u: goto label_4676b0;
        case 0x4676b4u: goto label_4676b4;
        case 0x4676b8u: goto label_4676b8;
        case 0x4676bcu: goto label_4676bc;
        case 0x4676c0u: goto label_4676c0;
        case 0x4676c4u: goto label_4676c4;
        case 0x4676c8u: goto label_4676c8;
        case 0x4676ccu: goto label_4676cc;
        case 0x4676d0u: goto label_4676d0;
        case 0x4676d4u: goto label_4676d4;
        case 0x4676d8u: goto label_4676d8;
        case 0x4676dcu: goto label_4676dc;
        case 0x4676e0u: goto label_4676e0;
        case 0x4676e4u: goto label_4676e4;
        case 0x4676e8u: goto label_4676e8;
        case 0x4676ecu: goto label_4676ec;
        case 0x4676f0u: goto label_4676f0;
        case 0x4676f4u: goto label_4676f4;
        case 0x4676f8u: goto label_4676f8;
        case 0x4676fcu: goto label_4676fc;
        case 0x467700u: goto label_467700;
        case 0x467704u: goto label_467704;
        default: break;
    }

    ctx->pc = 0x467528u;

label_467528:
    // 0x467528: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x467528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_46752c:
    // 0x46752c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x46752cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_467530:
    // 0x467530: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x467530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_467534:
    // 0x467534: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x467534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_467538:
    // 0x467538: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x467538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46753c:
    // 0x46753c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x46753cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_467540:
    // 0x467540: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x467540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_467544:
    // 0x467544: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x467544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_467548:
    // 0x467548: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x467548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_46754c:
    // 0x46754c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46754cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467550:
    // 0x467550: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x467550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_467554:
    // 0x467554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x467554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_467558:
    // 0x467558: 0xc11eeae  jal         func_47BAB8
label_46755c:
    if (ctx->pc == 0x46755Cu) {
        ctx->pc = 0x46755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467558u;
        // 0x46755c: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467560u;
        goto label_467560;
    }
    ctx->pc = 0x467558u;
    SET_GPR_U32(ctx, 31, 0x467560u);
    ctx->pc = 0x46755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467558u;
    // 0x46755c: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x467558u, 0x467560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467560u;
label_467560:
    // 0x467560: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_467564:
    if (ctx->pc == 0x467564u) {
        ctx->pc = 0x467564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467560u;
        // 0x467564: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467568u;
        goto label_467568;
    }
    ctx->pc = 0x467560u;
    {
        const bool branch_taken_0x467560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x467564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467560u;
        // 0x467564: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467560) {
            ctx->pc = 0x4676DCu;
            goto label_4676dc;
        }
    }
    ctx->pc = 0x467568u;
label_467568:
    // 0x467568: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x467568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_46756c:
    // 0x46756c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x46756cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_467570:
    // 0x467570: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x467570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_467574:
    // 0x467574: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x467574u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_467578:
    // 0x467578: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_46757c:
    if (ctx->pc == 0x46757Cu) {
        ctx->pc = 0x46757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467578u;
        // 0x46757c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467580u;
        goto label_467580;
    }
    ctx->pc = 0x467578u;
    {
        const bool branch_taken_0x467578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467578u;
        // 0x46757c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467578) {
            ctx->pc = 0x4675A8u;
            goto label_4675a8;
        }
    }
    ctx->pc = 0x467580u;
label_467580:
    // 0x467580: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x467580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
label_467584:
    // 0x467584: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x467584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_467588:
    // 0x467588: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x467588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_46758c:
    // 0x46758c: 0xc11eff2  jal         func_47BFC8
label_467590:
    if (ctx->pc == 0x467590u) {
        ctx->pc = 0x467590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46758Cu;
        // 0x467590: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x467594u;
        goto label_467594;
    }
    ctx->pc = 0x46758Cu;
    SET_GPR_U32(ctx, 31, 0x467594u);
    ctx->pc = 0x467590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46758Cu;
    // 0x467590: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46758Cu, 0x467594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467594u;
label_467594:
    // 0x467594: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x467594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_467598:
    // 0x467598: 0xc11f024  jal         func_47C090
label_46759c:
    if (ctx->pc == 0x46759Cu) {
        ctx->pc = 0x46759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467598u;
        // 0x46759c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4675A0u;
        goto label_4675a0;
    }
    ctx->pc = 0x467598u;
    SET_GPR_U32(ctx, 31, 0x4675A0u);
    ctx->pc = 0x46759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467598u;
    // 0x46759c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x467598u, 0x4675A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4675A0u;
label_4675a0:
    // 0x4675a0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_4675a4:
    if (ctx->pc == 0x4675A4u) {
        ctx->pc = 0x4675A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4675A0u;
        // 0x4675a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4675A8u;
        goto label_4675a8;
    }
    ctx->pc = 0x4675A0u;
    {
        const bool branch_taken_0x4675a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4675A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4675A0u;
        // 0x4675a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4675a0) {
            ctx->pc = 0x4676E0u;
            goto label_4676e0;
        }
    }
    ctx->pc = 0x4675A8u;
label_4675a8:
    // 0x4675a8: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x4675a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_4675ac:
    // 0x4675ac: 0xc11ef80  jal         func_47BE00
label_4675b0:
    if (ctx->pc == 0x4675B0u) {
        ctx->pc = 0x4675B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4675ACu;
        // 0x4675b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4675B4u;
        goto label_4675b4;
    }
    ctx->pc = 0x4675ACu;
    SET_GPR_U32(ctx, 31, 0x4675B4u);
    ctx->pc = 0x4675B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4675ACu;
    // 0x4675b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4675ACu, 0x4675B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4675B4u;
label_4675b4:
    // 0x4675b4: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_4675b8:
    if (ctx->pc == 0x4675B8u) {
        ctx->pc = 0x4675B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4675B4u;
        // 0x4675b8: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4675BCu;
        goto label_4675bc;
    }
    ctx->pc = 0x4675B4u;
    {
        const bool branch_taken_0x4675b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4675B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4675B4u;
        // 0x4675b8: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4675b4) {
            ctx->pc = 0x4676DCu;
            goto label_4676dc;
        }
    }
    ctx->pc = 0x4675BCu;
label_4675bc:
    // 0x4675bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4675bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4675c0:
    // 0x4675c0: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
label_4675c4:
    if (ctx->pc == 0x4675C4u) {
        ctx->pc = 0x4675C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4675C0u;
        // 0x4675c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4675C8u;
        goto label_4675c8;
    }
    ctx->pc = 0x4675C0u;
    {
        const bool branch_taken_0x4675c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4675C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4675C0u;
        // 0x4675c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4675c0) {
            ctx->pc = 0x4676E0u;
            goto label_4676e0;
        }
    }
    ctx->pc = 0x4675C8u;
label_4675c8:
    // 0x4675c8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4675c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4675cc:
    // 0x4675cc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4675ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4675d0:
    // 0x4675d0: 0x2454ad18  addiu       $s4, $v0, -0x52E8
    ctx->pc = 0x4675d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4675d4:
    // 0x4675d4: 0x8c64e698  lw          $a0, -0x1968($v1)
    ctx->pc = 0x4675d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960792)));
label_4675d8:
    // 0x4675d8: 0x8e820118  lw          $v0, 0x118($s4)
    ctx->pc = 0x4675d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_4675dc:
    // 0x4675dc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4675dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4675e0:
    // 0x4675e0: 0x40f809  jalr        $v0
label_4675e4:
    if (ctx->pc == 0x4675E4u) {
        ctx->pc = 0x4675E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4675E0u;
        // 0x4675e4: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4675E8u;
        goto label_4675e8;
    }
    ctx->pc = 0x4675E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4675E8u);
        ctx->pc = 0x4675E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4675E0u;
        // 0x4675e4: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4675E0u, 0x4675E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4675E8u;
label_4675e8:
    // 0x4675e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4675e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4675ec:
    // 0x4675ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4675ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4675f0:
    // 0x4675f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4675f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4675f4:
    // 0x4675f4: 0xc10c1fa  jal         func_4307E8
label_4675f8:
    if (ctx->pc == 0x4675F8u) {
        ctx->pc = 0x4675F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4675F4u;
        // 0x4675f8: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4675FCu;
        goto label_4675fc;
    }
    ctx->pc = 0x4675F4u;
    SET_GPR_U32(ctx, 31, 0x4675FCu);
    ctx->pc = 0x4675F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4675F4u;
    // 0x4675f8: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4675F4u, 0x4675FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4675FCu;
label_4675fc:
    // 0x4675fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4675fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_467600:
    // 0x467600: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x467600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_467604:
    // 0x467604: 0xc11ef80  jal         func_47BE00
label_467608:
    if (ctx->pc == 0x467608u) {
        ctx->pc = 0x467608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467604u;
        // 0x467608: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46760Cu;
        goto label_46760c;
    }
    ctx->pc = 0x467604u;
    SET_GPR_U32(ctx, 31, 0x46760Cu);
    ctx->pc = 0x467608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467604u;
    // 0x467608: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x467604u, 0x46760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46760Cu;
label_46760c:
    // 0x46760c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_467610:
    if (ctx->pc == 0x467610u) {
        ctx->pc = 0x467610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46760Cu;
        // 0x467610: 0x93a2001c  lbu         $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467614u;
        goto label_467614;
    }
    ctx->pc = 0x46760Cu;
    {
        const bool branch_taken_0x46760c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x467610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46760Cu;
        // 0x467610: 0x93a2001c  lbu         $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46760c) {
            ctx->pc = 0x4676DCu;
            goto label_4676dc;
        }
    }
    ctx->pc = 0x467614u;
label_467614:
    // 0x467614: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x467614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_467618:
    // 0x467618: 0x34a50116  ori         $a1, $a1, 0x116
    ctx->pc = 0x467618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
label_46761c:
    // 0x46761c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x46761cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_467620:
    // 0x467620: 0x29980  sll         $s3, $v0, 6
    ctx->pc = 0x467620u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_467624:
    // 0x467624: 0x93b0001d  lbu         $s0, 0x1D($sp)
    ctx->pc = 0x467624u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
label_467628:
    // 0x467628: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x467628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_46762c:
    // 0x46762c: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x46762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_467630:
    // 0x467630: 0x93a2001e  lbu         $v0, 0x1E($sp)
    ctx->pc = 0x467630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 30)));
label_467634:
    // 0x467634: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x467634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_467638:
    // 0x467638: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x467638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_46763c:
    // 0x46763c: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x46763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_467640:
    // 0x467640: 0x40f809  jalr        $v0
label_467644:
    if (ctx->pc == 0x467644u) {
        ctx->pc = 0x467644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467640u;
        // 0x467644: 0x2464000f  addiu       $a0, $v1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467648u;
        goto label_467648;
    }
    ctx->pc = 0x467640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x467648u);
        ctx->pc = 0x467644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467640u;
        // 0x467644: 0x2464000f  addiu       $a0, $v1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467640u, 0x467648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x467648u;
label_467648:
    // 0x467648: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x467648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_46764c:
    // 0x46764c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x46764cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_467650:
    // 0x467650: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x467650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
label_467654:
    // 0x467654: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x467654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_467658:
    // 0x467658: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x467658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_46765c:
    // 0x46765c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x46765cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_467660:
    // 0x467660: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x467660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_467664:
    // 0x467664: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x467664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_467668:
    // 0x467668: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x467668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_46766c:
    // 0x46766c: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x46766cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
label_467670:
    // 0x467670: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x467670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_467674:
    // 0x467674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x467674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_467678:
    // 0x467678: 0xc11fb56  jal         func_47ED58
label_46767c:
    if (ctx->pc == 0x46767Cu) {
        ctx->pc = 0x46767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467678u;
        // 0x46767c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467680u;
        goto label_467680;
    }
    ctx->pc = 0x467678u;
    SET_GPR_U32(ctx, 31, 0x467680u);
    ctx->pc = 0x46767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467678u;
    // 0x46767c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x467678u, 0x467680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467680u;
label_467680:
    // 0x467680: 0x14500017  bne         $v0, $s0, . + 4 + (0x17 << 2)
label_467684:
    if (ctx->pc == 0x467684u) {
        ctx->pc = 0x467684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467680u;
        // 0x467684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467688u;
        goto label_467688;
    }
    ctx->pc = 0x467680u;
    {
        const bool branch_taken_0x467680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x467684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467680u;
        // 0x467684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467680) {
            ctx->pc = 0x4676E0u;
            goto label_4676e0;
        }
    }
    ctx->pc = 0x467688u;
label_467688:
    // 0x467688: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x467688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_46768c:
    // 0x46768c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46768cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_467690:
    // 0x467690: 0xc11fb56  jal         func_47ED58
label_467694:
    if (ctx->pc == 0x467694u) {
        ctx->pc = 0x467694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467690u;
        // 0x467694: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467698u;
        goto label_467698;
    }
    ctx->pc = 0x467690u;
    SET_GPR_U32(ctx, 31, 0x467698u);
    ctx->pc = 0x467694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467690u;
    // 0x467694: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x467690u, 0x467698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467698u;
label_467698:
    // 0x467698: 0x14530011  bne         $v0, $s3, . + 4 + (0x11 << 2)
label_46769c:
    if (ctx->pc == 0x46769Cu) {
        ctx->pc = 0x46769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467698u;
        // 0x46769c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4676A0u;
        goto label_4676a0;
    }
    ctx->pc = 0x467698u;
    {
        const bool branch_taken_0x467698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x46769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467698u;
        // 0x46769c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467698) {
            ctx->pc = 0x4676E0u;
            goto label_4676e0;
        }
    }
    ctx->pc = 0x4676A0u;
label_4676a0:
    // 0x4676a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4676a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4676a4:
    // 0x4676a4: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x4676a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_4676a8:
    // 0x4676a8: 0xc11ef80  jal         func_47BE00
label_4676ac:
    if (ctx->pc == 0x4676ACu) {
        ctx->pc = 0x4676ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4676A8u;
        // 0x4676ac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4676B0u;
        goto label_4676b0;
    }
    ctx->pc = 0x4676A8u;
    SET_GPR_U32(ctx, 31, 0x4676B0u);
    ctx->pc = 0x4676ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4676A8u;
    // 0x4676ac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4676A8u, 0x4676B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4676B0u;
label_4676b0:
    // 0x4676b0: 0x1452000b  bne         $v0, $s2, . + 4 + (0xB << 2)
label_4676b4:
    if (ctx->pc == 0x4676B4u) {
        ctx->pc = 0x4676B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4676B0u;
        // 0x4676b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4676B8u;
        goto label_4676b8;
    }
    ctx->pc = 0x4676B0u;
    {
        const bool branch_taken_0x4676b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x4676B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4676B0u;
        // 0x4676b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4676b0) {
            ctx->pc = 0x4676E0u;
            goto label_4676e0;
        }
    }
    ctx->pc = 0x4676B8u;
label_4676b8:
    // 0x4676b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4676b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4676bc:
    // 0x4676bc: 0xc119e10  jal         func_467840
label_4676c0:
    if (ctx->pc == 0x4676C0u) {
        ctx->pc = 0x4676C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4676BCu;
        // 0x4676c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4676C4u;
        goto label_4676c4;
    }
    ctx->pc = 0x4676BCu;
    SET_GPR_U32(ctx, 31, 0x4676C4u);
    ctx->pc = 0x4676C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4676BCu;
    // 0x4676c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467840u, 0x4676BCu, 0x4676C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4676C4u;
label_4676c4:
    // 0x4676c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4676c8:
    if (ctx->pc == 0x4676C8u) {
        ctx->pc = 0x4676C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4676C4u;
        // 0x4676c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4676CCu;
        goto label_4676cc;
    }
    ctx->pc = 0x4676C4u;
    {
        const bool branch_taken_0x4676c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4676C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4676C4u;
        // 0x4676c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4676c4) {
            ctx->pc = 0x4676DCu;
            goto label_4676dc;
        }
    }
    ctx->pc = 0x4676CCu;
label_4676cc:
    // 0x4676cc: 0xc119aec  jal         func_466BB0
label_4676d0:
    if (ctx->pc == 0x4676D0u) {
        ctx->pc = 0x4676D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4676CCu;
        // 0x4676d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4676D4u;
        goto label_4676d4;
    }
    ctx->pc = 0x4676CCu;
    SET_GPR_U32(ctx, 31, 0x4676D4u);
    ctx->pc = 0x4676D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4676CCu;
    // 0x4676d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466BB0u, 0x4676CCu, 0x4676D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4676D4u;
label_4676d4:
    // 0x4676d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_4676d8:
    if (ctx->pc == 0x4676D8u) {
        ctx->pc = 0x4676D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4676D4u;
        // 0x4676d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4676DCu;
        goto label_4676dc;
    }
    ctx->pc = 0x4676D4u;
    {
        const bool branch_taken_0x4676d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4676D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4676D4u;
        // 0x4676d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4676d4) {
            ctx->pc = 0x4676E0u;
            goto label_4676e0;
        }
    }
    ctx->pc = 0x4676DCu;
label_4676dc:
    // 0x4676dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4676dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4676e0:
    // 0x4676e0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4676e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4676e4:
    // 0x4676e4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4676e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4676e8:
    // 0x4676e8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4676e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4676ec:
    // 0x4676ec: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4676ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4676f0:
    // 0x4676f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4676f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4676f4:
    // 0x4676f4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4676f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4676f8:
    // 0x4676f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4676f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4676fc:
    // 0x4676fc: 0x3e00008  jr          $ra
label_467700:
    if (ctx->pc == 0x467700u) {
        ctx->pc = 0x467700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4676FCu;
        // 0x467700: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467704u;
        goto label_467704;
    }
    ctx->pc = 0x4676FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4676FCu;
        // 0x467700: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4676FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467704u;
label_467704:
    // 0x467704: 0x0  nop
    ctx->pc = 0x467704u;
    // NOP
    ctx->pc = 0x467708u;
}
