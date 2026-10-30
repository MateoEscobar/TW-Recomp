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

// Function: sub_0010DDD8
// Address: 0x10ddd8 - 0x10def8
void sub_0010DDD8_0x10ddd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DDD8_0x10ddd8");
#endif

    switch (ctx->pc) {
        case 0x10ddd8u: goto label_10ddd8;
        case 0x10dddcu: goto label_10dddc;
        case 0x10dde0u: goto label_10dde0;
        case 0x10dde4u: goto label_10dde4;
        case 0x10dde8u: goto label_10dde8;
        case 0x10ddecu: goto label_10ddec;
        case 0x10ddf0u: goto label_10ddf0;
        case 0x10ddf4u: goto label_10ddf4;
        case 0x10ddf8u: goto label_10ddf8;
        case 0x10ddfcu: goto label_10ddfc;
        case 0x10de00u: goto label_10de00;
        case 0x10de04u: goto label_10de04;
        case 0x10de08u: goto label_10de08;
        case 0x10de0cu: goto label_10de0c;
        case 0x10de10u: goto label_10de10;
        case 0x10de14u: goto label_10de14;
        case 0x10de18u: goto label_10de18;
        case 0x10de1cu: goto label_10de1c;
        case 0x10de20u: goto label_10de20;
        case 0x10de24u: goto label_10de24;
        case 0x10de28u: goto label_10de28;
        case 0x10de2cu: goto label_10de2c;
        case 0x10de30u: goto label_10de30;
        case 0x10de34u: goto label_10de34;
        case 0x10de38u: goto label_10de38;
        case 0x10de3cu: goto label_10de3c;
        case 0x10de40u: goto label_10de40;
        case 0x10de44u: goto label_10de44;
        case 0x10de48u: goto label_10de48;
        case 0x10de4cu: goto label_10de4c;
        case 0x10de50u: goto label_10de50;
        case 0x10de54u: goto label_10de54;
        case 0x10de58u: goto label_10de58;
        case 0x10de5cu: goto label_10de5c;
        case 0x10de60u: goto label_10de60;
        case 0x10de64u: goto label_10de64;
        case 0x10de68u: goto label_10de68;
        case 0x10de6cu: goto label_10de6c;
        case 0x10de70u: goto label_10de70;
        case 0x10de74u: goto label_10de74;
        case 0x10de78u: goto label_10de78;
        case 0x10de7cu: goto label_10de7c;
        case 0x10de80u: goto label_10de80;
        case 0x10de84u: goto label_10de84;
        case 0x10de88u: goto label_10de88;
        case 0x10de8cu: goto label_10de8c;
        case 0x10de90u: goto label_10de90;
        case 0x10de94u: goto label_10de94;
        case 0x10de98u: goto label_10de98;
        case 0x10de9cu: goto label_10de9c;
        case 0x10dea0u: goto label_10dea0;
        case 0x10dea4u: goto label_10dea4;
        case 0x10dea8u: goto label_10dea8;
        case 0x10deacu: goto label_10deac;
        case 0x10deb0u: goto label_10deb0;
        case 0x10deb4u: goto label_10deb4;
        case 0x10deb8u: goto label_10deb8;
        case 0x10debcu: goto label_10debc;
        case 0x10dec0u: goto label_10dec0;
        case 0x10dec4u: goto label_10dec4;
        case 0x10dec8u: goto label_10dec8;
        case 0x10deccu: goto label_10decc;
        case 0x10ded0u: goto label_10ded0;
        case 0x10ded4u: goto label_10ded4;
        case 0x10ded8u: goto label_10ded8;
        case 0x10dedcu: goto label_10dedc;
        case 0x10dee0u: goto label_10dee0;
        case 0x10dee4u: goto label_10dee4;
        case 0x10dee8u: goto label_10dee8;
        case 0x10deecu: goto label_10deec;
        case 0x10def0u: goto label_10def0;
        case 0x10def4u: goto label_10def4;
        default: break;
    }

    ctx->pc = 0x10ddd8u;

