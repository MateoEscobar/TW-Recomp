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

// Function: sub_0030D3B8
// Address: 0x30d3b8 - 0x30d6d4
void sub_0030D3B8_0x30d3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D3B8_0x30d3b8");
#endif

    switch (ctx->pc) {
        case 0x30d3b8u: goto label_30d3b8;
        case 0x30d3bcu: goto label_30d3bc;
        case 0x30d3c0u: goto label_30d3c0;
        case 0x30d3c4u: goto label_30d3c4;
        case 0x30d3c8u: goto label_30d3c8;
        case 0x30d3ccu: goto label_30d3cc;
        case 0x30d3d0u: goto label_30d3d0;
        case 0x30d3d4u: goto label_30d3d4;
        case 0x30d3d8u: goto label_30d3d8;
        case 0x30d3dcu: goto label_30d3dc;
        case 0x30d3e0u: goto label_30d3e0;
        case 0x30d3e4u: goto label_30d3e4;
        case 0x30d3e8u: goto label_30d3e8;
        case 0x30d3ecu: goto label_30d3ec;
        case 0x30d3f0u: goto label_30d3f0;
        case 0x30d3f4u: goto label_30d3f4;
        case 0x30d3f8u: goto label_30d3f8;
        case 0x30d3fcu: goto label_30d3fc;
        case 0x30d400u: goto label_30d400;
        case 0x30d404u: goto label_30d404;
        case 0x30d408u: goto label_30d408;
        case 0x30d40cu: goto label_30d40c;
        case 0x30d410u: goto label_30d410;
        case 0x30d414u: goto label_30d414;
        case 0x30d418u: goto label_30d418;
        case 0x30d41cu: goto label_30d41c;
        case 0x30d420u: goto label_30d420;
        case 0x30d424u: goto label_30d424;
        case 0x30d428u: goto label_30d428;
        case 0x30d42cu: goto label_30d42c;
        case 0x30d430u: goto label_30d430;
        case 0x30d434u: goto label_30d434;
        case 0x30d438u: goto label_30d438;
        case 0x30d43cu: goto label_30d43c;
        case 0x30d440u: goto label_30d440;
        case 0x30d444u: goto label_30d444;
        case 0x30d448u: goto label_30d448;
        case 0x30d44cu: goto label_30d44c;
        case 0x30d450u: goto label_30d450;
        case 0x30d454u: goto label_30d454;
        case 0x30d458u: goto label_30d458;
        case 0x30d45cu: goto label_30d45c;
        case 0x30d460u: goto label_30d460;
        case 0x30d464u: goto label_30d464;
        case 0x30d468u: goto label_30d468;
        case 0x30d46cu: goto label_30d46c;
        case 0x30d470u: goto label_30d470;
        case 0x30d474u: goto label_30d474;
        case 0x30d478u: goto label_30d478;
        case 0x30d47cu: goto label_30d47c;
        case 0x30d480u: goto label_30d480;
        case 0x30d484u: goto label_30d484;
        case 0x30d488u: goto label_30d488;
        case 0x30d48cu: goto label_30d48c;
        case 0x30d490u: goto label_30d490;
        case 0x30d494u: goto label_30d494;
        case 0x30d498u: goto label_30d498;
        case 0x30d49cu: goto label_30d49c;
        case 0x30d4a0u: goto label_30d4a0;
        case 0x30d4a4u: goto label_30d4a4;
        case 0x30d4a8u: goto label_30d4a8;
        case 0x30d4acu: goto label_30d4ac;
        case 0x30d4b0u: goto label_30d4b0;
        case 0x30d4b4u: goto label_30d4b4;
        case 0x30d4b8u: goto label_30d4b8;
        case 0x30d4bcu: goto label_30d4bc;
        case 0x30d4c0u: goto label_30d4c0;
        case 0x30d4c4u: goto label_30d4c4;
        case 0x30d4c8u: goto label_30d4c8;
        case 0x30d4ccu: goto label_30d4cc;
        case 0x30d4d0u: goto label_30d4d0;
        case 0x30d4d4u: goto label_30d4d4;
        case 0x30d4d8u: goto label_30d4d8;
        case 0x30d4dcu: goto label_30d4dc;
        case 0x30d4e0u: goto label_30d4e0;
        case 0x30d4e4u: goto label_30d4e4;
        case 0x30d4e8u: goto label_30d4e8;
        case 0x30d4ecu: goto label_30d4ec;
        case 0x30d4f0u: goto label_30d4f0;
        case 0x30d4f4u: goto label_30d4f4;
        case 0x30d4f8u: goto label_30d4f8;
        case 0x30d4fcu: goto label_30d4fc;
        case 0x30d500u: goto label_30d500;
        case 0x30d504u: goto label_30d504;
        case 0x30d508u: goto label_30d508;
        case 0x30d50cu: goto label_30d50c;
        case 0x30d510u: goto label_30d510;
        case 0x30d514u: goto label_30d514;
        case 0x30d518u: goto label_30d518;
        case 0x30d51cu: goto label_30d51c;
        case 0x30d520u: goto label_30d520;
        case 0x30d524u: goto label_30d524;
        case 0x30d528u: goto label_30d528;
        case 0x30d52cu: goto label_30d52c;
        case 0x30d530u: goto label_30d530;
        case 0x30d534u: goto label_30d534;
        case 0x30d538u: goto label_30d538;
        case 0x30d53cu: goto label_30d53c;
        case 0x30d540u: goto label_30d540;
        case 0x30d544u: goto label_30d544;
        case 0x30d548u: goto label_30d548;
        case 0x30d54cu: goto label_30d54c;
        case 0x30d550u: goto label_30d550;
        case 0x30d554u: goto label_30d554;
        case 0x30d558u: goto label_30d558;
        case 0x30d55cu: goto label_30d55c;
        case 0x30d560u: goto label_30d560;
        case 0x30d564u: goto label_30d564;
        case 0x30d568u: goto label_30d568;
        case 0x30d56cu: goto label_30d56c;
        case 0x30d570u: goto label_30d570;
        case 0x30d574u: goto label_30d574;
        case 0x30d578u: goto label_30d578;
        case 0x30d57cu: goto label_30d57c;
        case 0x30d580u: goto label_30d580;
        case 0x30d584u: goto label_30d584;
        case 0x30d588u: goto label_30d588;
        case 0x30d58cu: goto label_30d58c;
        case 0x30d590u: goto label_30d590;
        case 0x30d594u: goto label_30d594;
        case 0x30d598u: goto label_30d598;
        case 0x30d59cu: goto label_30d59c;
        case 0x30d5a0u: goto label_30d5a0;
        case 0x30d5a4u: goto label_30d5a4;
        case 0x30d5a8u: goto label_30d5a8;
        case 0x30d5acu: goto label_30d5ac;
        case 0x30d5b0u: goto label_30d5b0;
        case 0x30d5b4u: goto label_30d5b4;
        case 0x30d5b8u: goto label_30d5b8;
        case 0x30d5bcu: goto label_30d5bc;
        case 0x30d5c0u: goto label_30d5c0;
        case 0x30d5c4u: goto label_30d5c4;
        case 0x30d5c8u: goto label_30d5c8;
        case 0x30d5ccu: goto label_30d5cc;
        case 0x30d5d0u: goto label_30d5d0;
        case 0x30d5d4u: goto label_30d5d4;
        case 0x30d5d8u: goto label_30d5d8;
        case 0x30d5dcu: goto label_30d5dc;
        case 0x30d5e0u: goto label_30d5e0;
        case 0x30d5e4u: goto label_30d5e4;
        case 0x30d5e8u: goto label_30d5e8;
        case 0x30d5ecu: goto label_30d5ec;
        case 0x30d5f0u: goto label_30d5f0;
        case 0x30d5f4u: goto label_30d5f4;
        case 0x30d5f8u: goto label_30d5f8;
        case 0x30d5fcu: goto label_30d5fc;
        case 0x30d600u: goto label_30d600;
        case 0x30d604u: goto label_30d604;
        case 0x30d608u: goto label_30d608;
        case 0x30d60cu: goto label_30d60c;
        case 0x30d610u: goto label_30d610;
        case 0x30d614u: goto label_30d614;
        case 0x30d618u: goto label_30d618;
        case 0x30d61cu: goto label_30d61c;
        case 0x30d620u: goto label_30d620;
        case 0x30d624u: goto label_30d624;
        case 0x30d628u: goto label_30d628;
        case 0x30d62cu: goto label_30d62c;
        case 0x30d630u: goto label_30d630;
        case 0x30d634u: goto label_30d634;
        case 0x30d638u: goto label_30d638;
        case 0x30d63cu: goto label_30d63c;
        case 0x30d640u: goto label_30d640;
        case 0x30d644u: goto label_30d644;
        case 0x30d648u: goto label_30d648;
        case 0x30d64cu: goto label_30d64c;
        case 0x30d650u: goto label_30d650;
        case 0x30d654u: goto label_30d654;
        case 0x30d658u: goto label_30d658;
        case 0x30d65cu: goto label_30d65c;
        case 0x30d660u: goto label_30d660;
        case 0x30d664u: goto label_30d664;
        case 0x30d668u: goto label_30d668;
        case 0x30d66cu: goto label_30d66c;
        case 0x30d670u: goto label_30d670;
        case 0x30d674u: goto label_30d674;
        case 0x30d678u: goto label_30d678;
        case 0x30d67cu: goto label_30d67c;
        case 0x30d680u: goto label_30d680;
        case 0x30d684u: goto label_30d684;
        case 0x30d688u: goto label_30d688;
        case 0x30d68cu: goto label_30d68c;
        case 0x30d690u: goto label_30d690;
        case 0x30d694u: goto label_30d694;
        case 0x30d698u: goto label_30d698;
        case 0x30d69cu: goto label_30d69c;
        case 0x30d6a0u: goto label_30d6a0;
        case 0x30d6a4u: goto label_30d6a4;
        case 0x30d6a8u: goto label_30d6a8;
        case 0x30d6acu: goto label_30d6ac;
        case 0x30d6b0u: goto label_30d6b0;
        case 0x30d6b4u: goto label_30d6b4;
        case 0x30d6b8u: goto label_30d6b8;
        case 0x30d6bcu: goto label_30d6bc;
        case 0x30d6c0u: goto label_30d6c0;
        case 0x30d6c4u: goto label_30d6c4;
        case 0x30d6c8u: goto label_30d6c8;
        case 0x30d6ccu: goto label_30d6cc;
        case 0x30d6d0u: goto label_30d6d0;
        default: break;
    }

    ctx->pc = 0x30d3b8u;

