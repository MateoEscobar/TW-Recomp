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

// Function: sub_001AB798
// Address: 0x1ab798 - 0x1ab7f0
void sub_001AB798_0x1ab798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB798_0x1ab798");
#endif

    switch (ctx->pc) {
        case 0x1ab798u: goto label_1ab798;
        case 0x1ab79cu: goto label_1ab79c;
        case 0x1ab7a0u: goto label_1ab7a0;
        case 0x1ab7a4u: goto label_1ab7a4;
        case 0x1ab7a8u: goto label_1ab7a8;
        case 0x1ab7acu: goto label_1ab7ac;
        case 0x1ab7b0u: goto label_1ab7b0;
        case 0x1ab7b4u: goto label_1ab7b4;
        case 0x1ab7b8u: goto label_1ab7b8;
        case 0x1ab7bcu: goto label_1ab7bc;
        case 0x1ab7c0u: goto label_1ab7c0;
        case 0x1ab7c4u: goto label_1ab7c4;
        case 0x1ab7c8u: goto label_1ab7c8;
        case 0x1ab7ccu: goto label_1ab7cc;
        case 0x1ab7d0u: goto label_1ab7d0;
        case 0x1ab7d4u: goto label_1ab7d4;
        case 0x1ab7d8u: goto label_1ab7d8;
        case 0x1ab7dcu: goto label_1ab7dc;
        case 0x1ab7e0u: goto label_1ab7e0;
        case 0x1ab7e4u: goto label_1ab7e4;
        case 0x1ab7e8u: goto label_1ab7e8;
        case 0x1ab7ecu: goto label_1ab7ec;
        default: break;
    }

    ctx->pc = 0x1ab798u;

label_1ab798:
    // 0x1ab798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ab79c:
    // 0x1ab79c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ab79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ab7a0:
    // 0x1ab7a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ab7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ab7a4:
    // 0x1ab7a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ab7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ab7a8:
    // 0x1ab7a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab7ac:
    // 0x1ab7ac: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x1ab7acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_1ab7b0:
    // 0x1ab7b0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1ab7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1ab7b4:
    // 0x1ab7b4: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1ab7b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1ab7b8:
    // 0x1ab7b8: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1ab7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1ab7bc:
    // 0x1ab7bc: 0x40f809  jalr        $v0
label_1ab7c0:
    if (ctx->pc == 0x1AB7C0u) {
        ctx->pc = 0x1AB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7BCu;
        // 0x1ab7c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB7C4u;
        goto label_1ab7c4;
    }
    ctx->pc = 0x1AB7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB7C4u);
        ctx->pc = 0x1AB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7BCu;
        // 0x1ab7c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB7BCu, 0x1AB7C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB7C4u;
label_1ab7c4:
    // 0x1ab7c4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1ab7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab7c8:
    // 0x1ab7c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ab7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab7cc:
    // 0x1ab7cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab7d0:
    // 0x1ab7d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ab7d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ab7d4:
    // 0x1ab7d4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1ab7d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ab7d8:
    // 0x1ab7d8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1ab7d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab7dc:
    // 0x1ab7dc: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1ab7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_1ab7e0:
    // 0x1ab7e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ab7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab7e4:
    // 0x1ab7e4: 0x3e00008  jr          $ra
label_1ab7e8:
    if (ctx->pc == 0x1AB7E8u) {
        ctx->pc = 0x1AB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7E4u;
        // 0x1ab7e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB7ECu;
        goto label_1ab7ec;
    }
    ctx->pc = 0x1AB7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7E4u;
        // 0x1ab7e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB7ECu;
label_1ab7ec:
    // 0x1ab7ec: 0x0  nop
    ctx->pc = 0x1ab7ecu;
    // NOP
    ctx->pc = 0x1ab7f0u;
}
