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

// Function: sub_00498890
// Address: 0x498890 - 0x498928
void sub_00498890_0x498890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498890_0x498890");
#endif

    switch (ctx->pc) {
        case 0x4988b4u: goto label_4988b4;
        case 0x4988d4u: goto label_4988d4;
        case 0x4988dcu: goto label_4988dc;
        default: break;
    }

    ctx->pc = 0x498890u;

    // 0x498890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x498890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x498894: 0xdf8286d8  ld          $v0, -0x7928($gp)
    ctx->pc = 0x498894u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936280)));
    // 0x498898: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x498898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x49889c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49889Cu;
    {
        const bool branch_taken_0x49889c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4988A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49889Cu;
        // 0x4988a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49889c) {
            ctx->pc = 0x4988ACu;
            goto label_4988ac;
        }
    }
    ctx->pc = 0x4988A4u;
    // 0x4988a4: 0xff8086d8  sd          $zero, -0x7928($gp)
    ctx->pc = 0x4988a4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936280), GPR_U64(ctx, 0));
    // 0x4988a8: 0xaf8086e0  sw          $zero, -0x7920($gp)
    ctx->pc = 0x4988a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936288), GPR_U32(ctx, 0));
label_4988ac:
    // 0x4988ac: 0xc129210  jal         func_4A4840
    ctx->pc = 0x4988ACu;
    SET_GPR_U32(ctx, 31, 0x4988B4u);
    ctx->pc = 0x4A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4840u, 0x4988ACu, 0x4988B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4988B4u;
label_4988b4:
    // 0x4988b4: 0x8f838744  lw          $v1, -0x78BC($gp)
    ctx->pc = 0x4988b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936388)));
    // 0x4988b8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4988b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4988bc: 0x2450f610  addiu       $s0, $v0, -0x9F0
    ctx->pc = 0x4988bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964752));
    // 0x4988c0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x4988c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4988c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4988c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4988c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4988c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4988cc: 0xc12323c  jal         func_48C8F0
    ctx->pc = 0x4988CCu;
    SET_GPR_U32(ctx, 31, 0x4988D4u);
    ctx->pc = 0x4988D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4988CCu;
    // 0x4988d0: 0xaf838744  sw          $v1, -0x78BC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936388), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C8F0u, 0x4988CCu, 0x4988D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4988D4u;
label_4988d4:
    // 0x4988d4: 0xc125dd4  jal         func_497750
    ctx->pc = 0x4988D4u;
    SET_GPR_U32(ctx, 31, 0x4988DCu);
    ctx->pc = 0x497750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497750u, 0x4988D4u, 0x4988DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4988DCu;
label_4988dc:
    // 0x4988dc: 0x8e0203c0  lw          $v0, 0x3C0($s0)
    ctx->pc = 0x4988dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
    // 0x4988e0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4988E0u;
    {
        const bool branch_taken_0x4988e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4988E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4988E0u;
        // 0x4988e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4988e0) {
            ctx->pc = 0x49890Cu;
            goto label_49890c;
        }
    }
    ctx->pc = 0x4988E8u;
    // 0x4988e8: 0x8e0203c4  lw          $v0, 0x3C4($s0)
    ctx->pc = 0x4988e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x4988ec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4988ECu;
    {
        const bool branch_taken_0x4988ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4988F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4988ECu;
        // 0x4988f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4988ec) {
            ctx->pc = 0x49890Cu;
            goto label_49890c;
        }
    }
    ctx->pc = 0x4988F4u;
    // 0x4988f4: 0x8e0203c8  lw          $v0, 0x3C8($s0)
    ctx->pc = 0x4988f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 968)));
    // 0x4988f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4988F8u;
    {
        const bool branch_taken_0x4988f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4988FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4988F8u;
        // 0x4988fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4988f8) {
            ctx->pc = 0x49890Cu;
            goto label_49890c;
        }
    }
    ctx->pc = 0x498900u;
    // 0x498900: 0x8e0203cc  lw          $v0, 0x3CC($s0)
    ctx->pc = 0x498900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 972)));
    // 0x498904: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x498904u;
    {
        const bool branch_taken_0x498904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498904u;
        // 0x498908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498904) {
            ctx->pc = 0x498910u;
            goto label_498910;
        }
    }
    ctx->pc = 0x49890Cu;
label_49890c:
    // 0x49890c: 0xaf828764  sw          $v0, -0x789C($gp)
    ctx->pc = 0x49890cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), GPR_U32(ctx, 2));
label_498910:
    // 0x498910: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x498910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x498914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49891c: 0x3e00008  jr          $ra
    ctx->pc = 0x49891Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49891Cu;
        // 0x498920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49891Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498924u;
    // 0x498924: 0x0  nop
    ctx->pc = 0x498924u;
    // NOP
    ctx->pc = 0x498928u;
}
