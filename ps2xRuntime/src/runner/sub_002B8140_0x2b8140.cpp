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

// Function: sub_002B8140
// Address: 0x2b8140 - 0x2b81e0
void sub_002B8140_0x2b8140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8140_0x2b8140");
#endif

    switch (ctx->pc) {
        case 0x2b8180u: goto label_2b8180;
        case 0x2b8190u: goto label_2b8190;
        case 0x2b81a0u: goto label_2b81a0;
        case 0x2b81bcu: goto label_2b81bc;
        case 0x2b81ccu: goto label_2b81cc;
        default: break;
    }

    ctx->pc = 0x2b8140u;

    // 0x2b8140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b8140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b8144: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2b8144u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8148: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b8148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b814c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b814cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b8150: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b8150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b8154: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x2b8154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x2b8158: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B8158u;
    {
        const bool branch_taken_0x2b8158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8158u;
        // 0x2b815c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8158) {
            ctx->pc = 0x2B81D0u;
            goto label_2b81d0;
        }
    }
    ctx->pc = 0x2B8160u;
    // 0x2b8160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8164: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2b8164u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8168: 0xa0620039  sb          $v0, 0x39($v1)
    ctx->pc = 0x2b8168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b816c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b816cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8170: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2b8170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2b8174: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2b8174u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b8178: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B8178u;
    SET_GPR_U32(ctx, 31, 0x2B8180u);
    ctx->pc = 0x2B817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8178u;
    // 0x2b817c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B8178u, 0x2B8180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8180u;
label_2b8180:
    // 0x2b8180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8184: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b8184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8188: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2B8188u;
    SET_GPR_U32(ctx, 31, 0x2B8190u);
    ctx->pc = 0x2B818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8188u;
    // 0x2b818c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2B8188u, 0x2B8190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8190u;
label_2b8190:
    // 0x2b8190: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8190u;
    {
        const bool branch_taken_0x2b8190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8190u;
        // 0x2b8194: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8190) {
            ctx->pc = 0x2B81B4u;
            goto label_2b81b4;
        }
    }
    ctx->pc = 0x2B8198u;
    // 0x2b8198: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B8198u;
    SET_GPR_U32(ctx, 31, 0x2B81A0u);
    ctx->pc = 0x2B819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8198u;
    // 0x2b819c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B8198u, 0x2B81A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B81A0u;
label_2b81a0:
    // 0x2b81a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b81a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81a4: 0x8c620204  lw          $v0, 0x204($v1)
    ctx->pc = 0x2b81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x2b81a8: 0x50510001  beql        $v0, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B81A8u;
    {
        const bool branch_taken_0x2b81a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2b81a8) {
            ctx->pc = 0x2B81ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B81A8u;
            // 0x2b81ac: 0xac600204  sw          $zero, 0x204($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 516), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B81B0u;
            goto label_2b81b0;
        }
    }
    ctx->pc = 0x2B81B0u;
label_2b81b0:
    // 0x2b81b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b81b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b81b4:
    // 0x2b81b4: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x2B81B4u;
    SET_GPR_U32(ctx, 31, 0x2B81BCu);
    ctx->pc = 0x2B81B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B81B4u;
    // 0x2b81b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x2B81B4u, 0x2B81BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B81BCu;
label_2b81bc:
    // 0x2b81bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B81BCu;
    {
        const bool branch_taken_0x2b81bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81BCu;
        // 0x2b81c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81bc) {
            ctx->pc = 0x2B81CCu;
            goto label_2b81cc;
        }
    }
    ctx->pc = 0x2B81C4u;
    // 0x2b81c4: 0xc049a1e  jal         func_126878
    ctx->pc = 0x2B81C4u;
    SET_GPR_U32(ctx, 31, 0x2B81CCu);
    ctx->pc = 0x2B81C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B81C4u;
    // 0x2b81c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126878u, 0x2B81C4u, 0x2B81CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B81CCu;
label_2b81cc:
    // 0x2b81cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b81ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b81d0:
    // 0x2b81d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b81d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b81d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b81d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b81d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B81D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81D8u;
        // 0x2b81dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B81D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B81E0u;
}
