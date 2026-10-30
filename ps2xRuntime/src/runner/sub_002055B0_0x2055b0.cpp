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

// Function: sub_002055B0
// Address: 0x2055b0 - 0x205660
void sub_002055B0_0x2055b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002055B0_0x2055b0");
#endif

    switch (ctx->pc) {
        case 0x2055b0u: goto label_2055b0;
        case 0x2055b4u: goto label_2055b4;
        case 0x2055b8u: goto label_2055b8;
        case 0x2055bcu: goto label_2055bc;
        case 0x2055c0u: goto label_2055c0;
        case 0x2055c4u: goto label_2055c4;
        case 0x2055c8u: goto label_2055c8;
        case 0x2055ccu: goto label_2055cc;
        case 0x2055d0u: goto label_2055d0;
        case 0x2055d4u: goto label_2055d4;
        case 0x2055d8u: goto label_2055d8;
        case 0x2055dcu: goto label_2055dc;
        case 0x2055e0u: goto label_2055e0;
        case 0x2055e4u: goto label_2055e4;
        case 0x2055e8u: goto label_2055e8;
        case 0x2055ecu: goto label_2055ec;
        case 0x2055f0u: goto label_2055f0;
        case 0x2055f4u: goto label_2055f4;
        case 0x2055f8u: goto label_2055f8;
        case 0x2055fcu: goto label_2055fc;
        case 0x205600u: goto label_205600;
        case 0x205604u: goto label_205604;
        case 0x205608u: goto label_205608;
        case 0x20560cu: goto label_20560c;
        case 0x205610u: goto label_205610;
        case 0x205614u: goto label_205614;
        case 0x205618u: goto label_205618;
        case 0x20561cu: goto label_20561c;
        case 0x205620u: goto label_205620;
        case 0x205624u: goto label_205624;
        case 0x205628u: goto label_205628;
        case 0x20562cu: goto label_20562c;
        case 0x205630u: goto label_205630;
        case 0x205634u: goto label_205634;
        case 0x205638u: goto label_205638;
        case 0x20563cu: goto label_20563c;
        case 0x205640u: goto label_205640;
        case 0x205644u: goto label_205644;
        case 0x205648u: goto label_205648;
        case 0x20564cu: goto label_20564c;
        case 0x205650u: goto label_205650;
        case 0x205654u: goto label_205654;
        case 0x205658u: goto label_205658;
        case 0x20565cu: goto label_20565c;
        default: break;
    }

    ctx->pc = 0x2055b0u;

label_2055b0:
    // 0x2055b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2055b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2055b4:
    // 0x2055b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2055b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2055b8:
    // 0x2055b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2055b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2055bc:
    // 0x2055bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2055bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2055c0:
    // 0x2055c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2055c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2055c4:
    // 0x2055c4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2055c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2055c8:
    // 0x2055c8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2055cc:
    if (ctx->pc == 0x2055CCu) {
        ctx->pc = 0x2055CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055C8u;
        // 0x2055cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055D0u;
        goto label_2055d0;
    }
    ctx->pc = 0x2055C8u;
    {
        const bool branch_taken_0x2055c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055C8u;
        // 0x2055cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055c8) {
            ctx->pc = 0x20564Cu;
            goto label_20564c;
        }
    }
    ctx->pc = 0x2055D0u;
label_2055d0:
    // 0x2055d0: 0xc073462  jal         func_1CD188
label_2055d4:
    if (ctx->pc == 0x2055D4u) {
        ctx->pc = 0x2055D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055D0u;
        // 0x2055d4: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055D8u;
        goto label_2055d8;
    }
    ctx->pc = 0x2055D0u;
    SET_GPR_U32(ctx, 31, 0x2055D8u);
    ctx->pc = 0x2055D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2055D0u;
    // 0x2055d4: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x2055D0u, 0x2055D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055D8u;
label_2055d8:
    // 0x2055d8: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2055d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2055dc:
    // 0x2055dc: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x2055dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_2055e0:
    // 0x2055e0: 0x26108740  addiu       $s0, $s0, -0x78C0
    ctx->pc = 0x2055e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936384));
