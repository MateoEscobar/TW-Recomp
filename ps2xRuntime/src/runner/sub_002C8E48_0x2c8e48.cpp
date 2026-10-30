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

// Function: sub_002C8E48
// Address: 0x2c8e48 - 0x2c8ed0
void sub_002C8E48_0x2c8e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8E48_0x2c8e48");
#endif

    switch (ctx->pc) {
        case 0x2c8e6cu: goto label_2c8e6c;
        case 0x2c8eb0u: goto label_2c8eb0;
        default: break;
    }

    ctx->pc = 0x2c8e48u;

    // 0x2c8e48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c8e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c8e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c8e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c8e54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c8e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c8e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c8e5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c8e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c8e64: 0xc0a22c6  jal         func_288B18
    ctx->pc = 0x2C8E64u;
    SET_GPR_U32(ctx, 31, 0x2C8E6Cu);
    ctx->pc = 0x2C8E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8E64u;
    // 0x2c8e68: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2C8E64u, 0x2C8E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E6Cu;
label_2c8e6c:
    // 0x2c8e6c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c8e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c8e70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2c8e74: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2c8e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2c8e78: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c8e78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c8e7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c8e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8e80: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c8e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2c8e84: 0x8c47b734  lw          $a3, -0x48CC($v0)
    ctx->pc = 0x2c8e84u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x50B734u));
    // 0x2c8e88: 0x246314b8  addiu       $v1, $v1, 0x14B8
    ctx->pc = 0x2c8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5304));
    // 0x2c8e8c: 0xe4a0012c  swc1        $f0, 0x12C($a1)
    ctx->pc = 0x2c8e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 300), bits); }
    // 0x2c8e90: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2c8e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2c8e94: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2c8e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2c8e98: 0x24051770  addiu       $a1, $zero, 0x1770
    ctx->pc = 0x2c8e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x2c8e9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c8ea0: 0x24061964  addiu       $a2, $zero, 0x1964
    ctx->pc = 0x2c8ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6500));
    // 0x2c8ea4: 0xac430208  sw          $v1, 0x208($v0)
    ctx->pc = 0x2c8ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 3));
    // 0x2c8ea8: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2C8EA8u;
    SET_GPR_U32(ctx, 31, 0x2C8EB0u);
    ctx->pc = 0x2C8EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8EA8u;
    // 0x2c8eac: 0x8cf00048  lw          $s0, 0x48($a3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2C8EA8u, 0x2C8EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8EB0u;
label_2c8eb0:
    // 0x2c8eb0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c8eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c8eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c8eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8eb8: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x2c8eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
    // 0x2c8ebc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c8ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8ec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EC4u;
        // 0x2c8ec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8ECCu;
    // 0x2c8ecc: 0x0  nop
    ctx->pc = 0x2c8eccu;
    // NOP
    ctx->pc = 0x2c8ed0u;
}
