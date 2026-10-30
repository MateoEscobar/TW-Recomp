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

// Function: sub_00403090
// Address: 0x403090 - 0x4032c0
void sub_00403090_0x403090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00403090_0x403090");
#endif

    switch (ctx->pc) {
        case 0x403090u: goto label_403090;
        case 0x403094u: goto label_403094;
        case 0x403098u: goto label_403098;
        case 0x40309cu: goto label_40309c;
        case 0x4030a0u: goto label_4030a0;
        case 0x4030a4u: goto label_4030a4;
        case 0x4030a8u: goto label_4030a8;
        case 0x4030acu: goto label_4030ac;
        case 0x4030b0u: goto label_4030b0;
        case 0x4030b4u: goto label_4030b4;
        case 0x4030b8u: goto label_4030b8;
        case 0x4030bcu: goto label_4030bc;
        case 0x4030c0u: goto label_4030c0;
        case 0x4030c4u: goto label_4030c4;
        case 0x4030c8u: goto label_4030c8;
        case 0x4030ccu: goto label_4030cc;
        case 0x4030d0u: goto label_4030d0;
        case 0x4030d4u: goto label_4030d4;
        case 0x4030d8u: goto label_4030d8;
        case 0x4030dcu: goto label_4030dc;
        case 0x4030e0u: goto label_4030e0;
        case 0x4030e4u: goto label_4030e4;
        case 0x4030e8u: goto label_4030e8;
        case 0x4030ecu: goto label_4030ec;
        case 0x4030f0u: goto label_4030f0;
        case 0x4030f4u: goto label_4030f4;
        case 0x4030f8u: goto label_4030f8;
        case 0x4030fcu: goto label_4030fc;
        case 0x403100u: goto label_403100;
        case 0x403104u: goto label_403104;
        case 0x403108u: goto label_403108;
        case 0x40310cu: goto label_40310c;
        case 0x403110u: goto label_403110;
        case 0x403114u: goto label_403114;
        case 0x403118u: goto label_403118;
        case 0x40311cu: goto label_40311c;
        case 0x403120u: goto label_403120;
        case 0x403124u: goto label_403124;
        case 0x403128u: goto label_403128;
        case 0x40312cu: goto label_40312c;
        case 0x403130u: goto label_403130;
        case 0x403134u: goto label_403134;
        case 0x403138u: goto label_403138;
        case 0x40313cu: goto label_40313c;
        case 0x403140u: goto label_403140;
        case 0x403144u: goto label_403144;
        case 0x403148u: goto label_403148;
        case 0x40314cu: goto label_40314c;
        case 0x403150u: goto label_403150;
        case 0x403154u: goto label_403154;
        case 0x403158u: goto label_403158;
        case 0x40315cu: goto label_40315c;
        case 0x403160u: goto label_403160;
        case 0x403164u: goto label_403164;
        case 0x403168u: goto label_403168;
        case 0x40316cu: goto label_40316c;
        case 0x403170u: goto label_403170;
        case 0x403174u: goto label_403174;
        case 0x403178u: goto label_403178;
        case 0x40317cu: goto label_40317c;
        case 0x403180u: goto label_403180;
        case 0x403184u: goto label_403184;
        case 0x403188u: goto label_403188;
        case 0x40318cu: goto label_40318c;
        case 0x403190u: goto label_403190;
        case 0x403194u: goto label_403194;
        case 0x403198u: goto label_403198;
        case 0x40319cu: goto label_40319c;
        case 0x4031a0u: goto label_4031a0;
        case 0x4031a4u: goto label_4031a4;
        case 0x4031a8u: goto label_4031a8;
        case 0x4031acu: goto label_4031ac;
        case 0x4031b0u: goto label_4031b0;
        case 0x4031b4u: goto label_4031b4;
        case 0x4031b8u: goto label_4031b8;
        case 0x4031bcu: goto label_4031bc;
        case 0x4031c0u: goto label_4031c0;
        case 0x4031c4u: goto label_4031c4;
        case 0x4031c8u: goto label_4031c8;
        case 0x4031ccu: goto label_4031cc;
        case 0x4031d0u: goto label_4031d0;
        case 0x4031d4u: goto label_4031d4;
        case 0x4031d8u: goto label_4031d8;
        case 0x4031dcu: goto label_4031dc;
        case 0x4031e0u: goto label_4031e0;
        case 0x4031e4u: goto label_4031e4;
        case 0x4031e8u: goto label_4031e8;
        case 0x4031ecu: goto label_4031ec;
        case 0x4031f0u: goto label_4031f0;
        case 0x4031f4u: goto label_4031f4;
        case 0x4031f8u: goto label_4031f8;
        case 0x4031fcu: goto label_4031fc;
        case 0x403200u: goto label_403200;
        case 0x403204u: goto label_403204;
        case 0x403208u: goto label_403208;
        case 0x40320cu: goto label_40320c;
        case 0x403210u: goto label_403210;
        case 0x403214u: goto label_403214;
        case 0x403218u: goto label_403218;
        case 0x40321cu: goto label_40321c;
        case 0x403220u: goto label_403220;
        case 0x403224u: goto label_403224;
        case 0x403228u: goto label_403228;
        case 0x40322cu: goto label_40322c;
        case 0x403230u: goto label_403230;
        case 0x403234u: goto label_403234;
        case 0x403238u: goto label_403238;
        case 0x40323cu: goto label_40323c;
        case 0x403240u: goto label_403240;
        case 0x403244u: goto label_403244;
        case 0x403248u: goto label_403248;
        case 0x40324cu: goto label_40324c;
        case 0x403250u: goto label_403250;
        case 0x403254u: goto label_403254;
        case 0x403258u: goto label_403258;
        case 0x40325cu: goto label_40325c;
        case 0x403260u: goto label_403260;
        case 0x403264u: goto label_403264;
        case 0x403268u: goto label_403268;
        case 0x40326cu: goto label_40326c;
        case 0x403270u: goto label_403270;
        case 0x403274u: goto label_403274;
        case 0x403278u: goto label_403278;
        case 0x40327cu: goto label_40327c;
        case 0x403280u: goto label_403280;
        case 0x403284u: goto label_403284;
        case 0x403288u: goto label_403288;
        case 0x40328cu: goto label_40328c;
        case 0x403290u: goto label_403290;
        case 0x403294u: goto label_403294;
        case 0x403298u: goto label_403298;
        case 0x40329cu: goto label_40329c;
        case 0x4032a0u: goto label_4032a0;
        case 0x4032a4u: goto label_4032a4;
        case 0x4032a8u: goto label_4032a8;
        case 0x4032acu: goto label_4032ac;
        case 0x4032b0u: goto label_4032b0;
        case 0x4032b4u: goto label_4032b4;
        case 0x4032b8u: goto label_4032b8;
        case 0x4032bcu: goto label_4032bc;
        default: break;
    }

    ctx->pc = 0x403090u;