label_30d3b8:
    // 0x30d3b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30d3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_30d3bc:
    // 0x30d3bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30d3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_30d3c0:
    // 0x30d3c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30d3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30d3c4:
    // 0x30d3c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x30d3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_30d3c8:
    // 0x30d3c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30d3c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30d3cc:
    // 0x30d3cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30d3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_30d3d0:
    // 0x30d3d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x30d3d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30d3d4:
    // 0x30d3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30d3d8:
    // 0x30d3d8: 0xc08a61a  jal         func_229868
label_30d3dc:
    if (ctx->pc == 0x30D3DCu) {
        ctx->pc = 0x30D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D3D8u;
        // 0x30d3dc: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D3E0u;
        goto label_30d3e0;
    }
    ctx->pc = 0x30D3D8u;
    SET_GPR_U32(ctx, 31, 0x30D3E0u);
    ctx->pc = 0x30D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D3D8u;
    // 0x30d3dc: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30D3D8u, 0x30D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D3E0u;
label_30d3e0:
    // 0x30d3e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30d3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d3e4:
    // 0x30d3e4: 0x120000bc  beqz        $s0, . + 4 + (0xBC << 2)
label_30d3e8:
    if (ctx->pc == 0x30D3E8u) {
        ctx->pc = 0x30D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D3E4u;
        // 0x30d3e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D3ECu;
        goto label_30d3ec;
    }
    ctx->pc = 0x30D3E4u;
    {
        const bool branch_taken_0x30d3e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D3E4u;
        // 0x30d3e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d3e4) {
            ctx->pc = 0x30D6D8u;
            return;
        }
    }
    ctx->pc = 0x30D3ECu;
