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

// Function: sub_001260E8
// Address: 0x1260e8 - 0x126370
void sub_001260E8_0x1260e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001260E8_0x1260e8");
#endif

    switch (ctx->pc) {
        case 0x1260e8u: goto label_1260e8;
        case 0x1260ecu: goto label_1260ec;
        case 0x1260f0u: goto label_1260f0;
        case 0x1260f4u: goto label_1260f4;
        case 0x1260f8u: goto label_1260f8;
        case 0x1260fcu: goto label_1260fc;
        case 0x126100u: goto label_126100;
        case 0x126104u: goto label_126104;
        case 0x126108u: goto label_126108;
        case 0x12610cu: goto label_12610c;
        case 0x126110u: goto label_126110;
        case 0x126114u: goto label_126114;
        case 0x126118u: goto label_126118;
        case 0x12611cu: goto label_12611c;
        case 0x126120u: goto label_126120;
        case 0x126124u: goto label_126124;
        case 0x126128u: goto label_126128;
        case 0x12612cu: goto label_12612c;
        case 0x126130u: goto label_126130;
        case 0x126134u: goto label_126134;
        case 0x126138u: goto label_126138;
        case 0x12613cu: goto label_12613c;
        case 0x126140u: goto label_126140;
        case 0x126144u: goto label_126144;
        case 0x126148u: goto label_126148;
        case 0x12614cu: goto label_12614c;
        case 0x126150u: goto label_126150;
        case 0x126154u: goto label_126154;
        case 0x126158u: goto label_126158;
        case 0x12615cu: goto label_12615c;
        case 0x126160u: goto label_126160;
        case 0x126164u: goto label_126164;
        case 0x126168u: goto label_126168;
        case 0x12616cu: goto label_12616c;
        case 0x126170u: goto label_126170;
        case 0x126174u: goto label_126174;
        case 0x126178u: goto label_126178;
        case 0x12617cu: goto label_12617c;
        case 0x126180u: goto label_126180;
        case 0x126184u: goto label_126184;
        case 0x126188u: goto label_126188;
        case 0x12618cu: goto label_12618c;
        case 0x126190u: goto label_126190;
        case 0x126194u: goto label_126194;
        case 0x126198u: goto label_126198;
        case 0x12619cu: goto label_12619c;
        case 0x1261a0u: goto label_1261a0;
        case 0x1261a4u: goto label_1261a4;
        case 0x1261a8u: goto label_1261a8;
        case 0x1261acu: goto label_1261ac;
        case 0x1261b0u: goto label_1261b0;
        case 0x1261b4u: goto label_1261b4;
        case 0x1261b8u: goto label_1261b8;
        case 0x1261bcu: goto label_1261bc;
        case 0x1261c0u: goto label_1261c0;
        case 0x1261c4u: goto label_1261c4;
        case 0x1261c8u: goto label_1261c8;
        case 0x1261ccu: goto label_1261cc;
        case 0x1261d0u: goto label_1261d0;
        case 0x1261d4u: goto label_1261d4;
        case 0x1261d8u: goto label_1261d8;
        case 0x1261dcu: goto label_1261dc;
        case 0x1261e0u: goto label_1261e0;
        case 0x1261e4u: goto label_1261e4;
        case 0x1261e8u: goto label_1261e8;
        case 0x1261ecu: goto label_1261ec;
        case 0x1261f0u: goto label_1261f0;
        case 0x1261f4u: goto label_1261f4;
        case 0x1261f8u: goto label_1261f8;
        case 0x1261fcu: goto label_1261fc;
        case 0x126200u: goto label_126200;
        case 0x126204u: goto label_126204;
        case 0x126208u: goto label_126208;
        case 0x12620cu: goto label_12620c;
        case 0x126210u: goto label_126210;
        case 0x126214u: goto label_126214;
        case 0x126218u: goto label_126218;
        case 0x12621cu: goto label_12621c;
        case 0x126220u: goto label_126220;
        case 0x126224u: goto label_126224;
        case 0x126228u: goto label_126228;
        case 0x12622cu: goto label_12622c;
        case 0x126230u: goto label_126230;
        case 0x126234u: goto label_126234;
        case 0x126238u: goto label_126238;
        case 0x12623cu: goto label_12623c;
        case 0x126240u: goto label_126240;
        case 0x126244u: goto label_126244;
        case 0x126248u: goto label_126248;
        case 0x12624cu: goto label_12624c;
        case 0x126250u: goto label_126250;
        case 0x126254u: goto label_126254;
        case 0x126258u: goto label_126258;
        case 0x12625cu: goto label_12625c;
        case 0x126260u: goto label_126260;
        case 0x126264u: goto label_126264;
        case 0x126268u: goto label_126268;
        case 0x12626cu: goto label_12626c;
        case 0x126270u: goto label_126270;
        case 0x126274u: goto label_126274;
        case 0x126278u: goto label_126278;
        case 0x12627cu: goto label_12627c;
        case 0x126280u: goto label_126280;
        case 0x126284u: goto label_126284;
        case 0x126288u: goto label_126288;
        case 0x12628cu: goto label_12628c;
        case 0x126290u: goto label_126290;
        case 0x126294u: goto label_126294;
        case 0x126298u: goto label_126298;
        case 0x12629cu: goto label_12629c;
        case 0x1262a0u: goto label_1262a0;
        case 0x1262a4u: goto label_1262a4;
        case 0x1262a8u: goto label_1262a8;
        case 0x1262acu: goto label_1262ac;
        case 0x1262b0u: goto label_1262b0;
        case 0x1262b4u: goto label_1262b4;
        case 0x1262b8u: goto label_1262b8;
        case 0x1262bcu: goto label_1262bc;
        case 0x1262c0u: goto label_1262c0;
        case 0x1262c4u: goto label_1262c4;
        case 0x1262c8u: goto label_1262c8;
        case 0x1262ccu: goto label_1262cc;
        case 0x1262d0u: goto label_1262d0;
        case 0x1262d4u: goto label_1262d4;
        case 0x1262d8u: goto label_1262d8;
        case 0x1262dcu: goto label_1262dc;
        case 0x1262e0u: goto label_1262e0;
        case 0x1262e4u: goto label_1262e4;
        case 0x1262e8u: goto label_1262e8;
        case 0x1262ecu: goto label_1262ec;
        case 0x1262f0u: goto label_1262f0;
        case 0x1262f4u: goto label_1262f4;
        case 0x1262f8u: goto label_1262f8;
        case 0x1262fcu: goto label_1262fc;
        case 0x126300u: goto label_126300;
        case 0x126304u: goto label_126304;
        case 0x126308u: goto label_126308;
        case 0x12630cu: goto label_12630c;
        case 0x126310u: goto label_126310;
        case 0x126314u: goto label_126314;
        case 0x126318u: goto label_126318;
        case 0x12631cu: goto label_12631c;
        case 0x126320u: goto label_126320;
        case 0x126324u: goto label_126324;
        case 0x126328u: goto label_126328;
        case 0x12632cu: goto label_12632c;
        case 0x126330u: goto label_126330;
        case 0x126334u: goto label_126334;
        case 0x126338u: goto label_126338;
        case 0x12633cu: goto label_12633c;
        case 0x126340u: goto label_126340;
        case 0x126344u: goto label_126344;
        case 0x126348u: goto label_126348;
        case 0x12634cu: goto label_12634c;
        case 0x126350u: goto label_126350;
        case 0x126354u: goto label_126354;
        case 0x126358u: goto label_126358;
        case 0x12635cu: goto label_12635c;
        case 0x126360u: goto label_126360;
        case 0x126364u: goto label_126364;
        case 0x126368u: goto label_126368;
        case 0x12636cu: goto label_12636c;
        default: break;
    }

    ctx->pc = 0x1260e8u;

