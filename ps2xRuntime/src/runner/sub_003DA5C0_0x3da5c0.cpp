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

// Function: sub_003DA5C0
// Address: 0x3da5c0 - 0x3da818
void sub_003DA5C0_0x3da5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA5C0_0x3da5c0");
#endif

    switch (ctx->pc) {
        case 0x3da5c0u: goto label_3da5c0;
        case 0x3da5c4u: goto label_3da5c4;
        case 0x3da5c8u: goto label_3da5c8;
        case 0x3da5ccu: goto label_3da5cc;
        case 0x3da5d0u: goto label_3da5d0;
        case 0x3da5d4u: goto label_3da5d4;
        case 0x3da5d8u: goto label_3da5d8;
        case 0x3da5dcu: goto label_3da5dc;
        case 0x3da5e0u: goto label_3da5e0;
        case 0x3da5e4u: goto label_3da5e4;
        case 0x3da5e8u: goto label_3da5e8;
        case 0x3da5ecu: goto label_3da5ec;
        case 0x3da5f0u: goto label_3da5f0;
        case 0x3da5f4u: goto label_3da5f4;
        case 0x3da5f8u: goto label_3da5f8;
        case 0x3da5fcu: goto label_3da5fc;
        case 0x3da600u: goto label_3da600;
        case 0x3da604u: goto label_3da604;
        case 0x3da608u: goto label_3da608;
        case 0x3da60cu: goto label_3da60c;
        case 0x3da610u: goto label_3da610;
        case 0x3da614u: goto label_3da614;
        case 0x3da618u: goto label_3da618;
        case 0x3da61cu: goto label_3da61c;
        case 0x3da620u: goto label_3da620;
        case 0x3da624u: goto label_3da624;
        case 0x3da628u: goto label_3da628;
        case 0x3da62cu: goto label_3da62c;
        case 0x3da630u: goto label_3da630;
        case 0x3da634u: goto label_3da634;
        case 0x3da638u: goto label_3da638;
        case 0x3da63cu: goto label_3da63c;
        case 0x3da640u: goto label_3da640;
        case 0x3da644u: goto label_3da644;
        case 0x3da648u: goto label_3da648;
        case 0x3da64cu: goto label_3da64c;
        case 0x3da650u: goto label_3da650;
        case 0x3da654u: goto label_3da654;
        case 0x3da658u: goto label_3da658;
        case 0x3da65cu: goto label_3da65c;
        case 0x3da660u: goto label_3da660;
        case 0x3da664u: goto label_3da664;
        case 0x3da668u: goto label_3da668;
        case 0x3da66cu: goto label_3da66c;
        case 0x3da670u: goto label_3da670;
        case 0x3da674u: goto label_3da674;
        case 0x3da678u: goto label_3da678;
        case 0x3da67cu: goto label_3da67c;
        case 0x3da680u: goto label_3da680;
        case 0x3da684u: goto label_3da684;
        case 0x3da688u: goto label_3da688;
        case 0x3da68cu: goto label_3da68c;
        case 0x3da690u: goto label_3da690;
        case 0x3da694u: goto label_3da694;
        case 0x3da698u: goto label_3da698;
        case 0x3da69cu: goto label_3da69c;
        case 0x3da6a0u: goto label_3da6a0;
        case 0x3da6a4u: goto label_3da6a4;
        case 0x3da6a8u: goto label_3da6a8;
        case 0x3da6acu: goto label_3da6ac;
        case 0x3da6b0u: goto label_3da6b0;
        case 0x3da6b4u: goto label_3da6b4;
        case 0x3da6b8u: goto label_3da6b8;
        case 0x3da6bcu: goto label_3da6bc;
        case 0x3da6c0u: goto label_3da6c0;
        case 0x3da6c4u: goto label_3da6c4;
        case 0x3da6c8u: goto label_3da6c8;
        case 0x3da6ccu: goto label_3da6cc;
        case 0x3da6d0u: goto label_3da6d0;
        case 0x3da6d4u: goto label_3da6d4;
        case 0x3da6d8u: goto label_3da6d8;
        case 0x3da6dcu: goto label_3da6dc;
        case 0x3da6e0u: goto label_3da6e0;
        case 0x3da6e4u: goto label_3da6e4;
        case 0x3da6e8u: goto label_3da6e8;
        case 0x3da6ecu: goto label_3da6ec;
        case 0x3da6f0u: goto label_3da6f0;
        case 0x3da6f4u: goto label_3da6f4;
        case 0x3da6f8u: goto label_3da6f8;
        case 0x3da6fcu: goto label_3da6fc;
        case 0x3da700u: goto label_3da700;
        case 0x3da704u: goto label_3da704;
        case 0x3da708u: goto label_3da708;
        case 0x3da70cu: goto label_3da70c;
        case 0x3da710u: goto label_3da710;
        case 0x3da714u: goto label_3da714;
        case 0x3da718u: goto label_3da718;
        case 0x3da71cu: goto label_3da71c;
        case 0x3da720u: goto label_3da720;
        case 0x3da724u: goto label_3da724;
        case 0x3da728u: goto label_3da728;
        case 0x3da72cu: goto label_3da72c;
        case 0x3da730u: goto label_3da730;
        case 0x3da734u: goto label_3da734;
        case 0x3da738u: goto label_3da738;
        case 0x3da73cu: goto label_3da73c;
        case 0x3da740u: goto label_3da740;
        case 0x3da744u: goto label_3da744;
        case 0x3da748u: goto label_3da748;
        case 0x3da74cu: goto label_3da74c;
        case 0x3da750u: goto label_3da750;
        case 0x3da754u: goto label_3da754;
        case 0x3da758u: goto label_3da758;
        case 0x3da75cu: goto label_3da75c;
        case 0x3da760u: goto label_3da760;
        case 0x3da764u: goto label_3da764;
        case 0x3da768u: goto label_3da768;
        case 0x3da76cu: goto label_3da76c;
        case 0x3da770u: goto label_3da770;
        case 0x3da774u: goto label_3da774;
        case 0x3da778u: goto label_3da778;
        case 0x3da77cu: goto label_3da77c;
        case 0x3da780u: goto label_3da780;
        case 0x3da784u: goto label_3da784;
        case 0x3da788u: goto label_3da788;
        case 0x3da78cu: goto label_3da78c;
        case 0x3da790u: goto label_3da790;
        case 0x3da794u: goto label_3da794;
        case 0x3da798u: goto label_3da798;
        case 0x3da79cu: goto label_3da79c;
        case 0x3da7a0u: goto label_3da7a0;
        case 0x3da7a4u: goto label_3da7a4;
        case 0x3da7a8u: goto label_3da7a8;
        case 0x3da7acu: goto label_3da7ac;
        case 0x3da7b0u: goto label_3da7b0;
        case 0x3da7b4u: goto label_3da7b4;
        case 0x3da7b8u: goto label_3da7b8;
        case 0x3da7bcu: goto label_3da7bc;
        case 0x3da7c0u: goto label_3da7c0;
        case 0x3da7c4u: goto label_3da7c4;
        case 0x3da7c8u: goto label_3da7c8;
        case 0x3da7ccu: goto label_3da7cc;
        case 0x3da7d0u: goto label_3da7d0;
        case 0x3da7d4u: goto label_3da7d4;
        case 0x3da7d8u: goto label_3da7d8;
        case 0x3da7dcu: goto label_3da7dc;
        case 0x3da7e0u: goto label_3da7e0;
        case 0x3da7e4u: goto label_3da7e4;
        case 0x3da7e8u: goto label_3da7e8;
        case 0x3da7ecu: goto label_3da7ec;
        case 0x3da7f0u: goto label_3da7f0;
        case 0x3da7f4u: goto label_3da7f4;
        case 0x3da7f8u: goto label_3da7f8;
        case 0x3da7fcu: goto label_3da7fc;
        case 0x3da800u: goto label_3da800;
        case 0x3da804u: goto label_3da804;
        case 0x3da808u: goto label_3da808;
        case 0x3da80cu: goto label_3da80c;
        case 0x3da810u: goto label_3da810;
        case 0x3da814u: goto label_3da814;
        default: break;
    }

    ctx->pc = 0x3da5c0u;

