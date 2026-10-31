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

// Function: sub_00488AD8
// Address: 0x488ad8 - 0x488b78
void sub_00488AD8_0x488ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488AD8_0x488ad8");
#endif

    switch (ctx->pc) {
        case 0x488ad8u: goto label_488ad8;
        case 0x488adcu: goto label_488adc;
        case 0x488ae0u: goto label_488ae0;
        case 0x488ae4u: goto label_488ae4;
        case 0x488ae8u: goto label_488ae8;
        case 0x488aecu: goto label_488aec;
        case 0x488af0u: goto label_488af0;
        case 0x488af4u: goto label_488af4;
        case 0x488af8u: goto label_488af8;
        case 0x488afcu: goto label_488afc;
        case 0x488b00u: goto label_488b00;
        case 0x488b04u: goto label_488b04;
        case 0x488b08u: goto label_488b08;
        case 0x488b0cu: goto label_488b0c;
        case 0x488b10u: goto label_488b10;
        case 0x488b14u: goto label_488b14;
        case 0x488b18u: goto label_488b18;
        case 0x488b1cu: goto label_488b1c;
        case 0x488b20u: goto label_488b20;
        case 0x488b24u: goto label_488b24;
        case 0x488b28u: goto label_488b28;
        case 0x488b2cu: goto label_488b2c;
        case 0x488b30u: goto label_488b30;
        case 0x488b34u: goto label_488b34;
        case 0x488b38u: goto label_488b38;
        case 0x488b3cu: goto label_488b3c;
        case 0x488b40u: goto label_488b40;
        case 0x488b44u: goto label_488b44;
        case 0x488b48u: goto label_488b48;
        case 0x488b4cu: goto label_488b4c;
        case 0x488b50u: goto label_488b50;
        case 0x488b54u: goto label_488b54;
        case 0x488b58u: goto label_488b58;
        case 0x488b5cu: goto label_488b5c;
        case 0x488b60u: goto label_488b60;
        case 0x488b64u: goto label_488b64;
        case 0x488b68u: goto label_488b68;
        case 0x488b6cu: goto label_488b6c;
        case 0x488b70u: goto label_488b70;
        case 0x488b74u: goto label_488b74;
        default: break;
    }

    ctx->pc = 0x488ad8u;

label_488ad8:
    // 0x488ad8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x488ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_488adc:
    // 0x488adc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x488adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_488ae0:
    // 0x488ae0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x488ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_488ae4:
    // 0x488ae4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x488ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_488ae8:
    // 0x488ae8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x488ae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488aec:
    // 0x488aec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x488aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_488af0:
    // 0x488af0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x488af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_488af4:
    // 0x488af4: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x488af4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_488af8:
    // 0x488af8: 0x2610ad18  addiu       $s0, $s0, -0x52E8
    ctx->pc = 0x488af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
label_488afc:
    // 0x488afc: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x488afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_488b00:
    // 0x488b00: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x488b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_488b04:
    // 0x488b04: 0x40f809  jalr        $v0
label_488b08:
    if (ctx->pc == 0x488B08u) {
        ctx->pc = 0x488B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488B04u;
        // 0x488b08: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488B0Cu;
        goto label_488b0c;
    }
    ctx->pc = 0x488B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x488B0Cu);
        ctx->pc = 0x488B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488B04u;
        // 0x488b08: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488B04u, 0x488B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488B0Cu;
label_488b0c:
    // 0x488b0c: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x488b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_488b10:
    // 0x488b10: 0x40f809  jalr        $v0
label_488b14:
    if (ctx->pc == 0x488B14u) {
        ctx->pc = 0x488B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488B10u;
        // 0x488b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488B18u;
        goto label_488b18;
    }
    ctx->pc = 0x488B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x488B18u);
        ctx->pc = 0x488B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488B10u;
        // 0x488b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488B10u, 0x488B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488B18u;
label_488b18:
    // 0x488b18: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x488b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_488b1c:
    // 0x488b1c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_488b20:
    if (ctx->pc == 0x488B20u) {
        ctx->pc = 0x488B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488B1Cu;
        // 0x488b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488B24u;
        goto label_488b24;
    }
    ctx->pc = 0x488B1Cu;
    {
        const bool branch_taken_0x488b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x488B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488B1Cu;
        // 0x488b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488b1c) {
            ctx->pc = 0x488B58u;
            goto label_488b58;
        }
    }
    ctx->pc = 0x488B24u;
label_488b24:
    // 0x488b24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x488b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_488b28:
    // 0x488b28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x488b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_488b2c:
    // 0x488b2c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x488b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_488b30:
    // 0x488b30: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x488b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_488b34:
    // 0x488b34: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x488b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_488b38:
    // 0x488b38: 0x80a8001f  lb          $t0, 0x1F($a1)
    ctx->pc = 0x488b38u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 31)));
label_488b3c:
    // 0x488b3c: 0xc11eff2  jal         func_47BFC8
label_488b40:
    if (ctx->pc == 0x488B40u) {
        ctx->pc = 0x488B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488B3Cu;
        // 0x488b40: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x488B44u;
        goto label_488b44;
    }
    ctx->pc = 0x488B3Cu;
    SET_GPR_U32(ctx, 31, 0x488B44u);
    ctx->pc = 0x488B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488B3Cu;
    // 0x488b40: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x488B3Cu, 0x488B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488B44u;
label_488b44:
    // 0x488b44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x488b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_488b48:
    // 0x488b48: 0xc11f024  jal         func_47C090
label_488b4c:
    if (ctx->pc == 0x488B4Cu) {
        ctx->pc = 0x488B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488B48u;
        // 0x488b4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488B50u;
        goto label_488b50;
    }
    ctx->pc = 0x488B48u;
    SET_GPR_U32(ctx, 31, 0x488B50u);
    ctx->pc = 0x488B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488B48u;
    // 0x488b4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x488B48u, 0x488B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488B50u;
label_488b50:
    // 0x488b50: 0xa240004f  sb          $zero, 0x4F($s2)
    ctx->pc = 0x488b50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 0));
label_488b54:
    // 0x488b54: 0x0  nop
    ctx->pc = 0x488b54u;
    // NOP
label_488b58:
    // 0x488b58: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x488b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_488b5c:
    // 0x488b5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x488b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_488b60:
    // 0x488b60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x488b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_488b64:
    // 0x488b64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x488b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488b68:
    // 0x488b68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x488b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_488b6c:
    // 0x488b6c: 0x3e00008  jr          $ra
label_488b70:
    if (ctx->pc == 0x488B70u) {
        ctx->pc = 0x488B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488B6Cu;
        // 0x488b70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488B74u;
        goto label_488b74;
    }
    ctx->pc = 0x488B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488B6Cu;
        // 0x488b70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488B74u;
label_488b74:
    // 0x488b74: 0x0  nop
    ctx->pc = 0x488b74u;
    // NOP
    ctx->pc = 0x488b78u;
}