label_10ddd8:
    // 0x10ddd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10ddd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_10dddc:
    // 0x10dddc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10dddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10dde0:
    // 0x10dde0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10dde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_10dde4:
    // 0x10dde4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10dde4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10dde8:
    // 0x10dde8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10dde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_10ddec:
    // 0x10ddec: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x10ddecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_10ddf0:
    // 0x10ddf0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10ddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_10ddf4:
    // 0x10ddf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ddf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10ddf8:
    // 0x10ddf8: 0xc0467de  jal         func_119F78
label_10ddfc:
    if (ctx->pc == 0x10DDFCu) {
        ctx->pc = 0x10DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDF8u;
        // 0x10ddfc: 0x8e44015c  lw          $a0, 0x15C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE00u;
        goto label_10de00;
    }
    ctx->pc = 0x10DDF8u;
    SET_GPR_U32(ctx, 31, 0x10DE00u);
    ctx->pc = 0x10DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDF8u;
    // 0x10ddfc: 0x8e44015c  lw          $a0, 0x15C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F78u, 0x10DDF8u, 0x10DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE00u;
label_10de00:
    // 0x10de00: 0x8e450154  lw          $a1, 0x154($s2)
    ctx->pc = 0x10de00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_10de04:
    // 0x10de04: 0xc0439e6  jal         func_10E798
label_10de08:
    if (ctx->pc == 0x10DE08u) {
        ctx->pc = 0x10DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE04u;
        // 0x10de08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE0Cu;
        goto label_10de0c;
    }
    ctx->pc = 0x10DE04u;
    SET_GPR_U32(ctx, 31, 0x10DE0Cu);
    ctx->pc = 0x10DE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE04u;
    // 0x10de08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E798u, 0x10DE04u, 0x10DE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE0Cu;
label_10de0c:
    // 0x10de0c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_10de10:
    if (ctx->pc == 0x10DE10u) {
        ctx->pc = 0x10DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE0Cu;
        // 0x10de10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE14u;
        goto label_10de14;
    }
    ctx->pc = 0x10DE0Cu;
    {
        const bool branch_taken_0x10de0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE0Cu;
        // 0x10de10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de0c) {
            ctx->pc = 0x10DE60u;
            goto label_10de60;
        }
    }
    ctx->pc = 0x10DE14u;
label_10de14:
    // 0x10de14: 0x8e71bce4  lw          $s1, -0x431C($s3)
    ctx->pc = 0x10de14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950116)));
label_10de18:
    // 0x10de18: 0x8e430154  lw          $v1, 0x154($s2)
    ctx->pc = 0x10de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_10de1c:
    // 0x10de1c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x10de1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10de20:
    // 0x10de20: 0x80650008  lb          $a1, 0x8($v1)
    ctx->pc = 0x10de20u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_10de24:
    // 0x10de24: 0x86020138  lh          $v0, 0x138($s0)
    ctx->pc = 0x10de24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 312)));
label_10de28:
    // 0x10de28: 0x26100138  addiu       $s0, $s0, 0x138
    ctx->pc = 0x10de28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
label_10de2c:
    // 0x10de2c: 0xc046dd4  jal         func_11B750
label_10de30:
    if (ctx->pc == 0x10DE30u) {
        ctx->pc = 0x10DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE2Cu;
        // 0x10de30: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE34u;
        goto label_10de34;
    }
    ctx->pc = 0x10DE2Cu;
    SET_GPR_U32(ctx, 31, 0x10DE34u);
    ctx->pc = 0x10DE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE2Cu;
    // 0x10de30: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x10DE2Cu, 0x10DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE34u;
label_10de34:
    // 0x10de34: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10de34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10de38:
    // 0x10de38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10de38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10de3c:
    // 0x10de3c: 0x60f809  jalr        $v1
