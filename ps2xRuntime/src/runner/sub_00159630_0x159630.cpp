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

// Function: sub_00159630
// Address: 0x159630 - 0x1596d0
void sub_00159630_0x159630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159630_0x159630");
#endif

    switch (ctx->pc) {
        case 0x159630u: goto label_159630;
        case 0x159634u: goto label_159634;
        case 0x159638u: goto label_159638;
        case 0x15963cu: goto label_15963c;
        case 0x159640u: goto label_159640;
        case 0x159644u: goto label_159644;
        case 0x159648u: goto label_159648;
        case 0x15964cu: goto label_15964c;
        case 0x159650u: goto label_159650;
        case 0x159654u: goto label_159654;
        case 0x159658u: goto label_159658;
        case 0x15965cu: goto label_15965c;
        case 0x159660u: goto label_159660;
        case 0x159664u: goto label_159664;
        case 0x159668u: goto label_159668;
        case 0x15966cu: goto label_15966c;
        case 0x159670u: goto label_159670;
        case 0x159674u: goto label_159674;
        case 0x159678u: goto label_159678;
        case 0x15967cu: goto label_15967c;
        case 0x159680u: goto label_159680;
        case 0x159684u: goto label_159684;
        case 0x159688u: goto label_159688;
        case 0x15968cu: goto label_15968c;
        case 0x159690u: goto label_159690;
        case 0x159694u: goto label_159694;
        case 0x159698u: goto label_159698;
        case 0x15969cu: goto label_15969c;
        case 0x1596a0u: goto label_1596a0;
        case 0x1596a4u: goto label_1596a4;
        case 0x1596a8u: goto label_1596a8;
        case 0x1596acu: goto label_1596ac;
        case 0x1596b0u: goto label_1596b0;
        case 0x1596b4u: goto label_1596b4;
        case 0x1596b8u: goto label_1596b8;
        case 0x1596bcu: goto label_1596bc;
        case 0x1596c0u: goto label_1596c0;
        case 0x1596c4u: goto label_1596c4;
        case 0x1596c8u: goto label_1596c8;
        case 0x1596ccu: goto label_1596cc;
        default: break;
    }

    ctx->pc = 0x159630u;

label_159630:
    // 0x159630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_159634:
    // 0x159634: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x159634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_159638:
    // 0x159638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15963c:
    // 0x15963c: 0xc0859b4  jal         func_2166D0
label_159640:
    if (ctx->pc == 0x159640u) {
        ctx->pc = 0x159640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15963Cu;
        // 0x159640: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159644u;
        goto label_159644;
    }
    ctx->pc = 0x15963Cu;
    SET_GPR_U32(ctx, 31, 0x159644u);
    ctx->pc = 0x159640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15963Cu;
    // 0x159640: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2166D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2166D0u, 0x15963Cu, 0x159644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159644u;
label_159644:
    // 0x159644: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x159644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_159648:
    // 0x159648: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x159648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_15964c:
    // 0x15964c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x15964cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_159650:
    // 0x159650: 0x24a5ee58  addiu       $a1, $a1, -0x11A8
    ctx->pc = 0x159650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962776));
label_159654:
    // 0x159654: 0xc043e94  jal         func_10FA50
label_159658:
    if (ctx->pc == 0x159658u) {
        ctx->pc = 0x159658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159654u;
        // 0x159658: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15965Cu;
        goto label_15965c;
    }
    ctx->pc = 0x159654u;
    SET_GPR_U32(ctx, 31, 0x15965Cu);
    ctx->pc = 0x159658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159654u;
    // 0x159658: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x159654u, 0x15965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15965Cu;
label_15965c:
    // 0x15965c: 0xc0639e0  jal         func_18E780
label_159660:
    if (ctx->pc == 0x159660u) {
        ctx->pc = 0x159664u;
        goto label_159664;
    }
    ctx->pc = 0x15965Cu;
    SET_GPR_U32(ctx, 31, 0x159664u);
    ctx->pc = 0x18E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E780u, 0x15965Cu, 0x159664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159664u;
label_159664:
    // 0x159664: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x159664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_159668:
    // 0x159668: 0x8c4557d0  lw          $a1, 0x57D0($v0)
    ctx->pc = 0x159668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22480)));
label_15966c:
    // 0x15966c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_159670:
    if (ctx->pc == 0x159670u) {
        ctx->pc = 0x159670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15966Cu;
        // 0x159670: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159674u;
        goto label_159674;
    }
    ctx->pc = 0x15966Cu;
    {
        const bool branch_taken_0x15966c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x159670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15966Cu;
        // 0x159670: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15966c) {
            ctx->pc = 0x1596ACu;
            goto label_1596ac;
        }
    }
    ctx->pc = 0x159674u;
label_159674:
    // 0x159674: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x159674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_159678:
    // 0x159678: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x159678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15967c:
    // 0x15967c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x15967cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_159680:
    // 0x159680: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x159680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_159684:
    // 0x159684: 0x40f809  jalr        $v0
label_159688:
    if (ctx->pc == 0x159688u) {
        ctx->pc = 0x159688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159684u;
        // 0x159688: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15968Cu;
        goto label_15968c;
    }
    ctx->pc = 0x159684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15968Cu);
        ctx->pc = 0x159688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159684u;
        // 0x159688: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159684u, 0x15968Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15968Cu;
label_15968c:
    // 0x15968c: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x15968cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_159690:
    // 0x159690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159694:
    // 0x159694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159698:
    // 0x159698: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x159698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15969c:
    // 0x15969c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x15969cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1596a0:
    // 0x1596a0: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1596a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1596a4:
    // 0x1596a4: 0x60f809  jalr        $v1
label_1596a8:
    if (ctx->pc == 0x1596A8u) {
        ctx->pc = 0x1596A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596A4u;
        // 0x1596a8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1596ACu;
        goto label_1596ac;
    }
    ctx->pc = 0x1596A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1596ACu);
        ctx->pc = 0x1596A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596A4u;
        // 0x1596a8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1596A4u, 0x1596ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1596ACu;
label_1596ac:
    // 0x1596ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1596acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1596b0:
    // 0x1596b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1596b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1596b4:
    // 0x1596b4: 0xc0517d8  jal         func_145F60
label_1596b8:
    if (ctx->pc == 0x1596B8u) {
        ctx->pc = 0x1596B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596B4u;
        // 0x1596b8: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1596BCu;
        goto label_1596bc;
    }
    ctx->pc = 0x1596B4u;
    SET_GPR_U32(ctx, 31, 0x1596BCu);
    ctx->pc = 0x1596B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1596B4u;
    // 0x1596b8: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x1596B4u, 0x1596BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596BCu;
label_1596bc:
    // 0x1596bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1596bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1596c0:
    // 0x1596c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1596c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1596c4:
    // 0x1596c4: 0x3e00008  jr          $ra
label_1596c8:
    if (ctx->pc == 0x1596C8u) {
        ctx->pc = 0x1596C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596C4u;
        // 0x1596c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1596CCu;
        goto label_1596cc;
    }
    ctx->pc = 0x1596C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1596C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596C4u;
        // 0x1596c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1596C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1596CCu;
label_1596cc:
    // 0x1596cc: 0x0  nop
    ctx->pc = 0x1596ccu;
    // NOP
    ctx->pc = 0x1596d0u;
}