label_3da5c0:
    // 0x3da5c0: 0x27bdf750  addiu       $sp, $sp, -0x8B0
    ctx->pc = 0x3da5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965072));
label_3da5c4:
    // 0x3da5c4: 0x7fb20880  sq          $s2, 0x880($sp)
    ctx->pc = 0x3da5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 18));
label_3da5c8:
    // 0x3da5c8: 0x7fb30870  sq          $s3, 0x870($sp)
    ctx->pc = 0x3da5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 19));
label_3da5cc:
    // 0x3da5cc: 0x7fb008a0  sq          $s0, 0x8A0($sp)
    ctx->pc = 0x3da5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 16));
label_3da5d0:
    // 0x3da5d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3da5d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3da5d4:
    // 0x3da5d4: 0x7fb10890  sq          $s1, 0x890($sp)
    ctx->pc = 0x3da5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 17));
label_3da5d8:
    // 0x3da5d8: 0x7fb40860  sq          $s4, 0x860($sp)
    ctx->pc = 0x3da5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 20));
label_3da5dc:
    // 0x3da5dc: 0x7fb50850  sq          $s5, 0x850($sp)
    ctx->pc = 0x3da5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 21));
label_3da5e0:
    // 0x3da5e0: 0xffbf0840  sd          $ra, 0x840($sp)
    ctx->pc = 0x3da5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2112), GPR_U64(ctx, 31));