label_30d3ec:
    // 0x30d3ec: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x30d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_30d3f0:
    // 0x30d3f0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x30d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30d3f4:
    // 0x30d3f4: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x30d3f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_30d3f8:
    // 0x30d3f8: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
label_30d3fc:
    if (ctx->pc == 0x30D3FCu) {
        ctx->pc = 0x30D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D3F8u;
        // 0x30d3fc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D400u;
        goto label_30d400;
    }
    ctx->pc = 0x30D3F8u;
    {
        const bool branch_taken_0x30d3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D3F8u;
        // 0x30d3fc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d3f8) {
            ctx->pc = 0x30D6D4u;
            return;
        }
    }
    ctx->pc = 0x30D400u;
label_30d400:
    // 0x30d400: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30d400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30d404:
    // 0x30d404: 0x2442c9e0  addiu       $v0, $v0, -0x3620
    ctx->pc = 0x30d404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953440));
label_30d408:
    // 0x30d408: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30d408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30d40c:
    // 0x30d40c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30d410:
    // 0x30d410: 0x800008  jr          $a0
label_30d414:
    if (ctx->pc == 0x30D414u) {
        ctx->pc = 0x30D418u;
        goto label_30d418;
    }
    ctx->pc = 0x30D410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30D418u: goto label_30d418;
            case 0x30D424u: goto label_30d424;
            case 0x30D434u: goto label_30d434;
            case 0x30D45Cu: goto label_30d45c;
            case 0x30D4ACu: goto label_30d4ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D410u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30D418u;
label_30d418:
    // 0x30d418: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x30d418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_30d41c:
    // 0x30d41c: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_30d420:
    if (ctx->pc == 0x30D420u) {
        ctx->pc = 0x30D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D41Cu;
        // 0x30d420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D424u;
        goto label_30d424;
    }
    ctx->pc = 0x30D41Cu;
    {
        const bool branch_taken_0x30d41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D41Cu;
        // 0x30d420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d41c) {
            ctx->pc = 0x30D6C4u;
            goto label_30d6c4;
        }
    }
    ctx->pc = 0x30D424u;
label_30d424:
    // 0x30d424: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x30d424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_30d428:
    // 0x30d428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d42c:
    // 0x30d42c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_30d430:
    if (ctx->pc == 0x30D430u) {
        ctx->pc = 0x30D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D42Cu;
        // 0x30d430: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D434u;
        goto label_30d434;
    }
    ctx->pc = 0x30D42Cu;
    {
        const bool branch_taken_0x30d42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30d42c) {
            ctx->pc = 0x30D430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D42Cu;
            // 0x30d430: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D448u;
            goto label_30d448;
        }
    }
    ctx->pc = 0x30D434u;
label_30d434:
    // 0x30d434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30d434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30d438:
    // 0x30d438: 0xc0c33ae  jal         func_30CEB8
label_30d43c:
    if (ctx->pc == 0x30D43Cu) {
        ctx->pc = 0x30D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D438u;
        // 0x30d43c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D440u;
        goto label_30d440;
    }
    ctx->pc = 0x30D438u;
    SET_GPR_U32(ctx, 31, 0x30D440u);
    ctx->pc = 0x30D43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D438u;
    // 0x30d43c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CEB8u, 0x30D438u, 0x30D440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D440u;
label_30d440:
    // 0x30d440: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_30d444:
    if (ctx->pc == 0x30D444u) {
        ctx->pc = 0x30D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D440u;
        // 0x30d444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D448u;
        goto label_30d448;
    }
    ctx->pc = 0x30D440u;
    {
        const bool branch_taken_0x30d440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D440u;
        // 0x30d444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d440) {
            ctx->pc = 0x30D6D8u;
            return;
        }
    }
    ctx->pc = 0x30D448u;
