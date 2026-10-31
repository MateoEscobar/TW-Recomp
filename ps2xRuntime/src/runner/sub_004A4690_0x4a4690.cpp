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

// Function: sub_004A4690
// Address: 0x4a4690 - 0x4a4798
void sub_004A4690_0x4a4690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4690_0x4a4690");
#endif

    switch (ctx->pc) {
        case 0x4a4690u: goto label_4a4690;
        case 0x4a4694u: goto label_4a4694;
        case 0x4a4698u: goto label_4a4698;
        case 0x4a469cu: goto label_4a469c;
        case 0x4a46a0u: goto label_4a46a0;
        case 0x4a46a4u: goto label_4a46a4;
        case 0x4a46a8u: goto label_4a46a8;
        case 0x4a46acu: goto label_4a46ac;
        case 0x4a46b0u: goto label_4a46b0;
        case 0x4a46b4u: goto label_4a46b4;
        case 0x4a46b8u: goto label_4a46b8;
        case 0x4a46bcu: goto label_4a46bc;
        case 0x4a46c0u: goto label_4a46c0;
        case 0x4a46c4u: goto label_4a46c4;
        case 0x4a46c8u: goto label_4a46c8;
        case 0x4a46ccu: goto label_4a46cc;
        case 0x4a46d0u: goto label_4a46d0;
        case 0x4a46d4u: goto label_4a46d4;
        case 0x4a46d8u: goto label_4a46d8;
        case 0x4a46dcu: goto label_4a46dc;
        case 0x4a46e0u: goto label_4a46e0;
        case 0x4a46e4u: goto label_4a46e4;
        case 0x4a46e8u: goto label_4a46e8;
        case 0x4a46ecu: goto label_4a46ec;
        case 0x4a46f0u: goto label_4a46f0;
        case 0x4a46f4u: goto label_4a46f4;
        case 0x4a46f8u: goto label_4a46f8;
        case 0x4a46fcu: goto label_4a46fc;
        case 0x4a4700u: goto label_4a4700;
        case 0x4a4704u: goto label_4a4704;
        case 0x4a4708u: goto label_4a4708;
        case 0x4a470cu: goto label_4a470c;
        case 0x4a4710u: goto label_4a4710;
        case 0x4a4714u: goto label_4a4714;
        case 0x4a4718u: goto label_4a4718;
        case 0x4a471cu: goto label_4a471c;
        case 0x4a4720u: goto label_4a4720;
        case 0x4a4724u: goto label_4a4724;
        case 0x4a4728u: goto label_4a4728;
        case 0x4a472cu: goto label_4a472c;
        case 0x4a4730u: goto label_4a4730;
        case 0x4a4734u: goto label_4a4734;
        case 0x4a4738u: goto label_4a4738;
        case 0x4a473cu: goto label_4a473c;
        case 0x4a4740u: goto label_4a4740;
        case 0x4a4744u: goto label_4a4744;
        case 0x4a4748u: goto label_4a4748;
        case 0x4a474cu: goto label_4a474c;
        case 0x4a4750u: goto label_4a4750;
        case 0x4a4754u: goto label_4a4754;
        case 0x4a4758u: goto label_4a4758;
        case 0x4a475cu: goto label_4a475c;
        case 0x4a4760u: goto label_4a4760;
        case 0x4a4764u: goto label_4a4764;
        case 0x4a4768u: goto label_4a4768;
        case 0x4a476cu: goto label_4a476c;
        case 0x4a4770u: goto label_4a4770;
        case 0x4a4774u: goto label_4a4774;
        case 0x4a4778u: goto label_4a4778;
        case 0x4a477cu: goto label_4a477c;
        case 0x4a4780u: goto label_4a4780;
        case 0x4a4784u: goto label_4a4784;
        case 0x4a4788u: goto label_4a4788;
        case 0x4a478cu: goto label_4a478c;
        case 0x4a4790u: goto label_4a4790;
        case 0x4a4794u: goto label_4a4794;
        default: break;
    }

    ctx->pc = 0x4a4690u;

label_4a4690:
    // 0x4a4690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a4690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a4694:
    // 0x4a4694: 0x8f838a20  lw          $v1, -0x75E0($gp)
    ctx->pc = 0x4a4694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
