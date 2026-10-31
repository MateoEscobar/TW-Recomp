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

// Function: sub_001D7EF0
// Address: 0x1d7ef0 - 0x1d7f90
void sub_001D7EF0_0x1d7ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7EF0_0x1d7ef0");
#endif

    switch (ctx->pc) {
        case 0x1d7ef0u: goto label_1d7ef0;
        case 0x1d7ef4u: goto label_1d7ef4;
        case 0x1d7ef8u: goto label_1d7ef8;
        case 0x1d7efcu: goto label_1d7efc;
        case 0x1d7f00u: goto label_1d7f00;
        case 0x1d7f04u: goto label_1d7f04;
        case 0x1d7f08u: goto label_1d7f08;
        case 0x1d7f0cu: goto label_1d7f0c;
        case 0x1d7f10u: goto label_1d7f10;
        case 0x1d7f14u: goto label_1d7f14;
        case 0x1d7f18u: goto label_1d7f18;
        case 0x1d7f1cu: goto label_1d7f1c;
        case 0x1d7f20u: goto label_1d7f20;
        case 0x1d7f24u: goto label_1d7f24;
        case 0x1d7f28u: goto label_1d7f28;
        case 0x1d7f2cu: goto label_1d7f2c;
        case 0x1d7f30u: goto label_1d7f30;
        case 0x1d7f34u: goto label_1d7f34;
        case 0x1d7f38u: goto label_1d7f38;
        case 0x1d7f3cu: goto label_1d7f3c;
        case 0x1d7f40u: goto label_1d7f40;
        case 0x1d7f44u: goto label_1d7f44;
        case 0x1d7f48u: goto label_1d7f48;
        case 0x1d7f4cu: goto label_1d7f4c;
        case 0x1d7f50u: goto label_1d7f50;
        case 0x1d7f54u: goto label_1d7f54;
        case 0x1d7f58u: goto label_1d7f58;
        case 0x1d7f5cu: goto label_1d7f5c;
        case 0x1d7f60u: goto label_1d7f60;
        case 0x1d7f64u: goto label_1d7f64;
        case 0x1d7f68u: goto label_1d7f68;
        case 0x1d7f6cu: goto label_1d7f6c;
        case 0x1d7f70u: goto label_1d7f70;
        case 0x1d7f74u: goto label_1d7f74;
        case 0x1d7f78u: goto label_1d7f78;
        case 0x1d7f7cu: goto label_1d7f7c;
        case 0x1d7f80u: goto label_1d7f80;
        case 0x1d7f84u: goto label_1d7f84;
        case 0x1d7f88u: goto label_1d7f88;
        case 0x1d7f8cu: goto label_1d7f8c;
        default: break;
    }

    ctx->pc = 0x1d7ef0u;

label_1d7ef0:
    // 0x1d7ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d7ef4:
    // 0x1d7ef4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1d7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1d7ef8:
    // 0x1d7ef8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d7efc:
    // 0x1d7efc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7f00:
    // 0x1d7f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d7f04:
    // 0x1d7f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7f08:
    // 0x1d7f08: 0x14a00016  bnez        $a1, . + 4 + (0x16 << 2)
label_1d7f0c:
    if (ctx->pc == 0x1D7F0Cu) {
        ctx->pc = 0x1D7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F08u;
        // 0x1d7f0c: 0xac430840  sw          $v1, 0x840($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7F10u;
        goto label_1d7f10;
    }
    ctx->pc = 0x1D7F08u;
    {
        const bool branch_taken_0x1d7f08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F08u;
        // 0x1d7f0c: 0xac430840  sw          $v1, 0x840($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f08) {
            ctx->pc = 0x1D7F64u;
            goto label_1d7f64;
        }
    }
    ctx->pc = 0x1D7F10u;
label_1d7f10:
    // 0x1d7f10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d7f14:
    // 0x1d7f14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d7f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7f18:
    // 0x1d7f18: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1d7f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1d7f1c:
    // 0x1d7f1c: 0xc106904  jal         func_41A410
label_1d7f20:
    if (ctx->pc == 0x1D7F20u) {
        ctx->pc = 0x1D7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F1Cu;
        // 0x1d7f20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7F24u;
        goto label_1d7f24;
    }
    ctx->pc = 0x1D7F1Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F24u);
    ctx->pc = 0x1D7F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F1Cu;
    // 0x1d7f20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A410u, 0x1D7F1Cu, 0x1D7F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F24u;
