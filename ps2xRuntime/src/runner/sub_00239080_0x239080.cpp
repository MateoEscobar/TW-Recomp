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

// Function: sub_00239080
// Address: 0x239080 - 0x239100
void sub_00239080_0x239080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239080_0x239080");
#endif

    switch (ctx->pc) {
        case 0x2390a0u: goto label_2390a0;
        case 0x2390a8u: goto label_2390a8;
        case 0x2390e0u: goto label_2390e0;
        default: break;
    }

    ctx->pc = 0x239080u;

    // 0x239080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x239084: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x239084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x239088: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23908c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23908cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239090: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x239090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x239094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239098: 0xc0e4060  jal         func_390180
    ctx->pc = 0x239098u;
    SET_GPR_U32(ctx, 31, 0x2390A0u);
    ctx->pc = 0x23909Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239098u;
    // 0x23909c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x239098u, 0x2390A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390A0u;
label_2390a0:
    // 0x2390a0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2390A0u;
    SET_GPR_U32(ctx, 31, 0x2390A8u);
    ctx->pc = 0x2390A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2390A0u;
    // 0x2390a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2390A0u, 0x2390A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390A8u;
label_2390a8:
    // 0x2390a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2390a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2390ac: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2390ACu;
    {
        const bool branch_taken_0x2390ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2390B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390ACu;
        // 0x2390b0: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390ac) {
            ctx->pc = 0x2390E8u;
            goto label_2390e8;
        }
    }
    ctx->pc = 0x2390B4u;
    // 0x2390b4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2390b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2390b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2390b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2390bc: 0xc60f0000  lwc1        $f15, 0x0($s0)
    ctx->pc = 0x2390bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2390c0: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x2390c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2390c4: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x2390c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2390c8: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2390c8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2390cc: 0xc60e0004  lwc1        $f14, 0x4($s0)
    ctx->pc = 0x2390ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2390d0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2390d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2390d4: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x2390d4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2390d8: 0xc05eb2a  jal         func_17ACA8
    ctx->pc = 0x2390D8u;
    SET_GPR_U32(ctx, 31, 0x2390E0u);
    ctx->pc = 0x2390DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2390D8u;
    // 0x2390dc: 0x46007382  mul.s       $f14, $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x2390D8u, 0x2390E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390E0u;
label_2390e0:
    // 0x2390e0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2390e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2390e4: 0xae230640  sw          $v1, 0x640($s1)
    ctx->pc = 0x2390e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 3));
label_2390e8:
    // 0x2390e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2390e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2390ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2390ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2390f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2390f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2390f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2390F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2390F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390F4u;
        // 0x2390f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2390F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2390FCu;
    // 0x2390fc: 0x0  nop
    ctx->pc = 0x2390fcu;
    // NOP
    ctx->pc = 0x239100u;
}