label_1260e8:
    // 0x1260e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1260e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1260ec:
    // 0x1260ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1260ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1260f0:
    // 0x1260f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1260f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1260f4:
    // 0x1260f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1260f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1260f8:
    // 0x1260f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1260f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1260fc:
    // 0x1260fc: 0x92020465  lbu         $v0, 0x465($s0)
    ctx->pc = 0x1260fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1125)));
label_126100:
    // 0x126100: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_126104:
    if (ctx->pc == 0x126104u) {
        ctx->pc = 0x126104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126100u;
        // 0x126104: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126108u;
        goto label_126108;
    }
    ctx->pc = 0x126100u;
    {
        const bool branch_taken_0x126100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126100u;
        // 0x126104: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126100) {
            ctx->pc = 0x126168u;
            goto label_126168;
        }
    }
    ctx->pc = 0x126108u;
label_126108:
    // 0x126108: 0x8e050314  lw          $a1, 0x314($s0)
    ctx->pc = 0x126108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_12610c:
    // 0x12610c: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_126110:
    if (ctx->pc == 0x126110u) {
        ctx->pc = 0x126110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12610Cu;
        // 0x126110: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126114u;
        goto label_126114;
    }
    ctx->pc = 0x12610Cu;
    {
        const bool branch_taken_0x12610c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12610Cu;
        // 0x126110: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12610c) {
            ctx->pc = 0x12616Cu;
            goto label_12616c;
        }
    }
    ctx->pc = 0x126114u;
