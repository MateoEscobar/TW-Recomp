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

// Function: sub_00412888
// Address: 0x412888 - 0x4128e8
void sub_00412888_0x412888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412888_0x412888");
#endif

    switch (ctx->pc) {
        case 0x4128b4u: goto label_4128b4;
        case 0x4128d0u: goto label_4128d0;
        default: break;
    }

    ctx->pc = 0x412888u;

    // 0x412888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x412888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41288c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x41288cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x412890: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x412890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x412894: 0x24425c48  addiu       $v0, $v0, 0x5C48
    ctx->pc = 0x412894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23624));
    // 0x412898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x412898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41289c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41289cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4128a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4128a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4128a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4128a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4128a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4128a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4128ac: 0xc0e400e  jal         func_390038
    ctx->pc = 0x4128ACu;
    SET_GPR_U32(ctx, 31, 0x4128B4u);
    ctx->pc = 0x4128B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4128ACu;
    // 0x4128b0: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390038u, 0x4128ACu, 0x4128B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4128B4u;
label_4128b4:
    // 0x4128b4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4128b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4128b8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x4128b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4128bc: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x4128bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
    // 0x4128c0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4128C0u;
    {
        const bool branch_taken_0x4128c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4128C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4128C0u;
        // 0x4128c4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4128c0) {
            ctx->pc = 0x4128D0u;
            goto label_4128d0;
        }
    }
    ctx->pc = 0x4128C8u;
    // 0x4128c8: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4128C8u;
    SET_GPR_U32(ctx, 31, 0x4128D0u);
    ctx->pc = 0x4128CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4128C8u;
    // 0x4128cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4128C8u, 0x4128D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4128D0u;
label_4128d0:
    // 0x4128d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4128d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4128d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4128d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4128d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4128d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4128dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4128DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4128E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4128DCu;
        // 0x4128e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4128DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4128E4u;
    // 0x4128e4: 0x0  nop
    ctx->pc = 0x4128e4u;
    // NOP
    ctx->pc = 0x4128e8u;
}
