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

// Function: sub_00296FC8
// Address: 0x296fc8 - 0x297050
void sub_00296FC8_0x296fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296FC8_0x296fc8");
#endif

    switch (ctx->pc) {
        case 0x296ff0u: goto label_296ff0;
        case 0x297000u: goto label_297000;
        case 0x297010u: goto label_297010;
        case 0x297034u: goto label_297034;
        default: break;
    }

    ctx->pc = 0x296fc8u;

    // 0x296fc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x296fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x296fcc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x296fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x296fd0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x296fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x296fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fd8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x296fd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x296fdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x296fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x296fe0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x296fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296fe8: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x296FE8u;
    SET_GPR_U32(ctx, 31, 0x296FF0u);
    ctx->pc = 0x296FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296FE8u;
    // 0x296fec: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x296FE8u, 0x296FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296FF0u;
label_296ff0:
    // 0x296ff0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x296ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296ff4: 0x24710284  addiu       $s1, $v1, 0x284
    ctx->pc = 0x296ff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 644));
    // 0x296ff8: 0xc0a67b8  jal         func_299EE0
    ctx->pc = 0x296FF8u;
    SET_GPR_U32(ctx, 31, 0x297000u);
    ctx->pc = 0x296FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296FF8u;
    // 0x296ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EE0u, 0x296FF8u, 0x297000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297000u;
label_297000:
    // 0x297000: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x297000u;
    {
        const bool branch_taken_0x297000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297000u;
        // 0x297004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297000) {
            ctx->pc = 0x297028u;
            goto label_297028;
        }
    }
    ctx->pc = 0x297008u;
    // 0x297008: 0xc0a5b84  jal         func_296E10
    ctx->pc = 0x297008u;
    SET_GPR_U32(ctx, 31, 0x297010u);
    ctx->pc = 0x29700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297008u;
    // 0x29700c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E10u, 0x297008u, 0x297010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297010u;
label_297010:
    // 0x297010: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x297010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x297014: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x297014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297018: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x297018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29701c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x29701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x297020: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x297020u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x297024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_297028:
    // 0x297028: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x297028u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29702c: 0xc0a67aa  jal         func_299EA8
    ctx->pc = 0x29702Cu;
    SET_GPR_U32(ctx, 31, 0x297034u);
    ctx->pc = 0x297030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29702Cu;
    // 0x297030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EA8u, 0x29702Cu, 0x297034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297034u;
label_297034:
    // 0x297034: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x297034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297038: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x297038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29703c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29703cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297044: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x297044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x297048: 0x3e00008  jr          $ra
    ctx->pc = 0x297048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297048u;
        // 0x29704c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297050u;
}