label_126114:
    // 0x126114: 0x80a201b0  lb          $v0, 0x1B0($a1)
    ctx->pc = 0x126114u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
label_126118:
    // 0x126118: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x126118u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_12611c:
    // 0x12611c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_126120:
    if (ctx->pc == 0x126120u) {
        ctx->pc = 0x126120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12611Cu;
        // 0x126120: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126124u;
        goto label_126124;
    }
    ctx->pc = 0x12611Cu;
    {
        const bool branch_taken_0x12611c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12611Cu;
        // 0x126120: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12611c) {
            ctx->pc = 0x126144u;
            goto label_126144;
        }
    }
    ctx->pc = 0x126124u;
label_126124:
    // 0x126124: 0x8e040320  lw          $a0, 0x320($s0)
    ctx->pc = 0x126124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
label_126128:
    // 0x126128: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x126128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_12612c:
    // 0x12612c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_126130:
    if (ctx->pc == 0x126130u) {
        ctx->pc = 0x126134u;
        goto label_126134;
    }
    ctx->pc = 0x12612Cu;
    {
        const bool branch_taken_0x12612c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12612c) {
            ctx->pc = 0x126144u;
            goto label_126144;
        }
    }
    ctx->pc = 0x126134u;
label_126134:
    // 0x126134: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x126134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_126138:
    // 0x126138: 0xc0e409a  jal         func_390268
label_12613c:
    if (ctx->pc == 0x12613Cu) {
        ctx->pc = 0x12613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126138u;
        // 0x12613c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126140u;
        goto label_126140;
    }
    ctx->pc = 0x126138u;
    SET_GPR_U32(ctx, 31, 0x126140u);
    ctx->pc = 0x12613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126138u;
    // 0x12613c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x126138u, 0x126140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126140u;
label_126140:
    // 0x126140: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126144:
    // 0x126144: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_126148:
    if (ctx->pc == 0x126148u) {
        ctx->pc = 0x126148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126144u;
        // 0x126148: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12614Cu;
        goto label_12614c;
    }
    ctx->pc = 0x126144u;
    {
        const bool branch_taken_0x126144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126144u;
        // 0x126148: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126144) {
            ctx->pc = 0x126168u;
            goto label_126168;
        }
    }
    ctx->pc = 0x12614Cu;
label_12614c:
    // 0x12614c: 0x80a201b0  lb          $v0, 0x1B0($a1)
    ctx->pc = 0x12614cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
label_126150:
    // 0x126150: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x126150u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_126154:
    // 0x126154: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_126158:
    if (ctx->pc == 0x126158u) {
        ctx->pc = 0x126158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126154u;
        // 0x126158: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12615Cu;
        goto label_12615c;
    }
    ctx->pc = 0x126154u;
    {
        const bool branch_taken_0x126154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126154u;
        // 0x126158: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126154) {
            ctx->pc = 0x126168u;
            goto label_126168;
        }
    }
    ctx->pc = 0x12615Cu;
label_12615c:
    // 0x12615c: 0xc049a1e  jal         func_126878
label_126160:
    if (ctx->pc == 0x126160u) {
        ctx->pc = 0x126160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12615Cu;
        // 0x126160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126164u;
        goto label_126164;
    }
    ctx->pc = 0x12615Cu;
    SET_GPR_U32(ctx, 31, 0x126164u);
    ctx->pc = 0x126160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12615Cu;
    // 0x126160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126878u, 0x12615Cu, 0x126164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126164u;
