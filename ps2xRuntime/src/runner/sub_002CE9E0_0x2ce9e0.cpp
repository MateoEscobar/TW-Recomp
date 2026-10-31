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

// Function: sub_002CE9E0
// Address: 0x2ce9e0 - 0x2ced60
void sub_002CE9E0_0x2ce9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE9E0_0x2ce9e0");
#endif

    switch (ctx->pc) {
        case 0x2ce9e0u: goto label_2ce9e0;
        case 0x2ce9e4u: goto label_2ce9e4;
        case 0x2ce9e8u: goto label_2ce9e8;
        case 0x2ce9ecu: goto label_2ce9ec;
        case 0x2ce9f0u: goto label_2ce9f0;
        case 0x2ce9f4u: goto label_2ce9f4;
        case 0x2ce9f8u: goto label_2ce9f8;
        case 0x2ce9fcu: goto label_2ce9fc;
        case 0x2cea00u: goto label_2cea00;
        case 0x2cea04u: goto label_2cea04;
        case 0x2cea08u: goto label_2cea08;
        case 0x2cea0cu: goto label_2cea0c;
        case 0x2cea10u: goto label_2cea10;
        case 0x2cea14u: goto label_2cea14;
        case 0x2cea18u: goto label_2cea18;
        case 0x2cea1cu: goto label_2cea1c;
        case 0x2cea20u: goto label_2cea20;
        case 0x2cea24u: goto label_2cea24;
        case 0x2cea28u: goto label_2cea28;
        case 0x2cea2cu: goto label_2cea2c;
        case 0x2cea30u: goto label_2cea30;
        case 0x2cea34u: goto label_2cea34;
        case 0x2cea38u: goto label_2cea38;
        case 0x2cea3cu: goto label_2cea3c;
        case 0x2cea40u: goto label_2cea40;
        case 0x2cea44u: goto label_2cea44;
        case 0x2cea48u: goto label_2cea48;
        case 0x2cea4cu: goto label_2cea4c;
        case 0x2cea50u: goto label_2cea50;
        case 0x2cea54u: goto label_2cea54;
        case 0x2cea58u: goto label_2cea58;
        case 0x2cea5cu: goto label_2cea5c;
        case 0x2cea60u: goto label_2cea60;
        case 0x2cea64u: goto label_2cea64;
        case 0x2cea68u: goto label_2cea68;
        case 0x2cea6cu: goto label_2cea6c;
        case 0x2cea70u: goto label_2cea70;
        case 0x2cea74u: goto label_2cea74;
        case 0x2cea78u: goto label_2cea78;
        case 0x2cea7cu: goto label_2cea7c;
        case 0x2cea80u: goto label_2cea80;
        case 0x2cea84u: goto label_2cea84;
        case 0x2cea88u: goto label_2cea88;
        case 0x2cea8cu: goto label_2cea8c;
        case 0x2cea90u: goto label_2cea90;
        case 0x2cea94u: goto label_2cea94;
        case 0x2cea98u: goto label_2cea98;
        case 0x2cea9cu: goto label_2cea9c;
        case 0x2ceaa0u: goto label_2ceaa0;
        case 0x2ceaa4u: goto label_2ceaa4;
        case 0x2ceaa8u: goto label_2ceaa8;
        case 0x2ceaacu: goto label_2ceaac;
        case 0x2ceab0u: goto label_2ceab0;
        case 0x2ceab4u: goto label_2ceab4;
        case 0x2ceab8u: goto label_2ceab8;
        case 0x2ceabcu: goto label_2ceabc;
        case 0x2ceac0u: goto label_2ceac0;
        case 0x2ceac4u: goto label_2ceac4;
        case 0x2ceac8u: goto label_2ceac8;
        case 0x2ceaccu: goto label_2ceacc;
        case 0x2cead0u: goto label_2cead0;
        case 0x2cead4u: goto label_2cead4;
        case 0x2cead8u: goto label_2cead8;
        case 0x2ceadcu: goto label_2ceadc;
        case 0x2ceae0u: goto label_2ceae0;
        case 0x2ceae4u: goto label_2ceae4;
        case 0x2ceae8u: goto label_2ceae8;
        case 0x2ceaecu: goto label_2ceaec;
        case 0x2ceaf0u: goto label_2ceaf0;
        case 0x2ceaf4u: goto label_2ceaf4;
        case 0x2ceaf8u: goto label_2ceaf8;
        case 0x2ceafcu: goto label_2ceafc;
        case 0x2ceb00u: goto label_2ceb00;
        case 0x2ceb04u: goto label_2ceb04;
        case 0x2ceb08u: goto label_2ceb08;
        case 0x2ceb0cu: goto label_2ceb0c;
        case 0x2ceb10u: goto label_2ceb10;
        case 0x2ceb14u: goto label_2ceb14;
        case 0x2ceb18u: goto label_2ceb18;
        case 0x2ceb1cu: goto label_2ceb1c;
        case 0x2ceb20u: goto label_2ceb20;
        case 0x2ceb24u: goto label_2ceb24;
        case 0x2ceb28u: goto label_2ceb28;
        case 0x2ceb2cu: goto label_2ceb2c;
        case 0x2ceb30u: goto label_2ceb30;
        case 0x2ceb34u: goto label_2ceb34;
        case 0x2ceb38u: goto label_2ceb38;
        case 0x2ceb3cu: goto label_2ceb3c;
        case 0x2ceb40u: goto label_2ceb40;
        case 0x2ceb44u: goto label_2ceb44;
        case 0x2ceb48u: goto label_2ceb48;
        case 0x2ceb4cu: goto label_2ceb4c;
        case 0x2ceb50u: goto label_2ceb50;
        case 0x2ceb54u: goto label_2ceb54;
        case 0x2ceb58u: goto label_2ceb58;
        case 0x2ceb5cu: goto label_2ceb5c;
        case 0x2ceb60u: goto label_2ceb60;
        case 0x2ceb64u: goto label_2ceb64;
        case 0x2ceb68u: goto label_2ceb68;
        case 0x2ceb6cu: goto label_2ceb6c;
        case 0x2ceb70u: goto label_2ceb70;
        case 0x2ceb74u: goto label_2ceb74;
        case 0x2ceb78u: goto label_2ceb78;
        case 0x2ceb7cu: goto label_2ceb7c;
        case 0x2ceb80u: goto label_2ceb80;
        case 0x2ceb84u: goto label_2ceb84;
        case 0x2ceb88u: goto label_2ceb88;
        case 0x2ceb8cu: goto label_2ceb8c;
        case 0x2ceb90u: goto label_2ceb90;
        case 0x2ceb94u: goto label_2ceb94;
        case 0x2ceb98u: goto label_2ceb98;
        case 0x2ceb9cu: goto label_2ceb9c;
        case 0x2ceba0u: goto label_2ceba0;
        case 0x2ceba4u: goto label_2ceba4;
        case 0x2ceba8u: goto label_2ceba8;
        case 0x2cebacu: goto label_2cebac;
        case 0x2cebb0u: goto label_2cebb0;
        case 0x2cebb4u: goto label_2cebb4;
        case 0x2cebb8u: goto label_2cebb8;
        case 0x2cebbcu: goto label_2cebbc;
        case 0x2cebc0u: goto label_2cebc0;
        case 0x2cebc4u: goto label_2cebc4;
        case 0x2cebc8u: goto label_2cebc8;
        case 0x2cebccu: goto label_2cebcc;
        case 0x2cebd0u: goto label_2cebd0;
        case 0x2cebd4u: goto label_2cebd4;
        case 0x2cebd8u: goto label_2cebd8;
        case 0x2cebdcu: goto label_2cebdc;
        case 0x2cebe0u: goto label_2cebe0;
        case 0x2cebe4u: goto label_2cebe4;
        case 0x2cebe8u: goto label_2cebe8;
        case 0x2cebecu: goto label_2cebec;
        case 0x2cebf0u: goto label_2cebf0;
        case 0x2cebf4u: goto label_2cebf4;
        case 0x2cebf8u: goto label_2cebf8;
        case 0x2cebfcu: goto label_2cebfc;
        case 0x2cec00u: goto label_2cec00;
        case 0x2cec04u: goto label_2cec04;
        case 0x2cec08u: goto label_2cec08;
        case 0x2cec0cu: goto label_2cec0c;
        case 0x2cec10u: goto label_2cec10;
        case 0x2cec14u: goto label_2cec14;
        case 0x2cec18u: goto label_2cec18;
        case 0x2cec1cu: goto label_2cec1c;
        case 0x2cec20u: goto label_2cec20;
        case 0x2cec24u: goto label_2cec24;
        case 0x2cec28u: goto label_2cec28;
        case 0x2cec2cu: goto label_2cec2c;
        case 0x2cec30u: goto label_2cec30;
        case 0x2cec34u: goto label_2cec34;
        case 0x2cec38u: goto label_2cec38;
        case 0x2cec3cu: goto label_2cec3c;
        case 0x2cec40u: goto label_2cec40;
        case 0x2cec44u: goto label_2cec44;
        case 0x2cec48u: goto label_2cec48;
        case 0x2cec4cu: goto label_2cec4c;
        case 0x2cec50u: goto label_2cec50;
        case 0x2cec54u: goto label_2cec54;
        case 0x2cec58u: goto label_2cec58;
        case 0x2cec5cu: goto label_2cec5c;
        case 0x2cec60u: goto label_2cec60;
        case 0x2cec64u: goto label_2cec64;
        case 0x2cec68u: goto label_2cec68;
        case 0x2cec6cu: goto label_2cec6c;
        case 0x2cec70u: goto label_2cec70;
        case 0x2cec74u: goto label_2cec74;
        case 0x2cec78u: goto label_2cec78;
        case 0x2cec7cu: goto label_2cec7c;
        case 0x2cec80u: goto label_2cec80;
        case 0x2cec84u: goto label_2cec84;
        case 0x2cec88u: goto label_2cec88;
        case 0x2cec8cu: goto label_2cec8c;
        case 0x2cec90u: goto label_2cec90;
        case 0x2cec94u: goto label_2cec94;
        case 0x2cec98u: goto label_2cec98;
        case 0x2cec9cu: goto label_2cec9c;
        case 0x2ceca0u: goto label_2ceca0;
        case 0x2ceca4u: goto label_2ceca4;
        case 0x2ceca8u: goto label_2ceca8;
        case 0x2cecacu: goto label_2cecac;
        case 0x2cecb0u: goto label_2cecb0;
        case 0x2cecb4u: goto label_2cecb4;
        case 0x2cecb8u: goto label_2cecb8;
        case 0x2cecbcu: goto label_2cecbc;
        case 0x2cecc0u: goto label_2cecc0;
        case 0x2cecc4u: goto label_2cecc4;
        case 0x2cecc8u: goto label_2cecc8;
        case 0x2cecccu: goto label_2ceccc;
        case 0x2cecd0u: goto label_2cecd0;
        case 0x2cecd4u: goto label_2cecd4;
        case 0x2cecd8u: goto label_2cecd8;
        case 0x2cecdcu: goto label_2cecdc;
        case 0x2cece0u: goto label_2cece0;
        case 0x2cece4u: goto label_2cece4;
        case 0x2cece8u: goto label_2cece8;
        case 0x2cececu: goto label_2cecec;
        case 0x2cecf0u: goto label_2cecf0;
        case 0x2cecf4u: goto label_2cecf4;
        case 0x2cecf8u: goto label_2cecf8;
        case 0x2cecfcu: goto label_2cecfc;
        case 0x2ced00u: goto label_2ced00;
        case 0x2ced04u: goto label_2ced04;
        case 0x2ced08u: goto label_2ced08;
        case 0x2ced0cu: goto label_2ced0c;
        case 0x2ced10u: goto label_2ced10;
        case 0x2ced14u: goto label_2ced14;
        case 0x2ced18u: goto label_2ced18;
        case 0x2ced1cu: goto label_2ced1c;
        case 0x2ced20u: goto label_2ced20;
        case 0x2ced24u: goto label_2ced24;
        case 0x2ced28u: goto label_2ced28;
        case 0x2ced2cu: goto label_2ced2c;
        case 0x2ced30u: goto label_2ced30;
        case 0x2ced34u: goto label_2ced34;
        case 0x2ced38u: goto label_2ced38;
        case 0x2ced3cu: goto label_2ced3c;
        case 0x2ced40u: goto label_2ced40;
        case 0x2ced44u: goto label_2ced44;
        case 0x2ced48u: goto label_2ced48;
        case 0x2ced4cu: goto label_2ced4c;
        case 0x2ced50u: goto label_2ced50;
        case 0x2ced54u: goto label_2ced54;
        case 0x2ced58u: goto label_2ced58;
        case 0x2ced5cu: goto label_2ced5c;
        default: break;
    }

    ctx->pc = 0x2ce9e0u;

