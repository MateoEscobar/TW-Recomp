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

// Function: sub_0038DEE8
// Address: 0x38dee8 - 0x38df38
void sub_0038DEE8_0x38dee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DEE8_0x38dee8");
#endif

    switch (ctx->pc) {
        case 0x38df0cu: goto label_38df0c;
        case 0x38df20u: goto label_38df20;
        default: break;
    }

    ctx->pc = 0x38dee8u;

    // 0x38dee8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38dee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38deec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38deecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x38def0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38def0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38def4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38def4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38def8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x38def8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x38defc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38defcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38df00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38df00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38df04: 0xc0e4088  jal         func_390220
    ctx->pc = 0x38DF04u;
    SET_GPR_U32(ctx, 31, 0x38DF0Cu);
    ctx->pc = 0x38DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF04u;
    // 0x38df08: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390220u, 0x38DF04u, 0x38DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF0Cu;
label_38df0c:
    // 0x38df0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38DF0Cu;
    {
        const bool branch_taken_0x38df0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF0Cu;
        // 0x38df10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df0c) {
            ctx->pc = 0x38DF20u;
            goto label_38df20;
        }
    }
    ctx->pc = 0x38DF14u;
    // 0x38df14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38df14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38df18: 0xc0e29fa  jal         func_38A7E8
    ctx->pc = 0x38DF18u;
    SET_GPR_U32(ctx, 31, 0x38DF20u);
    ctx->pc = 0x38DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF18u;
    // 0x38df1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A7E8u, 0x38DF18u, 0x38DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF20u;
label_38df20:
    // 0x38df20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38df20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38df24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38df24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38df28: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x38df28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38df2c: 0x3e00008  jr          $ra
    ctx->pc = 0x38DF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF2Cu;
        // 0x38df30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DF34u;
    // 0x38df34: 0x0  nop
    ctx->pc = 0x38df34u;
    // NOP
    ctx->pc = 0x38df38u;
}
