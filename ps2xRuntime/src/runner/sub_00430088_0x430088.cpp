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

// Function: sub_00430088
// Address: 0x430088 - 0x4300d8
void sub_00430088_0x430088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430088_0x430088");
#endif

    switch (ctx->pc) {
        case 0x4300acu: goto label_4300ac;
        case 0x4300c4u: goto label_4300c4;
        default: break;
    }

    ctx->pc = 0x430088u;

    // 0x430088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x430088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43008c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x43008cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x430090: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x430090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x430094: 0x8c625a30  lw          $v0, 0x5A30($v1)
    ctx->pc = 0x430094u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715A30u));
    // 0x430098: 0x24705a30  addiu       $s0, $v1, 0x5A30
    ctx->pc = 0x430098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23088));
    // 0x43009c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43009Cu;
    {
        const bool branch_taken_0x43009c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4300A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43009Cu;
        // 0x4300a0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43009c) {
            ctx->pc = 0x4300C4u;
            goto label_4300c4;
        }
    }
    ctx->pc = 0x4300A4u;
    // 0x4300a4: 0xc10bd76  jal         func_42F5D8
    ctx->pc = 0x4300A4u;
    SET_GPR_U32(ctx, 31, 0x4300ACu);
    ctx->pc = 0x42F5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F5D8u, 0x4300A4u, 0x4300ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4300ACu;
label_4300ac:
    // 0x4300ac: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4300acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4300b0: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4300b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4300b4: 0x24a5c488  addiu       $a1, $a1, -0x3B78
    ctx->pc = 0x4300b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952072));
    // 0x4300b8: 0x24c671d0  addiu       $a2, $a2, 0x71D0
    ctx->pc = 0x4300b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29136));
    // 0x4300bc: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x4300BCu;
    SET_GPR_U32(ctx, 31, 0x4300C4u);
    ctx->pc = 0x4300C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4300BCu;
    // 0x4300c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x4300BCu, 0x4300C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4300C4u;
label_4300c4:
    // 0x4300c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4300c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4300c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4300c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4300cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4300ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4300d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4300D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4300D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4300D0u;
        // 0x4300d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4300D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4300D8u;
}