label_2ce9e0:
    // 0x2ce9e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2ce9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2ce9e4:
    // 0x2ce9e4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2ce9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2ce9e8:
    // 0x2ce9e8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2ce9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2ce9ec:
    // 0x2ce9ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ce9ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ce9f0:
    // 0x2ce9f0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2ce9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2ce9f4:
    // 0x2ce9f4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2ce9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2ce9f8:
    // 0x2ce9f8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2ce9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2ce9fc:
    // 0x2ce9fc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2ce9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2cea00:
    // 0x2cea00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2cea00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2cea04:
    // 0x2cea04: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2cea04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_2cea08:
    // 0x2cea08: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2cea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_2cea0c:
    // 0x2cea0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2cea10:
    // 0x2cea10: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2cea10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2cea14:
    // 0x2cea14: 0x92820049  lbu         $v0, 0x49($s4)
    ctx->pc = 0x2cea14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 73)));
label_2cea18:
    // 0x2cea18: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
label_2cea1c:
    if (ctx->pc == 0x2CEA1Cu) {
        ctx->pc = 0x2CEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA18u;
        // 0x2cea1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEA20u;
        goto label_2cea20;
    }
    ctx->pc = 0x2CEA18u;
    {
        const bool branch_taken_0x2cea18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA18u;
        // 0x2cea1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea18) {
            ctx->pc = 0x2CED2Cu;
            goto label_2ced2c;
        }
    }
    ctx->pc = 0x2CEA20u;
