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

// Function: sub_00173928
// Address: 0x173928 - 0x173988
void sub_00173928_0x173928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173928_0x173928");
#endif

    switch (ctx->pc) {
        case 0x173944u: goto label_173944;
        case 0x173958u: goto label_173958;
        case 0x17396cu: goto label_17396c;
        default: break;
    }

    ctx->pc = 0x173928u;

    // 0x173928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17392c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17392cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x173930: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173934: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x173934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17393c: 0xc05fce0  jal         func_17F380
    ctx->pc = 0x17393Cu;
    SET_GPR_U32(ctx, 31, 0x173944u);
    ctx->pc = 0x173940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17393Cu;
    // 0x173940: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F380u, 0x17393Cu, 0x173944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173944u;
label_173944:
    // 0x173944: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x173944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x173948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17394c: 0x24638a38  addiu       $v1, $v1, -0x75C8
    ctx->pc = 0x17394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937144));
    // 0x173950: 0xc06610a  jal         func_198428
    ctx->pc = 0x173950u;
    SET_GPR_U32(ctx, 31, 0x173958u);
    ctx->pc = 0x173954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173950u;
    // 0x173954: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198428u, 0x173950u, 0x173958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173958u;
label_173958:
    // 0x173958: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x173958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x17395c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17395cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173960: 0x24a52f28  addiu       $a1, $a1, 0x2F28
    ctx->pc = 0x173960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12072));
    // 0x173964: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x173964u;
    SET_GPR_U32(ctx, 31, 0x17396Cu);
    ctx->pc = 0x173968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173964u;
    // 0x173968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x173964u, 0x17396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17396Cu;
label_17396c:
    // 0x17396c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17396cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173970: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x173970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17397c: 0x3e00008  jr          $ra
    ctx->pc = 0x17397Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17397Cu;
        // 0x173980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17397Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173984u;
    // 0x173984: 0x0  nop
    ctx->pc = 0x173984u;
    // NOP
    ctx->pc = 0x173988u;
}
