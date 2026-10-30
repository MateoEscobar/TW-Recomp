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

// Function: sub_0042D4E4
// Address: 0x42d4e4 - 0x42d6cc
void sub_0042D4E4_0x42d4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D4E4_0x42d4e4");
#endif

    switch (ctx->pc) {
        case 0x42d4e4u: goto label_42d4e4;
        case 0x42d4e8u: goto label_42d4e8;
        case 0x42d4ecu: goto label_42d4ec;
        case 0x42d4f0u: goto label_42d4f0;
        case 0x42d4f4u: goto label_42d4f4;
        case 0x42d4f8u: goto label_42d4f8;
        case 0x42d4fcu: goto label_42d4fc;
        case 0x42d500u: goto label_42d500;
        case 0x42d504u: goto label_42d504;
        case 0x42d508u: goto label_42d508;
        case 0x42d50cu: goto label_42d50c;
        case 0x42d510u: goto label_42d510;
        case 0x42d514u: goto label_42d514;
        case 0x42d518u: goto label_42d518;
        case 0x42d51cu: goto label_42d51c;
        case 0x42d520u: goto label_42d520;
        case 0x42d524u: goto label_42d524;
        case 0x42d528u: goto label_42d528;
        case 0x42d52cu: goto label_42d52c;
        case 0x42d530u: goto label_42d530;
        case 0x42d534u: goto label_42d534;
        case 0x42d538u: goto label_42d538;
        case 0x42d53cu: goto label_42d53c;
        case 0x42d540u: goto label_42d540;
        case 0x42d544u: goto label_42d544;
        case 0x42d548u: goto label_42d548;
        case 0x42d54cu: goto label_42d54c;
        case 0x42d550u: goto label_42d550;
        case 0x42d554u: goto label_42d554;
        case 0x42d558u: goto label_42d558;
        case 0x42d55cu: goto label_42d55c;
        case 0x42d560u: goto label_42d560;
        case 0x42d564u: goto label_42d564;
        case 0x42d568u: goto label_42d568;
        case 0x42d56cu: goto label_42d56c;
        case 0x42d570u: goto label_42d570;
        case 0x42d574u: goto label_42d574;
        case 0x42d578u: goto label_42d578;
        case 0x42d57cu: goto label_42d57c;
        case 0x42d580u: goto label_42d580;
        case 0x42d584u: goto label_42d584;
        case 0x42d588u: goto label_42d588;
        case 0x42d58cu: goto label_42d58c;
        case 0x42d590u: goto label_42d590;
        case 0x42d594u: goto label_42d594;
        case 0x42d598u: goto label_42d598;
        case 0x42d59cu: goto label_42d59c;
        case 0x42d5a0u: goto label_42d5a0;
        case 0x42d5a4u: goto label_42d5a4;
        case 0x42d5a8u: goto label_42d5a8;
        case 0x42d5acu: goto label_42d5ac;
        case 0x42d5b0u: goto label_42d5b0;
        case 0x42d5b4u: goto label_42d5b4;
        case 0x42d5b8u: goto label_42d5b8;
        case 0x42d5bcu: goto label_42d5bc;
        case 0x42d5c0u: goto label_42d5c0;
        case 0x42d5c4u: goto label_42d5c4;
        case 0x42d5c8u: goto label_42d5c8;
        case 0x42d5ccu: goto label_42d5cc;
        case 0x42d5d0u: goto label_42d5d0;
        case 0x42d5d4u: goto label_42d5d4;
        case 0x42d5d8u: goto label_42d5d8;
        case 0x42d5dcu: goto label_42d5dc;
        case 0x42d5e0u: goto label_42d5e0;
        case 0x42d5e4u: goto label_42d5e4;
        case 0x42d5e8u: goto label_42d5e8;
        case 0x42d5ecu: goto label_42d5ec;
        case 0x42d5f0u: goto label_42d5f0;
        case 0x42d5f4u: goto label_42d5f4;
        case 0x42d5f8u: goto label_42d5f8;
        case 0x42d5fcu: goto label_42d5fc;
        case 0x42d600u: goto label_42d600;
        case 0x42d604u: goto label_42d604;
        case 0x42d608u: goto label_42d608;
        case 0x42d60cu: goto label_42d60c;
        case 0x42d610u: goto label_42d610;
        case 0x42d614u: goto label_42d614;
        case 0x42d618u: goto label_42d618;
        case 0x42d61cu: goto label_42d61c;
        case 0x42d620u: goto label_42d620;
        case 0x42d624u: goto label_42d624;
        case 0x42d628u: goto label_42d628;
        case 0x42d62cu: goto label_42d62c;
        case 0x42d630u: goto label_42d630;
        case 0x42d634u: goto label_42d634;
        case 0x42d638u: goto label_42d638;
        case 0x42d63cu: goto label_42d63c;
        case 0x42d640u: goto label_42d640;
        case 0x42d644u: goto label_42d644;
        case 0x42d648u: goto label_42d648;
        case 0x42d64cu: goto label_42d64c;
        case 0x42d650u: goto label_42d650;
        case 0x42d654u: goto label_42d654;
        case 0x42d658u: goto label_42d658;
        case 0x42d65cu: goto label_42d65c;
        case 0x42d660u: goto label_42d660;
        case 0x42d664u: goto label_42d664;
        case 0x42d668u: goto label_42d668;
        case 0x42d66cu: goto label_42d66c;
        case 0x42d670u: goto label_42d670;
        case 0x42d674u: goto label_42d674;
        case 0x42d678u: goto label_42d678;
        case 0x42d67cu: goto label_42d67c;
        case 0x42d680u: goto label_42d680;
        case 0x42d684u: goto label_42d684;
        case 0x42d688u: goto label_42d688;
        case 0x42d68cu: goto label_42d68c;
        case 0x42d690u: goto label_42d690;
        case 0x42d694u: goto label_42d694;
        case 0x42d698u: goto label_42d698;
        case 0x42d69cu: goto label_42d69c;
        case 0x42d6a0u: goto label_42d6a0;
        case 0x42d6a4u: goto label_42d6a4;
        case 0x42d6a8u: goto label_42d6a8;
        case 0x42d6acu: goto label_42d6ac;
        case 0x42d6b0u: goto label_42d6b0;
        case 0x42d6b4u: goto label_42d6b4;
        case 0x42d6b8u: goto label_42d6b8;
        case 0x42d6bcu: goto label_42d6bc;
        case 0x42d6c0u: goto label_42d6c0;
        case 0x42d6c4u: goto label_42d6c4;
        case 0x42d6c8u: goto label_42d6c8;
        default: break;
    }

    ctx->pc = 0x42d4e4u;