label_2cea20:
    // 0x2cea20: 0x8e850038  lw          $a1, 0x38($s4)
    ctx->pc = 0x2cea20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_2cea24:
    // 0x2cea24: 0x10a000c1  beqz        $a1, . + 4 + (0xC1 << 2)
label_2cea28:
    if (ctx->pc == 0x2CEA28u) {
        ctx->pc = 0x2CEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA24u;
        // 0x2cea28: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEA2Cu;
        goto label_2cea2c;
    }
    ctx->pc = 0x2CEA24u;
    {
        const bool branch_taken_0x2cea24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA24u;
        // 0x2cea28: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea24) {
            ctx->pc = 0x2CED2Cu;
            goto label_2ced2c;
        }
    }
    ctx->pc = 0x2CEA2Cu;
label_2cea2c:
    // 0x2cea2c: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2cea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2cea30:
    // 0x2cea30: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2cea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2cea34:
    // 0x2cea34: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2cea34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cea38:
    // 0x2cea38: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
label_2cea3c:
    if (ctx->pc == 0x2CEA3Cu) {
        ctx->pc = 0x2CEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA38u;
        // 0x2cea3c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEA40u;
        goto label_2cea40;
    }
    ctx->pc = 0x2CEA38u;
    {
        const bool branch_taken_0x2cea38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA38u;
        // 0x2cea3c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea38) {
            ctx->pc = 0x2CED28u;
            goto label_2ced28;
        }
    }
    ctx->pc = 0x2CEA40u;
label_2cea40:
    // 0x2cea40: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2cea40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cea44:
    // 0x2cea44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cea48:
    // 0x2cea48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2cea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2cea4c:
    // 0x2cea4c: 0x144300b7  bne         $v0, $v1, . + 4 + (0xB7 << 2)
label_2cea50:
    if (ctx->pc == 0x2CEA50u) {
        ctx->pc = 0x2CEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA4Cu;
        // 0x2cea50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEA54u;
        goto label_2cea54;
    }
    ctx->pc = 0x2CEA4Cu;
    {
        const bool branch_taken_0x2cea4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA4Cu;
        // 0x2cea50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea4c) {
            ctx->pc = 0x2CED2Cu;
            goto label_2ced2c;
        }
    }
    ctx->pc = 0x2CEA54u;
