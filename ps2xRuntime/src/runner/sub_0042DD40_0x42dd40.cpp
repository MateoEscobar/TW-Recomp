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

// Function: sub_0042DD40
// Address: 0x42dd40 - 0x42ddb4
void sub_0042DD40_0x42dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DD40_0x42dd40");
#endif

    switch (ctx->pc) {
        case 0x42dd40u: goto label_42dd40;
        case 0x42dd44u: goto label_42dd44;
        case 0x42dd48u: goto label_42dd48;
        case 0x42dd4cu: goto label_42dd4c;
        case 0x42dd50u: goto label_42dd50;
        case 0x42dd54u: goto label_42dd54;
        case 0x42dd58u: goto label_42dd58;
        case 0x42dd5cu: goto label_42dd5c;
        case 0x42dd60u: goto label_42dd60;
        case 0x42dd64u: goto label_42dd64;
        case 0x42dd68u: goto label_42dd68;
        case 0x42dd6cu: goto label_42dd6c;
        case 0x42dd70u: goto label_42dd70;
        case 0x42dd74u: goto label_42dd74;
        case 0x42dd78u: goto label_42dd78;
        case 0x42dd7cu: goto label_42dd7c;
        case 0x42dd80u: goto label_42dd80;
        case 0x42dd84u: goto label_42dd84;
        case 0x42dd88u: goto label_42dd88;
        case 0x42dd8cu: goto label_42dd8c;
        case 0x42dd90u: goto label_42dd90;
        case 0x42dd94u: goto label_42dd94;
        case 0x42dd98u: goto label_42dd98;
        case 0x42dd9cu: goto label_42dd9c;
        case 0x42dda0u: goto label_42dda0;
        case 0x42dda4u: goto label_42dda4;
        case 0x42dda8u: goto label_42dda8;
        case 0x42ddacu: goto label_42ddac;
        case 0x42ddb0u: goto label_42ddb0;
        default: break;
    }

    ctx->pc = 0x42dd40u;

label_42dd40:
    // 0x42dd40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_42dd44:
    // 0x42dd44: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_42dd48:
    // 0x42dd48: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x42dd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_42dd4c:
    // 0x42dd4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x42dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42dd50:
    // 0x42dd50: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x42dd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_42dd54:
    // 0x42dd54: 0x2451c2e0  addiu       $s1, $v0, -0x3D20
    ctx->pc = 0x42dd54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951648));
label_42dd58:
    // 0x42dd58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42dd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42dd5c:
    // 0x42dd5c: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x42dd5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
label_42dd60:
    // 0x42dd60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x42dd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_42dd64:
    // 0x42dd64: 0xc10b652  jal         func_42D948
label_42dd68:
    if (ctx->pc == 0x42DD68u) {
        ctx->pc = 0x42DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DD64u;
        // 0x42dd68: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DD6Cu;
        goto label_42dd6c;
    }
    ctx->pc = 0x42DD64u;
    SET_GPR_U32(ctx, 31, 0x42DD6Cu);
    ctx->pc = 0x42DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DD64u;
    // 0x42dd68: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D948u, 0x42DD64u, 0x42DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DD6Cu;
label_42dd6c:
    // 0x42dd6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42dd6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42dd70:
    // 0x42dd70: 0x10000003  b           . + 4 + (0x3 << 2)
label_42dd74:
    if (ctx->pc == 0x42DD74u) {
        ctx->pc = 0x42DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DD70u;
        // 0x42dd74: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DD78u;
        goto label_42dd78;
    }
    ctx->pc = 0x42DD70u;
    {
        const bool branch_taken_0x42dd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DD70u;
        // 0x42dd74: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dd70) {
            ctx->pc = 0x42DD80u;
            goto label_42dd80;
        }
    }
    ctx->pc = 0x42DD78u;
label_42dd78:
    // 0x42dd78: 0xc10b510  jal         func_42D440
label_42dd7c:
    if (ctx->pc == 0x42DD7Cu) {
        ctx->pc = 0x42DD80u;
        goto label_42dd80;
    }
    ctx->pc = 0x42DD78u;
    SET_GPR_U32(ctx, 31, 0x42DD80u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x42DD78u, 0x42DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DD80u;
label_42dd80:
    // 0x42dd80: 0x2642c168  addiu       $v0, $s2, -0x3E98
    ctx->pc = 0x42dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951272));
label_42dd84:
    // 0x42dd84: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x42dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_42dd88:
    // 0x42dd88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x42dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42dd8c:
    // 0x42dd8c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x42dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_42dd90:
    // 0x42dd90: 0x40f809  jalr        $v0
label_42dd94:
    if (ctx->pc == 0x42DD94u) {
        ctx->pc = 0x42DD98u;
        goto label_42dd98;
    }
    ctx->pc = 0x42DD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42DD98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DD90u, 0x42DD98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42DD98u;
label_42dd98:
    // 0x42dd98: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x42dd98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
label_42dd9c:
    // 0x42dd9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42dd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42dda0:
    // 0x42dda0: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x42dda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
label_42dda4:
    // 0x42dda4: 0xc10b680  jal         func_42DA00
label_42dda8:
    if (ctx->pc == 0x42DDA8u) {
        ctx->pc = 0x42DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DDA4u;
        // 0x42dda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DDACu;
        goto label_42ddac;
    }
    ctx->pc = 0x42DDA4u;
    SET_GPR_U32(ctx, 31, 0x42DDACu);
    ctx->pc = 0x42DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DDA4u;
    // 0x42dda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DA00u, 0x42DDA4u, 0x42DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DDACu;
label_42ddac:
    // 0x42ddac: 0xc10b510  jal         func_42D440
label_42ddb0:
    if (ctx->pc == 0x42DDB0u) {
        ctx->pc = 0x42DDB4u;
        goto label_fallthrough_0x42ddac;
    }
    ctx->pc = 0x42DDACu;
    SET_GPR_U32(ctx, 31, 0x42DDB4u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x42DDACu, 0x42DDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x42ddac:
    ctx->pc = 0x42DDB4u;
}
