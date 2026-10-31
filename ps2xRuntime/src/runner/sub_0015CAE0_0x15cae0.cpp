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

// Function: sub_0015CAE0
// Address: 0x15cae0 - 0x15cb68
void sub_0015CAE0_0x15cae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CAE0_0x15cae0");
#endif

    switch (ctx->pc) {
        case 0x15cae0u: goto label_15cae0;
        case 0x15cae4u: goto label_15cae4;
        case 0x15cae8u: goto label_15cae8;
        case 0x15caecu: goto label_15caec;
        case 0x15caf0u: goto label_15caf0;
        case 0x15caf4u: goto label_15caf4;
        case 0x15caf8u: goto label_15caf8;
        case 0x15cafcu: goto label_15cafc;
        case 0x15cb00u: goto label_15cb00;
        case 0x15cb04u: goto label_15cb04;
        case 0x15cb08u: goto label_15cb08;
        case 0x15cb0cu: goto label_15cb0c;
        case 0x15cb10u: goto label_15cb10;
        case 0x15cb14u: goto label_15cb14;
        case 0x15cb18u: goto label_15cb18;
        case 0x15cb1cu: goto label_15cb1c;
        case 0x15cb20u: goto label_15cb20;
        case 0x15cb24u: goto label_15cb24;
        case 0x15cb28u: goto label_15cb28;
        case 0x15cb2cu: goto label_15cb2c;
        case 0x15cb30u: goto label_15cb30;
        case 0x15cb34u: goto label_15cb34;
        case 0x15cb38u: goto label_15cb38;
        case 0x15cb3cu: goto label_15cb3c;
        case 0x15cb40u: goto label_15cb40;
        case 0x15cb44u: goto label_15cb44;
        case 0x15cb48u: goto label_15cb48;
        case 0x15cb4cu: goto label_15cb4c;
        case 0x15cb50u: goto label_15cb50;
        case 0x15cb54u: goto label_15cb54;
        case 0x15cb58u: goto label_15cb58;
        case 0x15cb5cu: goto label_15cb5c;
        case 0x15cb60u: goto label_15cb60;
        case 0x15cb64u: goto label_15cb64;
        default: break;
    }

    ctx->pc = 0x15cae0u;

label_15cae0:
    // 0x15cae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15cae4:
    // 0x15cae4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15cae8:
    // 0x15cae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15cae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15caec:
    // 0x15caec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15caecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15caf0:
    // 0x15caf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15caf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15caf4:
    // 0x15caf4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15caf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_15caf8:
    // 0x15caf8: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x15caf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_15cafc:
    // 0x15cafc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15cafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15cb00:
    // 0x15cb00: 0xc0e8b20  jal         func_3A2C80
label_15cb04:
    if (ctx->pc == 0x15CB04u) {
        ctx->pc = 0x15CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB00u;
        // 0x15cb04: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB08u;
        goto label_15cb08;
    }
    ctx->pc = 0x15CB00u;
    SET_GPR_U32(ctx, 31, 0x15CB08u);
    ctx->pc = 0x15CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB00u;
    // 0x15cb04: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x15CB00u, 0x15CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB08u;
label_15cb08:
    // 0x15cb08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15cb0c:
    // 0x15cb0c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x15cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_15cb10:
    // 0x15cb10: 0x8c43b8b8  lw          $v1, -0x4748($v0)
    ctx->pc = 0x15cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_15cb14:
    // 0x15cb14: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x15cb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_15cb18:
    // 0x15cb18: 0xc04456a  jal         func_1115A8
label_15cb1c:
    if (ctx->pc == 0x15CB1Cu) {
        ctx->pc = 0x15CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB18u;
        // 0x15cb1c: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB20u;
        goto label_15cb20;
    }
    ctx->pc = 0x15CB18u;
    SET_GPR_U32(ctx, 31, 0x15CB20u);
    ctx->pc = 0x15CB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB18u;
    // 0x15cb1c: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A8u, 0x15CB18u, 0x15CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB20u;
label_15cb20:
    // 0x15cb20: 0xc044152  jal         func_110548
label_15cb24:
    if (ctx->pc == 0x15CB24u) {
        ctx->pc = 0x15CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB20u;
        // 0x15cb24: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB28u;
        goto label_15cb28;
    }
    ctx->pc = 0x15CB20u;
    SET_GPR_U32(ctx, 31, 0x15CB28u);
    ctx->pc = 0x15CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB20u;
    // 0x15cb24: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110548u, 0x15CB20u, 0x15CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB28u;
label_15cb28:
    // 0x15cb28: 0xc043eea  jal         func_10FBA8
label_15cb2c:
    if (ctx->pc == 0x15CB2Cu) {
        ctx->pc = 0x15CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB28u;
        // 0x15cb2c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB30u;
        goto label_15cb30;
    }
    ctx->pc = 0x15CB28u;
    SET_GPR_U32(ctx, 31, 0x15CB30u);
    ctx->pc = 0x15CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB28u;
    // 0x15cb2c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FBA8u, 0x15CB28u, 0x15CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB30u;
label_15cb30:
    // 0x15cb30: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15cb34:
    // 0x15cb34: 0x8c45ec8c  lw          $a1, -0x1374($v0)
    ctx->pc = 0x15cb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962316)));
label_15cb38:
    // 0x15cb38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15cb3c:
    // 0x15cb3c: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x15cb3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_15cb40:
    // 0x15cb40: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x15cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15cb44:
    // 0x15cb44: 0x40f809  jalr        $v0
label_15cb48:
    if (ctx->pc == 0x15CB48u) {
        ctx->pc = 0x15CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB44u;
        // 0x15cb48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB4Cu;
        goto label_15cb4c;
    }
    ctx->pc = 0x15CB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15CB4Cu);
        ctx->pc = 0x15CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB44u;
        // 0x15cb48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CB44u, 0x15CB4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CB4Cu;
label_15cb4c:
    // 0x15cb4c: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x15cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_15cb50:
    // 0x15cb50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15cb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15cb54:
    // 0x15cb54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cb54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15cb58:
    // 0x15cb58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15cb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15cb5c:
    // 0x15cb5c: 0x3e00008  jr          $ra
label_15cb60:
    if (ctx->pc == 0x15CB60u) {
        ctx->pc = 0x15CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB5Cu;
        // 0x15cb60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB64u;
        goto label_15cb64;
    }
    ctx->pc = 0x15CB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB5Cu;
        // 0x15cb60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CB64u;
label_15cb64:
    // 0x15cb64: 0x0  nop
    ctx->pc = 0x15cb64u;
    // NOP
    ctx->pc = 0x15cb68u;
}
