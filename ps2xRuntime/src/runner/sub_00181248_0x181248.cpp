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

// Function: sub_00181248
// Address: 0x181248 - 0x1812a8
void sub_00181248_0x181248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181248_0x181248");
#endif

    switch (ctx->pc) {
        case 0x181264u: goto label_181264;
        case 0x181278u: goto label_181278;
        case 0x18128cu: goto label_18128c;
        default: break;
    }

    ctx->pc = 0x181248u;

    // 0x181248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18124c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18124cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x181250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181254: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x181254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18125c: 0xc05fce0  jal         func_17F380
    ctx->pc = 0x18125Cu;
    SET_GPR_U32(ctx, 31, 0x181264u);
    ctx->pc = 0x181260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18125Cu;
    // 0x181260: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F380u, 0x18125Cu, 0x181264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181264u;
label_181264:
    // 0x181264: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x181264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x181268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18126c: 0x24638d30  addiu       $v1, $v1, -0x72D0
    ctx->pc = 0x18126cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937904));
    // 0x181270: 0xc06610a  jal         func_198428
    ctx->pc = 0x181270u;
    SET_GPR_U32(ctx, 31, 0x181278u);
    ctx->pc = 0x181274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181270u;
    // 0x181274: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198428u, 0x181270u, 0x181278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181278u;
label_181278:
    // 0x181278: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x181278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x18127c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18127cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181280: 0x24a50790  addiu       $a1, $a1, 0x790
    ctx->pc = 0x181280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1936));
    // 0x181284: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x181284u;
    SET_GPR_U32(ctx, 31, 0x18128Cu);
    ctx->pc = 0x181288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181284u;
    // 0x181288: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x181284u, 0x18128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18128Cu;
label_18128c:
    // 0x18128c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18128cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181290: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x181290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18129c: 0x3e00008  jr          $ra
    ctx->pc = 0x18129Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1812A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18129Cu;
        // 0x1812a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18129Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1812A4u;
    // 0x1812a4: 0x0  nop
    ctx->pc = 0x1812a4u;
    // NOP
    ctx->pc = 0x1812a8u;
}
