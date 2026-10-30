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

// Function: sub_0024CAC8
// Address: 0x24cac8 - 0x24cbb0
void sub_0024CAC8_0x24cac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CAC8_0x24cac8");
#endif

    switch (ctx->pc) {
        case 0x24cac8u: goto label_24cac8;
        case 0x24caccu: goto label_24cacc;
        case 0x24cad0u: goto label_24cad0;
        case 0x24cad4u: goto label_24cad4;
        case 0x24cad8u: goto label_24cad8;
        case 0x24cadcu: goto label_24cadc;
        case 0x24cae0u: goto label_24cae0;
        case 0x24cae4u: goto label_24cae4;
        case 0x24cae8u: goto label_24cae8;
        case 0x24caecu: goto label_24caec;
        case 0x24caf0u: goto label_24caf0;
        case 0x24caf4u: goto label_24caf4;
        case 0x24caf8u: goto label_24caf8;
        case 0x24cafcu: goto label_24cafc;
        case 0x24cb00u: goto label_24cb00;
        case 0x24cb04u: goto label_24cb04;
        case 0x24cb08u: goto label_24cb08;
        case 0x24cb0cu: goto label_24cb0c;
        case 0x24cb10u: goto label_24cb10;
        case 0x24cb14u: goto label_24cb14;
        case 0x24cb18u: goto label_24cb18;
        case 0x24cb1cu: goto label_24cb1c;
        case 0x24cb20u: goto label_24cb20;
        case 0x24cb24u: goto label_24cb24;
        case 0x24cb28u: goto label_24cb28;
        case 0x24cb2cu: goto label_24cb2c;
        case 0x24cb30u: goto label_24cb30;
        case 0x24cb34u: goto label_24cb34;
        case 0x24cb38u: goto label_24cb38;
        case 0x24cb3cu: goto label_24cb3c;
        case 0x24cb40u: goto label_24cb40;
        case 0x24cb44u: goto label_24cb44;
        case 0x24cb48u: goto label_24cb48;
        case 0x24cb4cu: goto label_24cb4c;
        case 0x24cb50u: goto label_24cb50;
        case 0x24cb54u: goto label_24cb54;
        case 0x24cb58u: goto label_24cb58;
        case 0x24cb5cu: goto label_24cb5c;
        case 0x24cb60u: goto label_24cb60;
        case 0x24cb64u: goto label_24cb64;
        case 0x24cb68u: goto label_24cb68;
        case 0x24cb6cu: goto label_24cb6c;
        case 0x24cb70u: goto label_24cb70;
        case 0x24cb74u: goto label_24cb74;
        case 0x24cb78u: goto label_24cb78;
        case 0x24cb7cu: goto label_24cb7c;
        case 0x24cb80u: goto label_24cb80;
        case 0x24cb84u: goto label_24cb84;
        case 0x24cb88u: goto label_24cb88;
        case 0x24cb8cu: goto label_24cb8c;
        case 0x24cb90u: goto label_24cb90;
        case 0x24cb94u: goto label_24cb94;
        case 0x24cb98u: goto label_24cb98;
        case 0x24cb9cu: goto label_24cb9c;
        case 0x24cba0u: goto label_24cba0;
        case 0x24cba4u: goto label_24cba4;
        case 0x24cba8u: goto label_24cba8;
        case 0x24cbacu: goto label_24cbac;
        default: break;
    }

    ctx->pc = 0x24cac8u;

label_24cac8:
    // 0x24cac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24cac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24cacc:
    // 0x24cacc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x24caccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_24cad0:
    // 0x24cad0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24cad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_24cad4:
    // 0x24cad4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24cad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_24cad8:
    // 0x24cad8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_24cadc:
    // 0x24cadc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24cae0:
    // 0x24cae0: 0x8ca2bd30  lw          $v0, -0x42D0($a1)
    ctx->pc = 0x24cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950192)));