label_10de40:
    if (ctx->pc == 0x10DE40u) {
        ctx->pc = 0x10DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE3Cu;
        // 0x10de40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE44u;
        goto label_10de44;
    }
    ctx->pc = 0x10DE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10DE44u);
        ctx->pc = 0x10DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE3Cu;
        // 0x10de40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DE3Cu, 0x10DE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DE44u;
label_10de44:
    // 0x10de44: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x10de44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_10de48:
    // 0x10de48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10de48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10de4c:
    // 0x10de4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10de4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10de50:
    // 0x10de50: 0xc046dd0  jal         func_11B740
label_10de54:
    if (ctx->pc == 0x10DE54u) {
        ctx->pc = 0x10DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE50u;
        // 0x10de54: 0x80450008  lb          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE58u;
        goto label_10de58;
    }
    ctx->pc = 0x10DE50u;
    SET_GPR_U32(ctx, 31, 0x10DE58u);
    ctx->pc = 0x10DE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE50u;
    // 0x10de54: 0x80450008  lb          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B740u, 0x10DE50u, 0x10DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE58u;
label_10de58:
    // 0x10de58: 0xc0467de  jal         func_119F78
label_10de5c:
    if (ctx->pc == 0x10DE5Cu) {
        ctx->pc = 0x10DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE58u;
        // 0x10de5c: 0x8e440154  lw          $a0, 0x154($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE60u;
        goto label_10de60;
    }
    ctx->pc = 0x10DE58u;
    SET_GPR_U32(ctx, 31, 0x10DE60u);
    ctx->pc = 0x10DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE58u;
    // 0x10de5c: 0x8e440154  lw          $a0, 0x154($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F78u, 0x10DE58u, 0x10DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE60u;
label_10de60:
    // 0x10de60: 0x8e450158  lw          $a1, 0x158($s2)
    ctx->pc = 0x10de60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_10de64:
    // 0x10de64: 0xc0439e6  jal         func_10E798
label_10de68:
    if (ctx->pc == 0x10DE68u) {
        ctx->pc = 0x10DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE64u;
        // 0x10de68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE6Cu;
        goto label_10de6c;
    }
    ctx->pc = 0x10DE64u;
    SET_GPR_U32(ctx, 31, 0x10DE6Cu);
    ctx->pc = 0x10DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE64u;
    // 0x10de68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E798u, 0x10DE64u, 0x10DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE6Cu;
label_10de6c:
    // 0x10de6c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_10de70:
    if (ctx->pc == 0x10DE70u) {
        ctx->pc = 0x10DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE6Cu;
        // 0x10de70: 0x8e71bce4  lw          $s1, -0x431C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE74u;
        goto label_10de74;
    }
    ctx->pc = 0x10DE6Cu;
    {
        const bool branch_taken_0x10de6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE6Cu;
        // 0x10de70: 0x8e71bce4  lw          $s1, -0x431C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de6c) {
            ctx->pc = 0x10DEC0u;
            goto label_10dec0;
        }
    }
    ctx->pc = 0x10DE74u;
label_10de74:
    // 0x10de74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10de74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10de78:
    // 0x10de78: 0x8e420158  lw          $v0, 0x158($s2)
    ctx->pc = 0x10de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_10de7c:
    // 0x10de7c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x10de7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10de80:
    // 0x10de80: 0x80450008  lb          $a1, 0x8($v0)
    ctx->pc = 0x10de80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_10de84:
    // 0x10de84: 0x86030138  lh          $v1, 0x138($s0)
    ctx->pc = 0x10de84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 312)));
label_10de88:
    // 0x10de88: 0x26100138  addiu       $s0, $s0, 0x138
    ctx->pc = 0x10de88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
label_10de8c:
    // 0x10de8c: 0xc046dd4  jal         func_11B750
label_10de90:
    if (ctx->pc == 0x10DE90u) {
        ctx->pc = 0x10DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE8Cu;
        // 0x10de90: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE94u;
        goto label_10de94;
    }
    ctx->pc = 0x10DE8Cu;
    SET_GPR_U32(ctx, 31, 0x10DE94u);
    ctx->pc = 0x10DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE8Cu;
    // 0x10de90: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x10DE8Cu, 0x10DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE94u;
