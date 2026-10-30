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

// Function: sub_001B5DD8
// Address: 0x1b5dd8 - 0x1b5e60
void sub_001B5DD8_0x1b5dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5DD8_0x1b5dd8");
#endif

    switch (ctx->pc) {
        case 0x1b5de8u: goto label_1b5de8;
        case 0x1b5e20u: goto label_1b5e20;
        default: break;
    }

    ctx->pc = 0x1b5dd8u;

    // 0x1b5dd8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b5dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5ddc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5DDCu;
    {
        const bool branch_taken_0x1b5ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DDCu;
        // 0x1b5de0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ddc) {
            ctx->pc = 0x1B5E00u;
            goto label_1b5e00;
        }
    }
    ctx->pc = 0x1B5DE4u;
    // 0x1b5de4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b5de4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b5de8:
    // 0x1b5de8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b5de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5dec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b5decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b5df0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1b5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1b5df4: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x1b5df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b5df8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B5DF8u;
    {
        const bool branch_taken_0x1b5df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DF8u;
        // 0x1b5dfc: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5df8) {
            ctx->pc = 0x1B5DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5de8;
        }
    }
    ctx->pc = 0x1B5E00u;
label_1b5e00:
    // 0x1b5e00: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b5e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5e04: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B5E04u;
    {
        const bool branch_taken_0x1b5e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E04u;
        // 0x1b5e08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e04) {
            ctx->pc = 0x1B5E54u;
            goto label_1b5e54;
        }
    }
    ctx->pc = 0x1B5E0Cu;
    // 0x1b5e0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b5e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b5e10: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b5e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b5e14: 0x0  nop
    ctx->pc = 0x1b5e14u;
    // NOP
    // 0x1b5e18: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x1b5e18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1b5e1c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1b5e1cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_1b5e20:
    // 0x1b5e20: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1b5e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5e24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b5e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b5e28: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1b5e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b5e2c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1b5e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1b5e30: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1b5e30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1b5e34: 0x460c1000  add.s       $f0, $f2, $f12
    ctx->pc = 0x1b5e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x1b5e38: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1b5e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1b5e3c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1b5e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1b5e40: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b5e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5e44: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1b5e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b5e48: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1b5e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1b5e4c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B5E4Cu;
    {
        const bool branch_taken_0x1b5e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E4Cu;
        // 0x1b5e50: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e4c) {
            ctx->pc = 0x1B5E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5e20;
        }
    }
    ctx->pc = 0x1B5E54u;
label_1b5e54:
    // 0x1b5e54: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5E5Cu;
    // 0x1b5e5c: 0x0  nop
    ctx->pc = 0x1b5e5cu;
    // NOP
    ctx->pc = 0x1b5e60u;
}