label_403090:
    // 0x403090: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x403090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_403094:
    // 0x403094: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x403094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
label_403098:
    // 0x403098: 0x7fb30480  sq          $s3, 0x480($sp)
    ctx->pc = 0x403098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 19));
label_40309c:
    // 0x40309c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40309cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4030a0:
    // 0x4030a0: 0x7fb40470  sq          $s4, 0x470($sp)
    ctx->pc = 0x4030a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 20));
label_4030a4:
    // 0x4030a4: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x4030a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
label_4030a8:
    // 0x4030a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4030a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4030ac:
    // 0x4030ac: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x4030acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_4030b0:
    // 0x4030b0: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x4030b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
label_4030b4:
    // 0x4030b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4030b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4030b8:
    // 0x4030b8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x4030b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_4030bc:
    // 0x4030bc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x4030bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_4030c0:
    // 0x4030c0: 0x40f809  jalr        $v0
label_4030c4:
    if (ctx->pc == 0x4030C4u) {
        ctx->pc = 0x4030C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4030C0u;
        // 0x4030c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4030C8u;
        goto label_4030c8;
    }
    ctx->pc = 0x4030C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4030C8u);
        ctx->pc = 0x4030C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4030C0u;
        // 0x4030c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4030C0u, 0x4030C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4030C8u;
