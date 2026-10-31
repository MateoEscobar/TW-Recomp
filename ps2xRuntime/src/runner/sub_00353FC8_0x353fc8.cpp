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

// Function: sub_00353FC8
// Address: 0x353fc8 - 0x354038
void sub_00353FC8_0x353fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353FC8_0x353fc8");
#endif

    switch (ctx->pc) {
        case 0x353fdcu: goto label_353fdc;
        case 0x354024u: goto label_354024;
        default: break;
    }

    ctx->pc = 0x353fc8u;

    // 0x353fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x353fcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x353fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x353fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x353fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x353fd4: 0xc0d4ca6  jal         func_353298
    ctx->pc = 0x353FD4u;
    SET_GPR_U32(ctx, 31, 0x353FDCu);
    ctx->pc = 0x353FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353FD4u;
    // 0x353fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x353FD4u, 0x353FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FDCu;
label_353fdc:
    // 0x353fdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x353fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353fe0: 0x50a00011  beql        $a1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x353FE0u;
    {
        const bool branch_taken_0x353fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x353fe0) {
            ctx->pc = 0x353FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353FE0u;
            // 0x353fe4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354028u;
            goto label_354028;
        }
    }
    ctx->pc = 0x353FE8u;
    // 0x353fe8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x353fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x353fec: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x353FECu;
    {
        const bool branch_taken_0x353fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x353fec) {
            ctx->pc = 0x353FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353FECu;
            // 0x353ff0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354028u;
            goto label_354028;
        }
    }
    ctx->pc = 0x353FF4u;
    // 0x353ff4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x353ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x353ff8: 0x1490000b  bne         $a0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x353FF8u;
    {
        const bool branch_taken_0x353ff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x353FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353FF8u;
        // 0x353ffc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ff8) {
            ctx->pc = 0x354028u;
            goto label_354028;
        }
    }
    ctx->pc = 0x354000u;
    // 0x354000: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x354000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x354004: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x354004u;
    {
        const bool branch_taken_0x354004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354004u;
        // 0x354008: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354004) {
            ctx->pc = 0x35402Cu;
            goto label_35402c;
        }
    }
    ctx->pc = 0x35400Cu;
    // 0x35400c: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x35400cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x354010: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x354010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354014: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x354014u;
    {
        const bool branch_taken_0x354014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x354014) {
            ctx->pc = 0x35402Cu;
            goto label_35402c;
        }
    }
    ctx->pc = 0x35401Cu;
    // 0x35401c: 0xc0d4efc  jal         func_353BF0
    ctx->pc = 0x35401Cu;
    SET_GPR_U32(ctx, 31, 0x354024u);
    ctx->pc = 0x354020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35401Cu;
    // 0x354020: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BF0u, 0x35401Cu, 0x354024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354024u;
label_354024:
    // 0x354024: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x354024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_354028:
    // 0x354028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35402c:
    // 0x35402c: 0x3e00008  jr          $ra
    ctx->pc = 0x35402Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35402Cu;
        // 0x354030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35402Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354034u;
    // 0x354034: 0x0  nop
    ctx->pc = 0x354034u;
    // NOP
    ctx->pc = 0x354038u;
}
