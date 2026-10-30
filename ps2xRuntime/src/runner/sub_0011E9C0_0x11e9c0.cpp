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

// Function: sub_0011E9C0
// Address: 0x11e9c0 - 0x11ea80
void sub_0011E9C0_0x11e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E9C0_0x11e9c0");
#endif

    switch (ctx->pc) {
        case 0x11ea10u: goto label_11ea10;
        case 0x11ea74u: goto label_11ea74;
        default: break;
    }

    ctx->pc = 0x11e9c0u;

    // 0x11e9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e9c4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x11e9c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x11e9c8: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x11e9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
    // 0x11e9cc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x11e9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x11e9d0: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x11e9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x11e9d4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x11e9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x11e9d8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x11e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x11e9dc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x11e9e0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x11e9e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e9e8: 0x24429188  addiu       $v0, $v0, -0x6E78
    ctx->pc = 0x11e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939016));
    // 0x11e9ec: 0x24639170  addiu       $v1, $v1, -0x6E90
    ctx->pc = 0x11e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938992));
    // 0x11e9f0: 0x24849168  addiu       $a0, $a0, -0x6E98
    ctx->pc = 0x11e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938984));
    // 0x11e9f4: 0x24a59160  addiu       $a1, $a1, -0x6EA0
    ctx->pc = 0x11e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938976));
    // 0x11e9f8: 0x24c69180  addiu       $a2, $a2, -0x6E80
    ctx->pc = 0x11e9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939008));
    // 0x11e9fc: 0x24e79158  addiu       $a3, $a3, -0x6EA8
    ctx->pc = 0x11e9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938968));
    // 0x11ea00: 0x25089150  addiu       $t0, $t0, -0x6EB0
    ctx->pc = 0x11ea00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938960));
    // 0x11ea04: 0x25299148  addiu       $t1, $t1, -0x6EB8
    ctx->pc = 0x11ea04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294938952));
    // 0x11ea08: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x11ea08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ea0c: 0x0  nop
    ctx->pc = 0x11ea0cu;
    // NOP
label_11ea10:
    // 0x11ea10: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x11ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x11ea14: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x11ea14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x11ea18: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x11ea18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x11ea1c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x11ea1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x11ea20: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x11ea20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x11ea24: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x11ea24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x11ea28: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x11ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x11ea2c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x11ea2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x11ea30: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x11ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x11ea34: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x11ea34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11ea38: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x11ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x11ea3c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x11ea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x11ea40: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11ea40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x11ea44: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x11ea48: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11ea48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x11ea4c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x11ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x11ea50: 0x541ffef  bgez        $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11EA50u;
    {
        const bool branch_taken_0x11ea50 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x11EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA50u;
        // 0x11ea54: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea50) {
            ctx->pc = 0x11EA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ea10;
        }
    }
    ctx->pc = 0x11EA58u;
    // 0x11ea58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11ea5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x11ea60: 0xac40b16c  sw          $zero, -0x4E94($v0)
    ctx->pc = 0x11ea60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B16Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B16Cu, _value); } while (0);
    // 0x11ea64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11ea68: 0xac60b170  sw          $zero, -0x4E90($v1)
    ctx->pc = 0x11ea68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B170u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B170u, _value); } while (0);
    // 0x11ea6c: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x11EA6Cu;
    SET_GPR_U32(ctx, 31, 0x11EA74u);
    ctx->pc = 0x11EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA6Cu;
    // 0x11ea70: 0xac40b174  sw          $zero, -0x4E8C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947188), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x11EA6Cu, 0x11EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA74u;
label_11ea74:
    // 0x11ea74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ea74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ea78: 0x3e00008  jr          $ra
    ctx->pc = 0x11EA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA78u;
        // 0x11ea7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EA80u;
}
