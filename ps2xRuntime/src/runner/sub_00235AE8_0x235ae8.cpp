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

// Function: sub_00235AE8
// Address: 0x235ae8 - 0x235b68
void sub_00235AE8_0x235ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235AE8_0x235ae8");
#endif

    switch (ctx->pc) {
        case 0x235b04u: goto label_235b04;
        case 0x235b0cu: goto label_235b0c;
        default: break;
    }

    ctx->pc = 0x235ae8u;

    // 0x235ae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235aec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235af0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235af4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235afc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235AFCu;
    SET_GPR_U32(ctx, 31, 0x235B04u);
    ctx->pc = 0x235B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AFCu;
    // 0x235b00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235AFCu, 0x235B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B04u;
label_235b04:
    // 0x235b04: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235B04u;
    SET_GPR_U32(ctx, 31, 0x235B0Cu);
    ctx->pc = 0x235B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B04u;
    // 0x235b08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235B04u, 0x235B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B0Cu;
label_235b0c:
    // 0x235b0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x235b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b10: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x235B10u;
    {
        const bool branch_taken_0x235b10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B10u;
        // 0x235b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b10) {
            ctx->pc = 0x235B58u;
            goto label_235b58;
        }
    }
    ctx->pc = 0x235B18u;
    // 0x235b18: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x235B18u;
    {
        const bool branch_taken_0x235b18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x235B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B18u;
        // 0x235b1c: 0xdcc200e0  ld          $v0, 0xE0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b18) {
            ctx->pc = 0x235B3Cu;
            goto label_235b3c;
        }
    }
    ctx->pc = 0x235B20u;
    // 0x235b20: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x235b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x235b24: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x235b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x235b28: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x235b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x235b2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x235b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x235b30: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x235b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x235b34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x235B34u;
    {
        const bool branch_taken_0x235b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B34u;
        // 0x235b38: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b34) {
            ctx->pc = 0x235B54u;
            goto label_235b54;
        }
    }
    ctx->pc = 0x235B3Cu;
label_235b3c:
    // 0x235b3c: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x235b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x235b40: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x235b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x235b44: 0x2405fdff  addiu       $a1, $zero, -0x201
    ctx->pc = 0x235b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x235b48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x235b4c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x235b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x235b50: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x235b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_235b54:
    // 0x235b54: 0xfcc200e0  sd          $v0, 0xE0($a2)
    ctx->pc = 0x235b54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 224), GPR_U64(ctx, 2));
label_235b58:
    // 0x235b58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b60: 0x3e00008  jr          $ra
    ctx->pc = 0x235B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B60u;
        // 0x235b64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235B68u;
}
