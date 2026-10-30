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

// Function: sub_0011CC68
// Address: 0x11cc68 - 0x11cce8
void sub_0011CC68_0x11cc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CC68_0x11cc68");
#endif

    switch (ctx->pc) {
        case 0x11cc8cu: goto label_11cc8c;
        case 0x11cc98u: goto label_11cc98;
        case 0x11cca0u: goto label_11cca0;
        case 0x11ccc0u: goto label_11ccc0;
        default: break;
    }

    ctx->pc = 0x11cc68u;

    // 0x11cc68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11cc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11cc6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11cc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11cc70: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11cc70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11cc74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11cc74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc78: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11cc7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11cc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11cc80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11cc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11cc84: 0xc04800e  jal         func_120038
    ctx->pc = 0x11CC84u;
    SET_GPR_U32(ctx, 31, 0x11CC8Cu);
    ctx->pc = 0x11CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC84u;
    // 0x11cc88: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x120038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120038u, 0x11CC84u, 0x11CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC8Cu;
label_11cc8c:
    // 0x11cc8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11cc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc90: 0xc0e4060  jal         func_390180
    ctx->pc = 0x11CC90u;
    SET_GPR_U32(ctx, 31, 0x11CC98u);
    ctx->pc = 0x11CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC90u;
    // 0x11cc94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11CC90u, 0x11CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC98u;
label_11cc98:
    // 0x11cc98: 0xc047a5e  jal         func_11E978
    ctx->pc = 0x11CC98u;
    SET_GPR_U32(ctx, 31, 0x11CCA0u);
    ctx->pc = 0x11CC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC98u;
    // 0x11cc9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E978u, 0x11CC98u, 0x11CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCA0u;
label_11cca0:
    // 0x11cca0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11CCA0u;
    {
        const bool branch_taken_0x11cca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cca0) {
            ctx->pc = 0x11CCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CCA0u;
            // 0x11cca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CCCCu;
            goto label_11cccc;
        }
    }
    ctx->pc = 0x11CCA8u;
    // 0x11cca8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CCA8u;
    {
        const bool branch_taken_0x11cca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCA8u;
        // 0x11ccac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cca8) {
            ctx->pc = 0x11CCC8u;
            goto label_11ccc8;
        }
    }
    ctx->pc = 0x11CCB0u;
    // 0x11ccb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11ccb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11ccb8: 0xc050b4a  jal         func_142D28
    ctx->pc = 0x11CCB8u;
    SET_GPR_U32(ctx, 31, 0x11CCC0u);
    ctx->pc = 0x11CCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCB8u;
    // 0x11ccbc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142D28u, 0x11CCB8u, 0x11CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCC0u;
label_11ccc0:
    // 0x11ccc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11CCC0u;
    {
        const bool branch_taken_0x11ccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCC0u;
        // 0x11ccc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ccc0) {
            ctx->pc = 0x11CCCCu;
            goto label_11cccc;
        }
    }
    ctx->pc = 0x11CCC8u;
label_11ccc8:
    // 0x11ccc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11ccc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11cccc:
    // 0x11cccc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11ccccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ccd0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11ccd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ccd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ccd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ccd8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11ccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ccdc: 0x3e00008  jr          $ra
    ctx->pc = 0x11CCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCDCu;
        // 0x11cce0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CCE4u;
    // 0x11cce4: 0x0  nop
    ctx->pc = 0x11cce4u;
    // NOP
    ctx->pc = 0x11cce8u;
}
