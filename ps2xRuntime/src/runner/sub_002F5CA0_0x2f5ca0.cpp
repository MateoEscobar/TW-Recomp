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

// Function: sub_002F5CA0
// Address: 0x2f5ca0 - 0x2f5d10
void sub_002F5CA0_0x2f5ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5CA0_0x2f5ca0");
#endif

    switch (ctx->pc) {
        case 0x2f5cecu: goto label_2f5cec;
        default: break;
    }

    ctx->pc = 0x2f5ca0u;

    // 0x2f5ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f5ca4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2f5ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f5ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f5cac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f5cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5cb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f5cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f5cb4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2f5cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f5cb8: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2f5cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
    // 0x2f5cbc: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2f5cbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
    // 0x2f5cc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f5cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5cc8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2f5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f5ccc: 0xac400208  sw          $zero, 0x208($v0)
    ctx->pc = 0x2f5cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 0));
    // 0x2f5cd0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2f5cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5cd4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2f5cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f5cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5cdc: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2f5cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x2f5ce0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2f5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f5ce4: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x2F5CE4u;
    SET_GPR_U32(ctx, 31, 0x2F5CECu);
    ctx->pc = 0x2F5CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CE4u;
    // 0x2f5ce8: 0xa0480265  sb          $t0, 0x265($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2F5CE4u, 0x2F5CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5CECu;
label_2f5cec:
    // 0x2f5cec: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x2f5cecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2f5cf0: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x2f5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2f5cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f5cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5cf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f5cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f5cfc: 0xfe0300e0  sd          $v1, 0xE0($s0)
    ctx->pc = 0x2f5cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 3));
    // 0x2f5d00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f5d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5d04: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D04u;
        // 0x2f5d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5D0Cu;
    // 0x2f5d0c: 0x0  nop
    ctx->pc = 0x2f5d0cu;
    // NOP
    ctx->pc = 0x2f5d10u;
}