label_24cae4:
    // 0x24cae4: 0x8c830358  lw          $v1, 0x358($a0)
    ctx->pc = 0x24cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 856)));
label_24cae8:
    // 0x24cae8: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_24caec:
    if (ctx->pc == 0x24CAECu) {
        ctx->pc = 0x24CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAE8u;
        // 0x24caec: 0x24860358  addiu       $a2, $a0, 0x358 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CAF0u;
        goto label_24caf0;
    }
    ctx->pc = 0x24CAE8u;
    {
        const bool branch_taken_0x24cae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAE8u;
        // 0x24caec: 0x24860358  addiu       $a2, $a0, 0x358 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cae8) {
            ctx->pc = 0x24CB98u;
            goto label_24cb98;
        }
    }
    ctx->pc = 0x24CAF0u;
label_24caf0:
    // 0x24caf0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x24caf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24caf4:
    // 0x24caf4: 0xc0e4080  jal         func_390200
label_24caf8:
    if (ctx->pc == 0x24CAF8u) {
        ctx->pc = 0x24CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAF4u;
        // 0x24caf8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CAFCu;
        goto label_24cafc;
    }
    ctx->pc = 0x24CAF4u;
    SET_GPR_U32(ctx, 31, 0x24CAFCu);
    ctx->pc = 0x24CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CAF4u;
    // 0x24caf8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x24CAF4u, 0x24CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CAFCu;
label_24cafc:
    // 0x24cafc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24cafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24cb00:
    // 0x24cb00: 0xc0e8616  jal         func_3A1858
label_24cb04:
    if (ctx->pc == 0x24CB04u) {
        ctx->pc = 0x24CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB00u;
        // 0x24cb04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CB08u;
        goto label_24cb08;
    }
    ctx->pc = 0x24CB00u;
    SET_GPR_U32(ctx, 31, 0x24CB08u);
    ctx->pc = 0x24CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB00u;
    // 0x24cb04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x24CB00u, 0x24CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB08u;
label_24cb08:
    // 0x24cb08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24cb0c:
    // 0x24cb0c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x24cb0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_24cb10:
    // 0x24cb10: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x24cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_24cb14:
    // 0x24cb14: 0x40f809  jalr        $v0
label_24cb18:
    if (ctx->pc == 0x24CB18u) {
        ctx->pc = 0x24CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB14u;
        // 0x24cb18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CB1Cu;
        goto label_24cb1c;
    }
    ctx->pc = 0x24CB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24CB1Cu);
        ctx->pc = 0x24CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB14u;
        // 0x24cb18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CB14u, 0x24CB1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CB1Cu;
label_24cb1c:
    // 0x24cb1c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x24cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_24cb20:
    // 0x24cb20: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24cb24:
    // 0x24cb24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x24cb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_24cb28:
    // 0x24cb28: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x24cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_24cb2c:
    // 0x24cb2c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x24cb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24cb30:
    // 0x24cb30: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x24cb30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_24cb34:
    // 0x24cb34: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x24cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_24cb38:
    // 0x24cb38: 0x40f809  jalr        $v0
label_24cb3c:
    if (ctx->pc == 0x24CB3Cu) {
        ctx->pc = 0x24CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB38u;
        // 0x24cb3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CB40u;
        goto label_24cb40;
    }
    ctx->pc = 0x24CB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24CB40u);
        ctx->pc = 0x24CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB38u;
        // 0x24cb3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CB38u, 0x24CB40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CB40u;
label_24cb40:
    // 0x24cb40: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x24cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_24cb44:
    // 0x24cb44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24cb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24cb48:
    // 0x24cb48: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x24cb48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_24cb4c:
    // 0x24cb4c: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x24cb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_24cb50:
    // 0x24cb50: 0xc0f809  jalr        $a2
label_24cb54:
    if (ctx->pc == 0x24CB54u) {
        ctx->pc = 0x24CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB50u;
        // 0x24cb54: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CB58u;
        goto label_24cb58;
    }
    ctx->pc = 0x24CB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x24CB58u);
        ctx->pc = 0x24CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB50u;
        // 0x24cb54: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CB50u, 0x24CB58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CB58u;