label_3da5e4:
    // 0x3da5e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3da5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3da5e8:
    // 0x3da5e8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3da5e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3da5ec:
    // 0x3da5ec: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3da5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3da5f0:
    // 0x3da5f0: 0x40f809  jalr        $v0
label_3da5f4:
    if (ctx->pc == 0x3DA5F4u) {
        ctx->pc = 0x3DA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA5F0u;
        // 0x3da5f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA5F8u;
        goto label_3da5f8;
    }
    ctx->pc = 0x3DA5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DA5F8u);
        ctx->pc = 0x3DA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA5F0u;
        // 0x3da5f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA5F0u, 0x3DA5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DA5F8u;
label_3da5f8:
    // 0x3da5f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3da5f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3da5fc:
    // 0x3da5fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3da5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3da600:
    // 0x3da600: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3da600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3da604:
    // 0x3da604: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3da604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3da608:
    // 0x3da608: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3da608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3da60c:
    // 0x3da60c: 0x0  nop
    ctx->pc = 0x3da60cu;
    // NOP
label_3da610:
    // 0x3da610: 0x0  nop
    ctx->pc = 0x3da610u;
    // NOP
label_3da614:
    // 0x3da614: 0x0  nop
    ctx->pc = 0x3da614u;
    // NOP
label_3da618:
    // 0x3da618: 0x0  nop
    ctx->pc = 0x3da618u;
    // NOP
label_3da61c:
    // 0x3da61c: 0x0  nop
    ctx->pc = 0x3da61cu;
    // NOP
label_3da620:
    // 0x3da620: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3da624:
    if (ctx->pc == 0x3DA624u) {
        ctx->pc = 0x3DA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA620u;
        // 0x3da624: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA628u;
        goto label_3da628;
    }
    ctx->pc = 0x3DA620u;
    {
        const bool branch_taken_0x3da620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA620u;
        // 0x3da624: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da620) {
            ctx->pc = 0x3DA610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da610;
        }
    }
    ctx->pc = 0x3DA628u;
label_3da628:
    // 0x3da628: 0xc138ddc  jal         func_4E3770
label_3da62c:
    if (ctx->pc == 0x3DA62Cu) {
        ctx->pc = 0x3DA630u;
        goto label_3da630;
    }
    ctx->pc = 0x3DA628u;
    SET_GPR_U32(ctx, 31, 0x3DA630u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DA628u, 0x3DA630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA630u;
label_3da630:
    // 0x3da630: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3da630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3da634:
    // 0x3da634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3da634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3da638:
    // 0x3da638: 0x1462006d  bne         $v1, $v0, . + 4 + (0x6D << 2)
label_3da63c:
    if (ctx->pc == 0x3DA63Cu) {
        ctx->pc = 0x3DA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA638u;
        // 0x3da63c: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA640u;
        goto label_3da640;
    }
    ctx->pc = 0x3DA638u;
    {
        const bool branch_taken_0x3da638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA638u;
        // 0x3da63c: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da638) {
            ctx->pc = 0x3DA7F0u;
            goto label_3da7f0;
        }
    }
    ctx->pc = 0x3DA640u;
