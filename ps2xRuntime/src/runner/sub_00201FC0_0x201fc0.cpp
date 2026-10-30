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

// Function: sub_00201FC0
// Address: 0x201fc0 - 0x202028
void sub_00201FC0_0x201fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201FC0_0x201fc0");
#endif

    switch (ctx->pc) {
        case 0x201fd4u: goto label_201fd4;
        case 0x202000u: goto label_202000;
        case 0x202008u: goto label_202008;
        case 0x202010u: goto label_202010;
        default: break;
    }

    ctx->pc = 0x201fc0u;

    // 0x201fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201fc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x201fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x201fc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201fcc: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x201FCCu;
    SET_GPR_U32(ctx, 31, 0x201FD4u);
    ctx->pc = 0x201FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FCCu;
    // 0x201fd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x201FCCu, 0x201FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201FD4u;
label_201fd4:
    // 0x201fd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x201fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x201fd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x201fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201fdc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x201fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x201fe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201fe4: 0x2442d8f8  addiu       $v0, $v0, -0x2708
    ctx->pc = 0x201fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957304));
    // 0x201fe8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x201fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x201fec: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x201fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x201ff0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x201ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x201ff4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x201ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x201ff8: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x201FF8u;
    SET_GPR_U32(ctx, 31, 0x202000u);
    ctx->pc = 0x201FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FF8u;
    // 0x201ffc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x201FF8u, 0x202000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202000u;
label_202000:
    // 0x202000: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x202000u;
    SET_GPR_U32(ctx, 31, 0x202008u);
    ctx->pc = 0x202004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202000u;
    // 0x202004: 0x26040170  addiu       $a0, $s0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x202000u, 0x202008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202008u;
label_202008:
    // 0x202008: 0xc0742aa  jal         func_1D0AA8
    ctx->pc = 0x202008u;
    SET_GPR_U32(ctx, 31, 0x202010u);
    ctx->pc = 0x20200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202008u;
    // 0x20200c: 0x26040270  addiu       $a0, $s0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0AA8u, 0x202008u, 0x202010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202010u;
label_202010:
    // 0x202010: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x202010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202018: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x202018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20201c: 0x3e00008  jr          $ra
    ctx->pc = 0x20201Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20201Cu;
        // 0x202020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20201Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202024u;
    // 0x202024: 0x0  nop
    ctx->pc = 0x202024u;
    // NOP
    ctx->pc = 0x202028u;
}