label_30d448:
    // 0x30d448: 0x144000a3  bnez        $v0, . + 4 + (0xA3 << 2)
label_30d44c:
    if (ctx->pc == 0x30D44Cu) {
        ctx->pc = 0x30D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D448u;
        // 0x30d44c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D450u;
        goto label_30d450;
    }
    ctx->pc = 0x30D448u;
    {
        const bool branch_taken_0x30d448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D448u;
        // 0x30d44c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d448) {
            ctx->pc = 0x30D6D8u;
            return;
        }
    }
    ctx->pc = 0x30D450u;
label_30d450:
    // 0x30d450: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x30d450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_30d454:
    // 0x30d454: 0x1000009b  b           . + 4 + (0x9B << 2)
label_30d458:
    if (ctx->pc == 0x30D458u) {
        ctx->pc = 0x30D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D454u;
        // 0x30d458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D45Cu;
        goto label_30d45c;
    }
    ctx->pc = 0x30D454u;
    {
        const bool branch_taken_0x30d454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D454u;
        // 0x30d458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d454) {
            ctx->pc = 0x30D6C4u;
            goto label_30d6c4;
        }
    }
    ctx->pc = 0x30D45Cu;
label_30d45c:
    // 0x30d45c: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x30d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_30d460:
    // 0x30d460: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x30d460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_30d464:
    // 0x30d464: 0x1462009c  bne         $v1, $v0, . + 4 + (0x9C << 2)
label_30d468:
    if (ctx->pc == 0x30D468u) {
        ctx->pc = 0x30D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D464u;
        // 0x30d468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D46Cu;
        goto label_30d46c;
    }
    ctx->pc = 0x30D464u;
    {
        const bool branch_taken_0x30d464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D464u;
        // 0x30d468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d464) {
            ctx->pc = 0x30D6D8u;
            return;
        }
    }
    ctx->pc = 0x30D46Cu;
label_30d46c:
    // 0x30d46c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d470:
    // 0x30d470: 0xc089f4a  jal         func_227D28
label_30d474:
    if (ctx->pc == 0x30D474u) {
        ctx->pc = 0x30D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D470u;
        // 0x30d474: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D478u;
        goto label_30d478;
    }
    ctx->pc = 0x30D470u;
    SET_GPR_U32(ctx, 31, 0x30D478u);
    ctx->pc = 0x30D474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D470u;
    // 0x30d474: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x30D470u, 0x30D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D478u;
label_30d478:
    // 0x30d478: 0x10510097  beq         $v0, $s1, . + 4 + (0x97 << 2)
label_30d47c:
    if (ctx->pc == 0x30D47Cu) {
        ctx->pc = 0x30D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D478u;
        // 0x30d47c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D480u;
        goto label_30d480;
    }
    ctx->pc = 0x30D478u;
    {
        const bool branch_taken_0x30d478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D478u;
        // 0x30d47c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d478) {
            ctx->pc = 0x30D6D8u;
            return;
        }
    }
    ctx->pc = 0x30D480u;
label_30d480:
    // 0x30d480: 0xc0899ae  jal         func_2266B8
label_30d484:
    if (ctx->pc == 0x30D484u) {
        ctx->pc = 0x30D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D480u;
        // 0x30d484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D488u;
        goto label_30d488;
    }
    ctx->pc = 0x30D480u;
    SET_GPR_U32(ctx, 31, 0x30D488u);
    ctx->pc = 0x30D484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D480u;
    // 0x30d484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x30D480u, 0x30D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D488u;
label_30d488:
    // 0x30d488: 0x24030299  addiu       $v1, $zero, 0x299
    ctx->pc = 0x30d488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
label_30d48c:
    // 0x30d48c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_30d490:
    if (ctx->pc == 0x30D490u) {
        ctx->pc = 0x30D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D48Cu;
        // 0x30d490: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D494u;
        goto label_30d494;
    }
    ctx->pc = 0x30D48Cu;
    {
        const bool branch_taken_0x30d48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x30D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D48Cu;
        // 0x30d490: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d48c) {
            ctx->pc = 0x30D4ACu;
            goto label_30d4ac;
        }
    }
    ctx->pc = 0x30D494u;
label_30d494:
    // 0x30d494: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x30d494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_30d498:
    // 0x30d498: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x30d498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_30d49c:
    // 0x30d49c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_30d4a0:
    // 0x30d4a0: 0x8c4377a0  lw          $v1, 0x77A0($v0)
    ctx->pc = 0x30d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30624)));
label_30d4a4:
    // 0x30d4a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_30d4a8:
    if (ctx->pc == 0x30D4A8u) {
        ctx->pc = 0x30D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4A4u;
        // 0x30d4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D4ACu;
        goto label_30d4ac;
    }
    ctx->pc = 0x30D4A4u;
    {
        const bool branch_taken_0x30d4a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4A4u;
        // 0x30d4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4a4) {
            ctx->pc = 0x30D4B4u;
            goto label_30d4b4;
        }
    }
    ctx->pc = 0x30D4ACu;
label_30d4ac:
    // 0x30d4ac: 0x1000008a  b           . + 4 + (0x8A << 2)
