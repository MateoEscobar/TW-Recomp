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

// Function: sub_0012ADF0
// Address: 0x12adf0 - 0x12ae58
void sub_0012ADF0_0x12adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ADF0_0x12adf0");
#endif

    switch (ctx->pc) {
        case 0x12ae34u: goto label_12ae34;
        case 0x12ae40u: goto label_12ae40;
        default: break;
    }

    ctx->pc = 0x12adf0u;

    // 0x12adf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12adf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12adf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12adf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12adf8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x12adf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x12adfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12adfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ae04: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x12ae04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x12ae08: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x12ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x12ae0c: 0xc6000360  lwc1        $f0, 0x360($s0)
    ctx->pc = 0x12ae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ae10: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12ae10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ae14: 0x0  nop
    ctx->pc = 0x12ae14u;
    // NOP
    // 0x12ae18: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x12AE18u;
    {
        const bool branch_taken_0x12ae18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ae18) {
            ctx->pc = 0x12AE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AE18u;
            // 0x12ae1c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AE44u;
            goto label_12ae44;
        }
    }
    ctx->pc = 0x12AE20u;
    // 0x12ae20: 0x82020476  lb          $v0, 0x476($s0)
    ctx->pc = 0x12ae20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1142)));
    // 0x12ae24: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AE24u;
    {
        const bool branch_taken_0x12ae24 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12ae24) {
            ctx->pc = 0x12AE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AE24u;
            // 0x12ae28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AE38u;
            goto label_12ae38;
        }
    }
    ctx->pc = 0x12AE2Cu;
    // 0x12ae2c: 0xc049aa2  jal         func_126A88
    ctx->pc = 0x12AE2Cu;
    SET_GPR_U32(ctx, 31, 0x12AE34u);
    ctx->pc = 0x126A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A88u, 0x12AE2Cu, 0x12AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE34u;
label_12ae34:
    // 0x12ae34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ae38:
    // 0x12ae38: 0xc04ab96  jal         func_12AE58
    ctx->pc = 0x12AE38u;
    SET_GPR_U32(ctx, 31, 0x12AE40u);
    ctx->pc = 0x12AE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE38u;
    // 0x12ae3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AE58u, 0x12AE38u, 0x12AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE40u;
label_12ae40:
    // 0x12ae40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12ae40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12ae44:
    // 0x12ae44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ae44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ae48: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x12ae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12ae4c: 0x3e00008  jr          $ra
    ctx->pc = 0x12AE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE4Cu;
        // 0x12ae50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AE54u;
    // 0x12ae54: 0x0  nop
    ctx->pc = 0x12ae54u;
    // NOP
    ctx->pc = 0x12ae58u;
}
