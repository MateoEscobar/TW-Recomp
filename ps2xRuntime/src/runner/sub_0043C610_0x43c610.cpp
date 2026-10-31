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

// Function: sub_0043C610
// Address: 0x43c610 - 0x43c700
void sub_0043C610_0x43c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043C610_0x43c610");
#endif

    switch (ctx->pc) {
        case 0x43c630u: goto label_43c630;
        case 0x43c648u: goto label_43c648;
        case 0x43c650u: goto label_43c650;
        case 0x43c664u: goto label_43c664;
        case 0x43c678u: goto label_43c678;
        case 0x43c684u: goto label_43c684;
        case 0x43c690u: goto label_43c690;
        case 0x43c6a4u: goto label_43c6a4;
        case 0x43c6b4u: goto label_43c6b4;
        case 0x43c6bcu: goto label_43c6bc;
        case 0x43c6d4u: goto label_43c6d4;
        default: break;
    }

    ctx->pc = 0x43c610u;

    // 0x43c610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x43c610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x43c614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43c614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c618: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43c618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x43c61c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43c61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c620: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x43c620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x43c624: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x43c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x43c628: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x43C628u;
    SET_GPR_U32(ctx, 31, 0x43C630u);
    ctx->pc = 0x43C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C628u;
    // 0x43c62c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x43C628u, 0x43C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C630u;
label_43c630:
    // 0x43c630: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x43C630u;
    {
        const bool branch_taken_0x43c630 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x43C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C630u;
        // 0x43c634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c630) {
            ctx->pc = 0x43C6E4u;
            goto label_43c6e4;
        }
    }
    ctx->pc = 0x43C638u;
    // 0x43c638: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x43c638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x43c63c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x43c63cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x43c640: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43C640u;
    SET_GPR_U32(ctx, 31, 0x43C648u);
    ctx->pc = 0x43C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C640u;
    // 0x43c644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43C640u, 0x43C648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C648u;
label_43c648:
    // 0x43c648: 0xc10b108  jal         func_42C420
    ctx->pc = 0x43C648u;
    SET_GPR_U32(ctx, 31, 0x43C650u);
    ctx->pc = 0x43C64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C648u;
    // 0x43c64c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x43C648u, 0x43C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C650u;
label_43c650:
    // 0x43c650: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x43c650u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43c654: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43C654u;
    {
        const bool branch_taken_0x43c654 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x43C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C654u;
        // 0x43c658: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c654) {
            ctx->pc = 0x43C66Cu;
            goto label_43c66c;
        }
    }
    ctx->pc = 0x43C65Cu;
    // 0x43c65c: 0xc10ac4e  jal         func_42B138
    ctx->pc = 0x43C65Cu;
    SET_GPR_U32(ctx, 31, 0x43C664u);
    ctx->pc = 0x43C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C65Cu;
    // 0x43c660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B138u, 0x43C65Cu, 0x43C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C664u;
label_43c664:
    // 0x43c664: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x43C664u;
    {
        const bool branch_taken_0x43c664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C664u;
        // 0x43c668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c664) {
            ctx->pc = 0x43C688u;
            goto label_43c688;
        }
    }
    ctx->pc = 0x43C66Cu;
label_43c66c:
    // 0x43c66c: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x43c66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x43c670: 0xc10ac4e  jal         func_42B138
    ctx->pc = 0x43C670u;
    SET_GPR_U32(ctx, 31, 0x43C678u);
    ctx->pc = 0x43C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C670u;
    // 0x43c674: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B138u, 0x43C670u, 0x43C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C678u;
label_43c678:
    // 0x43c678: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43c678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c67c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43C67Cu;
    SET_GPR_U32(ctx, 31, 0x43C684u);
    ctx->pc = 0x43C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C67Cu;
    // 0x43c680: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43C67Cu, 0x43C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C684u;
label_43c684:
    // 0x43c684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43c684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43c688:
    // 0x43c688: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43C688u;
    SET_GPR_U32(ctx, 31, 0x43C690u);
    ctx->pc = 0x43C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C688u;
    // 0x43c68c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43C688u, 0x43C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C690u;
label_43c690:
    // 0x43c690: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43c690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c694: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43c694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c698: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43c698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c69c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x43C69Cu;
    SET_GPR_U32(ctx, 31, 0x43C6A4u);
    ctx->pc = 0x43C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C69Cu;
    // 0x43c6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x43C69Cu, 0x43C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C6A4u;
label_43c6a4:
    // 0x43c6a4: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43C6A4u;
    {
        const bool branch_taken_0x43c6a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x43C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C6A4u;
        // 0x43c6a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c6a4) {
            ctx->pc = 0x43C6CCu;
            goto label_43c6cc;
        }
    }
    ctx->pc = 0x43C6ACu;
    // 0x43c6ac: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43C6ACu;
    SET_GPR_U32(ctx, 31, 0x43C6B4u);
    ctx->pc = 0x43C6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C6ACu;
    // 0x43c6b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43C6ACu, 0x43C6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C6B4u;
label_43c6b4:
    // 0x43c6b4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x43C6B4u;
    SET_GPR_U32(ctx, 31, 0x43C6BCu);
    ctx->pc = 0x43C6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C6B4u;
    // 0x43c6b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x43C6B4u, 0x43C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C6BCu;
label_43c6bc:
    // 0x43c6bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43c6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43c6c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x43c6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x43c6c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x43C6C4u;
    {
        const bool branch_taken_0x43c6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C6C4u;
        // 0x43c6c8: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c6c4) {
            ctx->pc = 0x43C6E0u;
            goto label_43c6e0;
        }
    }
    ctx->pc = 0x43C6CCu;
label_43c6cc:
    // 0x43c6cc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x43C6CCu;
    SET_GPR_U32(ctx, 31, 0x43C6D4u);
    ctx->pc = 0x43C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C6CCu;
    // 0x43c6d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x43C6CCu, 0x43C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C6D4u;
label_43c6d4:
    // 0x43c6d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43c6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43c6d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x43c6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x43c6dc: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x43c6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_43c6e0:
    // 0x43c6e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43c6e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43c6e4:
    // 0x43c6e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x43c6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43c6e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x43c6e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43c6ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43c6ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43c6f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43c6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43c6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x43C6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C6F4u;
        // 0x43c6f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43C6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43C6FCu;
    // 0x43c6fc: 0x0  nop
    ctx->pc = 0x43c6fcu;
    // NOP
    ctx->pc = 0x43c700u;
}
