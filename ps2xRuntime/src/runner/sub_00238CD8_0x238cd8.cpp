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

// Function: sub_00238CD8
// Address: 0x238cd8 - 0x238d30
void sub_00238CD8_0x238cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238CD8_0x238cd8");
#endif

    switch (ctx->pc) {
        case 0x238cf8u: goto label_238cf8;
        case 0x238d00u: goto label_238d00;
        case 0x238d14u: goto label_238d14;
        default: break;
    }

    ctx->pc = 0x238cd8u;

    // 0x238cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x238cdc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x238cdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x238ce0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238ce4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x238ce4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x238ce8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x238cec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238cf0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238CF0u;
    SET_GPR_U32(ctx, 31, 0x238CF8u);
    ctx->pc = 0x238CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238CF0u;
    // 0x238cf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238CF0u, 0x238CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238CF8u;
label_238cf8:
    // 0x238cf8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238CF8u;
    SET_GPR_U32(ctx, 31, 0x238D00u);
    ctx->pc = 0x238CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238CF8u;
    // 0x238cfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238CF8u, 0x238D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D00u;
label_238d00:
    // 0x238d00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d04: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x238D04u;
    {
        const bool branch_taken_0x238d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x238d04) {
            ctx->pc = 0x238D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D04u;
            // 0x238d08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D20u;
            goto label_238d20;
        }
    }
    ctx->pc = 0x238D0Cu;
    // 0x238d0c: 0xc08a000  jal         func_228000
    ctx->pc = 0x238D0Cu;
    SET_GPR_U32(ctx, 31, 0x238D14u);
    ctx->pc = 0x238D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D0Cu;
    // 0x238d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228000u, 0x238D0Cu, 0x238D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D14u;
label_238d14:
    // 0x238d14: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x238D14u;
    {
        const bool branch_taken_0x238d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238d14) {
            ctx->pc = 0x238D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D14u;
            // 0x238d18: 0xe6140670  swc1        $f20, 0x670($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1648), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D1Cu;
            goto label_238d1c;
        }
    }
    ctx->pc = 0x238D1Cu;
label_238d1c:
    // 0x238d1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x238d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_238d20:
    // 0x238d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238d24: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x238d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x238d28: 0x3e00008  jr          $ra
    ctx->pc = 0x238D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D28u;
        // 0x238d2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238D30u;
}
