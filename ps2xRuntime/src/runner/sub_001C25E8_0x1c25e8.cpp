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

// Function: sub_001C25E8
// Address: 0x1c25e8 - 0x1c2638
void sub_001C25E8_0x1c25e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C25E8_0x1c25e8");
#endif

    switch (ctx->pc) {
        case 0x1c2608u: goto label_1c2608;
        case 0x1c2610u: goto label_1c2610;
        default: break;
    }

    ctx->pc = 0x1c25e8u;

    // 0x1c25e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c25e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c25ec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1c25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1c25f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c25f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c25f4: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x1c25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x1c25f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c25f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c25fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2600: 0xc068426  jal         func_1A1098
    ctx->pc = 0x1C2600u;
    SET_GPR_U32(ctx, 31, 0x1C2608u);
    ctx->pc = 0x1C2604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2600u;
    // 0x1c2604: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1098u, 0x1C2600u, 0x1C2608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2608u;
label_1c2608:
    // 0x1c2608: 0xc06d800  jal         func_1B6000
    ctx->pc = 0x1C2608u;
    SET_GPR_U32(ctx, 31, 0x1C2610u);
    ctx->pc = 0x1C260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2608u;
    // 0x1c260c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6000u, 0x1C2608u, 0x1C2610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2610u;
label_1c2610:
    // 0x1c2610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c2614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2618: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x1c2618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x1c261c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1c261cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1c2620: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1c2620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x1c2624: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1c2624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x1c2628: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c262c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c262cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2630: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2630u;
        // 0x1c2634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2638u;
}
