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

// Function: sub_0038F170
// Address: 0x38f170 - 0x38f1c8
void sub_0038F170_0x38f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F170_0x38f170");
#endif

    switch (ctx->pc) {
        case 0x38f170u: goto label_38f170;
        case 0x38f174u: goto label_38f174;
        case 0x38f178u: goto label_38f178;
        case 0x38f17cu: goto label_38f17c;
        case 0x38f180u: goto label_38f180;
        case 0x38f184u: goto label_38f184;
        case 0x38f188u: goto label_38f188;
        case 0x38f18cu: goto label_38f18c;
        case 0x38f190u: goto label_38f190;
        case 0x38f194u: goto label_38f194;
        case 0x38f198u: goto label_38f198;
        case 0x38f19cu: goto label_38f19c;
        case 0x38f1a0u: goto label_38f1a0;
        case 0x38f1a4u: goto label_38f1a4;
        case 0x38f1a8u: goto label_38f1a8;
        case 0x38f1acu: goto label_38f1ac;
        case 0x38f1b0u: goto label_38f1b0;
        case 0x38f1b4u: goto label_38f1b4;
        case 0x38f1b8u: goto label_38f1b8;
        case 0x38f1bcu: goto label_38f1bc;
        case 0x38f1c0u: goto label_38f1c0;
        case 0x38f1c4u: goto label_38f1c4;
        default: break;
    }

    ctx->pc = 0x38f170u;

label_38f170:
    // 0x38f170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38f170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38f174:
    // 0x38f174: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38f174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_38f178:
    // 0x38f178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38f178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38f17c:
    // 0x38f17c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38f17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f180:
    // 0x38f180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38f184:
    // 0x38f184: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x38f184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_38f188:
    // 0x38f188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_38f18c:
    if (ctx->pc == 0x38F18Cu) {
        ctx->pc = 0x38F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F188u;
        // 0x38f18c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F190u;
        goto label_38f190;
    }
    ctx->pc = 0x38F188u;
    {
        const bool branch_taken_0x38f188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F188u;
        // 0x38f18c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f188) {
            ctx->pc = 0x38F19Cu;
            goto label_38f19c;
        }
    }
    ctx->pc = 0x38F190u;
label_38f190:
    // 0x38f190: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x38f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_38f194:
    // 0x38f194: 0x40f809  jalr        $v0
label_38f198:
    if (ctx->pc == 0x38F198u) {
        ctx->pc = 0x38F19Cu;
        goto label_38f19c;
    }
    ctx->pc = 0x38F194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F19Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F194u, 0x38F19Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F19Cu;
label_38f19c:
    // 0x38f19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f1a0:
    // 0x38f1a0: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
label_38f1a4:
    if (ctx->pc == 0x38F1A4u) {
        ctx->pc = 0x38F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1A0u;
        // 0x38f1a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F1A8u;
        goto label_38f1a8;
    }
    ctx->pc = 0x38F1A0u;
    {
        const bool branch_taken_0x38f1a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x38f1a0) {
            ctx->pc = 0x38F1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F1A0u;
            // 0x38f1a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F1B4u;
            goto label_38f1b4;
        }
    }
    ctx->pc = 0x38F1A8u;
label_38f1a8:
    // 0x38f1a8: 0xc0e3bb0  jal         func_38EEC0
label_38f1ac:
    if (ctx->pc == 0x38F1ACu) {
        ctx->pc = 0x38F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1A8u;
        // 0x38f1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F1B0u;
        goto label_38f1b0;
    }
    ctx->pc = 0x38F1A8u;
    SET_GPR_U32(ctx, 31, 0x38F1B0u);
    ctx->pc = 0x38F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F1A8u;
    // 0x38f1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EEC0u, 0x38F1A8u, 0x38F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F1B0u;
label_38f1b0:
    // 0x38f1b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38f1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38f1b4:
    // 0x38f1b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38f1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38f1b8:
    // 0x38f1b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38f1bc:
    // 0x38f1bc: 0x3e00008  jr          $ra
label_38f1c0:
    if (ctx->pc == 0x38F1C0u) {
        ctx->pc = 0x38F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1BCu;
        // 0x38f1c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F1C4u;
        goto label_38f1c4;
    }
    ctx->pc = 0x38F1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1BCu;
        // 0x38f1c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F1C4u;
label_38f1c4:
    // 0x38f1c4: 0x0  nop
    ctx->pc = 0x38f1c4u;
    // NOP
    ctx->pc = 0x38f1c8u;
}