label_4030c8:
    // 0x4030c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4030c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4030cc:
    // 0x4030cc: 0xc0ea14c  jal         func_3A8530
label_4030d0:
    if (ctx->pc == 0x4030D0u) {
        ctx->pc = 0x4030D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4030CCu;
        // 0x4030d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4030D4u;
        goto label_4030d4;
    }
    ctx->pc = 0x4030CCu;
    SET_GPR_U32(ctx, 31, 0x4030D4u);
    ctx->pc = 0x4030D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4030CCu;
    // 0x4030d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x4030CCu, 0x4030D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4030D4u;
label_4030d4:
    // 0x4030d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4030d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4030d8:
    // 0x4030d8: 0xc0ea12a  jal         func_3A84A8
label_4030dc:
    if (ctx->pc == 0x4030DCu) {
        ctx->pc = 0x4030DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4030D8u;
        // 0x4030dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4030E0u;
        goto label_4030e0;
    }
    ctx->pc = 0x4030D8u;
    SET_GPR_U32(ctx, 31, 0x4030E0u);
    ctx->pc = 0x4030DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4030D8u;
    // 0x4030dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x4030D8u, 0x4030E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4030E0u;
label_4030e0:
    // 0x4030e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4030e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4030e4:
    // 0x4030e4: 0xc0ea12a  jal         func_3A84A8
label_4030e8:
    if (ctx->pc == 0x4030E8u) {
        ctx->pc = 0x4030E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4030E4u;
        // 0x4030e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4030ECu;
        goto label_4030ec;
    }
    ctx->pc = 0x4030E4u;
    SET_GPR_U32(ctx, 31, 0x4030ECu);
    ctx->pc = 0x4030E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4030E4u;
    // 0x4030e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x4030E4u, 0x4030ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4030ECu;
label_4030ec:
    // 0x4030ec: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x4030ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_4030f0:
    // 0x4030f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4030f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4030f4:
    // 0x4030f4: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x4030f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_4030f8:
    // 0x4030f8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x4030f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4030fc:
    // 0x4030fc: 0xc0e858c  jal         func_3A1630
label_403100:
    if (ctx->pc == 0x403100u) {
        ctx->pc = 0x403100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4030FCu;
        // 0x403100: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403104u;
        goto label_403104;
    }
    ctx->pc = 0x4030FCu;
    SET_GPR_U32(ctx, 31, 0x403104u);
    ctx->pc = 0x403100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4030FCu;
    // 0x403100: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x4030FCu, 0x403104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403104u;
label_403104:
    // 0x403104: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x403104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_403108:
    // 0x403108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x403108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40310c:
    // 0x40310c: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x40310cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_403110:
    // 0x403110: 0xc0e9132  jal         func_3A44C8
label_403114:
    if (ctx->pc == 0x403114u) {
        ctx->pc = 0x403114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403110u;
        // 0x403114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403118u;
        goto label_403118;
    }
    ctx->pc = 0x403110u;
    SET_GPR_U32(ctx, 31, 0x403118u);
    ctx->pc = 0x403114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403110u;
    // 0x403114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x403110u, 0x403118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403118u;
label_403118:
    // 0x403118: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x403118u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40311c:
    // 0x40311c: 0x3c020191  lui         $v0, 0x191
    ctx->pc = 0x40311cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)401 << 16));
label_403120:
    // 0x403120: 0x3442ccb4  ori         $v0, $v0, 0xCCB4
    ctx->pc = 0x403120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52404);
label_403124:
    // 0x403124: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_403128:
    if (ctx->pc == 0x403128u) {
        ctx->pc = 0x403128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403124u;
        // 0x403128: 0xae4300c4  sw          $v1, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40312Cu;
        goto label_40312c;
    }
    ctx->pc = 0x403124u;
    {
        const bool branch_taken_0x403124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x403128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403124u;
        // 0x403128: 0xae4300c4  sw          $v1, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403124) {
            ctx->pc = 0x40315Cu;
            goto label_40315c;
        }
    }
    ctx->pc = 0x40312Cu;
