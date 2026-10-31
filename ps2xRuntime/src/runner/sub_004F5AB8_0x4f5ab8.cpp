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

// Function: sub_004F5AB8
// Address: 0x4f5ab8 - 0x4f5b10
void sub_004F5AB8_0x4f5ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5AB8_0x4f5ab8");
#endif

    switch (ctx->pc) {
        case 0x4f5ae0u: goto label_4f5ae0;
        case 0x4f5afcu: goto label_4f5afc;
        default: break;
    }

    ctx->pc = 0x4f5ab8u;

    // 0x4f5ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f5ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f5abc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f5abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4f5ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f5ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f5ac4: 0x24425bf0  addiu       $v0, $v0, 0x5BF0
    ctx->pc = 0x4f5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23536));
    // 0x4f5ac8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4f5ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4f5acc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f5accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f5ad4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f5ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5ad8: 0xc104954  jal         func_412550
    ctx->pc = 0x4F5AD8u;
    SET_GPR_U32(ctx, 31, 0x4F5AE0u);
    ctx->pc = 0x4F5ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5AD8u;
    // 0x4f5adc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412550u, 0x4F5AD8u, 0x4F5AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5AE0u;
label_4f5ae0:
    // 0x4f5ae0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4f5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4f5ae4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x4f5ae4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4f5ae8: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x4f5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
    // 0x4f5aec: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F5AECu;
    {
        const bool branch_taken_0x4f5aec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5AECu;
        // 0x4f5af0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5aec) {
            ctx->pc = 0x4F5AFCu;
            goto label_4f5afc;
        }
    }
    ctx->pc = 0x4F5AF4u;
    // 0x4f5af4: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4F5AF4u;
    SET_GPR_U32(ctx, 31, 0x4F5AFCu);
    ctx->pc = 0x4F5AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5AF4u;
    // 0x4f5af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F5AF4u, 0x4F5AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5AFCu;
label_4f5afc:
    // 0x4f5afc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4f5afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f5b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f5b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f5b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5b08: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5B08u;
        // 0x4f5b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5B10u;
}