label_4a4698:
    // 0x4a4698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a4698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a469c:
    // 0x4a469c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a469cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4a46a0:
    // 0x4a46a0: 0x3c110053  lui         $s1, 0x53
    ctx->pc = 0x4a46a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)83 << 16));
label_4a46a4:
    // 0x4a46a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a46a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a46a8:
    // 0x4a46a8: 0x2625f940  addiu       $a1, $s1, -0x6C0
    ctx->pc = 0x4a46a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965568));
label_4a46ac:
    // 0x4a46ac: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x4a46acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_4a46b0:
    // 0x4a46b0: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
label_4a46b4:
    if (ctx->pc == 0x4A46B4u) {
        ctx->pc = 0x4A46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A46B0u;
        // 0x4a46b4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A46B8u;
        goto label_4a46b8;
    }
    ctx->pc = 0x4A46B0u;
    {
        const bool branch_taken_0x4a46b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A46B0u;
        // 0x4a46b4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a46b0) {
            ctx->pc = 0x4A474Cu;
            goto label_4a474c;
        }
    }
    ctx->pc = 0x4A46B8u;
label_4a46b8:
    // 0x4a46b8: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x4a46b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_4a46bc:
    // 0x4a46bc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x4a46bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_4a46c0:
    // 0x4a46c0: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_4a46c4:
    if (ctx->pc == 0x4A46C4u) {
        ctx->pc = 0x4A46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A46C0u;
        // 0x4a46c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A46C8u;
        goto label_4a46c8;
    }
    ctx->pc = 0x4A46C0u;
    {
        const bool branch_taken_0x4a46c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a46c0) {
            ctx->pc = 0x4A46C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A46C0u;
            // 0x4a46c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4750u;
            goto label_4a4750;
        }
    }
    ctx->pc = 0x4A46C8u;
label_4a46c8:
    // 0x4a46c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4a46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4a46cc:
    // 0x4a46cc: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_4a46d0:
    if (ctx->pc == 0x4A46D0u) {
        ctx->pc = 0x4A46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A46CCu;
        // 0x4a46d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A46D4u;
        goto label_4a46d4;
    }
    ctx->pc = 0x4A46CCu;
    {
        const bool branch_taken_0x4a46cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a46cc) {
            ctx->pc = 0x4A46D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A46CCu;
            // 0x4a46d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4750u;
            goto label_4a4750;
        }
    }
    ctx->pc = 0x4A46D4u;
label_4a46d4:
    // 0x4a46d4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x4a46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4a46d8:
    // 0x4a46d8: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_4a46dc:
    if (ctx->pc == 0x4A46DCu) {
        ctx->pc = 0x4A46DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A46D8u;
        // 0x4a46dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A46E0u;
        goto label_4a46e0;
    }
    ctx->pc = 0x4A46D8u;
    {
        const bool branch_taken_0x4a46d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a46d8) {
            ctx->pc = 0x4A46DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A46D8u;
            // 0x4a46dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4750u;
            goto label_4a4750;
        }
    }
    ctx->pc = 0x4A46E0u;
label_4a46e0:
    // 0x4a46e0: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x4a46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_4a46e4:
    // 0x4a46e4: 0x40f809  jalr        $v0
label_4a46e8:
    if (ctx->pc == 0x4A46E8u) {
        ctx->pc = 0x4A46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A46E4u;
        // 0x4a46e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A46ECu;
        goto label_4a46ec;
    }
    ctx->pc = 0x4A46E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A46ECu);
        ctx->pc = 0x4A46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A46E4u;
        // 0x4a46e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A46E4u, 0x4A46ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A46ECu;
label_4a46ec:
    // 0x4a46ec: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x4a46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4a46f0:
    // 0x4a46f0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_4a46f4:
    if (ctx->pc == 0x4A46F4u) {
        ctx->pc = 0x4A46F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A46F0u;
        // 0x4a46f4: 0x8e22f940  lw          $v0, -0x6C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A46F8u;
        goto label_4a46f8;
    }
    ctx->pc = 0x4A46F0u;
    {
        const bool branch_taken_0x4a46f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A46F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A46F0u;
        // 0x4a46f4: 0x8e22f940  lw          $v0, -0x6C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a46f0) {
            ctx->pc = 0x4A474Cu;
            goto label_4a474c;
        }
    }
    ctx->pc = 0x4A46F8u;