label_2cea54:
    // 0x2cea54: 0x8c90020c  lw          $s0, 0x20C($a0)
    ctx->pc = 0x2cea54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_2cea58:
    // 0x2cea58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cea58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cea5c:
    // 0x2cea5c: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2cea5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cea60:
    // 0x2cea60: 0xc059856  jal         func_166158
label_2cea64:
    if (ctx->pc == 0x2CEA64u) {
        ctx->pc = 0x2CEA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA60u;
        // 0x2cea64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEA68u;
        goto label_2cea68;
    }
    ctx->pc = 0x2CEA60u;
    SET_GPR_U32(ctx, 31, 0x2CEA68u);
    ctx->pc = 0x2CEA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA60u;
    // 0x2cea64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x2CEA60u, 0x2CEA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA68u;
label_2cea68:
    // 0x2cea68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cea68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cea6c:
    // 0x2cea6c: 0x921300d7  lbu         $s3, 0xD7($s0)
    ctx->pc = 0x2cea6cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 215)));
label_2cea70:
    // 0x2cea70: 0xc05959e  jal         func_165678
label_2cea74:
    if (ctx->pc == 0x2CEA74u) {
        ctx->pc = 0x2CEA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA70u;
        // 0x2cea74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEA78u;
        goto label_2cea78;
    }
    ctx->pc = 0x2CEA70u;
    SET_GPR_U32(ctx, 31, 0x2CEA78u);
    ctx->pc = 0x2CEA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA70u;
    // 0x2cea74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2CEA70u, 0x2CEA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA78u;
label_2cea78:
    // 0x2cea78: 0x56420008  bnel        $s2, $v0, . + 4 + (0x8 << 2)
label_2cea7c:
    if (ctx->pc == 0x2CEA7Cu) {
        ctx->pc = 0x2CEA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA78u;
        // 0x2cea7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEA80u;
        goto label_2cea80;
    }
    ctx->pc = 0x2CEA78u;
    {
        const bool branch_taken_0x2cea78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cea78) {
            ctx->pc = 0x2CEA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEA78u;
            // 0x2cea7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEA9Cu;
            goto label_2cea9c;
        }
    }
    ctx->pc = 0x2CEA80u;
label_2cea80:
    // 0x2cea80: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2cea80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2cea84:
    // 0x2cea84: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2cea88:
    if (ctx->pc == 0x2CEA88u) {
        ctx->pc = 0x2CEA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA84u;
        // 0x2cea88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEA8Cu;
        goto label_2cea8c;
    }
    ctx->pc = 0x2CEA84u;
    {
        const bool branch_taken_0x2cea84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cea84) {
            ctx->pc = 0x2CEA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEA84u;
            // 0x2cea88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEA9Cu;
            goto label_2cea9c;
        }
    }
    ctx->pc = 0x2CEA8Cu;
label_2cea8c:
    // 0x2cea8c: 0x2e620064  sltiu       $v0, $s3, 0x64
    ctx->pc = 0x2cea8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_2cea90:
    // 0x2cea90: 0x144000a6  bnez        $v0, . + 4 + (0xA6 << 2)
label_2cea94:
    if (ctx->pc == 0x2CEA94u) {
        ctx->pc = 0x2CEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA90u;
        // 0x2cea94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEA98u;
        goto label_2cea98;
    }
    ctx->pc = 0x2CEA90u;
    {
        const bool branch_taken_0x2cea90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA90u;
        // 0x2cea94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea90) {
            ctx->pc = 0x2CED2Cu;
            goto label_2ced2c;
        }
    }
    ctx->pc = 0x2CEA98u;
label_2cea98:
    // 0x2cea98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cea98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cea9c:
    // 0x2cea9c: 0xc059552  jal         func_165548
label_2ceaa0:
    if (ctx->pc == 0x2CEAA0u) {
        ctx->pc = 0x2CEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA9Cu;
        // 0x2ceaa0: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEAA4u;
        goto label_2ceaa4;
    }
    ctx->pc = 0x2CEA9Cu;
    SET_GPR_U32(ctx, 31, 0x2CEAA4u);
    ctx->pc = 0x2CEAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA9Cu;
    // 0x2ceaa0: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165548u, 0x2CEA9Cu, 0x2CEAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAA4u;
label_2ceaa4:
    // 0x2ceaa4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ceaa8:
    if (ctx->pc == 0x2CEAA8u) {
        ctx->pc = 0x2CEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAA4u;
        // 0x2ceaa8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEAACu;
        goto label_2ceaac;
    }
    ctx->pc = 0x2CEAA4u;
    {
        const bool branch_taken_0x2ceaa4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAA4u;
        // 0x2ceaa8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceaa4) {
            ctx->pc = 0x2CEAC0u;
            goto label_2ceac0;
        }
    }
    ctx->pc = 0x2CEAACu;
label_2ceaac:
    // 0x2ceaac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2ceaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2ceab0:
    // 0x2ceab0: 0x0  nop
    ctx->pc = 0x2ceab0u;
    // NOP
label_2ceab4:
    // 0x2ceab4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2ceab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_2ceab8:
    // 0x2ceab8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2ceabc:
    if (ctx->pc == 0x2CEABCu) {
        ctx->pc = 0x2CEAC0u;
        goto label_2ceac0;
    }
    ctx->pc = 0x2CEAB8u;
    {
        const bool branch_taken_0x2ceab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceab8) {
            ctx->pc = 0x2CEAD8u;
            goto label_2cead8;
        }
    }
    ctx->pc = 0x2CEAC0u;