label_2055e4:
    // 0x2055e4: 0x2406009f  addiu       $a2, $zero, 0x9F
    ctx->pc = 0x2055e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_2055e8:
    // 0x2055e8: 0xc139138  jal         func_4E44E0
label_2055ec:
    if (ctx->pc == 0x2055ECu) {
        ctx->pc = 0x2055ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055E8u;
        // 0x2055ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055F0u;
        goto label_2055f0;
    }
    ctx->pc = 0x2055E8u;
    SET_GPR_U32(ctx, 31, 0x2055F0u);
    ctx->pc = 0x2055ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2055E8u;
    // 0x2055ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x2055E8u, 0x2055F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055F0u;
label_2055f0:
    // 0x2055f0: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x2055f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_2055f4:
    // 0x2055f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2055f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2055f8:
    // 0x2055f8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2055f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2055fc:
    // 0x2055fc: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2055fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_205600:
    // 0x205600: 0x60f809  jalr        $v1
label_205604:
    if (ctx->pc == 0x205604u) {
        ctx->pc = 0x205604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205600u;
        // 0x205604: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205608u;
        goto label_205608;
    }
    ctx->pc = 0x205600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205608u);
        ctx->pc = 0x205604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205600u;
        // 0x205604: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205600u, 0x205608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205608u;
label_205608:
    // 0x205608: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x205608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_20560c:
    // 0x20560c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20560cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205610:
    // 0x205610: 0xc13a560  jal         func_4E9580
label_205614:
    if (ctx->pc == 0x205614u) {
        ctx->pc = 0x205614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205610u;
        // 0x205614: 0x240600a2  addiu       $a2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205618u;
        goto label_205618;
    }
    ctx->pc = 0x205610u;
    SET_GPR_U32(ctx, 31, 0x205618u);
    ctx->pc = 0x205614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205610u;
    // 0x205614: 0x240600a2  addiu       $a2, $zero, 0xA2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9580u, 0x205610u, 0x205618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205618u;
label_205618:
    // 0x205618: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x205618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20561c:
    // 0x20561c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_205620:
    // 0x205620: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x205620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_205624:
    // 0x205624: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x205624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_205628:
    // 0x205628: 0x60f809  jalr        $v1
label_20562c:
    if (ctx->pc == 0x20562Cu) {
        ctx->pc = 0x20562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205628u;
        // 0x20562c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205630u;
        goto label_205630;
    }
    ctx->pc = 0x205628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205630u);
        ctx->pc = 0x20562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205628u;
        // 0x20562c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205628u, 0x205630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205630u;
label_205630:
    // 0x205630: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x205630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_205634:
    // 0x205634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205638:
    // 0x205638: 0xc13ab26  jal         func_4EAC98
label_20563c:
    if (ctx->pc == 0x20563Cu) {
        ctx->pc = 0x20563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205638u;
        // 0x20563c: 0x240600a5  addiu       $a2, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205640u;
        goto label_205640;
    }
    ctx->pc = 0x205638u;
    SET_GPR_U32(ctx, 31, 0x205640u);
    ctx->pc = 0x20563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205638u;
    // 0x20563c: 0x240600a5  addiu       $a2, $zero, 0xA5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAC98u, 0x205638u, 0x205640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205640u;
label_205640:
    // 0x205640: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x205640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_205644:
    // 0x205644: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x205644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_205648:
    // 0x205648: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x205648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20564c:
    // 0x20564c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20564cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_205650:
    // 0x205650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205654:
    // 0x205654: 0x3e00008  jr          $ra
label_205658:
    if (ctx->pc == 0x205658u) {
        ctx->pc = 0x205658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205654u;
        // 0x205658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20565Cu;
        goto label_20565c;
    }
    ctx->pc = 0x205654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205654u;
        // 0x205658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20565Cu;
label_20565c:
    // 0x20565c: 0x0  nop
    ctx->pc = 0x20565cu;
    // NOP
    ctx->pc = 0x205660u;
}