label_42d4e4:
    // 0x42d4e4: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x42d4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
label_42d4e8:
    // 0x42d4e8: 0x8fc505e0  lw          $a1, 0x5E0($fp)
    ctx->pc = 0x42d4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_42d4ec:
    // 0x42d4ec: 0xc10bafe  jal         func_42EBF8
label_42d4f0:
    if (ctx->pc == 0x42D4F0u) {
        ctx->pc = 0x42D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D4ECu;
        // 0x42d4f0: 0x24e4d4e4  addiu       $a0, $a3, -0x2B1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D4F4u;
        goto label_42d4f4;
    }
    ctx->pc = 0x42D4ECu;
    SET_GPR_U32(ctx, 31, 0x42D4F4u);
    ctx->pc = 0x42D4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D4ECu;
    // 0x42d4f0: 0x24e4d4e4  addiu       $a0, $a3, -0x2B1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EBF8u, 0x42D4ECu, 0x42D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D4F4u;
label_42d4f4:
    // 0x42d4f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x42d4f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42d4f8:
    // 0x42d4f8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_42d4fc:
    if (ctx->pc == 0x42D4FCu) {
        ctx->pc = 0x42D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D4F8u;
        // 0x42d4fc: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D500u;
        goto label_42d500;
    }
    ctx->pc = 0x42D4F8u;
    {
        const bool branch_taken_0x42d4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D4F8u;
        // 0x42d4fc: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d4f8) {
            ctx->pc = 0x42D50Cu;
            goto label_42d50c;
        }
    }
    ctx->pc = 0x42D500u;