label_2ceac0:
    // 0x2ceac0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ceac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ceac4:
    // 0x2ceac4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ceac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ceac8:
    // 0x2ceac8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2ceac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2ceacc:
    // 0x2ceacc: 0x0  nop
    ctx->pc = 0x2ceaccu;
    // NOP
label_2cead0:
    // 0x2cead0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2cead0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_2cead4:
    // 0x2cead4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2cead4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2cead8:
    // 0x2cead8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2cead8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ceadc:
    // 0x2ceadc: 0x0  nop
    ctx->pc = 0x2ceadcu;
    // NOP
label_2ceae0:
    // 0x2ceae0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ceae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ceae4:
    // 0x2ceae4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2ceae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2ceae8:
    // 0x2ceae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ceae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ceaec:
    // 0x2ceaec: 0x44931000  mtc1        $s3, $f2
    ctx->pc = 0x2ceaecu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ceaf0:
    // 0x2ceaf0: 0x0  nop
    ctx->pc = 0x2ceaf0u;
    // NOP
label_2ceaf4:
    // 0x2ceaf4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ceaf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2ceaf8:
    // 0x2ceaf8: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x2ceaf8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_2ceafc:
    // 0x2ceafc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ceafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2ceb00:
    // 0x2ceb00: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ceb00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ceb04:
    // 0x2ceb04: 0x0  nop
    ctx->pc = 0x2ceb04u;
    // NOP
label_2ceb08:
    // 0x2ceb08: 0x45010088  bc1t        . + 4 + (0x88 << 2)
label_2ceb0c:
    if (ctx->pc == 0x2CEB0Cu) {
        ctx->pc = 0x2CEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB08u;
        // 0x2ceb0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEB10u;
        goto label_2ceb10;
    }
    ctx->pc = 0x2CEB08u;
    {
        const bool branch_taken_0x2ceb08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB08u;
        // 0x2ceb0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb08) {
            ctx->pc = 0x2CED2Cu;
            goto label_2ced2c;
        }
    }
    ctx->pc = 0x2CEB10u;
label_2ceb10:
    // 0x2ceb10: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2ceb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2ceb14:
    // 0x2ceb14: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2ceb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ceb18:
    // 0x2ceb18: 0x24764b00  addiu       $s6, $v1, 0x4B00
    ctx->pc = 0x2ceb18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2ceb1c:
    // 0x2ceb1c: 0x3c015d5e  lui         $at, 0x5D5E
    ctx->pc = 0x2ceb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23902 << 16));
label_2ceb20:
    // 0x2ceb20: 0x34210b6b  ori         $at, $at, 0xB6B
    ctx->pc = 0x2ceb20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2923);
label_2ceb24:
    // 0x2ceb24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ceb24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ceb28:
    // 0x2ceb28: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2ceb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2ceb2c:
    // 0x2ceb2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ceb2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb30:
    // 0x2ceb30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ceb30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb34:
    // 0x2ceb34: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x2ceb34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_2ceb38:
    // 0x2ceb38: 0x24710088  addiu       $s1, $v1, 0x88
    ctx->pc = 0x2ceb38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
label_2ceb3c:
    // 0x2ceb3c: 0x26570090  addiu       $s7, $s2, 0x90
    ctx->pc = 0x2ceb3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2ceb40:
    // 0x2ceb40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ceb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb44:
    // 0x2ceb44: 0x0  nop
    ctx->pc = 0x2ceb44u;
    // NOP
label_2ceb48:
    // 0x2ceb48: 0xc137826  jal         func_4DE098
label_2ceb4c:
    if (ctx->pc == 0x2CEB4Cu) {
        ctx->pc = 0x2CEB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB48u;
        // 0x2ceb4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEB50u;
        goto label_2ceb50;
    }
    ctx->pc = 0x2CEB48u;
    SET_GPR_U32(ctx, 31, 0x2CEB50u);
    ctx->pc = 0x2CEB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB48u;
    // 0x2ceb4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2CEB48u, 0x2CEB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB50u;
label_2ceb50:
    // 0x2ceb50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ceb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ceb54:
    // 0x2ceb54: 0x8ea2bd30  lw          $v0, -0x42D0($s5)
    ctx->pc = 0x2ceb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950192)));
label_2ceb58:
    // 0x2ceb58: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_2ceb5c:
    if (ctx->pc == 0x2CEB5Cu) {
        ctx->pc = 0x2CEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB58u;
        // 0x2ceb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEB60u;
        goto label_2ceb60;
    }
    ctx->pc = 0x2CEB58u;
    {
        const bool branch_taken_0x2ceb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB58u;
        // 0x2ceb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb58) {
            ctx->pc = 0x2CEBFCu;
            goto label_2cebfc;
        }
    }
    ctx->pc = 0x2CEB60u;
label_2ceb60:
    // 0x2ceb60: 0xc137826  jal         func_4DE098
label_2ceb64:
    if (ctx->pc == 0x2CEB64u) {
        ctx->pc = 0x2CEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB60u;
        // 0x2ceb64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEB68u;
        goto label_2ceb68;
    }
    ctx->pc = 0x2CEB60u;
    SET_GPR_U32(ctx, 31, 0x2CEB68u);
    ctx->pc = 0x2CEB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB60u;
    // 0x2ceb64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2CEB60u, 0x2CEB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB68u;
label_2ceb68:
    // 0x2ceb68: 0xc0e409a  jal         func_390268
label_2ceb6c:
    if (ctx->pc == 0x2CEB6Cu) {
        ctx->pc = 0x2CEB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB68u;
        // 0x2ceb6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEB70u;
        goto label_2ceb70;
    }
    ctx->pc = 0x2CEB68u;
    SET_GPR_U32(ctx, 31, 0x2CEB70u);
    ctx->pc = 0x2CEB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB68u;
    // 0x2ceb6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CEB68u, 0x2CEB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB70u;