label_3da640:
    // 0x3da640: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3da640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3da644:
    // 0x3da644: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
label_3da648:
    if (ctx->pc == 0x3DA648u) {
        ctx->pc = 0x3DA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA644u;
        // 0x3da648: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA64Cu;
        goto label_3da64c;
    }
    ctx->pc = 0x3DA644u;
    {
        const bool branch_taken_0x3da644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3da644) {
            ctx->pc = 0x3DA648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA644u;
            // 0x3da648: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA694u;
            goto label_3da694;
        }
    }
    ctx->pc = 0x3DA64Cu;
label_3da64c:
    // 0x3da64c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3da64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3da650:
    // 0x3da650: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_3da654:
    if (ctx->pc == 0x3DA654u) {
        ctx->pc = 0x3DA654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA650u;
        // 0x3da654: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA658u;
        goto label_3da658;
    }
    ctx->pc = 0x3DA650u;
    {
        const bool branch_taken_0x3da650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da650) {
            ctx->pc = 0x3DA654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA650u;
            // 0x3da654: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA688u;
            goto label_3da688;
        }
    }
    ctx->pc = 0x3DA658u;
label_3da658:
    // 0x3da658: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3da658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3da65c:
    // 0x3da65c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3da65cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3da660:
    // 0x3da660: 0x27a50820  addiu       $a1, $sp, 0x820
    ctx->pc = 0x3da660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
label_3da664:
    // 0x3da664: 0x26105118  addiu       $s0, $s0, 0x5118
    ctx->pc = 0x3da664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20760));
label_3da668:
    // 0x3da668: 0xafb30820  sw          $s3, 0x820($sp)
    ctx->pc = 0x3da668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2080), GPR_U32(ctx, 19));
label_3da66c:
    // 0x3da66c: 0xc0e9f6a  jal         func_3A7DA8
label_3da670:
    if (ctx->pc == 0x3DA670u) {
        ctx->pc = 0x3DA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA66Cu;
        // 0x3da670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA674u;
        goto label_3da674;
    }
    ctx->pc = 0x3DA66Cu;
    SET_GPR_U32(ctx, 31, 0x3DA674u);
    ctx->pc = 0x3DA670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA66Cu;
    // 0x3da670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3DA66Cu, 0x3DA674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA674u;
label_3da674:
    // 0x3da674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da678:
    // 0x3da678: 0xc0f15bc  jal         func_3C56F0
label_3da67c:
    if (ctx->pc == 0x3DA67Cu) {
        ctx->pc = 0x3DA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA678u;
        // 0x3da67c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA680u;
        goto label_3da680;
    }
    ctx->pc = 0x3DA678u;
    SET_GPR_U32(ctx, 31, 0x3DA680u);
    ctx->pc = 0x3DA67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA678u;
    // 0x3da67c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DA678u, 0x3DA680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA680u;
label_3da680:
    // 0x3da680: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3da680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_3da684:
    // 0x3da684: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3da684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3da688:
    // 0x3da688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3da688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3da68c:
    // 0x3da68c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3da68cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3da690:
    // 0x3da690: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3da690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3da694:
    // 0x3da694: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3da694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3da698:
    // 0x3da698: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3da698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3da69c:
    // 0x3da69c: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
label_3da6a0:
    if (ctx->pc == 0x3DA6A0u) {
        ctx->pc = 0x3DA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA69Cu;
        // 0x3da6a0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA6A4u;
        goto label_3da6a4;
    }
    ctx->pc = 0x3DA69Cu;
    {
        const bool branch_taken_0x3da69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA69Cu;
        // 0x3da6a0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da69c) {
            ctx->pc = 0x3DA704u;
            goto label_3da704;
        }
    }
    ctx->pc = 0x3DA6A4u;
