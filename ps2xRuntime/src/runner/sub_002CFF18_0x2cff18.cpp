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

// Function: sub_002CFF18
// Address: 0x2cff18 - 0x2cff70
void sub_002CFF18_0x2cff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFF18_0x2cff18");
#endif

    switch (ctx->pc) {
        case 0x2cff30u: goto label_2cff30;
        case 0x2cff60u: goto label_2cff60;
        default: break;
    }

    ctx->pc = 0x2cff18u;

    // 0x2cff18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cff18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cff1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cff20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cff24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cff24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff28: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2CFF28u;
    SET_GPR_U32(ctx, 31, 0x2CFF30u);
    ctx->pc = 0x2CFF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFF28u;
    // 0x2cff2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CFF28u, 0x2CFF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF30u;
label_2cff30:
    // 0x2cff30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff34: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CFF34u;
    {
        const bool branch_taken_0x2cff34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF34u;
        // 0x2cff38: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff34) {
            ctx->pc = 0x2CFF60u;
            goto label_2cff60;
        }
    }
    ctx->pc = 0x2CFF3Cu;
    // 0x2cff3c: 0x92030036  lbu         $v1, 0x36($s0)
    ctx->pc = 0x2cff3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x2cff40: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x2cff40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2cff44: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cff44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cff48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cff48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cff4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cff4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cff50: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x2cff50u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x2cff54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cff54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cff58: 0xc0bee1a  jal         func_2FB868
    ctx->pc = 0x2CFF58u;
    SET_GPR_U32(ctx, 31, 0x2CFF60u);
    ctx->pc = 0x2CFF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFF58u;
    // 0x2cff5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB868u, 0x2CFF58u, 0x2CFF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF60u;
label_2cff60:
    // 0x2cff60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cff60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cff64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cff64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cff68: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF68u;
        // 0x2cff6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFF70u;
}
