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

// Function: sub_00323AD0
// Address: 0x323ad0 - 0x323b50
void sub_00323AD0_0x323ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323AD0_0x323ad0");
#endif

    switch (ctx->pc) {
        case 0x323aecu: goto label_323aec;
        case 0x323af8u: goto label_323af8;
        case 0x323b24u: goto label_323b24;
        default: break;
    }

    ctx->pc = 0x323ad0u;

    // 0x323ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323ad4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323adc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ae0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x323ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x323ae4: 0xc0cbf58  jal         func_32FD60
    ctx->pc = 0x323AE4u;
    SET_GPR_U32(ctx, 31, 0x323AECu);
    ctx->pc = 0x323AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323AE4u;
    // 0x323ae8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD60u, 0x323AE4u, 0x323AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323AECu;
label_323aec:
    // 0x323aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x323aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323af0: 0xc0ccf02  jal         func_333C08
    ctx->pc = 0x323AF0u;
    SET_GPR_U32(ctx, 31, 0x323AF8u);
    ctx->pc = 0x323AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323AF0u;
    // 0x323af4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333C08u, 0x323AF0u, 0x323AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323AF8u;
label_323af8:
    // 0x323af8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x323af8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x323afc: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x323afcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x323b00: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x323b00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x323b04: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x323b04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x323b08: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x323b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x323b0c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x323b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x323b10: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323B10u;
    {
        const bool branch_taken_0x323b10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x323b10) {
            ctx->pc = 0x323B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323B10u;
            // 0x323b14: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323B28u;
            goto label_323b28;
        }
    }
    ctx->pc = 0x323B18u;
    // 0x323b18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x323b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b1c: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x323B1Cu;
    SET_GPR_U32(ctx, 31, 0x323B24u);
    ctx->pc = 0x323B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B1Cu;
    // 0x323b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x323B1Cu, 0x323B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B24u;
label_323b24:
    // 0x323b24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x323b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_323b28:
    // 0x323b28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x323b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323b2c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x323b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x323b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323b34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x323b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x323b38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x323B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B3Cu;
        // 0x323b40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323B44u;
    // 0x323b44: 0x0  nop
    ctx->pc = 0x323b44u;
    // NOP
    // 0x323b48: 0x84820020  lh          $v0, 0x20($a0)
    ctx->pc = 0x323b48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x323b4c: 0x0  nop
    ctx->pc = 0x323b4cu;
    // NOP
    ctx->pc = 0x323b50u;
}
