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

// Function: sub_00124000
// Address: 0x124000 - 0x124248
void sub_00124000_0x124000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124000_0x124000");
#endif

    switch (ctx->pc) {
        case 0x124000u: goto label_124000;
        case 0x124004u: goto label_124004;
        case 0x124008u: goto label_124008;
        case 0x12400cu: goto label_12400c;
        case 0x124010u: goto label_124010;
        case 0x124014u: goto label_124014;
        case 0x124018u: goto label_124018;
        case 0x12401cu: goto label_12401c;
        case 0x124020u: goto label_124020;
        case 0x124024u: goto label_124024;
        case 0x124028u: goto label_124028;
        case 0x12402cu: goto label_12402c;
        case 0x124030u: goto label_124030;
        case 0x124034u: goto label_124034;
        case 0x124038u: goto label_124038;
        case 0x12403cu: goto label_12403c;
        case 0x124040u: goto label_124040;
        case 0x124044u: goto label_124044;
        case 0x124048u: goto label_124048;
        case 0x12404cu: goto label_12404c;
        case 0x124050u: goto label_124050;
        case 0x124054u: goto label_124054;
        case 0x124058u: goto label_124058;
        case 0x12405cu: goto label_12405c;
        case 0x124060u: goto label_124060;
        case 0x124064u: goto label_124064;
        case 0x124068u: goto label_124068;
        case 0x12406cu: goto label_12406c;
        case 0x124070u: goto label_124070;
        case 0x124074u: goto label_124074;
        case 0x124078u: goto label_124078;
        case 0x12407cu: goto label_12407c;
        case 0x124080u: goto label_124080;
        case 0x124084u: goto label_124084;
        case 0x124088u: goto label_124088;
        case 0x12408cu: goto label_12408c;
        case 0x124090u: goto label_124090;
        case 0x124094u: goto label_124094;
        case 0x124098u: goto label_124098;
        case 0x12409cu: goto label_12409c;
        case 0x1240a0u: goto label_1240a0;
        case 0x1240a4u: goto label_1240a4;
        case 0x1240a8u: goto label_1240a8;
        case 0x1240acu: goto label_1240ac;
        case 0x1240b0u: goto label_1240b0;
        case 0x1240b4u: goto label_1240b4;
        case 0x1240b8u: goto label_1240b8;
        case 0x1240bcu: goto label_1240bc;
        case 0x1240c0u: goto label_1240c0;
        case 0x1240c4u: goto label_1240c4;
        case 0x1240c8u: goto label_1240c8;
        case 0x1240ccu: goto label_1240cc;
        case 0x1240d0u: goto label_1240d0;
        case 0x1240d4u: goto label_1240d4;
        case 0x1240d8u: goto label_1240d8;
        case 0x1240dcu: goto label_1240dc;
        case 0x1240e0u: goto label_1240e0;
        case 0x1240e4u: goto label_1240e4;
        case 0x1240e8u: goto label_1240e8;
        case 0x1240ecu: goto label_1240ec;
        case 0x1240f0u: goto label_1240f0;
        case 0x1240f4u: goto label_1240f4;
        case 0x1240f8u: goto label_1240f8;
        case 0x1240fcu: goto label_1240fc;
        case 0x124100u: goto label_124100;
        case 0x124104u: goto label_124104;
        case 0x124108u: goto label_124108;
        case 0x12410cu: goto label_12410c;
        case 0x124110u: goto label_124110;
        case 0x124114u: goto label_124114;
        case 0x124118u: goto label_124118;
        case 0x12411cu: goto label_12411c;
        case 0x124120u: goto label_124120;
        case 0x124124u: goto label_124124;
        case 0x124128u: goto label_124128;
        case 0x12412cu: goto label_12412c;
        case 0x124130u: goto label_124130;
        case 0x124134u: goto label_124134;
        case 0x124138u: goto label_124138;
        case 0x12413cu: goto label_12413c;
        case 0x124140u: goto label_124140;
        case 0x124144u: goto label_124144;
        case 0x124148u: goto label_124148;
        case 0x12414cu: goto label_12414c;
        case 0x124150u: goto label_124150;
        case 0x124154u: goto label_124154;
        case 0x124158u: goto label_124158;
        case 0x12415cu: goto label_12415c;
        case 0x124160u: goto label_124160;
        case 0x124164u: goto label_124164;
        case 0x124168u: goto label_124168;
        case 0x12416cu: goto label_12416c;
        case 0x124170u: goto label_124170;
        case 0x124174u: goto label_124174;
        case 0x124178u: goto label_124178;
        case 0x12417cu: goto label_12417c;
        case 0x124180u: goto label_124180;
        case 0x124184u: goto label_124184;
        case 0x124188u: goto label_124188;
        case 0x12418cu: goto label_12418c;
        case 0x124190u: goto label_124190;
        case 0x124194u: goto label_124194;
        case 0x124198u: goto label_124198;
        case 0x12419cu: goto label_12419c;
        case 0x1241a0u: goto label_1241a0;
        case 0x1241a4u: goto label_1241a4;
        case 0x1241a8u: goto label_1241a8;
        case 0x1241acu: goto label_1241ac;
        case 0x1241b0u: goto label_1241b0;
        case 0x1241b4u: goto label_1241b4;
        case 0x1241b8u: goto label_1241b8;
        case 0x1241bcu: goto label_1241bc;
        case 0x1241c0u: goto label_1241c0;
        case 0x1241c4u: goto label_1241c4;
        case 0x1241c8u: goto label_1241c8;
        case 0x1241ccu: goto label_1241cc;
        case 0x1241d0u: goto label_1241d0;
        case 0x1241d4u: goto label_1241d4;
        case 0x1241d8u: goto label_1241d8;
        case 0x1241dcu: goto label_1241dc;
        case 0x1241e0u: goto label_1241e0;
        case 0x1241e4u: goto label_1241e4;
        case 0x1241e8u: goto label_1241e8;
        case 0x1241ecu: goto label_1241ec;
        case 0x1241f0u: goto label_1241f0;
        case 0x1241f4u: goto label_1241f4;
        case 0x1241f8u: goto label_1241f8;
        case 0x1241fcu: goto label_1241fc;
        case 0x124200u: goto label_124200;
        case 0x124204u: goto label_124204;
        case 0x124208u: goto label_124208;
        case 0x12420cu: goto label_12420c;
        case 0x124210u: goto label_124210;
        case 0x124214u: goto label_124214;
        case 0x124218u: goto label_124218;
        case 0x12421cu: goto label_12421c;
        case 0x124220u: goto label_124220;
        case 0x124224u: goto label_124224;
        case 0x124228u: goto label_124228;
        case 0x12422cu: goto label_12422c;
        case 0x124230u: goto label_124230;
        case 0x124234u: goto label_124234;
        case 0x124238u: goto label_124238;
        case 0x12423cu: goto label_12423c;
        case 0x124240u: goto label_124240;
        case 0x124244u: goto label_124244;
        default: break;
    }

    ctx->pc = 0x124000u;