label_30d4b0:
    if (ctx->pc == 0x30D4B0u) {
        ctx->pc = 0x30D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4ACu;
        // 0x30d4b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D4B4u;
        goto label_30d4b4;
    }
    ctx->pc = 0x30D4ACu;
    {
        const bool branch_taken_0x30d4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4ACu;
        // 0x30d4b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4ac) {
            ctx->pc = 0x30D6D8u;
            return;
        }
    }
    ctx->pc = 0x30D4B4u;
label_30d4b4:
    // 0x30d4b4: 0xc087b0e  jal         func_21EC38
label_30d4b8:
    if (ctx->pc == 0x30D4B8u) {
        ctx->pc = 0x30D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4B4u;
        // 0x30d4b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D4BCu;
        goto label_30d4bc;
    }
    ctx->pc = 0x30D4B4u;
    SET_GPR_U32(ctx, 31, 0x30D4BCu);
    ctx->pc = 0x30D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4B4u;
    // 0x30d4b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x30D4B4u, 0x30D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4BCu;
label_30d4bc:
    // 0x30d4bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30d4c0:
    // 0x30d4c0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x30d4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_30d4c4:
    // 0x30d4c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30d4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30d4c8:
    // 0x30d4c8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x30d4c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_30d4cc:
    // 0x30d4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d4d0:
    // 0x30d4d0: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x30d4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_30d4d4:
    // 0x30d4d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30d4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d4d8:
    // 0x30d4d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30d4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d4dc:
    // 0x30d4dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30d4dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d4e0:
    // 0x30d4e0: 0xc088178  jal         func_2205E0
label_30d4e4:
    if (ctx->pc == 0x30D4E4u) {
        ctx->pc = 0x30D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4E0u;
        // 0x30d4e4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D4E8u;
        goto label_30d4e8;
    }
    ctx->pc = 0x30D4E0u;
    SET_GPR_U32(ctx, 31, 0x30D4E8u);
    ctx->pc = 0x30D4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4E0u;
    // 0x30d4e4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x30D4E0u, 0x30D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4E8u;
label_30d4e8:
    // 0x30d4e8: 0x9243003d  lbu         $v1, 0x3D($s2)
    ctx->pc = 0x30d4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
label_30d4ec:
    // 0x30d4ec: 0x14710020  bne         $v1, $s1, . + 4 + (0x20 << 2)
label_30d4f0:
    if (ctx->pc == 0x30D4F0u) {
        ctx->pc = 0x30D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4ECu;
        // 0x30d4f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D4F4u;
        goto label_30d4f4;
    }
    ctx->pc = 0x30D4ECu;
    {
        const bool branch_taken_0x30d4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x30D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4ECu;
        // 0x30d4f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4ec) {
            ctx->pc = 0x30D570u;
            goto label_30d570;
        }
    }
    ctx->pc = 0x30D4F4u;
label_30d4f4:
    // 0x30d4f4: 0xc088bbc  jal         func_222EF0
label_30d4f8:
    if (ctx->pc == 0x30D4F8u) {
        ctx->pc = 0x30D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4F4u;
        // 0x30d4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D4FCu;
        goto label_30d4fc;
    }
    ctx->pc = 0x30D4F4u;
    SET_GPR_U32(ctx, 31, 0x30D4FCu);
    ctx->pc = 0x30D4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4F4u;
    // 0x30d4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x30D4F4u, 0x30D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4FCu;
label_30d4fc:
    // 0x30d4fc: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x30d4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_30d500:
    // 0x30d500: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30d500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30d504:
    // 0x30d504: 0x0  nop
    ctx->pc = 0x30d504u;
    // NOP
label_30d508:
    // 0x30d508: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x30d508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30d50c:
    // 0x30d50c: 0x0  nop
    ctx->pc = 0x30d50cu;
    // NOP
label_30d510:
    // 0x30d510: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
label_30d514:
    if (ctx->pc == 0x30D514u) {
        ctx->pc = 0x30D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D510u;
        // 0x30d514: 0x9243003d  lbu         $v1, 0x3D($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D518u;
        goto label_30d518;
    }
    ctx->pc = 0x30D510u;
    {
        const bool branch_taken_0x30d510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30d510) {
            ctx->pc = 0x30D514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D510u;
            // 0x30d514: 0x9243003d  lbu         $v1, 0x3D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D56Cu;
            goto label_30d56c;
        }
    }
    ctx->pc = 0x30D518u;
label_30d518:
    // 0x30d518: 0xc088ba0  jal         func_222E80
label_30d51c:
    if (ctx->pc == 0x30D51Cu) {
        ctx->pc = 0x30D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D518u;
        // 0x30d51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D520u;
        goto label_30d520;
    }
    ctx->pc = 0x30D518u;
    SET_GPR_U32(ctx, 31, 0x30D520u);
    ctx->pc = 0x30D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D518u;
    // 0x30d51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x30D518u, 0x30D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D520u;
label_30d520:
    // 0x30d520: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x30d520u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_30d524:
    // 0x30d524: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x30d524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_30d528:
    // 0x30d528: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x30d528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_30d52c:
    // 0x30d52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d530:
    // 0x30d530: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30d530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_30d534:
    // 0x30d534: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30d534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_30d538:
    // 0x30d538: 0xc088ef0  jal         func_223BC0