label_3da6a4:
    // 0x3da6a4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3da6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3da6a8:
    // 0x3da6a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3da6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3da6ac:
    // 0x3da6ac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3da6acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3da6b0:
    // 0x3da6b0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3da6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3da6b4:
    // 0x3da6b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3da6b8:
    // 0x3da6b8: 0x24a52ea0  addiu       $a1, $a1, 0x2EA0
    ctx->pc = 0x3da6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11936));
label_3da6bc:
    // 0x3da6bc: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3da6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_3da6c0:
    // 0x3da6c0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3da6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3da6c4:
    // 0x3da6c4: 0x24c645b0  addiu       $a2, $a2, 0x45B0
    ctx->pc = 0x3da6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17840));
label_3da6c8:
    // 0x3da6c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3da6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3da6cc:
    // 0x3da6cc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3da6ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3da6d0:
    // 0x3da6d0: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3da6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3da6d4:
    // 0x3da6d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3da6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3da6d8:
    // 0x3da6d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3da6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3da6dc:
    // 0x3da6dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3da6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3da6e0:
    // 0x3da6e0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3da6e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3da6e4:
    // 0x3da6e4: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x3da6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
label_3da6e8:
    // 0x3da6e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3da6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3da6ec:
    // 0x3da6ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3da6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3da6f0:
    // 0x3da6f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3da6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3da6f4:
    // 0x3da6f4: 0xc0e858c  jal         func_3A1630
label_3da6f8:
    if (ctx->pc == 0x3DA6F8u) {
        ctx->pc = 0x3DA6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA6F4u;
        // 0x3da6f8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA6FCu;
        goto label_3da6fc;
    }
    ctx->pc = 0x3DA6F4u;
    SET_GPR_U32(ctx, 31, 0x3DA6FCu);
    ctx->pc = 0x3DA6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA6F4u;
    // 0x3da6f8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DA6F4u, 0x3DA6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA6FCu;
label_3da6fc:
    // 0x3da6fc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_3da700:
    if (ctx->pc == 0x3DA700u) {
        ctx->pc = 0x3DA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA6FCu;
        // 0x3da700: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA704u;
        goto label_3da704;
    }
    ctx->pc = 0x3DA6FCu;
    {
        const bool branch_taken_0x3da6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA6FCu;
        // 0x3da700: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da6fc) {
            ctx->pc = 0x3DA7F0u;
            goto label_3da7f0;
        }
    }
    ctx->pc = 0x3DA704u;
label_3da704:
    // 0x3da704: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3da704u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3da708:
    // 0x3da708: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x3da708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3da70c:
    // 0x3da70c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3da70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_3da710:
    // 0x3da710: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3da710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3da714:
    // 0x3da714: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3da714u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3da718:
    // 0x3da718: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3da718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3da71c:
    // 0x3da71c: 0xc0e94a0  jal         func_3A5280
label_3da720:
    if (ctx->pc == 0x3DA720u) {
        ctx->pc = 0x3DA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA71Cu;
        // 0x3da720: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA724u;
        goto label_3da724;
    }
    ctx->pc = 0x3DA71Cu;
    SET_GPR_U32(ctx, 31, 0x3DA724u);
    ctx->pc = 0x3DA720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA71Cu;
    // 0x3da720: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3DA71Cu, 0x3DA724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA724u;
label_3da724:
    // 0x3da724: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3da728:
    if (ctx->pc == 0x3DA728u) {
        ctx->pc = 0x3DA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA724u;
        // 0x3da728: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA72Cu;
        goto label_3da72c;
    }
    ctx->pc = 0x3DA724u;
    {
        const bool branch_taken_0x3da724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA724u;
        // 0x3da728: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da724) {
            ctx->pc = 0x3DA774u;
            goto label_3da774;
        }
    }
    ctx->pc = 0x3DA72Cu;
label_3da72c:
    // 0x3da72c: 0x1000000c  b           . + 4 + (0xC << 2)
label_3da730:
    if (ctx->pc == 0x3DA730u) {
        ctx->pc = 0x3DA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA72Cu;
        // 0x3da730: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA734u;
        goto label_3da734;
    }
    ctx->pc = 0x3DA72Cu;
    {
        const bool branch_taken_0x3da72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA72Cu;
        // 0x3da730: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da72c) {
            ctx->pc = 0x3DA760u;
            goto label_3da760;
        }
    }
    ctx->pc = 0x3DA734u;
