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

// Function: sub_004DCAA0
// Address: 0x4dcaa0 - 0x4dcb20
void sub_004DCAA0_0x4dcaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCAA0_0x4dcaa0");
#endif

    switch (ctx->pc) {
        case 0x4dcaa0u: goto label_4dcaa0;
        case 0x4dcaa4u: goto label_4dcaa4;
        case 0x4dcaa8u: goto label_4dcaa8;
        case 0x4dcaacu: goto label_4dcaac;
        case 0x4dcab0u: goto label_4dcab0;
        case 0x4dcab4u: goto label_4dcab4;
        case 0x4dcab8u: goto label_4dcab8;
        case 0x4dcabcu: goto label_4dcabc;
        case 0x4dcac0u: goto label_4dcac0;
        case 0x4dcac4u: goto label_4dcac4;
        case 0x4dcac8u: goto label_4dcac8;
        case 0x4dcaccu: goto label_4dcacc;
        case 0x4dcad0u: goto label_4dcad0;
        case 0x4dcad4u: goto label_4dcad4;
        case 0x4dcad8u: goto label_4dcad8;
        case 0x4dcadcu: goto label_4dcadc;
        case 0x4dcae0u: goto label_4dcae0;
        case 0x4dcae4u: goto label_4dcae4;
        case 0x4dcae8u: goto label_4dcae8;
        case 0x4dcaecu: goto label_4dcaec;
        case 0x4dcaf0u: goto label_4dcaf0;
        case 0x4dcaf4u: goto label_4dcaf4;
        case 0x4dcaf8u: goto label_4dcaf8;
        case 0x4dcafcu: goto label_4dcafc;
        case 0x4dcb00u: goto label_4dcb00;
        case 0x4dcb04u: goto label_4dcb04;
        case 0x4dcb08u: goto label_4dcb08;
        case 0x4dcb0cu: goto label_4dcb0c;
        case 0x4dcb10u: goto label_4dcb10;
        case 0x4dcb14u: goto label_4dcb14;
        case 0x4dcb18u: goto label_4dcb18;
        case 0x4dcb1cu: goto label_4dcb1c;
        default: break;
    }

    ctx->pc = 0x4dcaa0u;

label_4dcaa0:
    // 0x4dcaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dcaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dcaa4:
    // 0x4dcaa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dcaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dcaa8:
    // 0x4dcaa8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dcaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dcaac:
    // 0x4dcaac: 0x84660048  lh          $a2, 0x48($v1)
    ctx->pc = 0x4dcaacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_4dcab0:
    // 0x4dcab0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x4dcab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_4dcab4:
    // 0x4dcab4: 0x40f809  jalr        $v0
label_4dcab8:
    if (ctx->pc == 0x4DCAB8u) {
        ctx->pc = 0x4DCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCAB4u;
        // 0x4dcab8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCABCu;
        goto label_4dcabc;
    }
    ctx->pc = 0x4DCAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DCABCu);
        ctx->pc = 0x4DCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCAB4u;
        // 0x4dcab8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCAB4u, 0x4DCABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DCABCu;
label_4dcabc:
    // 0x4dcabc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_4dcac0:
    if (ctx->pc == 0x4DCAC0u) {
        ctx->pc = 0x4DCAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCABCu;
        // 0x4dcac0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCAC4u;
        goto label_4dcac4;
    }
    ctx->pc = 0x4DCABCu;
    {
        const bool branch_taken_0x4dcabc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4DCAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCABCu;
        // 0x4dcac0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcabc) {
            ctx->pc = 0x4DCAD8u;
            goto label_4dcad8;
        }
    }
    ctx->pc = 0x4DCAC4u;
label_4dcac4:
    // 0x4dcac4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4dcac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4dcac8:
    // 0x4dcac8: 0x0  nop
    ctx->pc = 0x4dcac8u;
    // NOP
label_4dcacc:
    // 0x4dcacc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4dcaccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4dcad0:
    // 0x4dcad0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4dcad4:
    if (ctx->pc == 0x4DCAD4u) {
        ctx->pc = 0x4DCAD8u;
        goto label_4dcad8;
    }
    ctx->pc = 0x4DCAD0u;
    {
        const bool branch_taken_0x4dcad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dcad0) {
            ctx->pc = 0x4DCAF0u;
            goto label_4dcaf0;
        }
    }
    ctx->pc = 0x4DCAD8u;
label_4dcad8:
    // 0x4dcad8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4dcad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4dcadc:
    // 0x4dcadc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4dcadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4dcae0:
    // 0x4dcae0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4dcae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4dcae4:
    // 0x4dcae4: 0x0  nop
    ctx->pc = 0x4dcae4u;
    // NOP
label_4dcae8:
    // 0x4dcae8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4dcae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4dcaec:
    // 0x4dcaec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4dcaecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4dcaf0:
    // 0x4dcaf0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x4dcaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_4dcaf4:
    // 0x4dcaf4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x4dcaf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_4dcaf8:
    // 0x4dcaf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4dcaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dcafc:
    // 0x4dcafc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dcafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dcb00:
    // 0x4dcb00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4dcb00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4dcb04:
    // 0x4dcb04: 0x3e00008  jr          $ra
label_4dcb08:
    if (ctx->pc == 0x4DCB08u) {
        ctx->pc = 0x4DCB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCB04u;
        // 0x4dcb08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCB0Cu;
        goto label_4dcb0c;
    }
    ctx->pc = 0x4DCB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCB04u;
        // 0x4dcb08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DCB0Cu;
label_4dcb0c:
    // 0x4dcb0c: 0x0  nop
    ctx->pc = 0x4dcb0cu;
    // NOP
label_4dcb10:
    // 0x4dcb10: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x4dcb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
label_4dcb14:
    // 0x4dcb14: 0x0  nop
    ctx->pc = 0x4dcb14u;
    // NOP
label_4dcb18:
    // 0x4dcb18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4dcb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4dcb1c:
    // 0x4dcb1c: 0x0  nop
    ctx->pc = 0x4dcb1cu;
    // NOP
    ctx->pc = 0x4dcb20u;
}
