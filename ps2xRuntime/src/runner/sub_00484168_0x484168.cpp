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

// Function: sub_00484168
// Address: 0x484168 - 0x4841d8
void sub_00484168_0x484168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484168_0x484168");
#endif

    ctx->pc = 0x484168u;

    // 0x484168: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x484168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48416c: 0x8cc700a0  lw          $a3, 0xA0($a2)
    ctx->pc = 0x48416cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x484170: 0x90e80003  lbu         $t0, 0x3($a3)
    ctx->pc = 0x484170u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x484174: 0x31020003  andi        $v0, $t0, 0x3
    ctx->pc = 0x484174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x484178: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x484178u;
    {
        const bool branch_taken_0x484178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x484178) {
            ctx->pc = 0x48417Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x484178u;
            // 0x48417c: 0x8cc500a0  lw          $a1, 0xA0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4841B8u;
            goto label_4841b8;
        }
    }
    ctx->pc = 0x484180u;
    // 0x484180: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x484180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x484184: 0x8ca3add4  lw          $v1, -0x522C($a1)
    ctx->pc = 0x484184u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70ADD4u));
    // 0x484188: 0x24a4add4  addiu       $a0, $a1, -0x522C
    ctx->pc = 0x484188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946260));
    // 0x48418c: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x48418cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x484190: 0x8cc200a0  lw          $v0, 0xA0($a2)
    ctx->pc = 0x484190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x484194: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x484194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x484198: 0x8cc300a0  lw          $v1, 0xA0($a2)
    ctx->pc = 0x484198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x48419c: 0x8ca4add4  lw          $a0, -0x522C($a1)
    ctx->pc = 0x48419cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70ADD4u));
    // 0x4841a0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x4841a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4841a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4841a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x4841a8: 0x8cc200a0  lw          $v0, 0xA0($a2)
    ctx->pc = 0x4841a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x4841ac: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4841acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4841b0: 0xaca2add4  sw          $v0, -0x522C($a1)
    ctx->pc = 0x4841b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70ADD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADD4u, _value); } while (0);
    // 0x4841b4: 0x8cc500a0  lw          $a1, 0xA0($a2)
    ctx->pc = 0x4841b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
label_4841b8:
    // 0x4841b8: 0x35040003  ori         $a0, $t0, 0x3
    ctx->pc = 0x4841b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
    // 0x4841bc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4841bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4841c0: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x4841c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x4841c4: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x4841c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x4841c8: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x4841c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x4841cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4841CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4841D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4841CCu;
        // 0x4841d0: 0xa0c30003  sb          $v1, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4841CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4841D4u;
    // 0x4841d4: 0x0  nop
    ctx->pc = 0x4841d4u;
    // NOP
    ctx->pc = 0x4841d8u;
}