label_24cb58:
    // 0x24cb58: 0xc0e8b48  jal         func_3A2D20
label_24cb5c:
    if (ctx->pc == 0x24CB5Cu) {
        ctx->pc = 0x24CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB58u;
        // 0x24cb5c: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CB60u;
        goto label_24cb60;
    }
    ctx->pc = 0x24CB58u;
    SET_GPR_U32(ctx, 31, 0x24CB60u);
    ctx->pc = 0x24CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB58u;
    // 0x24cb5c: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x24CB58u, 0x24CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB60u;
label_24cb60:
    // 0x24cb60: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x24cb60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_24cb64:
    // 0x24cb64: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24cb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24cb68:
    // 0x24cb68: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x24cb68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_24cb6c:
    // 0x24cb6c: 0xc0e8b58  jal         func_3A2D60
label_24cb70:
    if (ctx->pc == 0x24CB70u) {
        ctx->pc = 0x24CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB6Cu;
        // 0x24cb70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CB74u;
        goto label_24cb74;
    }
    ctx->pc = 0x24CB6Cu;
    SET_GPR_U32(ctx, 31, 0x24CB74u);
    ctx->pc = 0x24CB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB6Cu;
    // 0x24cb70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24CB6Cu, 0x24CB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB74u;
label_24cb74:
    // 0x24cb74: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24cb78:
    // 0x24cb78: 0xc0e8b58  jal         func_3A2D60
label_24cb7c:
    if (ctx->pc == 0x24CB7Cu) {
        ctx->pc = 0x24CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB78u;
        // 0x24cb7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CB80u;
        goto label_24cb80;
    }
    ctx->pc = 0x24CB78u;
    SET_GPR_U32(ctx, 31, 0x24CB80u);
    ctx->pc = 0x24CB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB78u;
    // 0x24cb7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24CB78u, 0x24CB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB80u;
label_24cb80:
    // 0x24cb80: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24cb84:
    // 0x24cb84: 0x2406003e  addiu       $a2, $zero, 0x3E
    ctx->pc = 0x24cb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_24cb88:
    // 0x24cb88: 0xc0e8b80  jal         func_3A2E00
label_24cb8c:
    if (ctx->pc == 0x24CB8Cu) {
        ctx->pc = 0x24CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB88u;
        // 0x24cb8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CB90u;
        goto label_24cb90;
    }
    ctx->pc = 0x24CB88u;
    SET_GPR_U32(ctx, 31, 0x24CB90u);
    ctx->pc = 0x24CB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB88u;
    // 0x24cb8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x24CB88u, 0x24CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB90u;
label_24cb90:
    // 0x24cb90: 0xc0e8b50  jal         func_3A2D40
label_24cb94:
    if (ctx->pc == 0x24CB94u) {
        ctx->pc = 0x24CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB90u;
        // 0x24cb94: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CB98u;
        goto label_24cb98;
    }
    ctx->pc = 0x24CB90u;
    SET_GPR_U32(ctx, 31, 0x24CB98u);
    ctx->pc = 0x24CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB90u;
    // 0x24cb94: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x24CB90u, 0x24CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB98u;
label_24cb98:
    // 0x24cb98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24cb98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24cb9c:
    // 0x24cb9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24cb9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24cba0:
    // 0x24cba0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24cba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24cba4:
    // 0x24cba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24cba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24cba8:
    // 0x24cba8: 0x3e00008  jr          $ra
label_24cbac:
    if (ctx->pc == 0x24CBACu) {
        ctx->pc = 0x24CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBA8u;
        // 0x24cbac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CBB0u;
        goto label_fallthrough_0x24cba8;
    }
    ctx->pc = 0x24CBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBA8u;
        // 0x24cbac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24cba8:
    ctx->pc = 0x24CBB0u;
}