label_124000:
    // 0x124000: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x124000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_124004:
    // 0x124004: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x124004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_124008:
    // 0x124008: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x124008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_12400c:
    // 0x12400c: 0x8c47b194  lw          $a3, -0x4E6C($v0)
    ctx->pc = 0x12400cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947220)));
label_124010:
    // 0x124010: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x124010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124014:
    // 0x124014: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x124014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_124018:
    // 0x124018: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x124018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_12401c:
    // 0x12401c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x12401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_124020:
    // 0x124020: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x124020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_124024:
    // 0x124024: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x124024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_124028:
    // 0x124028: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x124028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_12402c:
    // 0x12402c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x12402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_124030:
    // 0x124030: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x124030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_124034:
    // 0x124034: 0x10e00077  beqz        $a3, . + 4 + (0x77 << 2)
label_124038:
    if (ctx->pc == 0x124038u) {
        ctx->pc = 0x124038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124034u;
        // 0x124038: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12403Cu;
        goto label_12403c;
    }
    ctx->pc = 0x124034u;
    {
        const bool branch_taken_0x124034 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x124038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124034u;
        // 0x124038: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124034) {
            ctx->pc = 0x124214u;
            goto label_124214;
        }
    }
    ctx->pc = 0x12403Cu;
label_12403c:
    // 0x12403c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12403cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_124040:
    // 0x124040: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x124040u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_124044:
    // 0x124044: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x124044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_124048:
    // 0x124048: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x124048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_12404c:
    // 0x12404c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12404cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_124050:
    // 0x124050: 0x8cc5b198  lw          $a1, -0x4E68($a2)
    ctx->pc = 0x124050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294947224)));