label_42d500:
    // 0x42d500: 0xc10b22a  jal         func_42C8A8
label_42d504:
    if (ctx->pc == 0x42D504u) {
        ctx->pc = 0x42D508u;
        goto label_42d508;
    }
    ctx->pc = 0x42D500u;
    SET_GPR_U32(ctx, 31, 0x42D508u);
    ctx->pc = 0x42C8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C8A8u, 0x42D500u, 0x42D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D508u;
label_42d508:
    // 0x42d508: 0x8fc305e0  lw          $v1, 0x5E0($fp)
    ctx->pc = 0x42d508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_42d50c:
    // 0x42d50c: 0x27c806f0  addiu       $t0, $fp, 0x6F0
    ctx->pc = 0x42d50cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 1776));
label_42d510:
    // 0x42d510: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x42d510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_42d514:
    // 0x42d514: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x42d514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_42d518:
    // 0x42d518: 0x248302e0  addiu       $v1, $a0, 0x2E0
    ctx->pc = 0x42d518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_42d51c:
    // 0x42d51c: 0x8fc205e8  lw          $v0, 0x5E8($fp)
    ctx->pc = 0x42d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_42d520:
    // 0x42d520: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x42d520u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_42d524:
    // 0x42d524: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x42d524u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_42d528:
    // 0x42d528: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x42d528u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_42d52c:
    // 0x42d52c: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x42d52cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_42d530:
    // 0x42d530: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x42d530u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_42d534:
    // 0x42d534: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x42d534u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_42d538:
    // 0x42d538: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x42d538u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_42d53c:
    // 0x42d53c: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x42d53cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_42d540:
    // 0x42d540: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x42d540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_42d544:
    // 0x42d544: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x42d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_42d548:
    // 0x42d548: 0x0  nop
    ctx->pc = 0x42d548u;
    // NOP
label_42d54c:
    // 0x42d54c: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
label_42d550:
    if (ctx->pc == 0x42D550u) {
        ctx->pc = 0x42D554u;
        goto label_42d554;
    }
    ctx->pc = 0x42D54Cu;
    {
        const bool branch_taken_0x42d54c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x42d54c) {
            ctx->pc = 0x42D520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42d520;
        }
    }
    ctx->pc = 0x42D554u;
label_42d554:
    // 0x42d554: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x42d554u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_42d558:
    // 0x42d558: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x42d558u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_42d55c:
    // 0x42d55c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x42d55cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_42d560:
    // 0x42d560: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x42d560u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
label_42d564:
    // 0x42d564: 0x27c20680  addiu       $v0, $fp, 0x680
    ctx->pc = 0x42d564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1664));
label_42d568:
    // 0x42d568: 0x8fc405e4  lw          $a0, 0x5E4($fp)
    ctx->pc = 0x42d568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_42d56c:
    // 0x42d56c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x42d56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42d570:
    // 0x42d570: 0x8fc605e8  lw          $a2, 0x5E8($fp)
    ctx->pc = 0x42d570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_42d574:
    // 0x42d574: 0x8fc705ec  lw          $a3, 0x5EC($fp)
    ctx->pc = 0x42d574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_42d578:
    // 0x42d578: 0xc10b444  jal         func_42D110
label_42d57c:
    if (ctx->pc == 0x42D57Cu) {
        ctx->pc = 0x42D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D578u;
        // 0x42d57c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D580u;
        goto label_42d580;
    }
    ctx->pc = 0x42D578u;
    SET_GPR_U32(ctx, 31, 0x42D580u);
    ctx->pc = 0x42D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D578u;
    // 0x42d57c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D110u, 0x42D578u, 0x42D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D580u;
label_42d580:
    // 0x42d580: 0x8fc605e0  lw          $a2, 0x5E0($fp)
    ctx->pc = 0x42d580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_42d584:
    // 0x42d584: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x42d584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_42d588:
    // 0x42d588: 0x8fc805e8  lw          $t0, 0x5E8($fp)
    ctx->pc = 0x42d588u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_42d58c:
    // 0x42d58c: 0x2465d5b0  addiu       $a1, $v1, -0x2A50
    ctx->pc = 0x42d58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956464));