label_30d53c:
    if (ctx->pc == 0x30D53Cu) {
        ctx->pc = 0x30D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D538u;
        // 0x30d53c: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D540u;
        goto label_30d540;
    }
    ctx->pc = 0x30D538u;
    SET_GPR_U32(ctx, 31, 0x30D540u);
    ctx->pc = 0x30D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D538u;
    // 0x30d53c: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x30D538u, 0x30D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D540u;
label_30d540:
    // 0x30d540: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
label_30d544:
    if (ctx->pc == 0x30D544u) {
        ctx->pc = 0x30D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D540u;
        // 0x30d544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D548u;
        goto label_30d548;
    }
    ctx->pc = 0x30D540u;
    {
        const bool branch_taken_0x30d540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D540u;
        // 0x30d544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d540) {
            ctx->pc = 0x30D6D8u;
            return;
        }
    }
    ctx->pc = 0x30D548u;
label_30d548:
    // 0x30d548: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x30d548u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_30d54c:
    // 0x30d54c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x30d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_30d550:
    // 0x30d550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d554:
    // 0x30d554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30d554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d558:
    // 0x30d558: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30d558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_30d55c:
    // 0x30d55c: 0xc08bd96  jal         func_22F658
label_30d560:
    if (ctx->pc == 0x30D560u) {
        ctx->pc = 0x30D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D55Cu;
        // 0x30d560: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D564u;
        goto label_30d564;
    }
    ctx->pc = 0x30D55Cu;
    SET_GPR_U32(ctx, 31, 0x30D564u);
    ctx->pc = 0x30D560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D55Cu;
    // 0x30d560: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x30D55Cu, 0x30D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D564u;
label_30d564:
    // 0x30d564: 0x1000005c  b           . + 4 + (0x5C << 2)
label_30d568:
    if (ctx->pc == 0x30D568u) {
        ctx->pc = 0x30D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D564u;
        // 0x30d568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D56Cu;
        goto label_30d56c;
    }
    ctx->pc = 0x30D564u;
    {
        const bool branch_taken_0x30d564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D564u;
        // 0x30d568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d564) {
            ctx->pc = 0x30D6D8u;
            return;
        }
    }
    ctx->pc = 0x30D56Cu;
label_30d56c:
    // 0x30d56c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30d570:
    // 0x30d570: 0x54620048  bnel        $v1, $v0, . + 4 + (0x48 << 2)
label_30d574:
    if (ctx->pc == 0x30D574u) {
        ctx->pc = 0x30D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D570u;
        // 0x30d574: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D578u;
        goto label_30d578;
    }
    ctx->pc = 0x30D570u;
    {
        const bool branch_taken_0x30d570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30d570) {
            ctx->pc = 0x30D574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D570u;
            // 0x30d574: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D694u;
            goto label_30d694;
        }
    }
    ctx->pc = 0x30D578u;
label_30d578:
    // 0x30d578: 0xc088bbc  jal         func_222EF0
label_30d57c:
    if (ctx->pc == 0x30D57Cu) {
        ctx->pc = 0x30D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D578u;
        // 0x30d57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D580u;
        goto label_30d580;
    }
    ctx->pc = 0x30D578u;
    SET_GPR_U32(ctx, 31, 0x30D580u);
    ctx->pc = 0x30D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D578u;
    // 0x30d57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x30D578u, 0x30D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D580u;
label_30d580:
    // 0x30d580: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x30d580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_30d584:
    // 0x30d584: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30d584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30d588:
    // 0x30d588: 0x0  nop
    ctx->pc = 0x30d588u;
    // NOP
label_30d58c:
    // 0x30d58c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30d58cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30d590:
    // 0x30d590: 0x0  nop
    ctx->pc = 0x30d590u;
    // NOP
label_30d594:
    // 0x30d594: 0x4502003f  bc1fl       . + 4 + (0x3F << 2)
label_30d598:
    if (ctx->pc == 0x30D598u) {
        ctx->pc = 0x30D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D594u;
        // 0x30d598: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D59Cu;
        goto label_30d59c;
    }
    ctx->pc = 0x30D594u;
    {
        const bool branch_taken_0x30d594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30d594) {
            ctx->pc = 0x30D598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D594u;
            // 0x30d598: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D694u;
            goto label_30d694;
        }
    }
    ctx->pc = 0x30D59Cu;
label_30d59c:
    // 0x30d59c: 0xc087502  jal         func_21D408
label_30d5a0:
    if (ctx->pc == 0x30D5A0u) {
        ctx->pc = 0x30D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D59Cu;
        // 0x30d5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D5A4u;
        goto label_30d5a4;
    }
    ctx->pc = 0x30D59Cu;
    SET_GPR_U32(ctx, 31, 0x30D5A4u);
    ctx->pc = 0x30D5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D59Cu;
    // 0x30d5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30D59Cu, 0x30D5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5A4u;
label_30d5a4:
    // 0x30d5a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30d5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d5a8:
    // 0x30d5a8: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x30d5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_30d5ac:
    // 0x30d5ac: 0xc0a3658  jal         func_28D960
label_30d5b0:
    if (ctx->pc == 0x30D5B0u) {
        ctx->pc = 0x30D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5ACu;
        // 0x30d5b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D5B4u;
        goto label_30d5b4;
    }
    ctx->pc = 0x30D5ACu;
    SET_GPR_U32(ctx, 31, 0x30D5B4u);
    ctx->pc = 0x30D5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5ACu;
    // 0x30d5b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x30D5ACu, 0x30D5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5B4u;
