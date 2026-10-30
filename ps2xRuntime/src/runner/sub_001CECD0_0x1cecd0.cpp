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

// Function: sub_001CECD0
// Address: 0x1cecd0 - 0x1ced38
void sub_001CECD0_0x1cecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CECD0_0x1cecd0");
#endif

    switch (ctx->pc) {
        case 0x1cecf8u: goto label_1cecf8;
        default: break;
    }

    ctx->pc = 0x1cecd0u;

    // 0x1cecd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cecd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cecd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecd8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cecdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cece0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cece0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cece4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cece4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cece8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cecec: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1cececu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1cecf0: 0xc06e4ea  jal         func_1B93A8
    ctx->pc = 0x1CECF0u;
    SET_GPR_U32(ctx, 31, 0x1CECF8u);
    ctx->pc = 0x1CECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CECF0u;
    // 0x1cecf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1CECF0u, 0x1CECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CECF8u;
label_1cecf8:
    // 0x1cecf8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1cecf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cecfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cecfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced00: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1ced00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ced04: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1ced04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ced08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ced08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ced0c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1ced0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1ced10: 0xe6020030  swc1        $f2, 0x30($s0)
    ctx->pc = 0x1ced10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1ced14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ced14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ced18: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1ced18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1ced1c: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x1ced1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ced20: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ced20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ced24: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x1ced24u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x1ced28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ced28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ced2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CED2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED2Cu;
        // 0x1ced30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CED2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CED34u;
    // 0x1ced34: 0x0  nop
    ctx->pc = 0x1ced34u;
    // NOP
    ctx->pc = 0x1ced38u;
}