label_3da734:
    // 0x3da734: 0x0  nop
    ctx->pc = 0x3da734u;
    // NOP
label_3da738:
    // 0x3da738: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3da738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3da73c:
    // 0x3da73c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3da73cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3da740:
    // 0x3da740: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3da740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3da744:
    // 0x3da744: 0xc0e9182  jal         func_3A4608
label_3da748:
    if (ctx->pc == 0x3DA748u) {
        ctx->pc = 0x3DA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA744u;
        // 0x3da748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA74Cu;
        goto label_3da74c;
    }
    ctx->pc = 0x3DA744u;
    SET_GPR_U32(ctx, 31, 0x3DA74Cu);
    ctx->pc = 0x3DA748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA744u;
    // 0x3da748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4608u, 0x3DA744u, 0x3DA74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA74Cu;
label_3da74c:
    // 0x3da74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da750:
    // 0x3da750: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3da750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3da754:
    // 0x3da754: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3da754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3da758:
    // 0x3da758: 0xc0e919a  jal         func_3A4668
label_3da75c:
    if (ctx->pc == 0x3DA75Cu) {
        ctx->pc = 0x3DA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA758u;
        // 0x3da75c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA760u;
        goto label_3da760;
    }
    ctx->pc = 0x3DA758u;
    SET_GPR_U32(ctx, 31, 0x3DA760u);
    ctx->pc = 0x3DA75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA758u;
    // 0x3da75c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4668u, 0x3DA758u, 0x3DA760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA760u;
label_3da760:
    // 0x3da760: 0xc047ab8  jal         func_11EAE0
label_3da764:
    if (ctx->pc == 0x3DA764u) {
        ctx->pc = 0x3DA768u;
        goto label_3da768;
    }
    ctx->pc = 0x3DA760u;
    SET_GPR_U32(ctx, 31, 0x3DA768u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x3DA760u, 0x3DA768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA768u;
label_3da768:
    // 0x3da768: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3da768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3da76c:
    // 0x3da76c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3da770:
    if (ctx->pc == 0x3DA770u) {
        ctx->pc = 0x3DA774u;
        goto label_3da774;
    }
    ctx->pc = 0x3DA76Cu;
    {
        const bool branch_taken_0x3da76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da76c) {
            ctx->pc = 0x3DA738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da738;
        }
    }
    ctx->pc = 0x3DA774u;
label_3da774:
    // 0x3da774: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3da774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3da778:
    // 0x3da778: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3da778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3da77c:
    // 0x3da77c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3da780:
    if (ctx->pc == 0x3DA780u) {
        ctx->pc = 0x3DA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA77Cu;
        // 0x3da780: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA784u;
        goto label_3da784;
    }
    ctx->pc = 0x3DA77Cu;
    {
        const bool branch_taken_0x3da77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da77c) {
            ctx->pc = 0x3DA780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA77Cu;
            // 0x3da780: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA7BCu;
            goto label_3da7bc;
        }
    }
    ctx->pc = 0x3DA784u;
label_3da784:
    // 0x3da784: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3da784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3da788:
    // 0x3da788: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3da788u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3da78c:
    // 0x3da78c: 0x7a630020  lq          $v1, 0x20($s3)
    ctx->pc = 0x3da78cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_3da790:
    // 0x3da790: 0x261048d8  addiu       $s0, $s0, 0x48D8
    ctx->pc = 0x3da790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18648));
label_3da794:
    // 0x3da794: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3da794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3da798:
    // 0x3da798: 0x27a50820  addiu       $a1, $sp, 0x820
    ctx->pc = 0x3da798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
label_3da79c:
    // 0x3da79c: 0x7fa20820  sq          $v0, 0x820($sp)
    ctx->pc = 0x3da79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 2));
label_3da7a0:
    // 0x3da7a0: 0x27a60830  addiu       $a2, $sp, 0x830
    ctx->pc = 0x3da7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3da7a4:
    // 0x3da7a4: 0xc0e9f84  jal         func_3A7E10