label_2ceb70:
    // 0x2ceb70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ceb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb74:
    // 0x2ceb74: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
label_2ceb78:
    if (ctx->pc == 0x2CEB78u) {
        ctx->pc = 0x2CEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB74u;
        // 0x2ceb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEB7Cu;
        goto label_2ceb7c;
    }
    ctx->pc = 0x2CEB74u;
    {
        const bool branch_taken_0x2ceb74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB74u;
        // 0x2ceb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb74) {
            ctx->pc = 0x2CEBECu;
            goto label_2cebec;
        }
    }
    ctx->pc = 0x2CEB7Cu;
label_2ceb7c:
    // 0x2ceb7c: 0x86e40002  lh          $a0, 0x2($s7)
    ctx->pc = 0x2ceb7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2ceb80:
    // 0x2ceb80: 0x84c50092  lh          $a1, 0x92($a2)
    ctx->pc = 0x2ceb80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
label_2ceb84:
    // 0x2ceb84: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ceb84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ceb88:
    // 0x2ceb88: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ceb88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ceb8c:
    // 0x2ceb8c: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x2ceb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_2ceb90:
    // 0x2ceb90: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2ceb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_2ceb94:
    // 0x2ceb94: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2ceb94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2ceb98:
    // 0x2ceb98: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2ceb98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2ceb9c:
    // 0x2ceb9c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2ceb9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2ceba0:
    // 0x2ceba0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ceba0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2ceba4:
    // 0x2ceba4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2ceba4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ceba8:
    // 0x2ceba8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2ceba8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2cebac:
    // 0x2cebac: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2cebacu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2cebb0:
    // 0x2cebb0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2cebb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2cebb4:
    // 0x2cebb4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2cebb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2cebb8:
    // 0x2cebb8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2cebb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2cebbc:
    // 0x2cebbc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2cebbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2cebc0:
    // 0x2cebc0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2cebc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_2cebc4:
    // 0x2cebc4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2cebc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2cebc8:
    // 0x2cebc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cebc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cebcc:
    // 0x2cebcc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2cebccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2cebd0:
    // 0x2cebd0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2cebd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cebd4:
    // 0x2cebd4: 0x0  nop
    ctx->pc = 0x2cebd4u;
    // NOP
label_2cebd8:
    // 0x2cebd8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2cebdc:
    if (ctx->pc == 0x2CEBDCu) {
        ctx->pc = 0x2CEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEBD8u;
        // 0x2cebdc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEBE0u;
        goto label_2cebe0;
    }
    ctx->pc = 0x2CEBD8u;
    {
        const bool branch_taken_0x2cebd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEBD8u;
        // 0x2cebdc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cebd8) {
            ctx->pc = 0x2CEBFCu;
            goto label_2cebfc;
        }
    }
    ctx->pc = 0x2CEBE0u;
label_2cebe0:
    // 0x2cebe0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2cebe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cebe4:
    // 0x2cebe4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2cebe8:
    if (ctx->pc == 0x2CEBE8u) {
        ctx->pc = 0x2CEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEBE4u;
        // 0x2cebe8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEBECu;
        goto label_2cebec;
    }
    ctx->pc = 0x2CEBE4u;
    {
        const bool branch_taken_0x2cebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEBE4u;
        // 0x2cebe8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cebe4) {
            ctx->pc = 0x2CEBFCu;
            goto label_2cebfc;
        }
    }
    ctx->pc = 0x2CEBECu;
label_2cebec:
    // 0x2cebec: 0xc137826  jal         func_4DE098
label_2cebf0:
    if (ctx->pc == 0x2CEBF0u) {
        ctx->pc = 0x2CEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEBECu;
        // 0x2cebf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEBF4u;
        goto label_2cebf4;
    }
    ctx->pc = 0x2CEBECu;
    SET_GPR_U32(ctx, 31, 0x2CEBF4u);
    ctx->pc = 0x2CEBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEBECu;
    // 0x2cebf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2CEBECu, 0x2CEBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBF4u;
label_2cebf4:
    // 0x2cebf4: 0x8ea3bd30  lw          $v1, -0x42D0($s5)
    ctx->pc = 0x2cebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950192)));
label_2cebf8:
    // 0x2cebf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2cebfc:
    // 0x2cebfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cebfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cec00:
    // 0x2cec00: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x2cec00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2cec04:
    // 0x2cec04: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_2cec08:
    if (ctx->pc == 0x2CEC08u) {
        ctx->pc = 0x2CEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC04u;
        // 0x2cec08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC0Cu;
        goto label_2cec0c;
    }
    ctx->pc = 0x2CEC04u;
    {
        const bool branch_taken_0x2cec04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC04u;
        // 0x2cec08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec04) {
            ctx->pc = 0x2CEB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ceb48;
        }
    }
    ctx->pc = 0x2CEC0Cu;
label_2cec0c:
    // 0x2cec0c: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
label_2cec10:
    if (ctx->pc == 0x2CEC10u) {
        ctx->pc = 0x2CEC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC0Cu;
        // 0x2cec10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC14u;
        goto label_2cec14;
    }
    ctx->pc = 0x2CEC0Cu;
    {
        const bool branch_taken_0x2cec0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC0Cu;
        // 0x2cec10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec0c) {
            ctx->pc = 0x2CED18u;
            goto label_2ced18;
        }
    }
    ctx->pc = 0x2CEC14u;
