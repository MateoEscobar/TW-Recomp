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

// Function: sub_0010C020
// Address: 0x10c020 - 0x10c098
void sub_0010C020_0x10c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C020_0x10c020");
#endif

    switch (ctx->pc) {
        case 0x10c040u: goto label_10c040;
        case 0x10c050u: goto label_10c050;
        case 0x10c078u: goto label_10c078;
        default: break;
    }

    ctx->pc = 0x10c020u;

    // 0x10c020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10c024: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10c024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10c028: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c02c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c030: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10c030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10c034: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10c034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c038: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10C038u;
    SET_GPR_U32(ctx, 31, 0x10C040u);
    ctx->pc = 0x10C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C038u;
    // 0x10c03c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10C038u, 0x10C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C040u;
label_10c040:
    // 0x10c040: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x10C040u;
    {
        const bool branch_taken_0x10c040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c040) {
            ctx->pc = 0x10C044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C040u;
            // 0x10c044: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C088u;
            goto label_10c088;
        }
    }
    ctx->pc = 0x10C048u;
    // 0x10c048: 0xc043026  jal         func_10C098
    ctx->pc = 0x10C048u;
    SET_GPR_U32(ctx, 31, 0x10C050u);
    ctx->pc = 0x10C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C048u;
    // 0x10c04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C098u, 0x10C048u, 0x10C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C050u;
label_10c050:
    // 0x10c050: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10c050u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x10c054: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c058: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c05c: 0x0  nop
    ctx->pc = 0x10c05cu;
    // NOP
    // 0x10c060: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x10c060u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c064: 0x0  nop
    ctx->pc = 0x10c064u;
    // NOP
    // 0x10c068: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x10C068u;
    {
        const bool branch_taken_0x10c068 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C068u;
        // 0x10c06c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c068) {
            ctx->pc = 0x10C088u;
            goto label_10c088;
        }
    }
    ctx->pc = 0x10C070u;
    // 0x10c070: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10C070u;
    SET_GPR_U32(ctx, 31, 0x10C078u);
    ctx->pc = 0x10C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C070u;
    // 0x10c074: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10C070u, 0x10C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C078u;
label_10c078:
    // 0x10c078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10c078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c07c: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x10c07cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x10c080: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x10c080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x10c084: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10c084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10c088:
    // 0x10c088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c08c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10c090: 0x3e00008  jr          $ra
    ctx->pc = 0x10C090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C090u;
        // 0x10c094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C098u;
}
