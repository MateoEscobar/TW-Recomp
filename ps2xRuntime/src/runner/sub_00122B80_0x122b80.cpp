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

// Function: sub_00122B80
// Address: 0x122b80 - 0x122ca0
void sub_00122B80_0x122b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122B80_0x122b80");
#endif

    switch (ctx->pc) {
        case 0x122ba0u: goto label_122ba0;
        case 0x122ba8u: goto label_122ba8;
        case 0x122bd0u: goto label_122bd0;
        case 0x122c34u: goto label_122c34;
        case 0x122c6cu: goto label_122c6c;
        default: break;
    }

    ctx->pc = 0x122b80u;

    // 0x122b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x122b84: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x122b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x122b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x122b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x122b8c: 0x248491a8  addiu       $a0, $a0, -0x6E58
    ctx->pc = 0x122b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
    // 0x122b90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x122b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x122b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122b98: 0xc136b48  jal         func_4DAD20
    ctx->pc = 0x122B98u;
    SET_GPR_U32(ctx, 31, 0x122BA0u);
    ctx->pc = 0x122B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B98u;
    // 0x122b9c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAD20u, 0x122B98u, 0x122BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BA0u;
label_122ba0:
    // 0x122ba0: 0xc048d38  jal         func_1234E0
    ctx->pc = 0x122BA0u;
    SET_GPR_U32(ctx, 31, 0x122BA8u);
    ctx->pc = 0x1234E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1234E0u, 0x122BA0u, 0x122BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BA8u;
label_122ba8:
    // 0x122ba8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x122ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x122bac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x122bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x122bb0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x122bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x122bb4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x122bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x122bb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x122bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122bbc: 0x2442b1b8  addiu       $v0, $v0, -0x4E48
    ctx->pc = 0x122bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947256));
    // 0x122bc0: 0x2463b1e8  addiu       $v1, $v1, -0x4E18
    ctx->pc = 0x122bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947304));
    // 0x122bc4: 0x2484b1b0  addiu       $a0, $a0, -0x4E50
    ctx->pc = 0x122bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947248));
    // 0x122bc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x122bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122bcc: 0x0  nop
    ctx->pc = 0x122bccu;
    // NOP
label_122bd0:
    // 0x122bd0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x122bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x122bd4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x122bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x122bd8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x122bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x122bdc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x122bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x122be0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x122be0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x122be4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x122be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x122be8: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x122BE8u;
    {
        const bool branch_taken_0x122be8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x122BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122BE8u;
        // 0x122bec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122be8) {
            ctx->pc = 0x122BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122bd0;
        }
    }
    ctx->pc = 0x122BF0u;
    // 0x122bf0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x122bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122bf4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x122bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x122bf8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x122bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x122bfc: 0xac50b1d0  sw          $s0, -0x4E30($v0)
    ctx->pc = 0x122bfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x50B1D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B1D0u, _value); } while (0);
    // 0x122c00: 0xac60b1cc  sw          $zero, -0x4E34($v1)
    ctx->pc = 0x122c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B1CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B1CCu, _value); } while (0);
    // 0x122c04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x122c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x122c08: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x122c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x122c0c: 0x24e4b248  addiu       $a0, $a3, -0x4DB8
    ctx->pc = 0x122c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947400));
    // 0x122c10: 0xac50b1d4  sw          $s0, -0x4E2C($v0)
    ctx->pc = 0x122c10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x50B1D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B1D4u, _value); } while (0);
    // 0x122c14: 0xa470b23c  sh          $s0, -0x4DC4($v1)
    ctx->pc = 0x122c14u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x50B23Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x50B23Cu, _value); } while (0);
    // 0x122c18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x122c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x122c1c: 0xa0f0b248  sb          $s0, -0x4DB8($a3)
    ctx->pc = 0x122c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294947400), (uint8_t)GPR_U32(ctx, 16));
    // 0x122c20: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x122c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x122c24: 0xa0900001  sb          $s0, 0x1($a0)
    ctx->pc = 0x122c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x122c28: 0xac50b1c8  sw          $s0, -0x4E38($v0)
    ctx->pc = 0x122c28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x50B1C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B1C8u, _value); } while (0);
    // 0x122c2c: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x122C2Cu;
    SET_GPR_U32(ctx, 31, 0x122C34u);
    ctx->pc = 0x122C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C2Cu;
    // 0x122c30: 0xac70b1c0  sw          $s0, -0x4E40($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947264), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x122C2Cu, 0x122C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C34u;
label_122c34:
    // 0x122c34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x122c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x122c38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x122c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x122c3c: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x122c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x122c40: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x122c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x122c44: 0xac60b1dc  sw          $zero, -0x4E24($v1)
    ctx->pc = 0x122c44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B1DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B1DCu, _value); } while (0);
    // 0x122c48: 0xac4491b8  sw          $a0, -0x6E48($v0)
    ctx->pc = 0x122c48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D91B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D91B8u, _value); } while (0);
    // 0x122c4c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x122c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x122c50: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x122c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x122c54: 0x8e25b1a0  lw          $a1, -0x4E60($s1)
    ctx->pc = 0x122c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947232)));
    // 0x122c58: 0xac40b1e0  sw          $zero, -0x4E20($v0)
    ctx->pc = 0x122c58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B1E0u, _value); } while (0);
    // 0x122c5c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x122C5Cu;
    {
        const bool branch_taken_0x122c5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C5Cu;
        // 0x122c60: 0xac70b1d8  sw          $s0, -0x4E28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947288), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c5c) {
            ctx->pc = 0x122C6Cu;
            goto label_122c6c;
        }
    }
    ctx->pc = 0x122C64u;
    // 0x122c64: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x122C64u;
    SET_GPR_U32(ctx, 31, 0x122C6Cu);
    ctx->pc = 0x122C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C64u;
    // 0x122c68: 0xae20b1a0  sw          $zero, -0x4E60($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x122C64u, 0x122C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C6Cu;
label_122c6c:
    // 0x122c6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x122c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x122c70: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x122c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x122c74: 0xac50b2b4  sw          $s0, -0x4D4C($v0)
    ctx->pc = 0x122c74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x50B2B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B2B4u, _value); } while (0);
    // 0x122c78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x122c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x122c7c: 0xac70b2ac  sw          $s0, -0x4D54($v1)
    ctx->pc = 0x122c7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x50B2ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B2ACu, _value); } while (0);
    // 0x122c80: 0xac50b2b0  sw          $s0, -0x4D50($v0)
    ctx->pc = 0x122c80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x50B2B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B2B0u, _value); } while (0);
    // 0x122c84: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x122c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x122c88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x122c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122c8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122c94: 0xac600548  sw          $zero, 0x548($v1)
    ctx->pc = 0x122c94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x510548u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510548u, _value); } while (0);
    // 0x122c98: 0x3e00008  jr          $ra
    ctx->pc = 0x122C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C98u;
        // 0x122c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122CA0u;
}
