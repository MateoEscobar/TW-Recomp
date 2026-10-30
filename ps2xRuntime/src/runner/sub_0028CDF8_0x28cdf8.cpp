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

// Function: sub_0028CDF8
// Address: 0x28cdf8 - 0x28ce60
void sub_0028CDF8_0x28cdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CDF8_0x28cdf8");
#endif

    switch (ctx->pc) {
        case 0x28ce34u: goto label_28ce34;
        default: break;
    }

    ctx->pc = 0x28cdf8u;

    // 0x28cdf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28cdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28cdfc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28cdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28ce00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28ce00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28ce04: 0x58600  sll         $s0, $a1, 24
    ctx->pc = 0x28ce04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x28ce08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28ce0c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28ce0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ce10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ce14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28ce14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce18: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x28ce18u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x28ce1c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28ce20: 0x8c6400cc  lw          $a0, 0xCC($v1)
    ctx->pc = 0x28ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x28ce24: 0x2482ff89  addiu       $v0, $a0, -0x77
    ctx->pc = 0x28ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967177));
    // 0x28ce28: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x28ce28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28ce2c: 0xc08a200  jal         func_228800
    ctx->pc = 0x28CE2Cu;
    SET_GPR_U32(ctx, 31, 0x28CE34u);
    ctx->pc = 0x28CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE2Cu;
    // 0x28ce30: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x28CE2Cu, 0x28CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE34u;
label_28ce34:
    // 0x28ce34: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x28ce34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x28ce38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ce38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ce3c: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x28ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x28ce40: 0x223882b  sltu        $s1, $s1, $v1
    ctx->pc = 0x28ce40u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28ce44: 0x11800a  movz        $s0, $zero, $s1
    ctx->pc = 0x28ce44u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x28ce48: 0xa250000b  sb          $s0, 0xB($s2)
    ctx->pc = 0x28ce48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11), (uint8_t)GPR_U32(ctx, 16));
    // 0x28ce4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28ce4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ce50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28ce50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ce54: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28ce54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ce58: 0x3e00008  jr          $ra
    ctx->pc = 0x28CE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE58u;
        // 0x28ce5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CE60u;
}