label_3da7a8:
    if (ctx->pc == 0x3DA7A8u) {
        ctx->pc = 0x3DA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA7A4u;
        // 0x3da7a8: 0x7fa30830  sq          $v1, 0x830($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA7ACu;
        goto label_3da7ac;
    }
    ctx->pc = 0x3DA7A4u;
    SET_GPR_U32(ctx, 31, 0x3DA7ACu);
    ctx->pc = 0x3DA7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA7A4u;
    // 0x3da7a8: 0x7fa30830  sq          $v1, 0x830($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3DA7A4u, 0x3DA7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA7ACu;
label_3da7ac:
    // 0x3da7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da7b0:
    // 0x3da7b0: 0xc0f15bc  jal         func_3C56F0
label_3da7b4:
    if (ctx->pc == 0x3DA7B4u) {
        ctx->pc = 0x3DA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA7B0u;
        // 0x3da7b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA7B8u;
        goto label_3da7b8;
    }
    ctx->pc = 0x3DA7B0u;
    SET_GPR_U32(ctx, 31, 0x3DA7B8u);
    ctx->pc = 0x3DA7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA7B0u;
    // 0x3da7b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DA7B0u, 0x3DA7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA7B8u;
label_3da7b8:
    // 0x3da7b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3da7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3da7bc:
    // 0x3da7bc: 0x26252ea0  addiu       $a1, $s1, 0x2EA0
    ctx->pc = 0x3da7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11936));
label_3da7c0:
    // 0x3da7c0: 0x268645b0  addiu       $a2, $s4, 0x45B0
    ctx->pc = 0x3da7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 17840));
label_3da7c4:
    // 0x3da7c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3da7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3da7c8:
    // 0x3da7c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3da7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3da7cc:
    // 0x3da7cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3da7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3da7d0:
    // 0x3da7d0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3da7d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3da7d4:
    // 0x3da7d4: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x3da7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
label_3da7d8:
    // 0x3da7d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3da7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3da7dc:
    // 0x3da7dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3da7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3da7e0:
    // 0x3da7e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3da7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3da7e4:
    // 0x3da7e4: 0xc0e858c  jal         func_3A1630
label_3da7e8:
    if (ctx->pc == 0x3DA7E8u) {
        ctx->pc = 0x3DA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA7E4u;
        // 0x3da7e8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA7ECu;
        goto label_3da7ec;
    }
    ctx->pc = 0x3DA7E4u;
    SET_GPR_U32(ctx, 31, 0x3DA7ECu);
    ctx->pc = 0x3DA7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA7E4u;
    // 0x3da7e8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DA7E4u, 0x3DA7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA7ECu;
label_3da7ec:
    // 0x3da7ec: 0x7bb008a0  lq          $s0, 0x8A0($sp)
    ctx->pc = 0x3da7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3da7f0:
    // 0x3da7f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3da7f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da7f4:
    // 0x3da7f4: 0x7bb10890  lq          $s1, 0x890($sp)
    ctx->pc = 0x3da7f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3da7f8:
    // 0x3da7f8: 0x7bb20880  lq          $s2, 0x880($sp)
    ctx->pc = 0x3da7f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3da7fc:
    // 0x3da7fc: 0x7bb30870  lq          $s3, 0x870($sp)
    ctx->pc = 0x3da7fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3da800:
    // 0x3da800: 0x7bb40860  lq          $s4, 0x860($sp)
    ctx->pc = 0x3da800u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
label_3da804:
    // 0x3da804: 0x7bb50850  lq          $s5, 0x850($sp)
    ctx->pc = 0x3da804u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_3da808:
    // 0x3da808: 0xdfbf0840  ld          $ra, 0x840($sp)
    ctx->pc = 0x3da808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2112)));
label_3da80c:
    // 0x3da80c: 0x3e00008  jr          $ra
label_3da810:
    if (ctx->pc == 0x3DA810u) {
        ctx->pc = 0x3DA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA80Cu;
        // 0x3da810: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA814u;
        goto label_3da814;
    }
    ctx->pc = 0x3DA80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA80Cu;
        // 0x3da810: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA814u;
label_3da814:
    // 0x3da814: 0x0  nop
    ctx->pc = 0x3da814u;
    // NOP
    ctx->pc = 0x3da818u;
}