label_4a46f8:
    // 0x4a46f8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_4a46fc:
    if (ctx->pc == 0x4A46FCu) {
        ctx->pc = 0x4A46FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A46F8u;
        // 0x4a46fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4700u;
        goto label_4a4700;
    }
    ctx->pc = 0x4A46F8u;
    {
        const bool branch_taken_0x4a46f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a46f8) {
            ctx->pc = 0x4A46FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A46F8u;
            // 0x4a46fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4750u;
            goto label_4a4750;
        }
    }
    ctx->pc = 0x4A4700u;
label_4a4700:
    // 0x4a4700: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a4700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a4704:
    // 0x4a4704: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a4704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4a4708:
    // 0x4a4708: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x4a4708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4a470c:
    // 0x4a470c: 0x3c05fff8  lui         $a1, 0xFFF8
    ctx->pc = 0x4a470cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65528 << 16));
label_4a4710:
    // 0x4a4710: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x4a4710u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_4a4714:
    // 0x4a4714: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4a4714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a4718:
    // 0x4a4718: 0x30483fff  andi        $t0, $v0, 0x3FFF
    ctx->pc = 0x4a4718u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_4a471c:
    // 0x4a471c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4a471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a4720:
    // 0x4a4720: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4a4720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4a4724:
    // 0x4a4724: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x4a4724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
label_4a4728:
    // 0x4a4728: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a4728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_4a472c:
    // 0x4a472c: 0x34a5001f  ori         $a1, $a1, 0x1F
    ctx->pc = 0x4a472cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
label_4a4730:
    // 0x4a4730: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4a4730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_4a4734:
    // 0x4a4734: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a4734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4a4738:
    // 0x4a4738: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4a4738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4a473c:
    // 0x4a473c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4a473cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_4a4740:
    // 0x4a4740: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a4740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a4744:
    // 0x4a4744: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x4a4744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_4a4748:
    // 0x4a4748: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4a4748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_4a474c:
    // 0x4a474c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a474cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a4750:
    // 0x4a4750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a4750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a4754:
    // 0x4a4754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a4754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a4758:
    // 0x4a4758: 0x3e00008  jr          $ra
label_4a475c:
    if (ctx->pc == 0x4A475Cu) {
        ctx->pc = 0x4A475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4758u;
        // 0x4a475c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A4760u;
        goto label_4a4760;
    }
    ctx->pc = 0x4A4758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4758u;
        // 0x4a475c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4760u;
label_4a4760:
    // 0x4a4760: 0x0  nop
    ctx->pc = 0x4a4760u;
    // NOP
label_4a4764:
    // 0x4a4764: 0x0  nop
    ctx->pc = 0x4a4764u;
    // NOP
label_4a4768:
    // 0x4a4768: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x4a4768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_4a476c:
    // 0x4a476c: 0x0  nop
    ctx->pc = 0x4a476cu;
    // NOP
label_4a4770:
    // 0x4a4770: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x4a4770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_4a4774:
    // 0x4a4774: 0x0  nop
    ctx->pc = 0x4a4774u;
    // NOP
label_4a4778:
    // 0x4a4778: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x4a4778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_4a477c:
    // 0x4a477c: 0x0  nop
    ctx->pc = 0x4a477cu;
    // NOP
label_4a4780:
    // 0x4a4780: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x4a4780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_4a4784:
    // 0x4a4784: 0x0  nop
    ctx->pc = 0x4a4784u;
    // NOP
label_4a4788:
    // 0x4a4788: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x4a4788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_4a478c:
    // 0x4a478c: 0x0  nop
    ctx->pc = 0x4a478cu;
    // NOP
label_4a4790:
    // 0x4a4790: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a4790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_4a4794:
    // 0x4a4794: 0x0  nop
    ctx->pc = 0x4a4794u;
    // NOP
    ctx->pc = 0x4a4798u;
}
