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

// Function: sub_001259E8
// Address: 0x1259e8 - 0x125a40
void sub_001259E8_0x1259e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001259E8_0x1259e8");
#endif

    switch (ctx->pc) {
        case 0x125a04u: goto label_125a04;
        default: break;
    }

    ctx->pc = 0x1259e8u;

    // 0x1259e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1259e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1259ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1259ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1259f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1259f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1259f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1259f8: 0xe60c0300  swc1        $f12, 0x300($s0)
    ctx->pc = 0x1259f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x1259fc: 0xc04953c  jal         func_1254F0
    ctx->pc = 0x1259FCu;
    SET_GPR_U32(ctx, 31, 0x125A04u);
    ctx->pc = 0x125A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1259FCu;
    // 0x125a00: 0xc60c0304  lwc1        $f12, 0x304($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x1259FCu, 0x125A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125A04u;
label_125a04:
    // 0x125a04: 0xc601034c  lwc1        $f1, 0x34C($s0)
    ctx->pc = 0x125a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125a08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x125a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125a0c: 0x0  nop
    ctx->pc = 0x125a0cu;
    // NOP
    // 0x125a10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x125a10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125a14: 0x0  nop
    ctx->pc = 0x125a14u;
    // NOP
    // 0x125a18: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x125A18u;
    {
        const bool branch_taken_0x125a18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125a18) {
            ctx->pc = 0x125A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125A18u;
            // 0x125a1c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125A30u;
            goto label_125a30;
        }
    }
    ctx->pc = 0x125A20u;
    // 0x125a20: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x125a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125a24: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x125a24u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x125a28: 0xe600034c  swc1        $f0, 0x34C($s0)
    ctx->pc = 0x125a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 844), bits); }
    // 0x125a2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x125a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_125a30:
    // 0x125a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125a34: 0x3e00008  jr          $ra
    ctx->pc = 0x125A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A34u;
        // 0x125a38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125A3Cu;
    // 0x125a3c: 0x0  nop
    ctx->pc = 0x125a3cu;
    // NOP
    ctx->pc = 0x125a40u;
}
