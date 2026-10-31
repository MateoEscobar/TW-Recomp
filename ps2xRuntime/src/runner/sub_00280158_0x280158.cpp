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

// Function: sub_00280158
// Address: 0x280158 - 0x2801e8
void sub_00280158_0x280158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280158_0x280158");
#endif

    switch (ctx->pc) {
        case 0x28016cu: goto label_28016c;
        case 0x280178u: goto label_280178;
        case 0x2801d0u: goto label_2801d0;
        case 0x2801d8u: goto label_2801d8;
        default: break;
    }

    ctx->pc = 0x280158u;

    // 0x280158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28015c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x280160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280164: 0xc0a002e  jal         func_2800B8
    ctx->pc = 0x280164u;
    SET_GPR_U32(ctx, 31, 0x28016Cu);
    ctx->pc = 0x280168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280164u;
    // 0x280168: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2800B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2800B8u, 0x280164u, 0x28016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28016Cu;
label_28016c:
    // 0x28016c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28016cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280170: 0xc089974  jal         func_2265D0
    ctx->pc = 0x280170u;
    SET_GPR_U32(ctx, 31, 0x280178u);
    ctx->pc = 0x280174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280170u;
    // 0x280174: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x280170u, 0x280178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280178u;
label_280178:
    // 0x280178: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x280178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x28017c: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x28017cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x280180: 0x2444e888  addiu       $a0, $v0, -0x1778
    ctx->pc = 0x280180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961288));
    // 0x280184: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x280184u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55E88Au));
    // 0x280188: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x280188u;
    {
        const bool branch_taken_0x280188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280188u;
        // 0x28018c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280188) {
            ctx->pc = 0x2801C0u;
            goto label_2801c0;
        }
    }
    ctx->pc = 0x280190u;
    // 0x280190: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x280190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x280194: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280194u;
    {
        const bool branch_taken_0x280194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x280198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280194u;
        // 0x280198: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280194) {
            ctx->pc = 0x2801ACu;
            goto label_2801ac;
        }
    }
    ctx->pc = 0x28019Cu;
    // 0x28019c: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x28019cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2801a0: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x2801a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2801a4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2801A4u;
    {
        const bool branch_taken_0x2801a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2801A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2801A4u;
        // 0x2801a8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2801a4) {
            ctx->pc = 0x2801BCu;
            goto label_2801bc;
        }
    }
    ctx->pc = 0x2801ACu;
label_2801ac:
    // 0x2801ac: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x2801acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2801b0: 0x24421b90  addiu       $v0, $v0, 0x1B90
    ctx->pc = 0x2801b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7056));
    // 0x2801b4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2801B4u;
    {
        const bool branch_taken_0x2801b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2801b4) {
            ctx->pc = 0x2801C0u;
            goto label_2801c0;
        }
    }
    ctx->pc = 0x2801BCu;
label_2801bc:
    // 0x2801bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2801bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2801c0:
    // 0x2801c0: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2801C0u;
    {
        const bool branch_taken_0x2801c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2801c0) {
            ctx->pc = 0x2801C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2801C0u;
            // 0x2801c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2801DCu;
            goto label_2801dc;
        }
    }
    ctx->pc = 0x2801C8u;
    // 0x2801c8: 0xc08840e  jal         func_221038
    ctx->pc = 0x2801C8u;
    SET_GPR_U32(ctx, 31, 0x2801D0u);
    ctx->pc = 0x2801CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801C8u;
    // 0x2801cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221038u, 0x2801C8u, 0x2801D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801D0u;
label_2801d0:
    // 0x2801d0: 0xc089ede  jal         func_227B78
    ctx->pc = 0x2801D0u;
    SET_GPR_U32(ctx, 31, 0x2801D8u);
    ctx->pc = 0x2801D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801D0u;
    // 0x2801d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B78u, 0x2801D0u, 0x2801D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801D8u;
label_2801d8:
    // 0x2801d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2801d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2801dc:
    // 0x2801dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2801dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2801e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2801E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2801E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2801E0u;
        // 0x2801e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2801E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2801E8u;
}