label_30d5b4:
    // 0x30d5b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30d5b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d5b8:
    // 0x30d5b8: 0x4600047  bltz        $v1, . + 4 + (0x47 << 2)
label_30d5bc:
    if (ctx->pc == 0x30D5BCu) {
        ctx->pc = 0x30D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5B8u;
        // 0x30d5bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D5C0u;
        goto label_30d5c0;
    }
    ctx->pc = 0x30D5B8u;
    {
        const bool branch_taken_0x30d5b8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x30D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5B8u;
        // 0x30d5bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d5b8) {
            ctx->pc = 0x30D6D8u;
            return;
        }
    }
    ctx->pc = 0x30D5C0u;
label_30d5c0:
    // 0x30d5c0: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x30d5c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_30d5c4:
    // 0x30d5c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x30d5c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30d5c8:
    // 0x30d5c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_30d5cc:
    if (ctx->pc == 0x30D5CCu) {
        ctx->pc = 0x30D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5C8u;
        // 0x30d5cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D5D0u;
        goto label_30d5d0;
    }
    ctx->pc = 0x30D5C8u;
    {
        const bool branch_taken_0x30d5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5C8u;
        // 0x30d5cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d5c8) {
            ctx->pc = 0x30D5DCu;
            goto label_30d5dc;
        }
    }
    ctx->pc = 0x30D5D0u;
label_30d5d0:
    // 0x30d5d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30d5d4:
    // 0x30d5d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_30d5d8:
    // 0x30d5d8: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x30d5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_30d5dc:
    // 0x30d5dc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x30d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_30d5e0:
    // 0x30d5e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30d5e4:
    // 0x30d5e4: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_30d5e8:
    if (ctx->pc == 0x30D5E8u) {
        ctx->pc = 0x30D5ECu;
        goto label_30d5ec;
    }
    ctx->pc = 0x30D5E4u;
    {
        const bool branch_taken_0x30d5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30d5e4) {
            ctx->pc = 0x30D64Cu;
            goto label_30d64c;
        }
    }
    ctx->pc = 0x30D5ECu;
label_30d5ec:
    // 0x30d5ec: 0xc0bd4b2  jal         func_2F52C8
label_30d5f0:
    if (ctx->pc == 0x30D5F0u) {
        ctx->pc = 0x30D5F4u;
        goto label_30d5f4;
    }
    ctx->pc = 0x30D5ECu;
    SET_GPR_U32(ctx, 31, 0x30D5F4u);
    ctx->pc = 0x2F52C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F52C8u, 0x30D5ECu, 0x30D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5F4u;
label_30d5f4:
    // 0x30d5f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30d5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d5f8:
    // 0x30d5f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d5fc:
    // 0x30d5fc: 0x54820037  bnel        $a0, $v0, . + 4 + (0x37 << 2)
label_30d600:
    if (ctx->pc == 0x30D600u) {
        ctx->pc = 0x30D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5FCu;
        // 0x30d600: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D604u;
        goto label_30d604;
    }
    ctx->pc = 0x30D5FCu;
    {
        const bool branch_taken_0x30d5fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x30d5fc) {
            ctx->pc = 0x30D600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D5FCu;
            // 0x30d600: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D6DCu;
            return;
        }
    }
    ctx->pc = 0x30D604u;
label_30d604:
    // 0x30d604: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x30d604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_30d608:
    // 0x30d608: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x30d608u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_30d60c:
    // 0x30d60c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x30d60cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_30d610:
    // 0x30d610: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30d610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30d614:
    // 0x30d614: 0x14440030  bne         $v0, $a0, . + 4 + (0x30 << 2)
label_30d618:
    if (ctx->pc == 0x30D618u) {
        ctx->pc = 0x30D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D614u;
        // 0x30d618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D61Cu;
        goto label_30d61c;
    }
    ctx->pc = 0x30D614u;
    {
        const bool branch_taken_0x30d614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x30D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D614u;
        // 0x30d618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d614) {
            ctx->pc = 0x30D6D8u;
            return;
        }
    }
    ctx->pc = 0x30D61Cu;
label_30d61c:
    // 0x30d61c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x30d61cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_30d620:
    // 0x30d620: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x30d620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_30d624:
    // 0x30d624: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30d624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d628:
    // 0x30d628: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30d628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30d62c:
    // 0x30d62c: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x30d62cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_30d630:
    // 0x30d630: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x30d630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_30d634:
    // 0x30d634: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x30d634u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_30d638:
    // 0x30d638: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x30d638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_30d63c:
    // 0x30d63c: 0x40f809  jalr        $v0
label_30d640:
    if (ctx->pc == 0x30D640u) {
        ctx->pc = 0x30D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D63Cu;
        // 0x30d640: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D644u;
        goto label_30d644;
    }
    ctx->pc = 0x30D63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30D644u);
        ctx->pc = 0x30D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D63Cu;
        // 0x30d640: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D63Cu, 0x30D644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30D644u;
label_30d644:
    // 0x30d644: 0x10000024  b           . + 4 + (0x24 << 2)