label_42d590:
    // 0x42d590: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x42d590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42d594:
    // 0x42d594: 0x27c40680  addiu       $a0, $fp, 0x680
    ctx->pc = 0x42d594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1664));
label_42d598:
    // 0x42d598: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x42d598u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_42d59c:
    // 0x42d59c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x42d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_42d5a0:
    // 0x42d5a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42d5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42d5a4:
    // 0x42d5a4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x42d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_42d5a8:
    // 0x42d5a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_42d5ac:
    if (ctx->pc == 0x42D5ACu) {
        ctx->pc = 0x42D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D5A8u;
        // 0x42d5ac: 0x8fc205e4  lw          $v0, 0x5E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D5B0u;
        goto label_42d5b0;
    }
    ctx->pc = 0x42D5A8u;
    {
        const bool branch_taken_0x42d5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D5A8u;
        // 0x42d5ac: 0x8fc205e4  lw          $v0, 0x5E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d5a8) {
            ctx->pc = 0x42D5B8u;
            goto label_42d5b8;
        }
    }
    ctx->pc = 0x42D5B0u;
label_42d5b0:
    // 0x42d5b0: 0x800008  jr          $a0
label_42d5b4:
    if (ctx->pc == 0x42D5B4u) {
        ctx->pc = 0x42D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D5B0u;
        // 0x42d5b4: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D5B8u;
        goto label_42d5b8;
    }
    ctx->pc = 0x42D5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x42D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D5B0u;
        // 0x42d5b4: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D5B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42D5B8u;
label_42d5b8:
    // 0x42d5b8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x42d5b8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_42d5bc:
    // 0x42d5bc: 0xdfbf0680  ld          $ra, 0x680($sp)
    ctx->pc = 0x42d5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_42d5c0:
    // 0x42d5c0: 0xdfbe0670  ld          $fp, 0x670($sp)
    ctx->pc = 0x42d5c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_42d5c4:
    // 0x42d5c4: 0xdfb70660  ld          $s7, 0x660($sp)
    ctx->pc = 0x42d5c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_42d5c8:
    // 0x42d5c8: 0xdfb60650  ld          $s6, 0x650($sp)
    ctx->pc = 0x42d5c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
label_42d5cc:
    // 0x42d5cc: 0xdfb50640  ld          $s5, 0x640($sp)
    ctx->pc = 0x42d5ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_42d5d0:
    // 0x42d5d0: 0xdfb40630  ld          $s4, 0x630($sp)
    ctx->pc = 0x42d5d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_42d5d4:
    // 0x42d5d4: 0xdfb30620  ld          $s3, 0x620($sp)
    ctx->pc = 0x42d5d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
label_42d5d8:
    // 0x42d5d8: 0xdfb20610  ld          $s2, 0x610($sp)
    ctx->pc = 0x42d5d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_42d5dc:
    // 0x42d5dc: 0xdfb10600  ld          $s1, 0x600($sp)
    ctx->pc = 0x42d5dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_42d5e0:
    // 0x42d5e0: 0xdfb005f0  ld          $s0, 0x5F0($sp)
    ctx->pc = 0x42d5e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1520)));
label_42d5e4:
    // 0x42d5e4: 0xc7bf06e8  lwc1        $f31, 0x6E8($sp)
    ctx->pc = 0x42d5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_42d5e8:
    // 0x42d5e8: 0xc7be06e0  lwc1        $f30, 0x6E0($sp)
    ctx->pc = 0x42d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_42d5ec:
    // 0x42d5ec: 0xc7bd06d8  lwc1        $f29, 0x6D8($sp)
    ctx->pc = 0x42d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_42d5f0:
    // 0x42d5f0: 0xc7bc06d0  lwc1        $f28, 0x6D0($sp)
    ctx->pc = 0x42d5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_42d5f4:
    // 0x42d5f4: 0xc7bb06c8  lwc1        $f27, 0x6C8($sp)
    ctx->pc = 0x42d5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_42d5f8:
    // 0x42d5f8: 0xc7ba06c0  lwc1        $f26, 0x6C0($sp)
    ctx->pc = 0x42d5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_42d5fc:
    // 0x42d5fc: 0xc7b906b8  lwc1        $f25, 0x6B8($sp)
    ctx->pc = 0x42d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_42d600:
    // 0x42d600: 0xc7b806b0  lwc1        $f24, 0x6B0($sp)
    ctx->pc = 0x42d600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_42d604:
    // 0x42d604: 0xc7b706a8  lwc1        $f23, 0x6A8($sp)
    ctx->pc = 0x42d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_42d608:
    // 0x42d608: 0xc7b606a0  lwc1        $f22, 0x6A0($sp)
    ctx->pc = 0x42d608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_42d60c:
    // 0x42d60c: 0xc7b50698  lwc1        $f21, 0x698($sp)
    ctx->pc = 0x42d60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_42d610:
    // 0x42d610: 0xc7b40690  lwc1        $f20, 0x690($sp)
    ctx->pc = 0x42d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_42d614:
    // 0x42d614: 0x3e00008  jr          $ra
