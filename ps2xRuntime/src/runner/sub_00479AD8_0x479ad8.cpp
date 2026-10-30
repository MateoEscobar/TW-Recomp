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

// Function: sub_00479AD8
// Address: 0x479ad8 - 0x479b70
void sub_00479AD8_0x479ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479AD8_0x479ad8");
#endif

    switch (ctx->pc) {
        case 0x479b0cu: goto label_479b0c;
        case 0x479b18u: goto label_479b18;
        default: break;
    }

    ctx->pc = 0x479ad8u;

    // 0x479ad8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x479ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x479adc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x479adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x479ae0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x479ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x479ae4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x479ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479ae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x479ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x479aec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x479aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479af0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x479af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x479af4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x479af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479af8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x479af8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479afc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x479afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x479b00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x479b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479b04: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x479B04u;
    SET_GPR_U32(ctx, 31, 0x479B0Cu);
    ctx->pc = 0x479B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x479B04u;
    // 0x479b08: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x479B04u, 0x479B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479B0Cu;
label_479b0c:
    // 0x479b0c: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x479b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x479b10: 0xc123560  jal         func_48D580
    ctx->pc = 0x479B10u;
    SET_GPR_U32(ctx, 31, 0x479B18u);
    ctx->pc = 0x479B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x479B10u;
    // 0x479b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D580u, 0x479B10u, 0x479B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479B18u;
label_479b18:
    // 0x479b18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x479b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x479b1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x479b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x479b20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x479b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x479b24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x479b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x479b28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x479b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x479b2c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x479b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x479b30: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x479b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x479b34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x479b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x479b38: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x479b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x479b3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x479b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x479b40: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x479b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x479b44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x479b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x479b48: 0xac730014  sw          $s3, 0x14($v1)
    ctx->pc = 0x479b48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 19));
    // 0x479b4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x479b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x479b50: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x479b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479b54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x479b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479b58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x479b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479b5c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x479b5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x479b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479b64: 0x3e00008  jr          $ra
    ctx->pc = 0x479B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x479B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479B64u;
        // 0x479b68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479B6Cu;
    // 0x479b6c: 0x0  nop
    ctx->pc = 0x479b6cu;
    // NOP
    ctx->pc = 0x479b70u;
}