label_126164:
    // 0x126164: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x126164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_126168:
    // 0x126168: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x126168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_12616c:
    // 0x12616c: 0x8c51b198  lw          $s1, -0x4E68($v0)
    ctx->pc = 0x12616cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947224)));
label_126170:
    // 0x126170: 0x8c83b19c  lw          $v1, -0x4E64($a0)
    ctx->pc = 0x126170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947228)));
label_126174:
    // 0x126174: 0x12230018  beq         $s1, $v1, . + 4 + (0x18 << 2)
label_126178:
    if (ctx->pc == 0x126178u) {
        ctx->pc = 0x126178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126174u;
        // 0x126178: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12617Cu;
        goto label_12617c;
    }
    ctx->pc = 0x126174u;
    {
        const bool branch_taken_0x126174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x126178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126174u;
        // 0x126178: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126174) {
            ctx->pc = 0x1261D8u;
            goto label_1261d8;
        }
    }
    ctx->pc = 0x12617Cu;
label_12617c:
    // 0x12617c: 0xc047e78  jal         func_11F9E0
label_126180:
    if (ctx->pc == 0x126180u) {
        ctx->pc = 0x126180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12617Cu;
        // 0x126180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126184u;
        goto label_126184;
    }
    ctx->pc = 0x12617Cu;
    SET_GPR_U32(ctx, 31, 0x126184u);
    ctx->pc = 0x126180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12617Cu;
    // 0x126180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x12617Cu, 0x126184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126184u;
label_126184:
    // 0x126184: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x126184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_126188:
    // 0x126188: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12618c:
    // 0x12618c: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x12618cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_126190:
    // 0x126190: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x126190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_126194:
    // 0x126194: 0xc0f809  jalr        $a2
label_126198:
    if (ctx->pc == 0x126198u) {
        ctx->pc = 0x126198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126194u;
        // 0x126198: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12619Cu;
        goto label_12619c;
    }
    ctx->pc = 0x126194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x12619Cu);
        ctx->pc = 0x126198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126194u;
        // 0x126198: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126194u, 0x12619Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12619Cu;
label_12619c:
    // 0x12619c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12619cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1261a0:
    // 0x1261a0: 0xc047e78  jal         func_11F9E0
label_1261a4:
    if (ctx->pc == 0x1261A4u) {
        ctx->pc = 0x1261A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261A0u;
        // 0x1261a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1261A8u;
        goto label_1261a8;
    }
    ctx->pc = 0x1261A0u;
    SET_GPR_U32(ctx, 31, 0x1261A8u);
    ctx->pc = 0x1261A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1261A0u;
    // 0x1261a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x1261A0u, 0x1261A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1261A8u;
label_1261a8:
    // 0x1261a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1261a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1261ac:
    // 0x1261ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1261acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1261b0:
    // 0x1261b0: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x1261b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_1261b4:
    // 0x1261b4: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x1261b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_1261b8:
    // 0x1261b8: 0xc0f809  jalr        $a2
label_1261bc:
    if (ctx->pc == 0x1261BCu) {
        ctx->pc = 0x1261BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261B8u;
        // 0x1261bc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1261C0u;
        goto label_1261c0;
    }
    ctx->pc = 0x1261B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1261C0u);
        ctx->pc = 0x1261BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261B8u;
        // 0x1261bc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1261B8u, 0x1261C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1261C0u;
label_1261c0:
    // 0x1261c0: 0xc048bb4  jal         func_122ED0