label_1d7f24:
    // 0x1d7f24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d7f28:
    // 0x1d7f28: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1d7f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1d7f2c:
    // 0x1d7f2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d7f30:
    // 0x1d7f30: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1d7f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1d7f34:
    // 0x1d7f34: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1d7f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1d7f38:
    // 0x1d7f38: 0x40f809  jalr        $v0
label_1d7f3c:
    if (ctx->pc == 0x1D7F3Cu) {
        ctx->pc = 0x1D7F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F38u;
        // 0x1d7f3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7F40u;
        goto label_1d7f40;
    }
    ctx->pc = 0x1D7F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7F40u);
        ctx->pc = 0x1D7F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F38u;
        // 0x1d7f3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F38u, 0x1D7F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D7F40u;
label_1d7f40:
    // 0x1d7f40: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d7f44:
    // 0x1d7f44: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d7f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d7f48:
    // 0x1d7f48: 0xac62ed58  sw          $v0, -0x12A8($v1)
    ctx->pc = 0x1d7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962520), GPR_U32(ctx, 2));
label_1d7f4c:
    // 0x1d7f4c: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1d7f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_1d7f50:
    // 0x1d7f50: 0xc06ba26  jal         func_1AE898
label_1d7f54:
    if (ctx->pc == 0x1D7F54u) {
        ctx->pc = 0x1D7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F50u;
        // 0x1d7f54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7F58u;
        goto label_1d7f58;
    }
    ctx->pc = 0x1D7F50u;
    SET_GPR_U32(ctx, 31, 0x1D7F58u);
    ctx->pc = 0x1D7F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F50u;
    // 0x1d7f54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1D7F50u, 0x1D7F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F58u;
label_1d7f58:
    // 0x1d7f58: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d7f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d7f5c:
    // 0x1d7f5c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d7f60:
    if (ctx->pc == 0x1D7F60u) {
        ctx->pc = 0x1D7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F5Cu;
        // 0x1d7f60: 0xac62ecf0  sw          $v0, -0x1310($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7F64u;
        goto label_1d7f64;
    }
    ctx->pc = 0x1D7F5Cu;
    {
        const bool branch_taken_0x1d7f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F5Cu;
        // 0x1d7f60: 0xac62ecf0  sw          $v0, -0x1310($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f5c) {
            ctx->pc = 0x1D7F80u;
            goto label_1d7f80;
        }
    }
    ctx->pc = 0x1D7F64u;
label_1d7f64:
    // 0x1d7f64: 0x54a30007  bnel        $a1, $v1, . + 4 + (0x7 << 2)
label_1d7f68:
    if (ctx->pc == 0x1D7F68u) {
        ctx->pc = 0x1D7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F64u;
        // 0x1d7f68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7F6Cu;
        goto label_1d7f6c;
    }
    ctx->pc = 0x1D7F64u;
    {
        const bool branch_taken_0x1d7f64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7f64) {
            ctx->pc = 0x1D7F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7F64u;
            // 0x1d7f68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7F84u;
            goto label_1d7f84;
        }
    }
    ctx->pc = 0x1D7F6Cu;
label_1d7f6c:
    // 0x1d7f6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d7f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d7f70:
    // 0x1d7f70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d7f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d7f74:
    // 0x1d7f74: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1d7f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1d7f78:
    // 0x1d7f78: 0xc106904  jal         func_41A410
label_1d7f7c:
    if (ctx->pc == 0x1D7F7Cu) {
        ctx->pc = 0x1D7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F78u;
        // 0x1d7f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7F80u;
        goto label_1d7f80;
    }
    ctx->pc = 0x1D7F78u;
    SET_GPR_U32(ctx, 31, 0x1D7F80u);
    ctx->pc = 0x1D7F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F78u;
    // 0x1d7f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A410u, 0x1D7F78u, 0x1D7F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F80u;
label_1d7f80:
    // 0x1d7f80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7f84:
    // 0x1d7f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7f88:
    // 0x1d7f88: 0x3e00008  jr          $ra
label_1d7f8c:
    if (ctx->pc == 0x1D7F8Cu) {
        ctx->pc = 0x1D7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F88u;
        // 0x1d7f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7F90u;
        goto label_fallthrough_0x1d7f88;
    }
    ctx->pc = 0x1D7F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F88u;
        // 0x1d7f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d7f88:
    ctx->pc = 0x1D7F90u;
}
