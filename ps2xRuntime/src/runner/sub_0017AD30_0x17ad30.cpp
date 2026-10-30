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

// Function: sub_0017AD30
// Address: 0x17ad30 - 0x17adb0
void sub_0017AD30_0x17ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AD30_0x17ad30");
#endif

    switch (ctx->pc) {
        case 0x17ad60u: goto label_17ad60;
        case 0x17ad70u: goto label_17ad70;
        case 0x17ad80u: goto label_17ad80;
        case 0x17ad90u: goto label_17ad90;
        default: break;
    }

    ctx->pc = 0x17ad30u;

    // 0x17ad30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ad34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17ad34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17ad38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ad3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ad3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ad44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17ad44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad48: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x17ad48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17ad4c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x17ad4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x17ad50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17ad50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17ad54: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x17ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ad58: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x17AD58u;
    SET_GPR_U32(ctx, 31, 0x17AD60u);
    ctx->pc = 0x17AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD58u;
    // 0x17ad5c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x17AD58u, 0x17AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD60u;
label_17ad60:
    // 0x17ad60: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x17ad60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ad64: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x17ad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ad68: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x17AD68u;
    SET_GPR_U32(ctx, 31, 0x17AD70u);
    ctx->pc = 0x17AD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD68u;
    // 0x17ad6c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x17AD68u, 0x17AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD70u;
label_17ad70:
    // 0x17ad70: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x17ad70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ad74: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x17ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ad78: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x17AD78u;
    SET_GPR_U32(ctx, 31, 0x17AD80u);
    ctx->pc = 0x17AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD78u;
    // 0x17ad7c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x17AD78u, 0x17AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD80u;
label_17ad80:
    // 0x17ad80: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x17ad80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ad84: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x17ad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ad88: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x17AD88u;
    SET_GPR_U32(ctx, 31, 0x17AD90u);
    ctx->pc = 0x17AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD88u;
    // 0x17ad8c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x17AD88u, 0x17AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD90u;
label_17ad90:
    // 0x17ad90: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x17ad90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ad94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17ad94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ad98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ad9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17ad9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ada0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ada0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ada4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x17ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ada8: 0x3e00008  jr          $ra
    ctx->pc = 0x17ADA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADA8u;
        // 0x17adac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ADA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ADB0u;
}