label_124054:
    // 0x124054: 0x8c82b19c  lw          $v0, -0x4E64($a0)
    ctx->pc = 0x124054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947228)));
label_124058:
    // 0x124058: 0x14a20021  bne         $a1, $v0, . + 4 + (0x21 << 2)
label_12405c:
    if (ctx->pc == 0x12405Cu) {
        ctx->pc = 0x12405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124058u;
        // 0x12405c: 0x7e430180  sq          $v1, 0x180($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 384), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124060u;
        goto label_124060;
    }
    ctx->pc = 0x124058u;
    {
        const bool branch_taken_0x124058 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x12405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124058u;
        // 0x12405c: 0x7e430180  sq          $v1, 0x180($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 384), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124058) {
            ctx->pc = 0x1240E0u;
            goto label_1240e0;
        }
    }
    ctx->pc = 0x124060u;
label_124060:
    // 0x124060: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x124060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_124064:
    // 0x124064: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x124064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_124068:
    // 0x124068: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x124068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_12406c:
    // 0x12406c: 0x40f809  jalr        $v0
label_124070:
    if (ctx->pc == 0x124070u) {
        ctx->pc = 0x124070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12406Cu;
        // 0x124070: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124074u;
        goto label_124074;
    }
    ctx->pc = 0x12406Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124074u);
        ctx->pc = 0x124070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12406Cu;
        // 0x124070: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12406Cu, 0x124074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124074u;
label_124074:
    // 0x124074: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x124074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_124078:
    // 0x124078: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12407c:
    // 0x12407c: 0xc136b7c  jal         func_4DADF0
label_124080:
    if (ctx->pc == 0x124080u) {
        ctx->pc = 0x124080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12407Cu;
        // 0x124080: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124084u;
        goto label_124084;
    }
    ctx->pc = 0x12407Cu;
    SET_GPR_U32(ctx, 31, 0x124084u);
    ctx->pc = 0x124080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12407Cu;
    // 0x124080: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x12407Cu, 0x124084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124084u;
label_124084:
    // 0x124084: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x124084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_124088:
    // 0x124088: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x124088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12408c:
    // 0x12408c: 0xc0e409a  jal         func_390268
label_124090:
    if (ctx->pc == 0x124090u) {
        ctx->pc = 0x124090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12408Cu;
        // 0x124090: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124094u;
        goto label_124094;
    }
    ctx->pc = 0x12408Cu;
    SET_GPR_U32(ctx, 31, 0x124094u);
    ctx->pc = 0x124090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12408Cu;
    // 0x124090: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x12408Cu, 0x124094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124094u;
label_124094:
    // 0x124094: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124098:
    // 0x124098: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_12409c:
    if (ctx->pc == 0x12409Cu) {
        ctx->pc = 0x12409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124098u;
        // 0x12409c: 0x8e420200  lw          $v0, 0x200($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240A0u;
        goto label_1240a0;
    }
    ctx->pc = 0x124098u;
    {
        const bool branch_taken_0x124098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x124098) {
            ctx->pc = 0x12409Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124098u;
            // 0x12409c: 0x8e420200  lw          $v0, 0x200($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1240B4u;
            goto label_1240b4;
        }
    }
    ctx->pc = 0x1240A0u;
label_1240a0:
    // 0x1240a0: 0xc048d40  jal         func_123500
