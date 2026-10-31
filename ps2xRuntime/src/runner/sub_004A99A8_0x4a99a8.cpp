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

// Function: sub_004A99A8
// Address: 0x4a99a8 - 0x4a99e0
void sub_004A99A8_0x4a99a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A99A8_0x4a99a8");
#endif

    switch (ctx->pc) {
        case 0x4a99a8u: goto label_4a99a8;
        case 0x4a99acu: goto label_4a99ac;
        case 0x4a99b0u: goto label_4a99b0;
        case 0x4a99b4u: goto label_4a99b4;
        case 0x4a99b8u: goto label_4a99b8;
        case 0x4a99bcu: goto label_4a99bc;
        case 0x4a99c0u: goto label_4a99c0;
        case 0x4a99c4u: goto label_4a99c4;
        case 0x4a99c8u: goto label_4a99c8;
        case 0x4a99ccu: goto label_4a99cc;
        case 0x4a99d0u: goto label_4a99d0;
        case 0x4a99d4u: goto label_4a99d4;
        case 0x4a99d8u: goto label_4a99d8;
        case 0x4a99dcu: goto label_4a99dc;
        default: break;
    }

    ctx->pc = 0x4a99a8u;

label_4a99a8:
    // 0x4a99a8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4a99ac:
    // 0x4a99ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a99acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a99b0:
    // 0x4a99b0: 0x278587f8  addiu       $a1, $gp, -0x7808
    ctx->pc = 0x4a99b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936568));
label_4a99b4:
    // 0x4a99b4: 0x8c62ae0c  lw          $v0, -0x51F4($v1)
    ctx->pc = 0x4a99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946316)));
label_4a99b8:
    // 0x4a99b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a99b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a99bc:
    // 0x4a99bc: 0x40f809  jalr        $v0
label_4a99c0:
    if (ctx->pc == 0x4A99C0u) {
        ctx->pc = 0x4A99C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A99BCu;
        // 0x4a99c0: 0xa4200a  movz        $a0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A99C4u;
        goto label_4a99c4;
    }
    ctx->pc = 0x4A99BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A99C4u);
        ctx->pc = 0x4A99C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A99BCu;
        // 0x4a99c0: 0xa4200a  movz        $a0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A99BCu, 0x4A99C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A99C4u;
label_4a99c4:
    // 0x4a99c4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a99c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4a99c8:
    // 0x4a99c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4a99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4a99cc:
    // 0x4a99cc: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x4a99ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_4a99d0:
    // 0x4a99d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a99d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a99d4:
    // 0x4a99d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a99d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4a99d8:
    // 0x4a99d8: 0x3e00008  jr          $ra
label_4a99dc:
    if (ctx->pc == 0x4A99DCu) {
        ctx->pc = 0x4A99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A99D8u;
        // 0x4a99dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A99E0u;
        goto label_fallthrough_0x4a99d8;
    }
    ctx->pc = 0x4A99D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A99D8u;
        // 0x4a99dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A99D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a99d8:
    ctx->pc = 0x4A99E0u;
}
