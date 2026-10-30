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

// Function: sub_0019D318
// Address: 0x19d318 - 0x19d390
void sub_0019D318_0x19d318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D318_0x19d318");
#endif

    switch (ctx->pc) {
        case 0x19d340u: goto label_19d340;
        default: break;
    }

    ctx->pc = 0x19d318u;

    // 0x19d318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d31c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d320: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19d320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19d324: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19d324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d328: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19d328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d32c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x19d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x19d330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d334: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x19d334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x19d338: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x19D338u;
    SET_GPR_U32(ctx, 31, 0x19D340u);
    ctx->pc = 0x19D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D338u;
    // 0x19d33c: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x19D338u, 0x19D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D340u;
label_19d340:
    // 0x19d340: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x19d340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x19d344: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D344u;
    {
        const bool branch_taken_0x19d344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D344u;
        // 0x19d348: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d344) {
            ctx->pc = 0x19D364u;
            goto label_19d364;
        }
    }
    ctx->pc = 0x19D34Cu;
    // 0x19d34c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x19d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19d350: 0xc460cf3c  lwc1        $f0, -0x30C4($v1)
    ctx->pc = 0x19d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d354: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x19d354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19d358: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19d358u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19d35c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19D35Cu;
    {
        const bool branch_taken_0x19d35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D35Cu;
        // 0x19d360: 0x711021  addu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d35c) {
            ctx->pc = 0x19D374u;
            goto label_19d374;
        }
    }
    ctx->pc = 0x19D364u;
label_19d364:
    // 0x19d364: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x19d364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19d368: 0x2022018  mult        $a0, $s0, $v0
    ctx->pc = 0x19d368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x19d36c: 0xc460cf3c  lwc1        $f0, -0x30C4($v1)
    ctx->pc = 0x19d36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d370: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x19d370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_19d374:
    // 0x19d374: 0xe4401d04  swc1        $f0, 0x1D04($v0)
    ctx->pc = 0x19d374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7428), bits); }
    // 0x19d378: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19d378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d37c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d37cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d384: 0x3e00008  jr          $ra
    ctx->pc = 0x19D384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D384u;
        // 0x19d388: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D38Cu;
    // 0x19d38c: 0x0  nop
    ctx->pc = 0x19d38cu;
    // NOP
    ctx->pc = 0x19d390u;
}