label_1240a4:
    if (ctx->pc == 0x1240A4u) {
        ctx->pc = 0x1240A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240A0u;
        // 0x1240a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240A8u;
        goto label_1240a8;
    }
    ctx->pc = 0x1240A0u;
    SET_GPR_U32(ctx, 31, 0x1240A8u);
    ctx->pc = 0x1240A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1240A0u;
    // 0x1240a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123500u, 0x1240A0u, 0x1240A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240A8u;
label_1240a8:
    // 0x1240a8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1240ac:
    if (ctx->pc == 0x1240ACu) {
        ctx->pc = 0x1240ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240A8u;
        // 0x1240ac: 0xae500200  sw          $s0, 0x200($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240B0u;
        goto label_1240b0;
    }
    ctx->pc = 0x1240A8u;
    {
        const bool branch_taken_0x1240a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1240a8) {
            ctx->pc = 0x1240ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1240A8u;
            // 0x1240ac: 0xae500200  sw          $s0, 0x200($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1240B0u;
            goto label_1240b0;
        }
    }
    ctx->pc = 0x1240B0u;
label_1240b0:
    // 0x1240b0: 0x8e420200  lw          $v0, 0x200($s2)
    ctx->pc = 0x1240b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 512)));
label_1240b4:
    // 0x1240b4: 0x26550180  addiu       $s5, $s2, 0x180
    ctx->pc = 0x1240b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_1240b8:
    // 0x1240b8: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_1240bc:
    if (ctx->pc == 0x1240BCu) {
        ctx->pc = 0x1240BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240B8u;
        // 0x1240bc: 0x265e01e0  addiu       $fp, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240C0u;
        goto label_1240c0;
    }
    ctx->pc = 0x1240B8u;
    {
        const bool branch_taken_0x1240b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240B8u;
        // 0x1240bc: 0x265e01e0  addiu       $fp, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240b8) {
            ctx->pc = 0x1241FCu;
            goto label_1241fc;
        }
    }
    ctx->pc = 0x1240C0u;
label_1240c0:
    // 0x1240c0: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x1240c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_1240c4:
    // 0x1240c4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x1240c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_1240c8:
    // 0x1240c8: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x1240c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_1240cc:
    // 0x1240cc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1240ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1240d0:
    // 0x1240d0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1240d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1240d4:
    // 0x1240d4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1240d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1240d8:
    // 0x1240d8: 0x10000048  b           . + 4 + (0x48 << 2)
label_1240dc:
    if (ctx->pc == 0x1240DCu) {
        ctx->pc = 0x1240DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240D8u;
        // 0x1240dc: 0x7e420180  sq          $v0, 0x180($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 384), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240E0u;
        goto label_1240e0;
    }
    ctx->pc = 0x1240D8u;
    {
        const bool branch_taken_0x1240d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240D8u;
        // 0x1240dc: 0x7e420180  sq          $v0, 0x180($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 384), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240d8) {
            ctx->pc = 0x1241FCu;
            goto label_1241fc;
        }
    }
    ctx->pc = 0x1240E0u;
label_1240e0:
    // 0x1240e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1240e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1240e4:
    // 0x1240e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1240e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1240e8:
    // 0x1240e8: 0x26550180  addiu       $s5, $s2, 0x180
    ctx->pc = 0x1240e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_1240ec:
    // 0x1240ec: 0x10e00021  beqz        $a3, . + 4 + (0x21 << 2)
label_1240f0:
    if (ctx->pc == 0x1240F0u) {
        ctx->pc = 0x1240F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240ECu;
        // 0x1240f0: 0x265e01e0  addiu       $fp, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240F4u;
        goto label_1240f4;
    }
    ctx->pc = 0x1240ECu;
    {
        const bool branch_taken_0x1240ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240ECu;
        // 0x1240f0: 0x265e01e0  addiu       $fp, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240ec) {
            ctx->pc = 0x124174u;
            goto label_124174;
        }
    }
    ctx->pc = 0x1240F4u;