label_40312c:
    // 0x40312c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x40312cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_403130:
    // 0x403130: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x403130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_403134:
    // 0x403134: 0xc0cd4ee  jal         func_3353B8
label_403138:
    if (ctx->pc == 0x403138u) {
        ctx->pc = 0x403138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403134u;
        // 0x403138: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40313Cu;
        goto label_40313c;
    }
    ctx->pc = 0x403134u;
    SET_GPR_U32(ctx, 31, 0x40313Cu);
    ctx->pc = 0x403138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403134u;
    // 0x403138: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x403134u, 0x40313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40313Cu;
label_40313c:
    // 0x40313c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40313cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_403140:
    // 0x403140: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x403140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_403144:
    // 0x403144: 0x24634770  addiu       $v1, $v1, 0x4770
    ctx->pc = 0x403144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18288));
label_403148:
    // 0x403148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x403148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40314c:
    // 0x40314c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x40314cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_403150:
    // 0x403150: 0xae4400cc  sw          $a0, 0xCC($s2)
    ctx->pc = 0x403150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 4));
label_403154:
    // 0x403154: 0x10000011  b           . + 4 + (0x11 << 2)
label_403158:
    if (ctx->pc == 0x403158u) {
        ctx->pc = 0x403158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403154u;
        // 0x403158: 0xae4400c8  sw          $a0, 0xC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40315Cu;
        goto label_40315c;
    }
    ctx->pc = 0x403154u;
    {
        const bool branch_taken_0x403154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403154u;
        // 0x403158: 0xae4400c8  sw          $a0, 0xC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403154) {
            ctx->pc = 0x40319Cu;
            goto label_40319c;
        }
    }
    ctx->pc = 0x40315Cu;
label_40315c:
    // 0x40315c: 0x3c0226b7  lui         $v0, 0x26B7
    ctx->pc = 0x40315cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9911 << 16));
label_403160:
    // 0x403160: 0x3442048b  ori         $v0, $v0, 0x48B
    ctx->pc = 0x403160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1163);
label_403164:
    // 0x403164: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_403168:
    if (ctx->pc == 0x403168u) {
        ctx->pc = 0x403168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403164u;
        // 0x403168: 0xae600034  sw          $zero, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40316Cu;
        goto label_40316c;
    }
    ctx->pc = 0x403164u;
    {
        const bool branch_taken_0x403164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x403164) {
            ctx->pc = 0x403168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x403164u;
            // 0x403168: 0xae600034  sw          $zero, 0x34($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4031A0u;
            goto label_4031a0;
        }
    }
    ctx->pc = 0x40316Cu;
label_40316c:
    // 0x40316c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x40316cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_403170:
    // 0x403170: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x403170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_403174:
    // 0x403174: 0xc0cd4ee  jal         func_3353B8
label_403178:
    if (ctx->pc == 0x403178u) {
        ctx->pc = 0x403178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403174u;
        // 0x403178: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40317Cu;
        goto label_40317c;
    }
    ctx->pc = 0x403174u;
    SET_GPR_U32(ctx, 31, 0x40317Cu);
    ctx->pc = 0x403178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403174u;
    // 0x403178: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x403174u, 0x40317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40317Cu;
label_40317c:
    // 0x40317c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40317cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_403180:
    // 0x403180: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x403180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_403184:
    // 0x403184: 0x24634770  addiu       $v1, $v1, 0x4770
    ctx->pc = 0x403184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18288));
label_403188:
    // 0x403188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x403188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40318c:
    // 0x40318c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x40318cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_403190:
    // 0x403190: 0x34820080  ori         $v0, $a0, 0x80
    ctx->pc = 0x403190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
label_403194:
    // 0x403194: 0xae4400c8  sw          $a0, 0xC8($s2)
    ctx->pc = 0x403194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 4));
label_403198:
    // 0x403198: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x403198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
label_40319c:
    // 0x40319c: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x40319cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_4031a0:
    // 0x4031a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4031a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4031a4:
    // 0x4031a4: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x4031a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_4031a8:
    // 0x4031a8: 0xc0e8dee  jal         func_3A37B8
