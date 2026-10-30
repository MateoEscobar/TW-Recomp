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

// Function: sub_003A5998
// Address: 0x3a5998 - 0x3a5a10
void sub_003A5998_0x3a5998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5998_0x3a5998");
#endif

    switch (ctx->pc) {
        case 0x3a59c0u: goto label_3a59c0;
        case 0x3a59ccu: goto label_3a59cc;
        case 0x3a59dcu: goto label_3a59dc;
        case 0x3a59e8u: goto label_3a59e8;
        default: break;
    }

    ctx->pc = 0x3a5998u;

    // 0x3a5998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a599c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a59a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a59a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a59a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a59a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a59a8: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3A59A8u;
    {
        const bool branch_taken_0x3a59a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A59ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A59A8u;
        // 0x3a59ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a59a8) {
            ctx->pc = 0x3A59F4u;
            goto label_3a59f4;
        }
    }
    ctx->pc = 0x3A59B0u;
    // 0x3a59b0: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x3a59b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x3a59b4: 0x261091e0  addiu       $s0, $s0, -0x6E20
    ctx->pc = 0x3a59b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939104));
    // 0x3a59b8: 0xc050fda  jal         func_143F68
    ctx->pc = 0x3A59B8u;
    SET_GPR_U32(ctx, 31, 0x3A59C0u);
    ctx->pc = 0x3A59BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A59B8u;
    // 0x3a59bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x3A59B8u, 0x3A59C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A59C0u;
label_3a59c0:
    // 0x3a59c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a59c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a59c4: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x3A59C4u;
    SET_GPR_U32(ctx, 31, 0x3A59CCu);
    ctx->pc = 0x3A59C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A59C4u;
    // 0x3a59c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3A59C4u, 0x3A59CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A59CCu;
label_3a59cc:
    // 0x3a59cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a59d0: 0x94450112  lhu         $a1, 0x112($v0)
    ctx->pc = 0x3a59d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
    // 0x3a59d4: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A59D4u;
    SET_GPR_U32(ctx, 31, 0x3A59DCu);
    ctx->pc = 0x3A59D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A59D4u;
    // 0x3a59d8: 0x8c642c04  lw          $a0, 0x2C04($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A59D4u, 0x3A59DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A59DCu;
label_3a59dc:
    // 0x3a59dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a59dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a59e0: 0xc050fda  jal         func_143F68
    ctx->pc = 0x3A59E0u;
    SET_GPR_U32(ctx, 31, 0x3A59E8u);
    ctx->pc = 0x3A59E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A59E0u;
    // 0x3a59e4: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x3A59E0u, 0x3A59E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A59E8u;
label_3a59e8:
    // 0x3a59e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a59e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a59ec: 0x10710002  beq         $v1, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A59ECu;
    {
        const bool branch_taken_0x3a59ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x3A59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A59ECu;
        // 0x3a59f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a59ec) {
            ctx->pc = 0x3A59F8u;
            goto label_3a59f8;
        }
    }
    ctx->pc = 0x3A59F4u;
label_3a59f4:
    // 0x3a59f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a59f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a59f8:
    // 0x3a59f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a59f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a59fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a59fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a5a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5a04: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A04u;
        // 0x3a5a08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5A0Cu;
    // 0x3a5a0c: 0x0  nop
    ctx->pc = 0x3a5a0cu;
    // NOP
    ctx->pc = 0x3a5a10u;
}