label_2cec14:
    // 0x2cec14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cec14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cec18:
    // 0x2cec18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cec18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cec1c:
    // 0x2cec1c: 0xc0888a2  jal         func_222288
label_2cec20:
    if (ctx->pc == 0x2CEC20u) {
        ctx->pc = 0x2CEC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC1Cu;
        // 0x2cec20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC24u;
        goto label_2cec24;
    }
    ctx->pc = 0x2CEC1Cu;
    SET_GPR_U32(ctx, 31, 0x2CEC24u);
    ctx->pc = 0x2CEC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEC1Cu;
    // 0x2cec20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2CEC1Cu, 0x2CEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC24u;
label_2cec24:
    // 0x2cec24: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_2cec28:
    if (ctx->pc == 0x2CEC28u) {
        ctx->pc = 0x2CEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC24u;
        // 0x2cec28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC2Cu;
        goto label_2cec2c;
    }
    ctx->pc = 0x2CEC24u;
    {
        const bool branch_taken_0x2cec24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC24u;
        // 0x2cec28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec24) {
            ctx->pc = 0x2CED18u;
            goto label_2ced18;
        }
    }
    ctx->pc = 0x2CEC2Cu;
label_2cec2c:
    // 0x2cec2c: 0x826303b8  lb          $v1, 0x3B8($s3)
    ctx->pc = 0x2cec2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 952)));
label_2cec30:
    // 0x2cec30: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_2cec34:
    if (ctx->pc == 0x2CEC34u) {
        ctx->pc = 0x2CEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC30u;
        // 0x2cec34: 0x926403b8  lbu         $a0, 0x3B8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC38u;
        goto label_2cec38;
    }
    ctx->pc = 0x2CEC30u;
    {
        const bool branch_taken_0x2cec30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC30u;
        // 0x2cec34: 0x926403b8  lbu         $a0, 0x3B8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec30) {
            ctx->pc = 0x2CEC9Cu;
            goto label_2cec9c;
        }
    }
    ctx->pc = 0x2CEC38u;
label_2cec38:
    // 0x2cec38: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2cec38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2cec3c:
    // 0x2cec3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cec3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cec40:
    // 0x2cec40: 0x0  nop
    ctx->pc = 0x2cec40u;
    // NOP
label_2cec44:
    // 0x2cec44: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2cec44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cec48:
    // 0x2cec48: 0x0  nop
    ctx->pc = 0x2cec48u;
    // NOP
label_2cec4c:
    // 0x2cec4c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_2cec50:
    if (ctx->pc == 0x2CEC50u) {
        ctx->pc = 0x2CEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC4Cu;
        // 0x2cec50: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC54u;
        goto label_2cec54;
    }
    ctx->pc = 0x2CEC4Cu;
    {
        const bool branch_taken_0x2cec4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC4Cu;
        // 0x2cec50: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec4c) {
            ctx->pc = 0x2CECA0u;
            goto label_2ceca0;
        }
    }
    ctx->pc = 0x2CEC54u;
label_2cec54:
    // 0x2cec54: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cec58:
    // 0x2cec58: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cec58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cec5c:
    // 0x2cec5c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cec60:
    // 0x2cec60: 0x40f809  jalr        $v0
label_2cec64:
    if (ctx->pc == 0x2CEC64u) {
        ctx->pc = 0x2CEC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC60u;
        // 0x2cec64: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC68u;
        goto label_2cec68;
    }
    ctx->pc = 0x2CEC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CEC68u);
        ctx->pc = 0x2CEC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC60u;
        // 0x2cec64: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEC60u, 0x2CEC68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CEC68u;
label_2cec68:
    // 0x2cec68: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2cec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cec6c:
    // 0x2cec6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cec6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cec70:
    // 0x2cec70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cec70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cec74:
    // 0x2cec74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cec78:
    // 0x2cec78: 0x40f809  jalr        $v0
label_2cec7c:
    if (ctx->pc == 0x2CEC7Cu) {
        ctx->pc = 0x2CEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC78u;
        // 0x2cec7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC80u;
        goto label_2cec80;
    }
    ctx->pc = 0x2CEC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CEC80u);
        ctx->pc = 0x2CEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC78u;
        // 0x2cec7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEC78u, 0x2CEC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CEC80u;
label_2cec80:
    // 0x2cec80: 0xc68d0030  lwc1        $f13, 0x30($s4)
    ctx->pc = 0x2cec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2cec84:
    // 0x2cec84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cec84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cec88:
    // 0x2cec88: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2cec88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2cec8c:
    // 0x2cec8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cec8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cec90:
    // 0x2cec90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cec90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cec94:
    // 0x2cec94: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2cec98:
    if (ctx->pc == 0x2CEC98u) {
        ctx->pc = 0x2CEC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC94u;
        // 0x2cec98: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC9Cu;
        goto label_2cec9c;
    }
    ctx->pc = 0x2CEC94u;
    {
        const bool branch_taken_0x2cec94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC94u;
        // 0x2cec98: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec94) {
            ctx->pc = 0x2CED08u;
            goto label_2ced08;
        }
    }
    ctx->pc = 0x2CEC9Cu;
label_2cec9c:
    // 0x2cec9c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2cec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2ceca0:
    // 0x2ceca0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2ceca4:
    if (ctx->pc == 0x2CECA4u) {
        ctx->pc = 0x2CECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECA0u;
        // 0x2ceca4: 0x8fc3b734  lw          $v1, -0x48CC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CECA8u;
        goto label_2ceca8;
    }
    ctx->pc = 0x2CECA0u;
    {
        const bool branch_taken_0x2ceca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECA0u;
        // 0x2ceca4: 0x8fc3b734  lw          $v1, -0x48CC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceca0) {
            ctx->pc = 0x2CED1Cu;
            goto label_2ced1c;
        }
    }
    ctx->pc = 0x2CECA8u;
