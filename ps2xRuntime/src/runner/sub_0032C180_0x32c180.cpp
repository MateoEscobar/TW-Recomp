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

// Function: sub_0032C180
// Address: 0x32c180 - 0x32c1e0
void sub_0032C180_0x32c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C180_0x32c180");
#endif

    switch (ctx->pc) {
        case 0x32c198u: goto label_32c198;
        case 0x32c1bcu: goto label_32c1bc;
        case 0x32c1c8u: goto label_32c1c8;
        default: break;
    }

    ctx->pc = 0x32c180u;

    // 0x32c180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32c180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32c184: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32c184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c188: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32c188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32c18c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c190: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C190u;
    SET_GPR_U32(ctx, 31, 0x32C198u);
    ctx->pc = 0x32C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C190u;
    // 0x32c194: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C190u, 0x32C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C198u;
label_32c198:
    // 0x32c198: 0x34058099  ori         $a1, $zero, 0x8099
    ctx->pc = 0x32c198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32921);
    // 0x32c19c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x32c19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x32c1a0: 0x34a5976f  ori         $a1, $a1, 0x976F
    ctx->pc = 0x32c1a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38767);
    // 0x32c1a4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x32c1a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x32c1a8: 0x34a5ab46  ori         $a1, $a1, 0xAB46
    ctx->pc = 0x32c1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43846);
    // 0x32c1ac: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x32c1acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x32c1b0: 0x34a528f7  ori         $a1, $a1, 0x28F7
    ctx->pc = 0x32c1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10487);
    // 0x32c1b4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x32C1B4u;
    SET_GPR_U32(ctx, 31, 0x32C1BCu);
    ctx->pc = 0x32C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C1B4u;
    // 0x32c1b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x32C1B4u, 0x32C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C1BCu;
label_32c1bc:
    // 0x32c1bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32c1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c1c0: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32C1C0u;
    SET_GPR_U32(ctx, 31, 0x32C1C8u);
    ctx->pc = 0x32C1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C1C0u;
    // 0x32c1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32C1C0u, 0x32C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C1C8u;
label_32c1c8:
    // 0x32c1c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32c1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c1cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c1d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x32C1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1D4u;
        // 0x32c1d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C1DCu;
    // 0x32c1dc: 0x0  nop
    ctx->pc = 0x32c1dcu;
    // NOP
    ctx->pc = 0x32c1e0u;
}
