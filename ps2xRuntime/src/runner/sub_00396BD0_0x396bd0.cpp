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

// Function: sub_00396BD0
// Address: 0x396bd0 - 0x396c58
void sub_00396BD0_0x396bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396BD0_0x396bd0");
#endif

    switch (ctx->pc) {
        case 0x396bf0u: goto label_396bf0;
        case 0x396c28u: goto label_396c28;
        default: break;
    }

    ctx->pc = 0x396bd0u;

    // 0x396bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x396bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x396bd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x396bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x396bd8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x396bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x396bdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x396bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396be0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x396be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x396be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396be8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x396BE8u;
    SET_GPR_U32(ctx, 31, 0x396BF0u);
    ctx->pc = 0x396BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396BE8u;
    // 0x396bec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396BE8u, 0x396BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396BF0u;
label_396bf0:
    // 0x396bf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x396bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396bf4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x396BF4u;
    {
        const bool branch_taken_0x396bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BF4u;
        // 0x396bf8: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396bf4) {
            ctx->pc = 0x396C38u;
            goto label_396c38;
        }
    }
    ctx->pc = 0x396BFCu;
    // 0x396bfc: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x396bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x396c00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x396c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x396c04: 0xc60f0000  lwc1        $f15, 0x0($s0)
    ctx->pc = 0x396c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x396c08: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x396c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x396c0c: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x396c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x396c10: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x396c10u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x396c14: 0xc60e0004  lwc1        $f14, 0x4($s0)
    ctx->pc = 0x396c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x396c18: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x396c18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x396c1c: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x396c1cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x396c20: 0xc05eb2a  jal         func_17ACA8
    ctx->pc = 0x396C20u;
    SET_GPR_U32(ctx, 31, 0x396C28u);
    ctx->pc = 0x396C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396C20u;
    // 0x396c24: 0x46007382  mul.s       $f14, $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x396C20u, 0x396C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396C28u;
label_396c28:
    // 0x396c28: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x396c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x396c2c: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x396c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
    // 0x396c30: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x396c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x396c34: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x396c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
label_396c38:
    // 0x396c38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x396c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396c3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x396c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396c40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396c44: 0x3e00008  jr          $ra
    ctx->pc = 0x396C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C44u;
        // 0x396c48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396C4Cu;
    // 0x396c4c: 0x0  nop
    ctx->pc = 0x396c4cu;
    // NOP
    // 0x396c50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x396c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x396c54: 0x0  nop
    ctx->pc = 0x396c54u;
    // NOP
    ctx->pc = 0x396c58u;
}