label_42d618:
    if (ctx->pc == 0x42D618u) {
        ctx->pc = 0x42D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D614u;
        // 0x42d618: 0x27bd06f0  addiu       $sp, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D61Cu;
        goto label_42d61c;
    }
    ctx->pc = 0x42D614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D614u;
        // 0x42d618: 0x27bd06f0  addiu       $sp, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42D61Cu;
label_42d61c:
    // 0x42d61c: 0x0  nop
    ctx->pc = 0x42d61cu;
    // NOP
label_42d620:
    // 0x42d620: 0x27bdf900  addiu       $sp, $sp, -0x700
    ctx->pc = 0x42d620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965504));
label_42d624:
    // 0x42d624: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42d624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42d628:
    // 0x42d628: 0xffbe0680  sd          $fp, 0x680($sp)
    ctx->pc = 0x42d628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 30));
label_42d62c:
    // 0x42d62c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x42d62cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_42d630:
    // 0x42d630: 0xffbf0690  sd          $ra, 0x690($sp)
    ctx->pc = 0x42d630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
label_42d634:
    // 0x42d634: 0xffb70670  sd          $s7, 0x670($sp)
    ctx->pc = 0x42d634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 23));
label_42d638:
    // 0x42d638: 0xffb60660  sd          $s6, 0x660($sp)
    ctx->pc = 0x42d638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 22));
label_42d63c:
    // 0x42d63c: 0xffb50650  sd          $s5, 0x650($sp)
    ctx->pc = 0x42d63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 21));
label_42d640:
    // 0x42d640: 0xffb40640  sd          $s4, 0x640($sp)
    ctx->pc = 0x42d640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 20));
label_42d644:
    // 0x42d644: 0xffb30630  sd          $s3, 0x630($sp)
    ctx->pc = 0x42d644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 19));
label_42d648:
    // 0x42d648: 0xffb20620  sd          $s2, 0x620($sp)
    ctx->pc = 0x42d648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 18));
label_42d64c:
    // 0x42d64c: 0xffb10610  sd          $s1, 0x610($sp)
    ctx->pc = 0x42d64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 17));
label_42d650:
    // 0x42d650: 0xffb00600  sd          $s0, 0x600($sp)
    ctx->pc = 0x42d650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 16));
label_42d654:
    // 0x42d654: 0xe7bf06f8  swc1        $f31, 0x6F8($sp)
    ctx->pc = 0x42d654u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_42d658:
    // 0x42d658: 0xe7be06f0  swc1        $f30, 0x6F0($sp)
    ctx->pc = 0x42d658u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_42d65c:
    // 0x42d65c: 0xe7bd06e8  swc1        $f29, 0x6E8($sp)
    ctx->pc = 0x42d65cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_42d660:
    // 0x42d660: 0xe7bc06e0  swc1        $f28, 0x6E0($sp)
    ctx->pc = 0x42d660u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1760), bits); }
label_42d664:
    // 0x42d664: 0xe7bb06d8  swc1        $f27, 0x6D8($sp)
    ctx->pc = 0x42d664u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1752), bits); }
label_42d668:
    // 0x42d668: 0xe7ba06d0  swc1        $f26, 0x6D0($sp)
    ctx->pc = 0x42d668u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1744), bits); }
