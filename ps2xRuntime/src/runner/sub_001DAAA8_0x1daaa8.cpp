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

// Function: sub_001DAAA8
// Address: 0x1daaa8 - 0x1dab10
void sub_001DAAA8_0x1daaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAAA8_0x1daaa8");
#endif

    switch (ctx->pc) {
        case 0x1daac8u: goto label_1daac8;
        default: break;
    }

    ctx->pc = 0x1daaa8u;

    // 0x1daaa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1daaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1daaac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1daaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1daab0: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DAAB0u;
    {
        const bool branch_taken_0x1daab0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAB0u;
        // 0x1daab4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daab0) {
            ctx->pc = 0x1DAB04u;
            goto label_1dab04;
        }
    }
    ctx->pc = 0x1DAAB8u;
    // 0x1daab8: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DAAB8u;
    {
        const bool branch_taken_0x1daab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAB8u;
        // 0x1daabc: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daab8) {
            ctx->pc = 0x1DAB04u;
            goto label_1dab04;
        }
    }
    ctx->pc = 0x1DAAC0u;
    // 0x1daac0: 0xc076128  jal         func_1D84A0
    ctx->pc = 0x1DAAC0u;
    SET_GPR_U32(ctx, 31, 0x1DAAC8u);
    ctx->pc = 0x1DAAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAAC0u;
    // 0x1daac4: 0x2484a1a0  addiu       $a0, $a0, -0x5E60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D84A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D84A0u, 0x1DAAC0u, 0x1DAAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAAC8u;
label_1daac8:
    // 0x1daac8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1daac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1daacc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1daaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1daad0: 0xc442ed68  lwc1        $f2, -0x1298($v0)
    ctx->pc = 0x1daad0u;
    { uint32_t bits = FAST_READ32(0x50ED68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1daad4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1daad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1daad8: 0xc461ed88  lwc1        $f1, -0x1278($v1)
    ctx->pc = 0x1daad8u;
    { uint32_t bits = FAST_READ32(0x50ED88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1daadc: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1daadcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1daae0: 0xc480ed60  lwc1        $f0, -0x12A0($a0)
    ctx->pc = 0x1daae0u;
    { uint32_t bits = FAST_READ32(0x50ED60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daae4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x1daae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x1daae8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1daae8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1daaec: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1daaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x1daaf0: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1daaf0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1daaf4: 0xe461e780  swc1        $f1, -0x1880($v1)
    ctx->pc = 0x1daaf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x62E780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62E780u, _value); } while (0); }
    // 0x1daaf8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1daaf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1daafc: 0xe4a2e784  swc1        $f2, -0x187C($a1)
    ctx->pc = 0x1daafcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x62E784u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62E784u, _value); } while (0); }
    // 0x1dab00: 0xe440e788  swc1        $f0, -0x1878($v0)
    ctx->pc = 0x1dab00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x62E788u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62E788u, _value); } while (0); }
label_1dab04:
    // 0x1dab04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dab04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dab08: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB08u;
        // 0x1dab0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAB10u;
}