label_10de94:
    // 0x10de94: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10de94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10de98:
    // 0x10de98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10de98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10de9c:
    // 0x10de9c: 0x60f809  jalr        $v1
label_10dea0:
    if (ctx->pc == 0x10DEA0u) {
        ctx->pc = 0x10DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE9Cu;
        // 0x10dea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEA4u;
        goto label_10dea4;
    }
    ctx->pc = 0x10DE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10DEA4u);
        ctx->pc = 0x10DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE9Cu;
        // 0x10dea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DE9Cu, 0x10DEA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DEA4u;
label_10dea4:
    // 0x10dea4: 0x8e420158  lw          $v0, 0x158($s2)
    ctx->pc = 0x10dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_10dea8:
    // 0x10dea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10dea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10deac:
    // 0x10deac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10deacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10deb0:
    // 0x10deb0: 0xc046dd0  jal         func_11B740
label_10deb4:
    if (ctx->pc == 0x10DEB4u) {
        ctx->pc = 0x10DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEB0u;
        // 0x10deb4: 0x80450008  lb          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEB8u;
        goto label_10deb8;
    }
    ctx->pc = 0x10DEB0u;
    SET_GPR_U32(ctx, 31, 0x10DEB8u);
    ctx->pc = 0x10DEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DEB0u;
    // 0x10deb4: 0x80450008  lb          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B740u, 0x10DEB0u, 0x10DEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DEB8u;
label_10deb8:
    // 0x10deb8: 0xc0467de  jal         func_119F78
label_10debc:
    if (ctx->pc == 0x10DEBCu) {
        ctx->pc = 0x10DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEB8u;
        // 0x10debc: 0x8e440158  lw          $a0, 0x158($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEC0u;
        goto label_10dec0;
    }
    ctx->pc = 0x10DEB8u;
    SET_GPR_U32(ctx, 31, 0x10DEC0u);
    ctx->pc = 0x10DEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DEB8u;
    // 0x10debc: 0x8e440158  lw          $a0, 0x158($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F78u, 0x10DEB8u, 0x10DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DEC0u;
label_10dec0:
    // 0x10dec0: 0x8e65bce4  lw          $a1, -0x431C($s3)
    ctx->pc = 0x10dec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950116)));
label_10dec4:
    // 0x10dec4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10dec8:
    // 0x10dec8: 0x84440168  lh          $a0, 0x168($v0)
    ctx->pc = 0x10dec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 360)));
label_10decc:
    // 0x10decc: 0x8c43016c  lw          $v1, 0x16C($v0)
    ctx->pc = 0x10deccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
label_10ded0:
    // 0x10ded0: 0x60f809  jalr        $v1
label_10ded4:
    if (ctx->pc == 0x10DED4u) {
        ctx->pc = 0x10DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DED0u;
        // 0x10ded4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DED8u;
        goto label_10ded8;
    }
    ctx->pc = 0x10DED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10DED8u);
        ctx->pc = 0x10DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DED0u;
        // 0x10ded4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DED0u, 0x10DED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DED8u;
label_10ded8:
    // 0x10ded8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10ded8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10dedc:
    // 0x10dedc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10dedcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10dee0:
    // 0x10dee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10dee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10dee4:
    // 0x10dee4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10dee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10dee8:
    // 0x10dee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10dee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10deec:
    // 0x10deec: 0x3e00008  jr          $ra
label_10def0:
    if (ctx->pc == 0x10DEF0u) {
        ctx->pc = 0x10DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEECu;
        // 0x10def0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEF4u;
        goto label_10def4;
    }
    ctx->pc = 0x10DEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEECu;
        // 0x10def0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DEF4u;
label_10def4:
    // 0x10def4: 0x0  nop
    ctx->pc = 0x10def4u;
    // NOP
    ctx->pc = 0x10def8u;
}
