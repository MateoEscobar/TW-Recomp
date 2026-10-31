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

// Function: sub_00411B20
// Address: 0x411b20 - 0x411b98
void sub_00411B20_0x411b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411B20_0x411b20");
#endif

    switch (ctx->pc) {
        case 0x411b88u: goto label_411b88;
        default: break;
    }

    ctx->pc = 0x411b20u;

    // 0x411b20: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x411b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x411b24: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x411b24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x411b28: 0x8c62ced0  lw          $v0, -0x3130($v1)
    ctx->pc = 0x411b28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50CED0u));
    // 0x411b2c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x411b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411b30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x411b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x411b34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x411b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x411b38: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x411b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x411b3c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x411b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x411b40: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x411b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x411b44: 0x14650011  bne         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x411B44u;
    {
        const bool branch_taken_0x411b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x411B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411B44u;
        // 0x411b48: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411b44) {
            ctx->pc = 0x411B8Cu;
            goto label_411b8c;
        }
    }
    ctx->pc = 0x411B4Cu;
    // 0x411b4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x411b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x411b50: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x411b50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5147C4u));
    // 0x411b54: 0x2464004c  addiu       $a0, $v1, 0x4C
    ctx->pc = 0x411b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x411b58: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x411b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x411b5c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x411b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x411b60: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x411B60u;
    {
        const bool branch_taken_0x411b60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x411b60) {
            ctx->pc = 0x411B80u;
            goto label_411b80;
        }
    }
    ctx->pc = 0x411B68u;
    // 0x411b68: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x411B68u;
    {
        const bool branch_taken_0x411b68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x411b68) {
            ctx->pc = 0x411B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411B68u;
            // 0x411b6c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x411B70u;
            goto label_411b70;
        }
    }
    ctx->pc = 0x411B70u;
label_411b70:
    // 0x411b70: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x411b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x411b74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x411b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x411b78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x411B78u;
    {
        const bool branch_taken_0x411b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411B78u;
        // 0x411b7c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411b78) {
            ctx->pc = 0x411B88u;
            goto label_411b88;
        }
    }
    ctx->pc = 0x411B80u;
label_411b80:
    // 0x411b80: 0xc13d640  jal         func_4F5900
    ctx->pc = 0x411B80u;
    SET_GPR_U32(ctx, 31, 0x411B88u);
    ctx->pc = 0x411B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411B80u;
    // 0x411b84: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5900u, 0x411B80u, 0x411B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411B88u;
label_411b88:
    // 0x411b88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x411b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_411b8c:
    // 0x411b8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x411b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x411b90: 0x3e00008  jr          $ra
    ctx->pc = 0x411B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411B90u;
        // 0x411b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x411B98u;
}
