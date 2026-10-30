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

// Function: sub_0046C8A8
// Address: 0x46c8a8 - 0x46c908
void sub_0046C8A8_0x46c8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C8A8_0x46c8a8");
#endif

    switch (ctx->pc) {
        case 0x46c8e4u: goto label_46c8e4;
        default: break;
    }

    ctx->pc = 0x46c8a8u;

    // 0x46c8a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x46c8a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x46c8ac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46c8acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46c8b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46c8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46c8b4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x46c8b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x46c8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c8bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x46C8BCu;
    {
        const bool branch_taken_0x46c8bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x46C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C8BCu;
        // 0x46c8c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c8bc) {
            ctx->pc = 0x46C8D4u;
            goto label_46c8d4;
        }
    }
    ctx->pc = 0x46C8C4u;
    // 0x46c8c4: 0xc780823c  lwc1        $f0, -0x7DC4($gp)
    ctx->pc = 0x46c8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46c8c8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x46c8c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x46c8cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x46C8CCu;
    {
        const bool branch_taken_0x46c8cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x46c8cc) {
            ctx->pc = 0x46C8DCu;
            goto label_46c8dc;
        }
    }
    ctx->pc = 0x46C8D4u;
label_46c8d4:
    // 0x46c8d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x46C8D4u;
    {
        const bool branch_taken_0x46c8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C8D4u;
        // 0x46c8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c8d4) {
            ctx->pc = 0x46C8F0u;
            goto label_46c8f0;
        }
    }
    ctx->pc = 0x46C8DCu;
label_46c8dc:
    // 0x46c8dc: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x46C8DCu;
    SET_GPR_U32(ctx, 31, 0x46C8E4u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x46C8DCu, 0x46C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C8E4u;
label_46c8e4:
    // 0x46c8e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x46c8e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x46c8e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46c8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c8ec: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x46c8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_46c8f0:
    // 0x46c8f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46c8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c8f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x46C8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C8F8u;
        // 0x46c8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C900u;
    // 0x46c900: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x46c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46c904: 0x0  nop
    ctx->pc = 0x46c904u;
    // NOP
    ctx->pc = 0x46c908u;
}
