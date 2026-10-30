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

// Function: sub_00250B10
// Address: 0x250b10 - 0x250b68
void sub_00250B10_0x250b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250B10_0x250b10");
#endif

    switch (ctx->pc) {
        case 0x250b24u: goto label_250b24;
        default: break;
    }

    ctx->pc = 0x250b10u;

    // 0x250b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x250b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x250b18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x250b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250b1c: 0xc094258  jal         func_250960
    ctx->pc = 0x250B1Cu;
    SET_GPR_U32(ctx, 31, 0x250B24u);
    ctx->pc = 0x250B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250B1Cu;
    // 0x250b20: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x250960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250960u, 0x250B1Cu, 0x250B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250B24u;
label_250b24:
    // 0x250b24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x250B24u;
    {
        const bool branch_taken_0x250b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B24u;
        // 0x250b28: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b24) {
            ctx->pc = 0x250B58u;
            goto label_250b58;
        }
    }
    ctx->pc = 0x250B2Cu;
    // 0x250b2c: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x250b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x250b30: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x250b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x250b34: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x250b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x250b38: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x250b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x250b3c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x250b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x250b40: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x250b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x250b44: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x250B44u;
    {
        const bool branch_taken_0x250b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B44u;
        // 0x250b48: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b44) {
            ctx->pc = 0x250B5Cu;
            goto label_250b5c;
        }
    }
    ctx->pc = 0x250B4Cu;
    // 0x250b4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x250b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x250b50: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x250b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x250b54: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x250b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_250b58:
    // 0x250b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x250b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_250b5c:
    // 0x250b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x250B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B5Cu;
        // 0x250b60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250B64u;
    // 0x250b64: 0x0  nop
    ctx->pc = 0x250b64u;
    // NOP
    ctx->pc = 0x250b68u;
}
