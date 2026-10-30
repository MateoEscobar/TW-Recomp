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

// Function: sub_0017F1B8
// Address: 0x17f1b8 - 0x17f218
void sub_0017F1B8_0x17f1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F1B8_0x17f1b8");
#endif

    switch (ctx->pc) {
        case 0x17f208u: goto label_17f208;
        default: break;
    }

    ctx->pc = 0x17f1b8u;

    // 0x17f1b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f1bc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x17f1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x17f1c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17f1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f1c4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x17f1c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x17f1c8: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x17f1c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x17f1cc: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x17f1ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x17f1d0: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x17f1d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x17f1d4: 0x314affff  andi        $t2, $t2, 0xFFFF
    ctx->pc = 0x17f1d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x17f1d8: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x17f1d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x17f1dc: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x17f1dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f1e0: 0x97ac0038  lhu         $t4, 0x38($sp)
    ctx->pc = 0x17f1e0u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17f1e4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F1E4u;
    {
        const bool branch_taken_0x17f1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1E4u;
        // 0x17f1e8: 0x97a30040  lhu         $v1, 0x40($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1e4) {
            ctx->pc = 0x17F208u;
            goto label_17f208;
        }
    }
    ctx->pc = 0x17F1ECu;
    // 0x17f1ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f1f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17f1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17f1f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x17f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x17f1f8: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x17f1f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x17f1fc: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x17f1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x17f200: 0xc05f42c  jal         func_17D0B0
    ctx->pc = 0x17F200u;
    SET_GPR_U32(ctx, 31, 0x17F208u);
    ctx->pc = 0x17F204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F200u;
    // 0x17f204: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D0B0u, 0x17F200u, 0x17F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F208u;
label_17f208:
    // 0x17f208: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17f208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f20c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F20Cu;
        // 0x17f210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F214u;
    // 0x17f214: 0x0  nop
    ctx->pc = 0x17f214u;
    // NOP
    ctx->pc = 0x17f218u;
}
