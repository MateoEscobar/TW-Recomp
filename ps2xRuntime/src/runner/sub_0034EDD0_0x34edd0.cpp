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

// Function: sub_0034EDD0
// Address: 0x34edd0 - 0x34ee40
void sub_0034EDD0_0x34edd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EDD0_0x34edd0");
#endif

    switch (ctx->pc) {
        case 0x34edf4u: goto label_34edf4;
        default: break;
    }

    ctx->pc = 0x34edd0u;

    // 0x34edd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34edd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34edd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34edd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34edd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x34edd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x34eddc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34eddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34ede0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34ede0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ede4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34ede4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ede8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34ede8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34edec: 0xc0d3a10  jal         func_34E840
    ctx->pc = 0x34EDECu;
    SET_GPR_U32(ctx, 31, 0x34EDF4u);
    ctx->pc = 0x34EDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EDECu;
    // 0x34edf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E840u, 0x34EDECu, 0x34EDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EDF4u;
label_34edf4:
    // 0x34edf4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x34edf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34edf8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x34edf8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x34edfc: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x34edfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34ee00: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x34ee00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ee04: 0x0  nop
    ctx->pc = 0x34ee04u;
    // NOP
    // 0x34ee08: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34EE08u;
    {
        const bool branch_taken_0x34ee08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE08u;
        // 0x34ee0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee08) {
            ctx->pc = 0x34EE28u;
            goto label_34ee28;
        }
    }
    ctx->pc = 0x34EE10u;
    // 0x34ee10: 0x0  nop
    ctx->pc = 0x34ee10u;
    // NOP
    // 0x34ee14: 0x0  nop
    ctx->pc = 0x34ee14u;
    // NOP
    // 0x34ee18: 0x46020004  c1          0x20004
    ctx->pc = 0x34ee18u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34ee1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ee20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34ee20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34ee24: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x34ee24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_34ee28:
    // 0x34ee28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x34ee28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ee2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34ee2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ee30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34ee30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ee34: 0x3e00008  jr          $ra
    ctx->pc = 0x34EE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE34u;
        // 0x34ee38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EE3Cu;
    // 0x34ee3c: 0x0  nop
    ctx->pc = 0x34ee3cu;
    // NOP
    ctx->pc = 0x34ee40u;
}