label_4031ac:
    if (ctx->pc == 0x4031ACu) {
        ctx->pc = 0x4031ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4031A8u;
        // 0x4031ac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4031B0u;
        goto label_4031b0;
    }
    ctx->pc = 0x4031A8u;
    SET_GPR_U32(ctx, 31, 0x4031B0u);
    ctx->pc = 0x4031ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4031A8u;
    // 0x4031ac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x4031A8u, 0x4031B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4031B0u;
label_4031b0:
    // 0x4031b0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4031b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4031b4:
    // 0x4031b4: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
label_4031b8:
    if (ctx->pc == 0x4031B8u) {
        ctx->pc = 0x4031B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4031B4u;
        // 0x4031b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4031BCu;
        goto label_4031bc;
    }
    ctx->pc = 0x4031B4u;
    {
        const bool branch_taken_0x4031b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4031B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4031B4u;
        // 0x4031b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4031b4) {
            ctx->pc = 0x403268u;
            goto label_403268;
        }
    }
    ctx->pc = 0x4031BCu;
label_4031bc:
    // 0x4031bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4031bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4031c0:
    // 0x4031c0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x4031c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_4031c4:
    // 0x4031c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4031c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4031c8:
    // 0x4031c8: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x4031c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_4031cc:
    // 0x4031cc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x4031ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4031d0:
    // 0x4031d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x4031d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_4031d4:
    // 0x4031d4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x4031d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_4031d8:
    // 0x4031d8: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x4031d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_4031dc:
    // 0x4031dc: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x4031dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_4031e0:
    // 0x4031e0: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x4031e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_4031e4:
    // 0x4031e4: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x4031e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_4031e8:
    // 0x4031e8: 0xe7a00440  swc1        $f0, 0x440($sp)
    ctx->pc = 0x4031e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_4031ec:
    // 0x4031ec: 0x26107508  addiu       $s0, $s0, 0x7508
    ctx->pc = 0x4031ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29960));
label_4031f0:
    // 0x4031f0: 0xafb20450  sw          $s2, 0x450($sp)
    ctx->pc = 0x4031f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 18));
label_4031f4:
    // 0x4031f4: 0xc0e9fa6  jal         func_3A7E98
label_4031f8:
    if (ctx->pc == 0x4031F8u) {
        ctx->pc = 0x4031F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4031F4u;
        // 0x4031f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4031FCu;
        goto label_4031fc;
    }
    ctx->pc = 0x4031F4u;
    SET_GPR_U32(ctx, 31, 0x4031FCu);
    ctx->pc = 0x4031F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4031F4u;
    // 0x4031f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x4031F4u, 0x4031FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4031FCu;
label_4031fc:
    // 0x4031fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4031fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_403200:
    // 0x403200: 0xc0f15bc  jal         func_3C56F0
label_403204:
    if (ctx->pc == 0x403204u) {
        ctx->pc = 0x403204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403200u;
        // 0x403204: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403208u;
        goto label_403208;
    }
    ctx->pc = 0x403200u;
    SET_GPR_U32(ctx, 31, 0x403208u);
    ctx->pc = 0x403204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403200u;
    // 0x403204: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x403200u, 0x403208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403208u;
label_403208:
    // 0x403208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x403208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40320c:
    // 0x40320c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x40320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_403210:
    // 0x403210: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x403210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_403214:
    // 0x403214: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x403214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_403218:
    // 0x403218: 0x40f809  jalr        $v0
label_40321c:
    if (ctx->pc == 0x40321Cu) {
        ctx->pc = 0x40321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403218u;
        // 0x40321c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403220u;
        goto label_403220;
    }
    ctx->pc = 0x403218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x403220u);
        ctx->pc = 0x40321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403218u;
        // 0x40321c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403218u, 0x403220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403220u;
label_403220:
    // 0x403220: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x403220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_403224:
    // 0x403224: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x403224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_403228:
    // 0x403228: 0xc0ea16a  jal         func_3A85A8
label_40322c:
    if (ctx->pc == 0x40322Cu) {
        ctx->pc = 0x40322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403228u;
        // 0x40322c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403230u;
        goto label_403230;
    }
    ctx->pc = 0x403228u;
    SET_GPR_U32(ctx, 31, 0x403230u);
    ctx->pc = 0x40322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403228u;
    // 0x40322c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x403228u, 0x403230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403230u;
