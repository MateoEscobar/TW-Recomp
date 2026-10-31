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

// Function: sub_00172FF0
// Address: 0x172ff0 - 0x173068
void sub_00172FF0_0x172ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172FF0_0x172ff0");
#endif

    switch (ctx->pc) {
        case 0x17300cu: goto label_17300c;
        case 0x173020u: goto label_173020;
        case 0x17303cu: goto label_17303c;
        case 0x173050u: goto label_173050;
        default: break;
    }

    ctx->pc = 0x172ff0u;

    // 0x172ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172ff4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x172ff4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ff8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x172ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x172ffc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x172ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x173000: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173004: 0xc05fe3e  jal         func_17F8F8
    ctx->pc = 0x173004u;
    SET_GPR_U32(ctx, 31, 0x17300Cu);
    ctx->pc = 0x173008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173004u;
    // 0x173008: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F8F8u, 0x173004u, 0x17300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17300Cu;
label_17300c:
    // 0x17300c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17300cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173014: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x173014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173018: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x173018u;
    SET_GPR_U32(ctx, 31, 0x173020u);
    ctx->pc = 0x17301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173018u;
    // 0x17301c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x173018u, 0x173020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173020u;
label_173020:
    // 0x173020: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x173020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x173024: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x173024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17302c: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x17302cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    // 0x173030: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x173030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x173034: 0xc05fdee  jal         func_17F7B8
    ctx->pc = 0x173034u;
    SET_GPR_U32(ctx, 31, 0x17303Cu);
    ctx->pc = 0x173038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173034u;
    // 0x173038: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B8u, 0x173034u, 0x17303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17303Cu;
label_17303c:
    // 0x17303c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x17303cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x173040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173044: 0x24a525d0  addiu       $a1, $a1, 0x25D0
    ctx->pc = 0x173044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9680));
    // 0x173048: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x173048u;
    SET_GPR_U32(ctx, 31, 0x173050u);
    ctx->pc = 0x17304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173048u;
    // 0x17304c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x173048u, 0x173050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173050u;
label_173050:
    // 0x173050: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x173050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173054: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x173054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173058: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x173058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17305c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17305cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173060: 0x3e00008  jr          $ra
    ctx->pc = 0x173060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173060u;
        // 0x173064: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173068u;
}