label_1261c4:
    if (ctx->pc == 0x1261C4u) {
        ctx->pc = 0x1261C8u;
        goto label_1261c8;
    }
    ctx->pc = 0x1261C0u;
    SET_GPR_U32(ctx, 31, 0x1261C8u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x1261C0u, 0x1261C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1261C8u;
label_1261c8:
    // 0x1261c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1261c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1261cc:
    // 0x1261cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1261ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1261d0:
    // 0x1261d0: 0xc049da8  jal         func_1276A0
label_1261d4:
    if (ctx->pc == 0x1261D4u) {
        ctx->pc = 0x1261D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261D0u;
        // 0x1261d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1261D8u;
        goto label_1261d8;
    }
    ctx->pc = 0x1261D0u;
    SET_GPR_U32(ctx, 31, 0x1261D8u);
    ctx->pc = 0x1261D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1261D0u;
    // 0x1261d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1276A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1276A0u, 0x1261D0u, 0x1261D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1261D8u;
label_1261d8:
    // 0x1261d8: 0xc0498dc  jal         func_126370
label_1261dc:
    if (ctx->pc == 0x1261DCu) {
        ctx->pc = 0x1261DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261D8u;
        // 0x1261dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1261E0u;
        goto label_1261e0;
    }
    ctx->pc = 0x1261D8u;
    SET_GPR_U32(ctx, 31, 0x1261E0u);
    ctx->pc = 0x1261DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1261D8u;
    // 0x1261dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126370u, 0x1261D8u, 0x1261E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1261E0u;
label_1261e0:
    // 0x1261e0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1261e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1261e4:
    // 0x1261e4: 0xc6010350  lwc1        $f1, 0x350($s0)
    ctx->pc = 0x1261e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1261e8:
    // 0x1261e8: 0xc4408aa0  lwc1        $f0, -0x7560($v0)
    ctx->pc = 0x1261e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1261ec:
    // 0x1261ec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1261ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1261f0:
    // 0x1261f0: 0x0  nop
    ctx->pc = 0x1261f0u;
    // NOP
label_1261f4:
    // 0x1261f4: 0x45010054  bc1t        . + 4 + (0x54 << 2)
label_1261f8:
    if (ctx->pc == 0x1261F8u) {
        ctx->pc = 0x1261F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261F4u;
        // 0x1261f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1261FCu;
        goto label_1261fc;
    }
    ctx->pc = 0x1261F4u;
    {
        const bool branch_taken_0x1261f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1261F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261F4u;
        // 0x1261f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1261f4) {
            ctx->pc = 0x126348u;
            goto label_126348;
        }
    }
    ctx->pc = 0x1261FCu;
label_1261fc:
    // 0x1261fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1261fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_126200:
    // 0x126200: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x126200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_126204:
    // 0x126204: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x126204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_126208:
    // 0x126208: 0x40f809  jalr        $v0
label_12620c:
    if (ctx->pc == 0x12620Cu) {
        ctx->pc = 0x12620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126208u;
        // 0x12620c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126210u;
        goto label_126210;
    }
    ctx->pc = 0x126208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126210u);
        ctx->pc = 0x12620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126208u;
        // 0x12620c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126208u, 0x126210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126210u;
label_126210:
    // 0x126210: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126214:
    // 0x126214: 0xc0cd8ec  jal         func_3363B0
label_126218:
    if (ctx->pc == 0x126218u) {
        ctx->pc = 0x126218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126214u;
        // 0x126218: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12621Cu;
        goto label_12621c;
    }
    ctx->pc = 0x126214u;
    SET_GPR_U32(ctx, 31, 0x12621Cu);
    ctx->pc = 0x126218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126214u;
    // 0x126218: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x126214u, 0x12621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12621Cu;
label_12621c:
    // 0x12621c: 0xc60c0350  lwc1        $f12, 0x350($s0)
    ctx->pc = 0x12621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_126220:
    // 0x126220: 0xc0cd790  jal         func_335E40
label_126224:
    if (ctx->pc == 0x126224u) {
        ctx->pc = 0x126224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126220u;
        // 0x126224: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126228u;
        goto label_126228;
    }
    ctx->pc = 0x126220u;
    SET_GPR_U32(ctx, 31, 0x126228u);
    ctx->pc = 0x126224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126220u;
    // 0x126224: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x126220u, 0x126228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126228u;
label_126228:
    // 0x126228: 0x3c013ae4  lui         $at, 0x3AE4
    ctx->pc = 0x126228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15076 << 16));
label_12622c:
    // 0x12622c: 0x3421c389  ori         $at, $at, 0xC389
    ctx->pc = 0x12622cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50057);
label_126230:
    // 0x126230: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x126230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_126234:
    // 0x126234: 0xc12e29c  jal         func_4B8A70
label_126238:
    if (ctx->pc == 0x126238u) {
        ctx->pc = 0x12623Cu;
        goto label_12623c;
    }
    ctx->pc = 0x126234u;
    SET_GPR_U32(ctx, 31, 0x12623Cu);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x126234u, 0x12623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12623Cu;