label_403230:
    // 0x403230: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x403230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_403234:
    // 0x403234: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x403234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_403238:
    // 0x403238: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x403238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_40323c:
    // 0x40323c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x40323cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_403240:
    // 0x403240: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x403240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_403244:
    // 0x403244: 0x40f809  jalr        $v0
label_403248:
    if (ctx->pc == 0x403248u) {
        ctx->pc = 0x403248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403244u;
        // 0x403248: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40324Cu;
        goto label_40324c;
    }
    ctx->pc = 0x403244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40324Cu);
        ctx->pc = 0x403248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403244u;
        // 0x403248: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403244u, 0x40324Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40324Cu;
label_40324c:
    // 0x40324c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x40324cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_403250:
    // 0x403250: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x403250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_403254:
    // 0x403254: 0xc0cd4ee  jal         func_3353B8
label_403258:
    if (ctx->pc == 0x403258u) {
        ctx->pc = 0x403258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403254u;
        // 0x403258: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40325Cu;
        goto label_40325c;
    }
    ctx->pc = 0x403254u;
    SET_GPR_U32(ctx, 31, 0x40325Cu);
    ctx->pc = 0x403258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403254u;
    // 0x403258: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x403254u, 0x40325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40325Cu;
label_40325c:
    // 0x40325c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x40325cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_403260:
    // 0x403260: 0x10000003  b           . + 4 + (0x3 << 2)
label_403264:
    if (ctx->pc == 0x403264u) {
        ctx->pc = 0x403264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403260u;
        // 0x403264: 0xae620038  sw          $v0, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403268u;
        goto label_403268;
    }
    ctx->pc = 0x403260u;
    {
        const bool branch_taken_0x403260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403260u;
        // 0x403264: 0xae620038  sw          $v0, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403260) {
            ctx->pc = 0x403270u;
            goto label_403270;
        }
    }
    ctx->pc = 0x403268u;
label_403268:
    // 0x403268: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x403268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_40326c:
    // 0x40326c: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x40326cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
label_403270:
    // 0x403270: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x403270u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_403274:
    // 0x403274: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x403274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_403278:
    // 0x403278: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x403278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40327c:
    // 0x40327c: 0x7e440010  sq          $a0, 0x10($s2)
    ctx->pc = 0x40327cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 4));
label_403280:
    // 0x403280: 0x70041ca9  por         $v1, $zero, $a0
    ctx->pc = 0x403280u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
label_403284:
    // 0x403284: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x403284u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_403288:
    // 0x403288: 0xae65002c  sw          $a1, 0x2C($s3)
    ctx->pc = 0x403288u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 5));
label_40328c:
    // 0x40328c: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x40328cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
label_403290:
    // 0x403290: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x403290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_403294:
    // 0x403294: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x403294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_403298:
    // 0x403298: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x403298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_40329c:
    // 0x40329c: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x40329cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_4032a0:
    // 0x4032a0: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x4032a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_4032a4:
    // 0x4032a4: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x4032a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_4032a8:
    // 0x4032a8: 0x7bb30480  lq          $s3, 0x480($sp)
    ctx->pc = 0x4032a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_4032ac:
    // 0x4032ac: 0x7bb40470  lq          $s4, 0x470($sp)
    ctx->pc = 0x4032acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_4032b0:
    // 0x4032b0: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x4032b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
label_4032b4:
    // 0x4032b4: 0x3e00008  jr          $ra
label_4032b8:
    if (ctx->pc == 0x4032B8u) {
        ctx->pc = 0x4032B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4032B4u;
        // 0x4032b8: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4032BCu;
        goto label_4032bc;
    }
    ctx->pc = 0x4032B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4032B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4032B4u;
        // 0x4032b8: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4032B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4032BCu;
label_4032bc:
    // 0x4032bc: 0x0  nop
    ctx->pc = 0x4032bcu;
    // NOP
    ctx->pc = 0x4032c0u;
}
