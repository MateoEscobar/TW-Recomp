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

// Function: sub_00110CC0
// Address: 0x110cc0 - 0x110d50
void sub_00110CC0_0x110cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110CC0_0x110cc0");
#endif

    switch (ctx->pc) {
        case 0x110ce8u: goto label_110ce8;
        case 0x110d2cu: goto label_110d2c;
        default: break;
    }

    ctx->pc = 0x110cc0u;

    // 0x110cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110cc4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x110cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x110cc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x110cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x110ccc: 0x34424274  ori         $v0, $v0, 0x4274
    ctx->pc = 0x110cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17012);
    // 0x110cd0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x110cd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x110cd4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x110cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x110cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110cdc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x110cdcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x110ce0: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x110CE0u;
    SET_GPR_U32(ctx, 31, 0x110CE8u);
    ctx->pc = 0x110CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CE0u;
    // 0x110ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x110CE0u, 0x110CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CE8u;
label_110ce8:
    // 0x110ce8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x110CE8u;
    {
        const bool branch_taken_0x110ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110ce8) {
            ctx->pc = 0x110CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110CE8u;
            // 0x110cec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110D34u;
            goto label_110d34;
        }
    }
    ctx->pc = 0x110CF0u;
    // 0x110cf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x110cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x110cf4: 0x0  nop
    ctx->pc = 0x110cf4u;
    // NOP
    // 0x110cf8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x110cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x110cfc: 0x0  nop
    ctx->pc = 0x110cfcu;
    // NOP
    // 0x110d00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x110D00u;
    {
        const bool branch_taken_0x110d00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x110d00) {
            ctx->pc = 0x110D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110D00u;
            // 0x110d04: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x110D08u;
            goto label_110d08;
        }
    }
    ctx->pc = 0x110D08u;
label_110d08:
    // 0x110d08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x110d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x110d0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x110d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x110d10: 0x0  nop
    ctx->pc = 0x110d10u;
    // NOP
    // 0x110d14: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x110d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x110d18: 0x0  nop
    ctx->pc = 0x110d18u;
    // NOP
    // 0x110d1c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x110D1Cu;
    {
        const bool branch_taken_0x110d1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x110d1c) {
            ctx->pc = 0x110D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110D1Cu;
            // 0x110d20: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x110D24u;
            goto label_110d24;
        }
    }
    ctx->pc = 0x110D24u;
label_110d24:
    // 0x110d24: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x110D24u;
    SET_GPR_U32(ctx, 31, 0x110D2Cu);
    ctx->pc = 0x110D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D24u;
    // 0x110d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x110D24u, 0x110D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D2Cu;
label_110d2c:
    // 0x110d2c: 0xe4540074  swc1        $f20, 0x74($v0)
    ctx->pc = 0x110d2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x110d30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x110d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_110d34:
    // 0x110d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110d38: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x110d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x110d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x110D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D3Cu;
        // 0x110d40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110D44u;
    // 0x110d44: 0x0  nop
    ctx->pc = 0x110d44u;
    // NOP
    // 0x110d48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x110d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x110d4c: 0x0  nop
    ctx->pc = 0x110d4cu;
    // NOP
    ctx->pc = 0x110d50u;
}
