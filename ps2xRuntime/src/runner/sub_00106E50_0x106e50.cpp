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

// Function: sub_00106E50
// Address: 0x106e50 - 0x106ee8
void sub_00106E50_0x106e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106E50_0x106e50");
#endif

    switch (ctx->pc) {
        case 0x106eb0u: goto label_106eb0;
        case 0x106ed4u: goto label_106ed4;
        default: break;
    }

    ctx->pc = 0x106e50u;

    // 0x106e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106e54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x106e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x106e58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x106e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x106e5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106e60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e64: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x106e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106e68: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x106e68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106e6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x106e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x106e70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x106e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x106e74: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x106E74u;
    {
        const bool branch_taken_0x106e74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x106e74) {
            ctx->pc = 0x106ECCu;
            goto label_106ecc;
        }
    }
    ctx->pc = 0x106E7Cu;
    // 0x106e7c: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x106e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x106e80: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x106e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x106e84: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x106e84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x106e88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x106e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x106e8c: 0x0  nop
    ctx->pc = 0x106e8cu;
    // NOP
    // 0x106e90: 0x0  nop
    ctx->pc = 0x106e90u;
    // NOP
    // 0x106e94: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x106e94u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
    // 0x106e98: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x106e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x106e9c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x106e9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x106ea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x106ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x106ea4: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x106ea4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x106ea8: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x106EA8u;
    SET_GPR_U32(ctx, 31, 0x106EB0u);
    ctx->pc = 0x106EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106EA8u;
    // 0x106eac: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x106EA8u, 0x106EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106EB0u;
label_106eb0:
    // 0x106eb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x106eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x106eb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x106eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x106eb8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x106eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x106ebc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x106ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x106ec0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x106ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x106ec4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x106ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x106ec8: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x106ec8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_106ecc:
    // 0x106ecc: 0xc04152a  jal         func_1054A8
    ctx->pc = 0x106ECCu;
    SET_GPR_U32(ctx, 31, 0x106ED4u);
    ctx->pc = 0x106ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106ECCu;
    // 0x106ed0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054A8u, 0x106ECCu, 0x106ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106ED4u;
label_106ed4:
    // 0x106ed4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x106ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x106EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EE0u;
        // 0x106ee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106EE8u;
}
