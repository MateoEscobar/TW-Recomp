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

// Function: sub_00370E98
// Address: 0x370e98 - 0x370f28
void sub_00370E98_0x370e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370E98_0x370e98");
#endif

    switch (ctx->pc) {
        case 0x370ebcu: goto label_370ebc;
        case 0x370ed0u: goto label_370ed0;
        case 0x370ef0u: goto label_370ef0;
        case 0x370ef8u: goto label_370ef8;
        case 0x370f08u: goto label_370f08;
        default: break;
    }

    ctx->pc = 0x370e98u;

    // 0x370e98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x370e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x370e9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370ea0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x370ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x370ea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ea8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x370ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x370eac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x370eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x370eb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370eb4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x370EB4u;
    SET_GPR_U32(ctx, 31, 0x370EBCu);
    ctx->pc = 0x370EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370EB4u;
    // 0x370eb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x370EB4u, 0x370EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370EBCu;
label_370ebc:
    // 0x370ebc: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x370ebcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x370ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ec4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x370ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370ec8: 0xc102488  jal         func_409220
    ctx->pc = 0x370EC8u;
    SET_GPR_U32(ctx, 31, 0x370ED0u);
    ctx->pc = 0x370ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370EC8u;
    // 0x370ecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x370EC8u, 0x370ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370ED0u;
label_370ed0:
    // 0x370ed0: 0x34068187  ori         $a2, $zero, 0x8187
    ctx->pc = 0x370ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33159);
    // 0x370ed4: 0x634f8  dsll        $a2, $a2, 19
    ctx->pc = 0x370ed4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 19);
    // 0x370ed8: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x370ed8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x370edc: 0x63738  dsll        $a2, $a2, 28
    ctx->pc = 0x370edcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 28);
    // 0x370ee0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x370ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ee8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370EE8u;
    SET_GPR_U32(ctx, 31, 0x370EF0u);
    ctx->pc = 0x370EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370EE8u;
    // 0x370eec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370EE8u, 0x370EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370EF0u;
label_370ef0:
    // 0x370ef0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370EF0u;
    SET_GPR_U32(ctx, 31, 0x370EF8u);
    ctx->pc = 0x370EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370EF0u;
    // 0x370ef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370EF0u, 0x370EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370EF8u;
label_370ef8:
    // 0x370ef8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x370ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370efc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x370efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f00: 0xc108d9c  jal         func_423670
    ctx->pc = 0x370F00u;
    SET_GPR_U32(ctx, 31, 0x370F08u);
    ctx->pc = 0x370F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370F00u;
    // 0x370f04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423670u, 0x370F00u, 0x370F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370F08u;
label_370f08:
    // 0x370f08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x370f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370f0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x370f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370f14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x370f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x370F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F1Cu;
        // 0x370f20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370F24u;
    // 0x370f24: 0x0  nop
    ctx->pc = 0x370f24u;
    // NOP
    ctx->pc = 0x370f28u;
}