label_1240f4:
    // 0x1240f4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x1240f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_1240f8:
    // 0x1240f8: 0x3c17005e  lui         $s7, 0x5E
    ctx->pc = 0x1240f8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
label_1240fc:
    // 0x1240fc: 0x24564b00  addiu       $s6, $v0, 0x4B00
    ctx->pc = 0x1240fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_124100:
    // 0x124100: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x124100u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_124104:
    // 0x124104: 0x26e491a8  addiu       $a0, $s7, -0x6E58
    ctx->pc = 0x124104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939048));
label_124108:
    // 0x124108: 0xc136b7c  jal         func_4DADF0
label_12410c:
    if (ctx->pc == 0x12410Cu) {
        ctx->pc = 0x12410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124108u;
        // 0x12410c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124110u;
        goto label_124110;
    }
    ctx->pc = 0x124108u;
    SET_GPR_U32(ctx, 31, 0x124110u);
    ctx->pc = 0x12410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124108u;
    // 0x12410c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x124108u, 0x124110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124110u;
label_124110:
    // 0x124110: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x124110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_124114:
    // 0x124114: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x124114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_124118:
    // 0x124118: 0xc0e409a  jal         func_390268
label_12411c:
    if (ctx->pc == 0x12411Cu) {
        ctx->pc = 0x12411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124118u;
        // 0x12411c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124120u;
        goto label_124120;
    }
    ctx->pc = 0x124118u;
    SET_GPR_U32(ctx, 31, 0x124120u);
    ctx->pc = 0x12411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124118u;
    // 0x12411c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x124118u, 0x124120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124120u;
label_124120:
    // 0x124120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124124:
    // 0x124124: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_124128:
    if (ctx->pc == 0x124128u) {
        ctx->pc = 0x124128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124124u;
        // 0x124128: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12412Cu;
        goto label_12412c;
    }
    ctx->pc = 0x124124u;
    {
        const bool branch_taken_0x124124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x124128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124124u;
        // 0x124128: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124124) {
            ctx->pc = 0x124160u;
            goto label_124160;
        }
    }
    ctx->pc = 0x12412Cu;
label_12412c:
    // 0x12412c: 0xc048d40  jal         func_123500
label_124130:
    if (ctx->pc == 0x124130u) {
        ctx->pc = 0x124130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12412Cu;
        // 0x124130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124134u;
        goto label_124134;
    }
    ctx->pc = 0x12412Cu;
    SET_GPR_U32(ctx, 31, 0x124134u);
    ctx->pc = 0x124130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12412Cu;
    // 0x124130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123500u, 0x12412Cu, 0x124134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124134u;
label_124134:
    // 0x124134: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_124138:
    if (ctx->pc == 0x124138u) {
        ctx->pc = 0x124138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124134u;
        // 0x124138: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12413Cu;
        goto label_12413c;
    }
    ctx->pc = 0x124134u;
    {
        const bool branch_taken_0x124134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124134u;
        // 0x124138: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124134) {
            ctx->pc = 0x12415Cu;
            goto label_12415c;
        }
    }
    ctx->pc = 0x12413Cu;
label_12413c:
    // 0x12413c: 0x86060092  lh          $a2, 0x92($s0)
    ctx->pc = 0x12413cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_124140:
    // 0x124140: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x124140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_124144:
    // 0x124144: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x124144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_124148:
    // 0x124148: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x124148u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_12414c:
    // 0x12414c: 0xc136b18  jal         func_4DAC60
label_124150:
    if (ctx->pc == 0x124150u) {
        ctx->pc = 0x124150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12414Cu;
        // 0x124150: 0xd63021  addu        $a2, $a2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124154u;
        goto label_124154;
    }
    ctx->pc = 0x12414Cu;
    SET_GPR_U32(ctx, 31, 0x124154u);
    ctx->pc = 0x124150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12414Cu;
    // 0x124150: 0xd63021  addu        $a2, $a2, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12414Cu, 0x124154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124154u;
