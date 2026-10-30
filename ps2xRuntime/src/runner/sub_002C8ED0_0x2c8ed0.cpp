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

// Function: sub_002C8ED0
// Address: 0x2c8ed0 - 0x2c8f20
void sub_002C8ED0_0x2c8ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8ED0_0x2c8ed0");
#endif

    switch (ctx->pc) {
        case 0x2c8ef0u: goto label_2c8ef0;
        default: break;
    }

    ctx->pc = 0x2c8ed0u;

    // 0x2c8ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8ed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c8ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8ed8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c8ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c8edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c8edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c8ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ee4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c8ee8: 0xc0a22c6  jal         func_288B18
    ctx->pc = 0x2C8EE8u;
    SET_GPR_U32(ctx, 31, 0x2C8EF0u);
    ctx->pc = 0x2C8EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8EE8u;
    // 0x2c8eec: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2C8EE8u, 0x2C8EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8EF0u;
label_2c8ef0:
    // 0x2c8ef0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c8ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c8ef4: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2c8ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
    // 0x2c8ef8: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2c8ef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
    // 0x2c8efc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c8efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c8f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8f04: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2c8f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x2c8f08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c8f0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c8f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8f10: 0xac400208  sw          $zero, 0x208($v0)
    ctx->pc = 0x2c8f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 0));
    // 0x2c8f14: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F14u;
        // 0x2c8f18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8F1Cu;
    // 0x2c8f1c: 0x0  nop
    ctx->pc = 0x2c8f1cu;
    // NOP
    ctx->pc = 0x2c8f20u;
}
