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

// Function: sub_004804D0
// Address: 0x4804d0 - 0x480550
void sub_004804D0_0x4804d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004804D0_0x4804d0");
#endif

    ctx->pc = 0x4804d0u;

    // 0x4804d0: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x4804d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4804d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4804d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4804d8: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x4804d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4804dc: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x4804dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4804e0: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x4804e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4804e4: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x4804e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x4804e8: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x4804e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x4804ec: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x4804ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4804f0: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x4804f0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x4804f4: 0xc4c30014  lwc1        $f3, 0x14($a2)
    ctx->pc = 0x4804f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4804f8: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x4804f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4804fc: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x4804fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x480500: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x480500u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x480504: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x480504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x480508: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x480508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x48050c: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x48050cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x480510: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x480510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x480514: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x480514u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x480518: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x480518u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x48051c: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x48051cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x480520: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x480520u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x480524: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x480524u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x480528: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x480528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x48052c: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x48052cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x480530: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x480530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x480534: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x480534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x480538: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x480538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x48053c: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x48053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x480540: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x480540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x480544: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x480544u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x480548: 0x3e00008  jr          $ra
    ctx->pc = 0x480548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480548u;
        // 0x48054c: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480550u;
}
