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

// Function: sub_0010BFC0
// Address: 0x10bfc0 - 0x10c020
void sub_0010BFC0_0x10bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BFC0_0x10bfc0");
#endif

    switch (ctx->pc) {
        case 0x10bfe0u: goto label_10bfe0;
        case 0x10bff0u: goto label_10bff0;
        case 0x10bffcu: goto label_10bffc;
        default: break;
    }

    ctx->pc = 0x10bfc0u;

    // 0x10bfc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10bfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10bfc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10bfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10bfc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10bfc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10bfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10bfd0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10bfd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10bfd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10bfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfd8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10BFD8u;
    SET_GPR_U32(ctx, 31, 0x10BFE0u);
    ctx->pc = 0x10BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFD8u;
    // 0x10bfdc: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10BFD8u, 0x10BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFE0u;
label_10bfe0:
    // 0x10bfe0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10BFE0u;
    {
        const bool branch_taken_0x10bfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bfe0) {
            ctx->pc = 0x10BFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BFE0u;
            // 0x10bfe4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C00Cu;
            goto label_10c00c;
        }
    }
    ctx->pc = 0x10BFE8u;
    // 0x10bfe8: 0xc042fe4  jal         func_10BF90
    ctx->pc = 0x10BFE8u;
    SET_GPR_U32(ctx, 31, 0x10BFF0u);
    ctx->pc = 0x10BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFE8u;
    // 0x10bfec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF90u, 0x10BFE8u, 0x10BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFF0u;
label_10bff0:
    // 0x10bff0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10bff0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x10bff4: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10BFF4u;
    SET_GPR_U32(ctx, 31, 0x10BFFCu);
    ctx->pc = 0x10BFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFF4u;
    // 0x10bff8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10BFF4u, 0x10BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFFCu;
label_10bffc:
    // 0x10bffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c000: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x10c000u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x10c004: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x10c004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x10c008: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10c008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10c00c:
    // 0x10c00c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c010: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10c010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10c014: 0x3e00008  jr          $ra
    ctx->pc = 0x10C014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C014u;
        // 0x10c018: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C01Cu;
    // 0x10c01c: 0x0  nop
    ctx->pc = 0x10c01cu;
    // NOP
    ctx->pc = 0x10c020u;
}
