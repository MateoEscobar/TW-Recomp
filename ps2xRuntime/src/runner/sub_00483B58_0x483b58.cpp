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

// Function: sub_00483B58
// Address: 0x483b58 - 0x483bf8
void sub_00483B58_0x483b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483B58_0x483b58");
#endif

    switch (ctx->pc) {
        case 0x483b70u: goto label_483b70;
        default: break;
    }

    ctx->pc = 0x483b58u;

    // 0x483b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x483b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x483b5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x483b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x483b60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x483b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x483b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x483b68: 0xc11f420  jal         func_47D080
    ctx->pc = 0x483B68u;
    SET_GPR_U32(ctx, 31, 0x483B70u);
    ctx->pc = 0x483B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483B68u;
    // 0x483b6c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D080u, 0x483B68u, 0x483B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483B70u;
label_483b70:
    // 0x483b70: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x483b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x483b74: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x483b74u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x483b78: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x483b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x483b7c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x483B7Cu;
    {
        const bool branch_taken_0x483b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x483b7c) {
            ctx->pc = 0x483B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x483B7Cu;
            // 0x483b80: 0x8e0500a0  lw          $a1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x483BBCu;
            goto label_483bbc;
        }
    }
    ctx->pc = 0x483B84u;
    // 0x483b84: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x483b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x483b88: 0x8ca3add4  lw          $v1, -0x522C($a1)
    ctx->pc = 0x483b88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70ADD4u));
    // 0x483b8c: 0x24a4add4  addiu       $a0, $a1, -0x522C
    ctx->pc = 0x483b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946260));
    // 0x483b90: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x483b90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x483b94: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x483b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x483b98: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x483b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x483b9c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x483b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x483ba0: 0x8ca4add4  lw          $a0, -0x522C($a1)
    ctx->pc = 0x483ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70ADD4u));
    // 0x483ba4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x483ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x483ba8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x483ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x483bac: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x483bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x483bb0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x483bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x483bb4: 0xaca2add4  sw          $v0, -0x522C($a1)
    ctx->pc = 0x483bb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70ADD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADD4u, _value); } while (0);
    // 0x483bb8: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x483bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_483bbc:
    // 0x483bbc: 0x34e40003  ori         $a0, $a3, 0x3
    ctx->pc = 0x483bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x483bc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x483bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x483bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483bc8: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x483bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x483bcc: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x483bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x483bd0: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x483bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x483bd4: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x483bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x483bd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x483bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x483BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483BDCu;
        // 0x483be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483BE4u;
    // 0x483be4: 0x0  nop
    ctx->pc = 0x483be4u;
    // NOP
    // 0x483be8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x483be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x483bec: 0x0  nop
    ctx->pc = 0x483becu;
    // NOP
    // 0x483bf0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x483bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x483bf4: 0x0  nop
    ctx->pc = 0x483bf4u;
    // NOP
    ctx->pc = 0x483bf8u;
}