label_42d66c:
    // 0x42d66c: 0xe7b906c8  swc1        $f25, 0x6C8($sp)
    ctx->pc = 0x42d66cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1736), bits); }
label_42d670:
    // 0x42d670: 0xe7b806c0  swc1        $f24, 0x6C0($sp)
    ctx->pc = 0x42d670u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
label_42d674:
    // 0x42d674: 0xe7b706b8  swc1        $f23, 0x6B8($sp)
    ctx->pc = 0x42d674u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_42d678:
    // 0x42d678: 0xe7b606b0  swc1        $f22, 0x6B0($sp)
    ctx->pc = 0x42d678u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_42d67c:
    // 0x42d67c: 0xe7b506a8  swc1        $f21, 0x6A8($sp)
    ctx->pc = 0x42d67cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_42d680:
    // 0x42d680: 0xe7b406a0  swc1        $f20, 0x6A0($sp)
    ctx->pc = 0x42d680u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_42d684:
    // 0x42d684: 0xafc405e4  sw          $a0, 0x5E4($fp)
    ctx->pc = 0x42d684u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1508), GPR_U32(ctx, 4));
label_42d688:
    // 0x42d688: 0x8c6254c8  lw          $v0, 0x54C8($v1)
    ctx->pc = 0x42d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21704)));
label_42d68c:
    // 0x42d68c: 0x40f809  jalr        $v0
label_42d690:
    if (ctx->pc == 0x42D690u) {
        ctx->pc = 0x42D694u;
        goto label_42d694;
    }
    ctx->pc = 0x42D68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42D694u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D68Cu, 0x42D694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42D694u;
label_42d694:
    // 0x42d694: 0xafc205e8  sw          $v0, 0x5E8($fp)
    ctx->pc = 0x42d694u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1512), GPR_U32(ctx, 2));
label_42d698:
    // 0x42d698: 0x27c202f0  addiu       $v0, $fp, 0x2F0
    ctx->pc = 0x42d698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 752));
label_42d69c:
    // 0x42d69c: 0x8fc305e8  lw          $v1, 0x5E8($fp)
    ctx->pc = 0x42d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_42d6a0:
    // 0x42d6a0: 0xafc205ec  sw          $v0, 0x5EC($fp)
    ctx->pc = 0x42d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 2));
label_42d6a4:
    // 0x42d6a4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x42d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_42d6a8:
    // 0x42d6a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_42d6ac:
    if (ctx->pc == 0x42D6ACu) {
        ctx->pc = 0x42D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D6A8u;
        // 0x42d6ac: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D6B0u;
        goto label_42d6b0;
    }
    ctx->pc = 0x42D6A8u;
    {
        const bool branch_taken_0x42d6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D6A8u;
        // 0x42d6ac: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d6a8) {
            ctx->pc = 0x42D6B8u;
            goto label_42d6b8;
        }
    }
    ctx->pc = 0x42D6B0u;
label_42d6b0:
    // 0x42d6b0: 0xc10b22a  jal         func_42C8A8
label_42d6b4:
    if (ctx->pc == 0x42D6B4u) {
        ctx->pc = 0x42D6B8u;
        goto label_42d6b8;
    }
    ctx->pc = 0x42D6B0u;
    SET_GPR_U32(ctx, 31, 0x42D6B8u);
    ctx->pc = 0x42C8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C8A8u, 0x42D6B0u, 0x42D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D6B8u;
label_42d6b8:
    // 0x42d6b8: 0x8fc605e4  lw          $a2, 0x5E4($fp)
    ctx->pc = 0x42d6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_42d6bc:
    // 0x42d6bc: 0x27c705e0  addiu       $a3, $fp, 0x5E0
    ctx->pc = 0x42d6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_42d6c0:
    // 0x42d6c0: 0x8fc505e8  lw          $a1, 0x5E8($fp)
    ctx->pc = 0x42d6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_42d6c4:
    // 0x42d6c4: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x42d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_42d6c8:
    // 0x42d6c8: 0xafc705f0  sw          $a3, 0x5F0($fp)
    ctx->pc = 0x42d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1520), GPR_U32(ctx, 7));
    ctx->pc = 0x42d6ccu;
}
