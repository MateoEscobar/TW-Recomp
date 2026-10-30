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

// Function: sub_004DD9B8
// Address: 0x4dd9b8 - 0x4dda18
void sub_004DD9B8_0x4dd9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD9B8_0x4dd9b8");
#endif

    switch (ctx->pc) {
        case 0x4dd9e0u: goto label_4dd9e0;
        case 0x4dd9ecu: goto label_4dd9ec;
        case 0x4dda00u: goto label_4dda00;
        default: break;
    }

    ctx->pc = 0x4dd9b8u;

    // 0x4dd9b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dd9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4dd9bc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4dd9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4dd9c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dd9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4dd9c4: 0x24428348  addiu       $v0, $v0, -0x7CB8
    ctx->pc = 0x4dd9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935368));
    // 0x4dd9c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4dd9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4dd9cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dd9ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd9d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dd9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dd9d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4dd9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd9d8: 0xc055254  jal         func_154950
    ctx->pc = 0x4DD9D8u;
    SET_GPR_U32(ctx, 31, 0x4DD9E0u);
    ctx->pc = 0x4DD9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD9D8u;
    // 0x4dd9dc: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154950u, 0x4DD9D8u, 0x4DD9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD9E0u;
label_4dd9e0:
    // 0x4dd9e0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4dd9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4dd9e4: 0xc137686  jal         func_4DDA18
    ctx->pc = 0x4DD9E4u;
    SET_GPR_U32(ctx, 31, 0x4DD9ECu);
    ctx->pc = 0x4DD9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD9E4u;
    // 0x4dd9e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDA18u, 0x4DD9E4u, 0x4DD9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD9ECu;
label_4dd9ec:
    // 0x4dd9ec: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x4dd9ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4dd9f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DD9F0u;
    {
        const bool branch_taken_0x4dd9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD9F0u;
        // 0x4dd9f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd9f0) {
            ctx->pc = 0x4DDA04u;
            goto label_4dda04;
        }
    }
    ctx->pc = 0x4DD9F8u;
    // 0x4dd9f8: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4DD9F8u;
    SET_GPR_U32(ctx, 31, 0x4DDA00u);
    ctx->pc = 0x4DD9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD9F8u;
    // 0x4dd9fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4DD9F8u, 0x4DDA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDA00u;
label_4dda00:
    // 0x4dda00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4dda00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dda04:
    // 0x4dda04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dda04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dda08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dda08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dda0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDA0Cu;
        // 0x4dda10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDA14u;
    // 0x4dda14: 0x0  nop
    ctx->pc = 0x4dda14u;
    // NOP
    ctx->pc = 0x4dda18u;
}