label_12623c:
    // 0x12623c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x12623cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_126240:
    // 0x126240: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x126240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126244:
    // 0x126244: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x126244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_126248:
    // 0x126248: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x126248u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12624c:
    // 0x12624c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x12624cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126250:
    // 0x126250: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x126250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_126254:
    // 0x126254: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x126254u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_126258:
    // 0x126258: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x126258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12625c:
    // 0x12625c: 0x0  nop
    ctx->pc = 0x12625cu;
    // NOP
label_126260:
    // 0x126260: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126264:
    // 0x126264: 0x0  nop
    ctx->pc = 0x126264u;
    // NOP
label_126268:
    // 0x126268: 0x45000036  bc1f        . + 4 + (0x36 << 2)
label_12626c:
    if (ctx->pc == 0x12626Cu) {
        ctx->pc = 0x12626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126268u;
        // 0x12626c: 0xc6208aa0  lwc1        $f0, -0x7560($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126270u;
        goto label_126270;
    }
    ctx->pc = 0x126268u;
    {
        const bool branch_taken_0x126268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126268u;
        // 0x12626c: 0xc6208aa0  lwc1        $f0, -0x7560($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126268) {
            ctx->pc = 0x126344u;
            goto label_126344;
        }
    }
    ctx->pc = 0x126270u;
label_126270:
    // 0x126270: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_126274:
    // 0x126274: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x126274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_126278:
    // 0x126278: 0x0  nop
    ctx->pc = 0x126278u;
    // NOP
label_12627c:
    // 0x12627c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x12627cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126280:
    // 0x126280: 0x0  nop
    ctx->pc = 0x126280u;
    // NOP
label_126284:
    // 0x126284: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_126288:
    if (ctx->pc == 0x126288u) {
        ctx->pc = 0x12628Cu;
        goto label_12628c;
    }
    ctx->pc = 0x126284u;
    {
        const bool branch_taken_0x126284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126284) {
            ctx->pc = 0x126298u;
            goto label_126298;
        }
    }
    ctx->pc = 0x12628Cu;
label_12628c:
    // 0x12628c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12628cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_126290:
    // 0x126290: 0x1000001a  b           . + 4 + (0x1A << 2)
label_126294:
    if (ctx->pc == 0x126294u) {
        ctx->pc = 0x126294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126290u;
        // 0x126294: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126298u;
        goto label_126298;
    }
    ctx->pc = 0x126290u;
    {
        const bool branch_taken_0x126290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126290u;
        // 0x126294: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126290) {
            ctx->pc = 0x1262FCu;
            goto label_1262fc;
        }
    }
    ctx->pc = 0x126298u;
label_126298:
    // 0x126298: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x126298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12629c:
    // 0x12629c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12629cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1262a0:
    // 0x1262a0: 0x0  nop
    ctx->pc = 0x1262a0u;
    // NOP
label_1262a4:
    // 0x1262a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1262a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1262a8:
    // 0x1262a8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1262a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1262ac:
    // 0x1262ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1262acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1262b0:
    // 0x1262b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1262b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1262b4:
    // 0x1262b4: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
label_1262b8:
    if (ctx->pc == 0x1262B8u) {
        ctx->pc = 0x1262B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262B4u;
        // 0x1262b8: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1262BCu;
        goto label_1262bc;
    }
    ctx->pc = 0x1262B4u;
    {
        const bool branch_taken_0x1262b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1262b4) {
            ctx->pc = 0x1262B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1262B4u;
            // 0x1262b8: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1262FCu;
            goto label_1262fc;
        }
    }
    ctx->pc = 0x1262BCu;
label_1262bc:
    // 0x1262bc: 0x46010b02  mul.s       $f12, $f1, $f1
    ctx->pc = 0x1262bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1262c0:
    // 0x1262c0: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x1262c0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_1262c4:
    // 0x1262c4: 0x0  nop
    ctx->pc = 0x1262c4u;
    // NOP
label_1262c8:
    // 0x1262c8: 0x0  nop
    ctx->pc = 0x1262c8u;
    // NOP
label_1262cc:
    // 0x1262cc: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1262ccu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_1262d0:
    // 0x1262d0: 0x0  nop
    ctx->pc = 0x1262d0u;
    // NOP
label_1262d4:
    // 0x1262d4: 0x0  nop
    ctx->pc = 0x1262d4u;
    // NOP
label_1262d8:
    // 0x1262d8: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x1262d8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
label_1262dc:
    // 0x1262dc: 0xc0cd5a8  jal         func_3356A0
