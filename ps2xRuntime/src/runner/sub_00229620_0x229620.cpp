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

// Function: sub_00229620
// Address: 0x229620 - 0x2296c0
void sub_00229620_0x229620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229620_0x229620");
#endif

    switch (ctx->pc) {
        case 0x229620u: goto label_229620;
        case 0x229624u: goto label_229624;
        case 0x229628u: goto label_229628;
        case 0x22962cu: goto label_22962c;
        case 0x229630u: goto label_229630;
        case 0x229634u: goto label_229634;
        case 0x229638u: goto label_229638;
        case 0x22963cu: goto label_22963c;
        case 0x229640u: goto label_229640;
        case 0x229644u: goto label_229644;
        case 0x229648u: goto label_229648;
        case 0x22964cu: goto label_22964c;
        case 0x229650u: goto label_229650;
        case 0x229654u: goto label_229654;
        case 0x229658u: goto label_229658;
        case 0x22965cu: goto label_22965c;
        case 0x229660u: goto label_229660;
        case 0x229664u: goto label_229664;
        case 0x229668u: goto label_229668;
        case 0x22966cu: goto label_22966c;
        case 0x229670u: goto label_229670;
        case 0x229674u: goto label_229674;
        case 0x229678u: goto label_229678;
        case 0x22967cu: goto label_22967c;
        case 0x229680u: goto label_229680;
        case 0x229684u: goto label_229684;
        case 0x229688u: goto label_229688;
        case 0x22968cu: goto label_22968c;
        case 0x229690u: goto label_229690;
        case 0x229694u: goto label_229694;
        case 0x229698u: goto label_229698;
        case 0x22969cu: goto label_22969c;
        case 0x2296a0u: goto label_2296a0;
        case 0x2296a4u: goto label_2296a4;
        case 0x2296a8u: goto label_2296a8;
        case 0x2296acu: goto label_2296ac;
        case 0x2296b0u: goto label_2296b0;
        case 0x2296b4u: goto label_2296b4;
        case 0x2296b8u: goto label_2296b8;
        case 0x2296bcu: goto label_2296bc;
        default: break;
    }

    ctx->pc = 0x229620u;

label_229620:
    // 0x229620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x229620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_229624:
    // 0x229624: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x229624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_229628:
    // 0x229628: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x229628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_22962c:
    // 0x22962c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22962cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_229630:
    // 0x229630: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x229630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229634:
    // 0x229634: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x229634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_229638:
    // 0x229638: 0x8e5100d8  lw          $s1, 0xD8($s2)
    ctx->pc = 0x229638u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_22963c:
    // 0x22963c: 0xc05d462  jal         func_175188
label_229640:
    if (ctx->pc == 0x229640u) {
        ctx->pc = 0x229640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22963Cu;
        // 0x229640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229644u;
        goto label_229644;
    }
    ctx->pc = 0x22963Cu;
    SET_GPR_U32(ctx, 31, 0x229644u);
    ctx->pc = 0x229640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22963Cu;
    // 0x229640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x22963Cu, 0x229644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229644u;
label_229644:
    // 0x229644: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229648:
    // 0x229648: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x229648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22964c:
    // 0x22964c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x22964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_229650:
    // 0x229650: 0x54430015  bnel        $v0, $v1, . + 4 + (0x15 << 2)
label_229654:
    if (ctx->pc == 0x229654u) {
        ctx->pc = 0x229654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229650u;
        // 0x229654: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229658u;
        goto label_229658;
    }
    ctx->pc = 0x229650u;
    {
        const bool branch_taken_0x229650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x229650) {
            ctx->pc = 0x229654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229650u;
            // 0x229654: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2296A8u;
            goto label_2296a8;
        }
    }
    ctx->pc = 0x229658u;
label_229658:
    // 0x229658: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x229658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22965c:
    // 0x22965c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x22965cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_229660:
    // 0x229660: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x229660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_229664:
    // 0x229664: 0x60f809  jalr        $v1
label_229668:
    if (ctx->pc == 0x229668u) {
        ctx->pc = 0x229668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229664u;
        // 0x229668: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22966Cu;
        goto label_22966c;
    }
    ctx->pc = 0x229664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22966Cu);
        ctx->pc = 0x229668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229664u;
        // 0x229668: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229664u, 0x22966Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22966Cu;
label_22966c:
    // 0x22966c: 0xc05d45e  jal         func_175178
label_229670:
    if (ctx->pc == 0x229670u) {
        ctx->pc = 0x229670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22966Cu;
        // 0x229670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229674u;
        goto label_229674;
    }
    ctx->pc = 0x22966Cu;
    SET_GPR_U32(ctx, 31, 0x229674u);
    ctx->pc = 0x229670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22966Cu;
    // 0x229670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x22966Cu, 0x229674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229674u;
label_229674:
    // 0x229674: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x229674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_229678:
    // 0x229678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22967c:
    // 0x22967c: 0xc05d460  jal         func_175180
label_229680:
    if (ctx->pc == 0x229680u) {
        ctx->pc = 0x229680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22967Cu;
        // 0x229680: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229684u;
        goto label_229684;
    }
    ctx->pc = 0x22967Cu;
    SET_GPR_U32(ctx, 31, 0x229684u);
    ctx->pc = 0x229680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22967Cu;
    // 0x229680: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175180u, 0x22967Cu, 0x229684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229684u;
label_229684:
    // 0x229684: 0xc041544  jal         func_105510
label_229688:
    if (ctx->pc == 0x229688u) {
        ctx->pc = 0x229688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229684u;
        // 0x229688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22968Cu;
        goto label_22968c;
    }
    ctx->pc = 0x229684u;
    SET_GPR_U32(ctx, 31, 0x22968Cu);
    ctx->pc = 0x229688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229684u;
    // 0x229688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105510u, 0x229684u, 0x22968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22968Cu;
label_22968c:
    // 0x22968c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_229690:
    // 0x229690: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x229690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_229694:
    // 0x229694: 0xc08700c  jal         func_21C030
label_229698:
    if (ctx->pc == 0x229698u) {
        ctx->pc = 0x229698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229694u;
        // 0x229698: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22969Cu;
        goto label_22969c;
    }
    ctx->pc = 0x229694u;
    SET_GPR_U32(ctx, 31, 0x22969Cu);
    ctx->pc = 0x229698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229694u;
    // 0x229698: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x229694u, 0x22969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22969Cu;
label_22969c:
    // 0x22969c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x22969cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2296a0:
    // 0x2296a0: 0xa44000bc  sh          $zero, 0xBC($v0)
    ctx->pc = 0x2296a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
label_2296a4:
    // 0x2296a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2296a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2296a8:
    // 0x2296a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2296a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2296ac:
    // 0x2296ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2296acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2296b0:
    // 0x2296b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2296b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2296b4:
    // 0x2296b4: 0x3e00008  jr          $ra
label_2296b8:
    if (ctx->pc == 0x2296B8u) {
        ctx->pc = 0x2296B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296B4u;
        // 0x2296b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2296BCu;
        goto label_2296bc;
    }
    ctx->pc = 0x2296B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2296B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296B4u;
        // 0x2296b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2296B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2296BCu;
label_2296bc:
    // 0x2296bc: 0x0  nop
    ctx->pc = 0x2296bcu;
    // NOP
    ctx->pc = 0x2296c0u;
}
