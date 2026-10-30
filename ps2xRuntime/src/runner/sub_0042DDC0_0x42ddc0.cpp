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

// Function: sub_0042DDC0
// Address: 0x42ddc0 - 0x42de34
void sub_0042DDC0_0x42ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DDC0_0x42ddc0");
#endif

    switch (ctx->pc) {
        case 0x42ddc0u: goto label_42ddc0;
        case 0x42ddc4u: goto label_42ddc4;
        case 0x42ddc8u: goto label_42ddc8;
        case 0x42ddccu: goto label_42ddcc;
        case 0x42ddd0u: goto label_42ddd0;
        case 0x42ddd4u: goto label_42ddd4;
        case 0x42ddd8u: goto label_42ddd8;
        case 0x42dddcu: goto label_42dddc;
        case 0x42dde0u: goto label_42dde0;
        case 0x42dde4u: goto label_42dde4;
        case 0x42dde8u: goto label_42dde8;
        case 0x42ddecu: goto label_42ddec;
        case 0x42ddf0u: goto label_42ddf0;
        case 0x42ddf4u: goto label_42ddf4;
        case 0x42ddf8u: goto label_42ddf8;
        case 0x42ddfcu: goto label_42ddfc;
        case 0x42de00u: goto label_42de00;
        case 0x42de04u: goto label_42de04;
        case 0x42de08u: goto label_42de08;
        case 0x42de0cu: goto label_42de0c;
        case 0x42de10u: goto label_42de10;
        case 0x42de14u: goto label_42de14;
        case 0x42de18u: goto label_42de18;
        case 0x42de1cu: goto label_42de1c;
        case 0x42de20u: goto label_42de20;
        case 0x42de24u: goto label_42de24;
        case 0x42de28u: goto label_42de28;
        case 0x42de2cu: goto label_42de2c;
        case 0x42de30u: goto label_42de30;
        default: break;
    }

    ctx->pc = 0x42ddc0u;

label_42ddc0:
    // 0x42ddc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42ddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_42ddc4:
    // 0x42ddc4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_42ddc8:
    // 0x42ddc8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x42ddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_42ddcc:
    // 0x42ddcc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x42ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42ddd0:
    // 0x42ddd0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x42ddd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_42ddd4:
    // 0x42ddd4: 0x2451c2c8  addiu       $s1, $v0, -0x3D38
    ctx->pc = 0x42ddd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
label_42ddd8:
    // 0x42ddd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42dddc:
    // 0x42dddc: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x42dddcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
label_42dde0:
    // 0x42dde0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x42dde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_42dde4:
    // 0x42dde4: 0xc10b652  jal         func_42D948
label_42dde8:
    if (ctx->pc == 0x42DDE8u) {
        ctx->pc = 0x42DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DDE4u;
        // 0x42dde8: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DDECu;
        goto label_42ddec;
    }
    ctx->pc = 0x42DDE4u;
    SET_GPR_U32(ctx, 31, 0x42DDECu);
    ctx->pc = 0x42DDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DDE4u;
    // 0x42dde8: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D948u, 0x42DDE4u, 0x42DDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DDECu;
label_42ddec:
    // 0x42ddec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42ddecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42ddf0:
    // 0x42ddf0: 0x10000003  b           . + 4 + (0x3 << 2)
label_42ddf4:
    if (ctx->pc == 0x42DDF4u) {
        ctx->pc = 0x42DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DDF0u;
        // 0x42ddf4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DDF8u;
        goto label_42ddf8;
    }
    ctx->pc = 0x42DDF0u;
    {
        const bool branch_taken_0x42ddf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DDF0u;
        // 0x42ddf4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ddf0) {
            ctx->pc = 0x42DE00u;
            goto label_42de00;
        }
    }
    ctx->pc = 0x42DDF8u;
label_42ddf8:
    // 0x42ddf8: 0xc10b510  jal         func_42D440
label_42ddfc:
    if (ctx->pc == 0x42DDFCu) {
        ctx->pc = 0x42DE00u;
        goto label_42de00;
    }
    ctx->pc = 0x42DDF8u;
    SET_GPR_U32(ctx, 31, 0x42DE00u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x42DDF8u, 0x42DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DE00u;
label_42de00:
    // 0x42de00: 0x2642c168  addiu       $v0, $s2, -0x3E98
    ctx->pc = 0x42de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951272));
label_42de04:
    // 0x42de04: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x42de04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_42de08:
    // 0x42de08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x42de08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42de0c:
    // 0x42de0c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x42de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_42de10:
    // 0x42de10: 0x40f809  jalr        $v0
label_42de14:
    if (ctx->pc == 0x42DE14u) {
        ctx->pc = 0x42DE18u;
        goto label_42de18;
    }
    ctx->pc = 0x42DE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42DE18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DE10u, 0x42DE18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42DE18u;
label_42de18:
    // 0x42de18: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x42de18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
label_42de1c:
    // 0x42de1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42de1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42de20:
    // 0x42de20: 0x24c6f468  addiu       $a2, $a2, -0xB98
    ctx->pc = 0x42de20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964328));
label_42de24:
    // 0x42de24: 0xc10b680  jal         func_42DA00
label_42de28:
    if (ctx->pc == 0x42DE28u) {
        ctx->pc = 0x42DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DE24u;
        // 0x42de28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DE2Cu;
        goto label_42de2c;
    }
    ctx->pc = 0x42DE24u;
    SET_GPR_U32(ctx, 31, 0x42DE2Cu);
    ctx->pc = 0x42DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DE24u;
    // 0x42de28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DA00u, 0x42DE24u, 0x42DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DE2Cu;
label_42de2c:
    // 0x42de2c: 0xc10b510  jal         func_42D440
label_42de30:
    if (ctx->pc == 0x42DE30u) {
        ctx->pc = 0x42DE34u;
        goto label_fallthrough_0x42de2c;
    }
    ctx->pc = 0x42DE2Cu;
    SET_GPR_U32(ctx, 31, 0x42DE34u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x42DE2Cu, 0x42DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x42de2c:
    ctx->pc = 0x42DE34u;
}