label_1262e0:
    if (ctx->pc == 0x1262E0u) {
        ctx->pc = 0x1262E4u;
        goto label_1262e4;
    }
    ctx->pc = 0x1262DCu;
    SET_GPR_U32(ctx, 31, 0x1262E4u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x1262DCu, 0x1262E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1262E4u;
label_1262e4:
    // 0x1262e4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1262e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1262e8:
    // 0x1262e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1262e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1262ec:
    // 0x1262ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1262ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1262f0:
    // 0x1262f0: 0x0  nop
    ctx->pc = 0x1262f0u;
    // NOP
label_1262f4:
    // 0x1262f4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1262f4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1262f8:
    // 0x1262f8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1262f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1262fc:
    // 0x1262fc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1262fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_126300:
    // 0x126300: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x126300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_126304:
    // 0x126304: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x126304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_126308:
    // 0x126308: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x126308u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_12630c:
    // 0x12630c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x12630cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_126310:
    // 0x126310: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x126310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_126314:
    // 0x126314: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x126314u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_126318:
    // 0x126318: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x126318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12631c:
    // 0x12631c: 0x0  nop
    ctx->pc = 0x12631cu;
    // NOP
label_126320:
    // 0x126320: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_126324:
    if (ctx->pc == 0x126324u) {
        ctx->pc = 0x126324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126320u;
        // 0x126324: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x126328u;
        goto label_126328;
    }
    ctx->pc = 0x126320u;
    {
        const bool branch_taken_0x126320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126320) {
            ctx->pc = 0x126324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126320u;
            // 0x126324: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x126328u;
            goto label_126328;
        }
    }
    ctx->pc = 0x126328u;
label_126328:
    // 0x126328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12632c:
    // 0x12632c: 0x26050260  addiu       $a1, $s0, 0x260
    ctx->pc = 0x12632cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
label_126330:
    // 0x126330: 0xc04b5a2  jal         func_12D688
label_126334:
    if (ctx->pc == 0x126334u) {
        ctx->pc = 0x126334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126330u;
        // 0x126334: 0x26060180  addiu       $a2, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126338u;
        goto label_126338;
    }
    ctx->pc = 0x126330u;
    SET_GPR_U32(ctx, 31, 0x126338u);
    ctx->pc = 0x126334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126330u;
    // 0x126334: 0x26060180  addiu       $a2, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D688u, 0x126330u, 0x126338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126338u;
label_126338:
    // 0x126338: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x126338u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
label_12633c:
    // 0x12633c: 0x7e020250  sq          $v0, 0x250($s0)
    ctx->pc = 0x12633cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 592), GPR_VEC(ctx, 2));
label_126340:
    // 0x126340: 0xc6208aa0  lwc1        $f0, -0x7560($s1)
    ctx->pc = 0x126340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_126344:
    // 0x126344: 0xe6000350  swc1        $f0, 0x350($s0)
    ctx->pc = 0x126344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 848), bits); }
label_126348:
    // 0x126348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12634c:
    // 0x12634c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12634cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126350:
    // 0x126350: 0xc04961c  jal         func_125870
label_126354:
    if (ctx->pc == 0x126354u) {
        ctx->pc = 0x126354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126350u;
        // 0x126354: 0xa2020473  sb          $v0, 0x473($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1139), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126358u;
        goto label_126358;
    }
    ctx->pc = 0x126350u;
    SET_GPR_U32(ctx, 31, 0x126358u);
    ctx->pc = 0x126354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126350u;
    // 0x126354: 0xa2020473  sb          $v0, 0x473($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1139), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125870u, 0x126350u, 0x126358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126358u;
label_126358:
    // 0x126358: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x126358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12635c:
    // 0x12635c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x12635cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_126360:
    // 0x126360: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x126360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_126364:
    // 0x126364: 0x3e00008  jr          $ra
label_126368:
    if (ctx->pc == 0x126368u) {
        ctx->pc = 0x126368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126364u;
        // 0x126368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12636Cu;
        goto label_12636c;
    }
    ctx->pc = 0x126364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126364u;
        // 0x126368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12636Cu;
label_12636c:
    // 0x12636c: 0x0  nop
    ctx->pc = 0x12636cu;
    // NOP
    ctx->pc = 0x126370u;
}
