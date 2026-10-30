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

// Function: sub_00421F98
// Address: 0x421f98 - 0x422028
void sub_00421F98_0x421f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00421F98_0x421f98");
#endif

    switch (ctx->pc) {
        case 0x421fecu: goto label_421fec;
        case 0x421ffcu: goto label_421ffc;
        case 0x42200cu: goto label_42200c;
        default: break;
    }

    ctx->pc = 0x421f98u;

    // 0x421f98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x421f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x421f9c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x421f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x421fa0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x421fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x421fa4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x421fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x421fa8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x421fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421fac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x421facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x421fb0: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x421fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x421fb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x421fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421fb8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x421fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x421fbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x421fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x421fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x421fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x421fc4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x421fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x421fc8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x421fc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421fcc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x421fccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x421fd0: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x421fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    // 0x421fd4: 0x24900004  addiu       $s0, $a0, 0x4
    ctx->pc = 0x421fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x421fd8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x421fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421fdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x421fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421fe0: 0x2484000d  addiu       $a0, $a0, 0xD
    ctx->pc = 0x421fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13));
    // 0x421fe4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x421FE4u;
    SET_GPR_U32(ctx, 31, 0x421FECu);
    ctx->pc = 0x421FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421FE4u;
    // 0x421fe8: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x421FE4u, 0x421FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421FECu;
label_421fec:
    // 0x421fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x421fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x421ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421ff4: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x421FF4u;
    SET_GPR_U32(ctx, 31, 0x421FFCu);
    ctx->pc = 0x421FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421FF4u;
    // 0x421ff8: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x421FF4u, 0x421FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421FFCu;
label_421ffc:
    // 0x421ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x421ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422000: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x422000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422004: 0xc10858e  jal         func_421638
    ctx->pc = 0x422004u;
    SET_GPR_U32(ctx, 31, 0x42200Cu);
    ctx->pc = 0x422008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422004u;
    // 0x422008: 0x8c850110  lw          $a1, 0x110($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x421638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x421638u, 0x422004u, 0x42200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42200Cu;
label_42200c:
    // 0x42200c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x42200cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x422010: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x422010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x422014: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x422014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x422018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x422018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42201c: 0x3e00008  jr          $ra
    ctx->pc = 0x42201Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42201Cu;
        // 0x422020: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42201Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422024u;
    // 0x422024: 0x0  nop
    ctx->pc = 0x422024u;
    // NOP
    ctx->pc = 0x422028u;
}
