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

// Function: sub_00409888
// Address: 0x409888 - 0x409940
void sub_00409888_0x409888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409888_0x409888");
#endif

    switch (ctx->pc) {
        case 0x4098acu: goto label_4098ac;
        case 0x4098bcu: goto label_4098bc;
        case 0x4098c8u: goto label_4098c8;
        case 0x4098d4u: goto label_4098d4;
        case 0x4098dcu: goto label_4098dc;
        case 0x4098ecu: goto label_4098ec;
        case 0x409904u: goto label_409904;
        case 0x409910u: goto label_409910;
        case 0x40991cu: goto label_40991c;
        case 0x409928u: goto label_409928;
        default: break;
    }

    ctx->pc = 0x409888u;

    // 0x409888: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x409888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40988c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x409890: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x409890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x409894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x409894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409898: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x409898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40989c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40989cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4098a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4098a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4098a4: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x4098A4u;
    SET_GPR_U32(ctx, 31, 0x4098ACu);
    ctx->pc = 0x4098A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4098A4u;
    // 0x4098a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x4098A4u, 0x4098ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4098ACu;
label_4098ac:
    // 0x4098ac: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4098acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x4098b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4098b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4098b4: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x4098B4u;
    SET_GPR_U32(ctx, 31, 0x4098BCu);
    ctx->pc = 0x4098B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4098B4u;
    // 0x4098b8: 0x24a57fc8  addiu       $a1, $a1, 0x7FC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x4098B4u, 0x4098BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4098BCu;
label_4098bc:
    // 0x4098bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4098bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4098c0: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x4098C0u;
    SET_GPR_U32(ctx, 31, 0x4098C8u);
    ctx->pc = 0x4098C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4098C0u;
    // 0x4098c4: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x4098C0u, 0x4098C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4098C8u;
label_4098c8:
    // 0x4098c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4098c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4098cc: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x4098CCu;
    SET_GPR_U32(ctx, 31, 0x4098D4u);
    ctx->pc = 0x4098D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4098CCu;
    // 0x4098d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x4098CCu, 0x4098D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4098D4u;
label_4098d4:
    // 0x4098d4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x4098D4u;
    SET_GPR_U32(ctx, 31, 0x4098DCu);
    ctx->pc = 0x4098D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4098D4u;
    // 0x4098d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x4098D4u, 0x4098DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4098DCu;
label_4098dc:
    // 0x4098dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4098dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4098e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4098e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4098e4: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x4098E4u;
    SET_GPR_U32(ctx, 31, 0x4098ECu);
    ctx->pc = 0x4098E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4098E4u;
    // 0x4098e8: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x4098E4u, 0x4098ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4098ECu;
label_4098ec:
    // 0x4098ec: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4098ECu;
    {
        const bool branch_taken_0x4098ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4098ec) {
            ctx->pc = 0x4098F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4098ECu;
            // 0x4098f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409908u;
            goto label_409908;
        }
    }
    ctx->pc = 0x4098F4u;
    // 0x4098f4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4098f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x4098f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4098f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4098fc: 0xc10241a  jal         func_409068
    ctx->pc = 0x4098FCu;
    SET_GPR_U32(ctx, 31, 0x409904u);
    ctx->pc = 0x409900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4098FCu;
    // 0x409900: 0x24a57fd0  addiu       $a1, $a1, 0x7FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x4098FCu, 0x409904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409904u;
label_409904:
    // 0x409904: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x409904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_409908:
    // 0x409908: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x409908u;
    SET_GPR_U32(ctx, 31, 0x409910u);
    ctx->pc = 0x40990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409908u;
    // 0x40990c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x409908u, 0x409910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409910u;
label_409910:
    // 0x409910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x409910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409914: 0xc0c9064  jal         func_324190
    ctx->pc = 0x409914u;
    SET_GPR_U32(ctx, 31, 0x40991Cu);
    ctx->pc = 0x409918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409914u;
    // 0x409918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324190u, 0x409914u, 0x40991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40991Cu;
label_40991c:
    // 0x40991c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40991cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409920: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x409920u;
    SET_GPR_U32(ctx, 31, 0x409928u);
    ctx->pc = 0x409924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409920u;
    // 0x409924: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x409920u, 0x409928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409928u;
label_409928:
    // 0x409928: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x409928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40992c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40992cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409930: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x409930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409938: 0x3e00008  jr          $ra
    ctx->pc = 0x409938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409938u;
        // 0x40993c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409940u;
}
