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

// Function: sub_004302B8
// Address: 0x4302b8 - 0x430308
void sub_004302B8_0x4302b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004302B8_0x4302b8");
#endif

    switch (ctx->pc) {
        case 0x4302dcu: goto label_4302dc;
        case 0x4302f4u: goto label_4302f4;
        default: break;
    }

    ctx->pc = 0x4302b8u;

    // 0x4302b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4302b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4302bc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4302bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4302c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4302c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4302c4: 0x8c625a80  lw          $v0, 0x5A80($v1)
    ctx->pc = 0x4302c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715A80u));
    // 0x4302c8: 0x24705a80  addiu       $s0, $v1, 0x5A80
    ctx->pc = 0x4302c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23168));
    // 0x4302cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4302CCu;
    {
        const bool branch_taken_0x4302cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4302D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4302CCu;
        // 0x4302d0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4302cc) {
            ctx->pc = 0x4302F4u;
            goto label_4302f4;
        }
    }
    ctx->pc = 0x4302D4u;
    // 0x4302d4: 0xc10bd76  jal         func_42F5D8
    ctx->pc = 0x4302D4u;
    SET_GPR_U32(ctx, 31, 0x4302DCu);
    ctx->pc = 0x42F5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F5D8u, 0x4302D4u, 0x4302DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4302DCu;
label_4302dc:
    // 0x4302dc: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4302dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4302e0: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4302e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4302e4: 0x24a5c500  addiu       $a1, $a1, -0x3B00
    ctx->pc = 0x4302e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952192));
    // 0x4302e8: 0x24c671d0  addiu       $a2, $a2, 0x71D0
    ctx->pc = 0x4302e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29136));
    // 0x4302ec: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x4302ECu;
    SET_GPR_U32(ctx, 31, 0x4302F4u);
    ctx->pc = 0x4302F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4302ECu;
    // 0x4302f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x4302ECu, 0x4302F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4302F4u;
label_4302f4:
    // 0x4302f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4302f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4302f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4302f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4302fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4302fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x430300: 0x3e00008  jr          $ra
    ctx->pc = 0x430300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430300u;
        // 0x430304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430308u;
}