label_30d648:
    if (ctx->pc == 0x30D648u) {
        ctx->pc = 0x30D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D644u;
        // 0x30d648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D64Cu;
        goto label_30d64c;
    }
    ctx->pc = 0x30D644u;
    {
        const bool branch_taken_0x30d644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D644u;
        // 0x30d648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d644) {
            ctx->pc = 0x30D6D8u;
            return;
        }
    }
    ctx->pc = 0x30D64Cu;
label_30d64c:
    // 0x30d64c: 0xc0bd4ac  jal         func_2F52B0
label_30d650:
    if (ctx->pc == 0x30D650u) {
        ctx->pc = 0x30D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D64Cu;
        // 0x30d650: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D654u;
        goto label_30d654;
    }
    ctx->pc = 0x30D64Cu;
    SET_GPR_U32(ctx, 31, 0x30D654u);
    ctx->pc = 0x30D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D64Cu;
    // 0x30d650: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F52B0u, 0x30D64Cu, 0x30D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D654u;
label_30d654:
    // 0x30d654: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x30d654u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_30d658:
    // 0x30d658: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x30d658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_30d65c:
    // 0x30d65c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x30d65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_30d660:
    // 0x30d660: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30d660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30d664:
    // 0x30d664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d668:
    // 0x30d668: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30d668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_30d66c:
    // 0x30d66c: 0xc088ba0  jal         func_222E80
label_30d670:
    if (ctx->pc == 0x30D670u) {
        ctx->pc = 0x30D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D66Cu;
        // 0x30d670: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D674u;
        goto label_30d674;
    }
    ctx->pc = 0x30D66Cu;
    SET_GPR_U32(ctx, 31, 0x30D674u);
    ctx->pc = 0x30D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D66Cu;
    // 0x30d670: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x30D66Cu, 0x30D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D674u;
label_30d674:
    // 0x30d674: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x30d674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_30d678:
    // 0x30d678: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x30d678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_30d67c:
    // 0x30d67c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30d67cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30d680:
    // 0x30d680: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30d680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30d684:
    // 0x30d684: 0x60f809  jalr        $v1
label_30d688:
    if (ctx->pc == 0x30D688u) {
        ctx->pc = 0x30D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D684u;
        // 0x30d688: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D68Cu;
        goto label_30d68c;
    }
    ctx->pc = 0x30D684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30D68Cu);
        ctx->pc = 0x30D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D684u;
        // 0x30d688: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D684u, 0x30D68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30D68Cu;
label_30d68c:
    // 0x30d68c: 0x10000012  b           . + 4 + (0x12 << 2)
label_30d690:
    if (ctx->pc == 0x30D690u) {
        ctx->pc = 0x30D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D68Cu;
        // 0x30d690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D694u;
        goto label_30d694;
    }
    ctx->pc = 0x30D68Cu;
    {
        const bool branch_taken_0x30d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D68Cu;
        // 0x30d690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d68c) {
            ctx->pc = 0x30D6D8u;
            return;
        }
    }
    ctx->pc = 0x30D694u;
label_30d694:
    // 0x30d694: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x30d694u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_30d698:
    // 0x30d698: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x30d698u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_30d69c:
    // 0x30d69c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_30d6a0:
    if (ctx->pc == 0x30D6A0u) {
        ctx->pc = 0x30D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D69Cu;
        // 0x30d6a0: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D6A4u;
        goto label_30d6a4;
    }
    ctx->pc = 0x30D69Cu;
    {
        const bool branch_taken_0x30d69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d69c) {
            ctx->pc = 0x30D6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D69Cu;
            // 0x30d6a0: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D6C0u;
            goto label_30d6c0;
        }
    }
    ctx->pc = 0x30D6A4u;
label_30d6a4:
    // 0x30d6a4: 0x9242003e  lbu         $v0, 0x3E($s2)
    ctx->pc = 0x30d6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
label_30d6a8:
    // 0x30d6a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30d6ac:
    // 0x30d6ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x30d6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30d6b0:
    // 0x30d6b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30d6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_30d6b4:
    // 0x30d6b4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_30d6b8:
    if (ctx->pc == 0x30D6B8u) {
        ctx->pc = 0x30D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6B4u;
        // 0x30d6b8: 0xa242003e  sb          $v0, 0x3E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 62), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D6BCu;
        goto label_30d6bc;
    }
    ctx->pc = 0x30D6B4u;
    {
        const bool branch_taken_0x30d6b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6B4u;
        // 0x30d6b8: 0xa242003e  sb          $v0, 0x3E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 62), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6b4) {
            ctx->pc = 0x30D6D4u;
            return;
        }
    }
    ctx->pc = 0x30D6BCu;
label_30d6bc:
    // 0x30d6bc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x30d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_30d6c0:
    // 0x30d6c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x30d6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_30d6c4:
    // 0x30d6c4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30d6c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30d6c8:
    // 0x30d6c8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30d6cc:
    // 0x30d6cc: 0x60f809  jalr        $v1
label_30d6d0:
    if (ctx->pc == 0x30D6D0u) {
        ctx->pc = 0x30D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6CCu;
        // 0x30d6d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D6D4u;
        goto label_fallthrough_0x30d6cc;
    }
    ctx->pc = 0x30D6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30D6D4u);
        ctx->pc = 0x30D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6CCu;
        // 0x30d6d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D6CCu, 0x30D6D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x30d6cc:
    ctx->pc = 0x30D6D4u;
}
