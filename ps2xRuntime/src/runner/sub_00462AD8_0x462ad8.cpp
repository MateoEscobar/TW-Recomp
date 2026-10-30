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

// Function: sub_00462AD8
// Address: 0x462ad8 - 0x462b10
void sub_00462AD8_0x462ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462AD8_0x462ad8");
#endif

    switch (ctx->pc) {
        case 0x462af8u: goto label_462af8;
        default: break;
    }

    ctx->pc = 0x462ad8u;

    // 0x462ad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x462ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x462adc: 0x8f828894  lw          $v0, -0x776C($gp)
    ctx->pc = 0x462adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936724)));
    // 0x462ae0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x462ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x462ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x462ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x462ae8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x462AE8u;
    {
        const bool branch_taken_0x462ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x462AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462AE8u;
        // 0x462aec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462ae8) {
            ctx->pc = 0x462AFCu;
            goto label_462afc;
        }
    }
    ctx->pc = 0x462AF0u;
    // 0x462af0: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x462AF0u;
    SET_GPR_U32(ctx, 31, 0x462AF8u);
    ctx->pc = 0x462AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462AF0u;
    // 0x462af4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x462AF0u, 0x462AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462AF8u;
label_462af8:
    // 0x462af8: 0xaf808894  sw          $zero, -0x776C($gp)
    ctx->pc = 0x462af8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936724), GPR_U32(ctx, 0));
label_462afc:
    // 0x462afc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x462afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x462b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x462b04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x462b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x462b08: 0x3e00008  jr          $ra
    ctx->pc = 0x462B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462B08u;
        // 0x462b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x462B10u;
}
