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

// Function: sub_00483BF8
// Address: 0x483bf8 - 0x483c88
void sub_00483BF8_0x483bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483BF8_0x483bf8");
#endif

    switch (ctx->pc) {
        case 0x483c10u: goto label_483c10;
        default: break;
    }

    ctx->pc = 0x483bf8u;

    // 0x483bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x483bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x483bfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x483bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x483c00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x483c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x483c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x483c08: 0xc11f4c0  jal         func_47D300
    ctx->pc = 0x483C08u;
    SET_GPR_U32(ctx, 31, 0x483C10u);
    ctx->pc = 0x483C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483C08u;
    // 0x483c0c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D300u, 0x483C08u, 0x483C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483C10u;
label_483c10:
    // 0x483c10: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x483c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x483c14: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x483c14u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x483c18: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x483c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x483c1c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x483C1Cu;
    {
        const bool branch_taken_0x483c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x483c1c) {
            ctx->pc = 0x483C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x483C1Cu;
            // 0x483c20: 0x8e0500a0  lw          $a1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x483C5Cu;
            goto label_483c5c;
        }
    }
    ctx->pc = 0x483C24u;
    // 0x483c24: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x483c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x483c28: 0x8ca3add4  lw          $v1, -0x522C($a1)
    ctx->pc = 0x483c28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70ADD4u));
    // 0x483c2c: 0x24a4add4  addiu       $a0, $a1, -0x522C
    ctx->pc = 0x483c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946260));
    // 0x483c30: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x483c30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x483c34: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x483c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x483c38: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x483c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x483c3c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x483c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x483c40: 0x8ca4add4  lw          $a0, -0x522C($a1)
    ctx->pc = 0x483c40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70ADD4u));
    // 0x483c44: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x483c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x483c48: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x483c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x483c4c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x483c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x483c50: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x483c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x483c54: 0xaca2add4  sw          $v0, -0x522C($a1)
    ctx->pc = 0x483c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70ADD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADD4u, _value); } while (0);
    // 0x483c58: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x483c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_483c5c:
    // 0x483c5c: 0x34e40003  ori         $a0, $a3, 0x3
    ctx->pc = 0x483c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x483c60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x483c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x483c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483c68: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x483c68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x483c6c: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x483c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x483c70: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x483c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x483c74: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x483c74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x483c78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x483c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x483C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483C7Cu;
        // 0x483c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483C84u;
    // 0x483c84: 0x0  nop
    ctx->pc = 0x483c84u;
    // NOP
    ctx->pc = 0x483c88u;
}