label_2ceca8:
    // 0x2ceca8: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2ceca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
label_2cecac:
    // 0x2cecac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cecacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cecb0:
    // 0x2cecb0: 0x0  nop
    ctx->pc = 0x2cecb0u;
    // NOP
label_2cecb4:
    // 0x2cecb4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2cecb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cecb8:
    // 0x2cecb8: 0x0  nop
    ctx->pc = 0x2cecb8u;
    // NOP
label_2cecbc:
    // 0x2cecbc: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
label_2cecc0:
    if (ctx->pc == 0x2CECC0u) {
        ctx->pc = 0x2CECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECBCu;
        // 0x2cecc0: 0x8c620048  lw          $v0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CECC4u;
        goto label_2cecc4;
    }
    ctx->pc = 0x2CECBCu;
    {
        const bool branch_taken_0x2cecbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cecbc) {
            ctx->pc = 0x2CECC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CECBCu;
            // 0x2cecc0: 0x8c620048  lw          $v0, 0x48($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CED20u;
            goto label_2ced20;
        }
    }
    ctx->pc = 0x2CECC4u;
label_2cecc4:
    // 0x2cecc4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cecc8:
    // 0x2cecc8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cecc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ceccc:
    // 0x2ceccc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cecd0:
    // 0x2cecd0: 0x40f809  jalr        $v0
label_2cecd4:
    if (ctx->pc == 0x2CECD4u) {
        ctx->pc = 0x2CECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECD0u;
        // 0x2cecd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CECD8u;
        goto label_2cecd8;
    }
    ctx->pc = 0x2CECD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CECD8u);
        ctx->pc = 0x2CECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECD0u;
        // 0x2cecd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CECD0u, 0x2CECD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CECD8u;
label_2cecd8:
    // 0x2cecd8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2cecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cecdc:
    // 0x2cecdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cecdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cece0:
    // 0x2cece0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cece0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cece4:
    // 0x2cece4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cece8:
    // 0x2cece8: 0x40f809  jalr        $v0
label_2cecec:
    if (ctx->pc == 0x2CECECu) {
        ctx->pc = 0x2CECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECE8u;
        // 0x2cecec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CECF0u;
        goto label_2cecf0;
    }
    ctx->pc = 0x2CECE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CECF0u);
        ctx->pc = 0x2CECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECE8u;
        // 0x2cecec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CECE8u, 0x2CECF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CECF0u;
label_2cecf0:
    // 0x2cecf0: 0xc68d0030  lwc1        $f13, 0x30($s4)
    ctx->pc = 0x2cecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2cecf4:
    // 0x2cecf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cecf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cecf8:
    // 0x2cecf8: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2cecf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_2cecfc:
    // 0x2cecfc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cecfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ced00:
    // 0x2ced00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ced00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ced04:
    // 0x2ced04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2ced04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ced08:
    // 0x2ced08: 0xc0b48c6  jal         func_2D2318
label_2ced0c:
    if (ctx->pc == 0x2CED0Cu) {
        ctx->pc = 0x2CED10u;
        goto label_2ced10;
    }
    ctx->pc = 0x2CED08u;
    SET_GPR_U32(ctx, 31, 0x2CED10u);
    ctx->pc = 0x2D2318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2318u, 0x2CED08u, 0x2CED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED10u;
label_2ced10:
    // 0x2ced10: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ced14:
    if (ctx->pc == 0x2CED14u) {
        ctx->pc = 0x2CED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED10u;
        // 0x2ced14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CED18u;
        goto label_2ced18;
    }
    ctx->pc = 0x2CED10u;
    {
        const bool branch_taken_0x2ced10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED10u;
        // 0x2ced14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced10) {
            ctx->pc = 0x2CED2Cu;
            goto label_2ced2c;
        }
    }
    ctx->pc = 0x2CED18u;
label_2ced18:
    // 0x2ced18: 0x8fc3b734  lw          $v1, -0x48CC($fp)
    ctx->pc = 0x2ced18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948660)));
label_2ced1c:
    // 0x2ced1c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2ced1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2ced20:
    // 0x2ced20: 0x244205dc  addiu       $v0, $v0, 0x5DC
    ctx->pc = 0x2ced20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1500));
label_2ced24:
    // 0x2ced24: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x2ced24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
label_2ced28:
    // 0x2ced28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ced28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ced2c:
    // 0x2ced2c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2ced2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2ced30:
    // 0x2ced30: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2ced30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ced34:
    // 0x2ced34: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2ced34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2ced38:
    // 0x2ced38: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2ced38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ced3c:
    // 0x2ced3c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2ced3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ced40:
    // 0x2ced40: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2ced40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ced44:
    // 0x2ced44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ced44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ced48:
    // 0x2ced48: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2ced48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ced4c:
    // 0x2ced4c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2ced4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ced50:
    // 0x2ced50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ced50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ced54:
    // 0x2ced54: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2ced54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ced58:
    // 0x2ced58: 0x3e00008  jr          $ra
label_2ced5c:
    if (ctx->pc == 0x2CED5Cu) {
        ctx->pc = 0x2CED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED58u;
        // 0x2ced5c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CED60u;
        goto label_fallthrough_0x2ced58;
    }
    ctx->pc = 0x2CED58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED58u;
        // 0x2ced5c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CED58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ced58:
    ctx->pc = 0x2CED60u;
}