label_124154:
    // 0x124154: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_124158:
    if (ctx->pc == 0x124158u) {
        ctx->pc = 0x124158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124154u;
        // 0x124158: 0xae500200  sw          $s0, 0x200($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12415Cu;
        goto label_12415c;
    }
    ctx->pc = 0x124154u;
    {
        const bool branch_taken_0x124154 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x124154) {
            ctx->pc = 0x124158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124154u;
            // 0x124158: 0xae500200  sw          $s0, 0x200($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12415Cu;
            goto label_12415c;
        }
    }
    ctx->pc = 0x12415Cu;
label_12415c:
    // 0x12415c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12415cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_124160:
    // 0x124160: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x124160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_124164:
    // 0x124164: 0x8c62b194  lw          $v0, -0x4E6C($v1)
    ctx->pc = 0x124164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947220)));
label_124168:
    // 0x124168: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x124168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12416c:
    // 0x12416c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_124170:
    if (ctx->pc == 0x124170u) {
        ctx->pc = 0x124170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12416Cu;
        // 0x124170: 0x26e491a8  addiu       $a0, $s7, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124174u;
        goto label_124174;
    }
    ctx->pc = 0x12416Cu;
    {
        const bool branch_taken_0x12416c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12416Cu;
        // 0x124170: 0x26e491a8  addiu       $a0, $s7, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12416c) {
            ctx->pc = 0x124108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124108;
        }
    }
    ctx->pc = 0x124174u;
label_124174:
    // 0x124174: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_124178:
    if (ctx->pc == 0x124178u) {
        ctx->pc = 0x12417Cu;
        goto label_12417c;
    }
    ctx->pc = 0x124174u;
    {
        const bool branch_taken_0x124174 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x124174) {
            ctx->pc = 0x1241B0u;
            goto label_1241b0;
        }
    }
    ctx->pc = 0x12417Cu;
label_12417c:
    // 0x12417c: 0x8e420200  lw          $v0, 0x200($s2)
    ctx->pc = 0x12417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 512)));
label_124180:
    // 0x124180: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_124184:
    if (ctx->pc == 0x124184u) {
        ctx->pc = 0x124184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124180u;
        // 0x124184: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124188u;
        goto label_124188;
    }
    ctx->pc = 0x124180u;
    {
        const bool branch_taken_0x124180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124180u;
        // 0x124184: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124180) {
            ctx->pc = 0x1241A8u;
            goto label_1241a8;
        }
    }
    ctx->pc = 0x124188u;
label_124188:
    // 0x124188: 0x84420092  lh          $v0, 0x92($v0)
    ctx->pc = 0x124188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_12418c:
    // 0x12418c: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x12418cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_124190:
    // 0x124190: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x124190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_124194:
    // 0x124194: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x124194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_124198:
    // 0x124198: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x124198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12419c:
    // 0x12419c: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x12419cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1241a0:
    // 0x1241a0: 0xc136b18  jal         func_4DAC60
label_1241a4:
    if (ctx->pc == 0x1241A4u) {
        ctx->pc = 0x1241A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241A0u;
        // 0x1241a4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241A8u;
        goto label_1241a8;
    }
    ctx->pc = 0x1241A0u;
    SET_GPR_U32(ctx, 31, 0x1241A8u);
    ctx->pc = 0x1241A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1241A0u;
    // 0x1241a4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1241A0u, 0x1241A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1241A8u;
label_1241a8:
    // 0x1241a8: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_1241ac:
    if (ctx->pc == 0x1241ACu) {
        ctx->pc = 0x1241ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241A8u;
        // 0x1241ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241B0u;
        goto label_1241b0;
    }
    ctx->pc = 0x1241A8u;
    {
        const bool branch_taken_0x1241a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1241ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241A8u;
        // 0x1241ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241a8) {
            ctx->pc = 0x124200u;
            goto label_124200;
        }
    }
    ctx->pc = 0x1241B0u;
