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

// Function: sub_002D8958
// Address: 0x2d8958 - 0x2d89c8
void sub_002D8958_0x2d8958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8958_0x2d8958");
#endif

    switch (ctx->pc) {
        case 0x2d8988u: goto label_2d8988;
        case 0x2d899cu: goto label_2d899c;
        case 0x2d89acu: goto label_2d89ac;
        case 0x2d89b4u: goto label_2d89b4;
        default: break;
    }

    ctx->pc = 0x2d8958u;

    // 0x2d8958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d895c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d895cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8960: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d8960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d8964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8968: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d8968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d896c: 0x14a3000d  bne         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D896Cu;
    {
        const bool branch_taken_0x2d896c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D896Cu;
        // 0x2d8970: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d896c) {
            ctx->pc = 0x2D89A4u;
            goto label_2d89a4;
        }
    }
    ctx->pc = 0x2D8974u;
    // 0x2d8974: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2d8974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2d8978: 0x260403f0  addiu       $a0, $s0, 0x3F0
    ctx->pc = 0x2d8978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    // 0x2d897c: 0x24a56498  addiu       $a1, $a1, 0x6498
    ctx->pc = 0x2d897cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25752));
    // 0x2d8980: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D8980u;
    SET_GPR_U32(ctx, 31, 0x2D8988u);
    ctx->pc = 0x2D8984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8980u;
    // 0x2d8984: 0x2406029d  addiu       $a2, $zero, 0x29D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D8980u, 0x2D8988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8988u;
label_2d8988:
    // 0x2d8988: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2d8988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2d898c: 0x26040418  addiu       $a0, $s0, 0x418
    ctx->pc = 0x2d898cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1048));
    // 0x2d8990: 0x24a564b0  addiu       $a1, $a1, 0x64B0
    ctx->pc = 0x2d8990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25776));
    // 0x2d8994: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D8994u;
    SET_GPR_U32(ctx, 31, 0x2D899Cu);
    ctx->pc = 0x2D8998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8994u;
    // 0x2d8998: 0x24060253  addiu       $a2, $zero, 0x253 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D8994u, 0x2D899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D899Cu;
label_2d899c:
    // 0x2d899c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D899Cu;
    {
        const bool branch_taken_0x2d899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D899Cu;
        // 0x2d89a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d899c) {
            ctx->pc = 0x2D89B8u;
            goto label_2d89b8;
        }
    }
    ctx->pc = 0x2D89A4u;
label_2d89a4:
    // 0x2d89a4: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2D89A4u;
    SET_GPR_U32(ctx, 31, 0x2D89ACu);
    ctx->pc = 0x2D89A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D89A4u;
    // 0x2d89a8: 0x260403f0  addiu       $a0, $s0, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2D89A4u, 0x2D89ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D89ACu;
label_2d89ac:
    // 0x2d89ac: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2D89ACu;
    SET_GPR_U32(ctx, 31, 0x2D89B4u);
    ctx->pc = 0x2D89B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D89ACu;
    // 0x2d89b0: 0x26040418  addiu       $a0, $s0, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2D89ACu, 0x2D89B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D89B4u;
label_2d89b4:
    // 0x2d89b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d89b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d89b8:
    // 0x2d89b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d89b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d89bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D89BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89BCu;
        // 0x2d89c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D89BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D89C4u;
    // 0x2d89c4: 0x0  nop
    ctx->pc = 0x2d89c4u;
    // NOP
    ctx->pc = 0x2d89c8u;
}
