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

// Function: sub_004095D8
// Address: 0x4095d8 - 0x409648
void sub_004095D8_0x4095d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004095D8_0x4095d8");
#endif

    switch (ctx->pc) {
        case 0x409600u: goto label_409600;
        case 0x40960cu: goto label_40960c;
        case 0x409618u: goto label_409618;
        case 0x409624u: goto label_409624;
        default: break;
    }

    ctx->pc = 0x4095d8u;

    // 0x4095d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4095d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4095dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4095dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4095e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4095e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4095e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4095e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4095e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4095e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4095ec: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4095ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4095f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4095f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4095f4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4095f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4095f8: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4095F8u;
    SET_GPR_U32(ctx, 31, 0x409600u);
    ctx->pc = 0x4095FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4095F8u;
    // 0x4095fc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4095F8u, 0x409600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409600u;
label_409600:
    // 0x409600: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x409600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409604: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x409604u;
    SET_GPR_U32(ctx, 31, 0x40960Cu);
    ctx->pc = 0x409608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409604u;
    // 0x409608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x409604u, 0x40960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40960Cu;
label_40960c:
    // 0x40960c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40960cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409610: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x409610u;
    SET_GPR_U32(ctx, 31, 0x409618u);
    ctx->pc = 0x409614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409610u;
    // 0x409614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x409610u, 0x409618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409618u;
label_409618:
    // 0x409618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40961c: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x40961Cu;
    SET_GPR_U32(ctx, 31, 0x409624u);
    ctx->pc = 0x409620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40961Cu;
    // 0x409620: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40961Cu, 0x409624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409624u;
label_409624:
    // 0x409624: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x409624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x409628: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x409628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40962c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40962cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409634: 0x3e00008  jr          $ra
    ctx->pc = 0x409634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409634u;
        // 0x409638: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40963Cu;
    // 0x40963c: 0x0  nop
    ctx->pc = 0x40963cu;
    // NOP
    // 0x409640: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x409640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x409644: 0x0  nop
    ctx->pc = 0x409644u;
    // NOP
    ctx->pc = 0x409648u;
}