label_1241b0:
    // 0x1241b0: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_1241b4:
    if (ctx->pc == 0x1241B4u) {
        ctx->pc = 0x1241B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241B0u;
        // 0x1241b4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241B8u;
        goto label_1241b8;
    }
    ctx->pc = 0x1241B0u;
    {
        const bool branch_taken_0x1241b0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1241B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241B0u;
        // 0x1241b4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241b0) {
            ctx->pc = 0x1241CCu;
            goto label_1241cc;
        }
    }
    ctx->pc = 0x1241B8u;
label_1241b8:
    // 0x1241b8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1241b8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1241bc:
    // 0x1241bc: 0x0  nop
    ctx->pc = 0x1241bcu;
    // NOP
label_1241c0:
    // 0x1241c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1241c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1241c4:
    // 0x1241c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1241c8:
    if (ctx->pc == 0x1241C8u) {
        ctx->pc = 0x1241CCu;
        goto label_1241cc;
    }
    ctx->pc = 0x1241C4u;
    {
        const bool branch_taken_0x1241c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1241c4) {
            ctx->pc = 0x1241E4u;
            goto label_1241e4;
        }
    }
    ctx->pc = 0x1241CCu;
label_1241cc:
    // 0x1241cc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1241ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1241d0:
    // 0x1241d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1241d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1241d4:
    // 0x1241d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1241d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1241d8:
    // 0x1241d8: 0x0  nop
    ctx->pc = 0x1241d8u;
    // NOP
label_1241dc:
    // 0x1241dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1241dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1241e0:
    // 0x1241e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1241e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1241e4:
    // 0x1241e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1241e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1241e8:
    // 0x1241e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1241e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1241ec:
    // 0x1241ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1241ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1241f0:
    // 0x1241f0: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1241f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_1241f4:
    // 0x1241f4: 0xc136b24  jal         func_4DAC90
label_1241f8:
    if (ctx->pc == 0x1241F8u) {
        ctx->pc = 0x1241F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241F4u;
        // 0x1241f8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241FCu;
        goto label_1241fc;
    }
    ctx->pc = 0x1241F4u;
    SET_GPR_U32(ctx, 31, 0x1241FCu);
    ctx->pc = 0x1241F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1241F4u;
    // 0x1241f8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1241F4u, 0x1241FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1241FCu;
label_1241fc:
    // 0x1241fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1241fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_124200:
    // 0x124200: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x124200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_124204:
    // 0x124204: 0xc136b18  jal         func_4DAC60
label_124208:
    if (ctx->pc == 0x124208u) {
        ctx->pc = 0x124208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124204u;
        // 0x124208: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12420Cu;
        goto label_12420c;
    }
    ctx->pc = 0x124204u;
    SET_GPR_U32(ctx, 31, 0x12420Cu);
    ctx->pc = 0x124208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124204u;
    // 0x124208: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x124204u, 0x12420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12420Cu;
label_12420c:
    // 0x12420c: 0x7a420180  lq          $v0, 0x180($s2)
    ctx->pc = 0x12420cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 384)));
label_124210:
    // 0x124210: 0x7e4201f0  sq          $v0, 0x1F0($s2)
    ctx->pc = 0x124210u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 496), GPR_VEC(ctx, 2));
label_124214:
    // 0x124214: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x124214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_124218:
    // 0x124218: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x124218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_12421c:
    // 0x12421c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x12421cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_124220:
    // 0x124220: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x124220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_124224:
    // 0x124224: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x124224u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_124228:
    // 0x124228: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x124228u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12422c:
    // 0x12422c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x12422cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_124230:
    // 0x124230: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x124230u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_124234:
    // 0x124234: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x124234u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_124238:
    // 0x124238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12423c:
    // 0x12423c: 0x3e00008  jr          $ra
label_124240:
    if (ctx->pc == 0x124240u) {
        ctx->pc = 0x124240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12423Cu;
        // 0x124240: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124244u;
        goto label_124244;
    }
    ctx->pc = 0x12423Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12423Cu;
        // 0x124240: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12423Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124244u;
label_124244:
    // 0x124244: 0x0  nop
    ctx->pc = 0x124244u;
    // NOP
    ctx->pc = 0x124248u;
}
