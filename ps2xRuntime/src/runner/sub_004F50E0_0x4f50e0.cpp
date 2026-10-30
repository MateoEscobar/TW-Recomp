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

// Function: sub_004F50E0
// Address: 0x4f50e0 - 0x4f5338
void sub_004F50E0_0x4f50e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F50E0_0x4f50e0");
#endif

    switch (ctx->pc) {
        case 0x4f50e0u: goto label_4f50e0;
        case 0x4f50e4u: goto label_4f50e4;
        case 0x4f50e8u: goto label_4f50e8;
        case 0x4f50ecu: goto label_4f50ec;
        case 0x4f50f0u: goto label_4f50f0;
        case 0x4f50f4u: goto label_4f50f4;
        case 0x4f50f8u: goto label_4f50f8;
        case 0x4f50fcu: goto label_4f50fc;
        case 0x4f5100u: goto label_4f5100;
        case 0x4f5104u: goto label_4f5104;
        case 0x4f5108u: goto label_4f5108;
        case 0x4f510cu: goto label_4f510c;
        case 0x4f5110u: goto label_4f5110;
        case 0x4f5114u: goto label_4f5114;
        case 0x4f5118u: goto label_4f5118;
        case 0x4f511cu: goto label_4f511c;
        case 0x4f5120u: goto label_4f5120;
        case 0x4f5124u: goto label_4f5124;
        case 0x4f5128u: goto label_4f5128;
        case 0x4f512cu: goto label_4f512c;
        case 0x4f5130u: goto label_4f5130;
        case 0x4f5134u: goto label_4f5134;
        case 0x4f5138u: goto label_4f5138;
        case 0x4f513cu: goto label_4f513c;
        case 0x4f5140u: goto label_4f5140;
        case 0x4f5144u: goto label_4f5144;
        case 0x4f5148u: goto label_4f5148;
        case 0x4f514cu: goto label_4f514c;
        case 0x4f5150u: goto label_4f5150;
        case 0x4f5154u: goto label_4f5154;
        case 0x4f5158u: goto label_4f5158;
        case 0x4f515cu: goto label_4f515c;
        case 0x4f5160u: goto label_4f5160;
        case 0x4f5164u: goto label_4f5164;
        case 0x4f5168u: goto label_4f5168;
        case 0x4f516cu: goto label_4f516c;
        case 0x4f5170u: goto label_4f5170;
        case 0x4f5174u: goto label_4f5174;
        case 0x4f5178u: goto label_4f5178;
        case 0x4f517cu: goto label_4f517c;
        case 0x4f5180u: goto label_4f5180;
        case 0x4f5184u: goto label_4f5184;
        case 0x4f5188u: goto label_4f5188;
        case 0x4f518cu: goto label_4f518c;
        case 0x4f5190u: goto label_4f5190;
        case 0x4f5194u: goto label_4f5194;
        case 0x4f5198u: goto label_4f5198;
        case 0x4f519cu: goto label_4f519c;
        case 0x4f51a0u: goto label_4f51a0;
        case 0x4f51a4u: goto label_4f51a4;
        case 0x4f51a8u: goto label_4f51a8;
        case 0x4f51acu: goto label_4f51ac;
        case 0x4f51b0u: goto label_4f51b0;
        case 0x4f51b4u: goto label_4f51b4;
        case 0x4f51b8u: goto label_4f51b8;
        case 0x4f51bcu: goto label_4f51bc;
        case 0x4f51c0u: goto label_4f51c0;
        case 0x4f51c4u: goto label_4f51c4;
        case 0x4f51c8u: goto label_4f51c8;
        case 0x4f51ccu: goto label_4f51cc;
        case 0x4f51d0u: goto label_4f51d0;
        case 0x4f51d4u: goto label_4f51d4;
        case 0x4f51d8u: goto label_4f51d8;
        case 0x4f51dcu: goto label_4f51dc;
        case 0x4f51e0u: goto label_4f51e0;
        case 0x4f51e4u: goto label_4f51e4;
        case 0x4f51e8u: goto label_4f51e8;
        case 0x4f51ecu: goto label_4f51ec;
        case 0x4f51f0u: goto label_4f51f0;
        case 0x4f51f4u: goto label_4f51f4;
        case 0x4f51f8u: goto label_4f51f8;
        case 0x4f51fcu: goto label_4f51fc;
        case 0x4f5200u: goto label_4f5200;
        case 0x4f5204u: goto label_4f5204;
        case 0x4f5208u: goto label_4f5208;
        case 0x4f520cu: goto label_4f520c;
        case 0x4f5210u: goto label_4f5210;
        case 0x4f5214u: goto label_4f5214;
        case 0x4f5218u: goto label_4f5218;
        case 0x4f521cu: goto label_4f521c;
        case 0x4f5220u: goto label_4f5220;
        case 0x4f5224u: goto label_4f5224;
        case 0x4f5228u: goto label_4f5228;
        case 0x4f522cu: goto label_4f522c;
        case 0x4f5230u: goto label_4f5230;
        case 0x4f5234u: goto label_4f5234;
        case 0x4f5238u: goto label_4f5238;
        case 0x4f523cu: goto label_4f523c;
        case 0x4f5240u: goto label_4f5240;
        case 0x4f5244u: goto label_4f5244;
        case 0x4f5248u: goto label_4f5248;
        case 0x4f524cu: goto label_4f524c;
        case 0x4f5250u: goto label_4f5250;
        case 0x4f5254u: goto label_4f5254;
        case 0x4f5258u: goto label_4f5258;
        case 0x4f525cu: goto label_4f525c;
        case 0x4f5260u: goto label_4f5260;
        case 0x4f5264u: goto label_4f5264;
        case 0x4f5268u: goto label_4f5268;
        case 0x4f526cu: goto label_4f526c;
        case 0x4f5270u: goto label_4f5270;
        case 0x4f5274u: goto label_4f5274;
        case 0x4f5278u: goto label_4f5278;
        case 0x4f527cu: goto label_4f527c;
        case 0x4f5280u: goto label_4f5280;
        case 0x4f5284u: goto label_4f5284;
        case 0x4f5288u: goto label_4f5288;
        case 0x4f528cu: goto label_4f528c;
        case 0x4f5290u: goto label_4f5290;
        case 0x4f5294u: goto label_4f5294;
        case 0x4f5298u: goto label_4f5298;
        case 0x4f529cu: goto label_4f529c;
        case 0x4f52a0u: goto label_4f52a0;
        case 0x4f52a4u: goto label_4f52a4;
        case 0x4f52a8u: goto label_4f52a8;
        case 0x4f52acu: goto label_4f52ac;
        case 0x4f52b0u: goto label_4f52b0;
        case 0x4f52b4u: goto label_4f52b4;
        case 0x4f52b8u: goto label_4f52b8;
        case 0x4f52bcu: goto label_4f52bc;
        case 0x4f52c0u: goto label_4f52c0;
        case 0x4f52c4u: goto label_4f52c4;
        case 0x4f52c8u: goto label_4f52c8;
        case 0x4f52ccu: goto label_4f52cc;
        case 0x4f52d0u: goto label_4f52d0;
        case 0x4f52d4u: goto label_4f52d4;
        case 0x4f52d8u: goto label_4f52d8;
        case 0x4f52dcu: goto label_4f52dc;
        case 0x4f52e0u: goto label_4f52e0;
        case 0x4f52e4u: goto label_4f52e4;
        case 0x4f52e8u: goto label_4f52e8;
        case 0x4f52ecu: goto label_4f52ec;
        case 0x4f52f0u: goto label_4f52f0;
        case 0x4f52f4u: goto label_4f52f4;
        case 0x4f52f8u: goto label_4f52f8;
        case 0x4f52fcu: goto label_4f52fc;
        case 0x4f5300u: goto label_4f5300;
        case 0x4f5304u: goto label_4f5304;
        case 0x4f5308u: goto label_4f5308;
        case 0x4f530cu: goto label_4f530c;
        case 0x4f5310u: goto label_4f5310;
        case 0x4f5314u: goto label_4f5314;
        case 0x4f5318u: goto label_4f5318;
        case 0x4f531cu: goto label_4f531c;
        case 0x4f5320u: goto label_4f5320;
        case 0x4f5324u: goto label_4f5324;
        case 0x4f5328u: goto label_4f5328;
        case 0x4f532cu: goto label_4f532c;
        case 0x4f5330u: goto label_4f5330;
        case 0x4f5334u: goto label_4f5334;
        default: break;
    }

    ctx->pc = 0x4f50e0u;

label_4f50e0:
    // 0x4f50e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4f50e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4f50e4:
    // 0x4f50e4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4f50e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_4f50e8:
    // 0x4f50e8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4f50e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_4f50ec:
    // 0x4f50ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4f50ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f50f0:
    // 0x4f50f0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4f50f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_4f50f4:
    // 0x4f50f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f50f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f50f8:
    // 0x4f50f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4f50f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4f50fc:
    // 0x4f50fc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4f50fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4f5100:
    // 0x4f5100: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4f5100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_4f5104:
    // 0x4f5104: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4f5104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_4f5108:
    // 0x4f5108: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4f5108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_4f510c:
    // 0x4f510c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4f510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_4f5110:
    // 0x4f5110: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4f5110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_4f5114:
    // 0x4f5114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f5114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f5118:
    // 0x4f5118: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4f5118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4f511c:
    // 0x4f511c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4f511cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_4f5120:
    // 0x4f5120: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x4f5120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_4f5124:
    // 0x4f5124: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f5124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f5128:
    // 0x4f5128: 0x8c56fff0  lw          $s6, -0x10($v0)
    ctx->pc = 0x4f5128u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
label_4f512c:
    // 0x4f512c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4f512cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4f5130:
    // 0x4f5130: 0x2d21823  subu        $v1, $s6, $s2
    ctx->pc = 0x4f5130u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_4f5134:
    // 0x4f5134: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x4f5134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4f5138:
    // 0x4f5138: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x4f5138u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4f513c:
    // 0x4f513c: 0xc2a80a  movz        $s5, $a2, $v0
    ctx->pc = 0x4f513cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 6));
label_4f5140:
    // 0x4f5140: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x4f5140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
label_4f5144:
    // 0x4f5144: 0x2d51823  subu        $v1, $s6, $s5
    ctx->pc = 0x4f5144u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_4f5148:
    // 0x4f5148: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4f5148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f514c:
    // 0x4f514c: 0x74b821  addu        $s7, $v1, $s4
    ctx->pc = 0x4f514cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_4f5150:
    // 0x4f5150: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4f5150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4f5154:
    // 0x4f5154: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4f5158:
    if (ctx->pc == 0x4F5158u) {
        ctx->pc = 0x4F5158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5154u;
        // 0x4f5158: 0x26e50001  addiu       $a1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F515Cu;
        goto label_4f515c;
    }
    ctx->pc = 0x4F5154u;
    {
        const bool branch_taken_0x4f5154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5154u;
        // 0x4f5158: 0x26e50001  addiu       $a1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5154) {
            ctx->pc = 0x4F518Cu;
            goto label_4f518c;
        }
    }
    ctx->pc = 0x4F515Cu;
label_4f515c:
    // 0x4f515c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4f515cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4f5160:
    // 0x4f5160: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x4f5160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4f5164:
    // 0x4f5164: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_4f5168:
    if (ctx->pc == 0x4F5168u) {
        ctx->pc = 0x4F5168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5164u;
        // 0x4f5168: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F516Cu;
        goto label_4f516c;
    }
    ctx->pc = 0x4F5164u;
    {
        const bool branch_taken_0x4f5164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f5164) {
            ctx->pc = 0x4F5168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F5164u;
            // 0x4f5168: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5190u;
            goto label_4f5190;
        }
    }
    ctx->pc = 0x4F516Cu;
label_4f516c:
    // 0x4f516c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4f516cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4f5170:
    // 0x4f5170: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4f5170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f5174:
    // 0x4f5174: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x4f5174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4f5178:
    // 0x4f5178: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x4f5178u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_4f517c:
    // 0x4f517c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f517cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4f5180:
    // 0x4f5180: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4f5180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f5184:
    // 0x4f5184: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4f5188:
    if (ctx->pc == 0x4F5188u) {
        ctx->pc = 0x4F518Cu;
        goto label_4f518c;
    }
    ctx->pc = 0x4F5184u;
    {
        const bool branch_taken_0x4f5184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5184) {
            ctx->pc = 0x4F5190u;
            goto label_4f5190;
        }
    }
    ctx->pc = 0x4F518Cu;
label_4f518c:
    // 0x4f518c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4f518cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f5190:
    // 0x4f5190: 0x10e0004b  beqz        $a3, . + 4 + (0x4B << 2)
label_4f5194:
    if (ctx->pc == 0x4F5194u) {
        ctx->pc = 0x4F5194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5190u;
        // 0x4f5194: 0x26e30001  addiu       $v1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5198u;
        goto label_4f5198;
    }
    ctx->pc = 0x4F5190u;
    {
        const bool branch_taken_0x4f5190 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5190u;
        // 0x4f5194: 0x26e30001  addiu       $v1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5190) {
            ctx->pc = 0x4F52C0u;
            goto label_4f52c0;
        }
    }
    ctx->pc = 0x4F5198u;
label_4f5198:
    // 0x4f5198: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x4f5198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f519c:
    // 0x4f519c: 0x2542021  addu        $a0, $s2, $s4
    ctx->pc = 0x4f519cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4f51a0:
    // 0x4f51a0: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x4f51a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f51a4:
    // 0x4f51a4: 0x255f021  addu        $fp, $s2, $s5
    ctx->pc = 0x4f51a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_4f51a8:
    // 0x4f51a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4f51ac:
    if (ctx->pc == 0x4F51ACu) {
        ctx->pc = 0x4F51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F51A8u;
        // 0x4f51ac: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F51B0u;
        goto label_4f51b0;
    }
    ctx->pc = 0x4F51A8u;
    {
        const bool branch_taken_0x4f51a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F51A8u;
        // 0x4f51ac: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f51a8) {
            ctx->pc = 0x4F51D0u;
            goto label_4f51d0;
        }
    }
    ctx->pc = 0x4F51B0u;
label_4f51b0:
    // 0x4f51b0: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x4f51b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4f51b4:
    // 0x4f51b4: 0x0  nop
    ctx->pc = 0x4f51b4u;
    // NOP
label_4f51b8:
    // 0x4f51b8: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x4f51b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f51bc:
    // 0x4f51bc: 0x0  nop
    ctx->pc = 0x4f51bcu;
    // NOP
label_4f51c0:
    // 0x4f51c0: 0x0  nop
    ctx->pc = 0x4f51c0u;
    // NOP
label_4f51c4:
    // 0x4f51c4: 0x0  nop
    ctx->pc = 0x4f51c4u;
    // NOP
label_4f51c8:
    // 0x4f51c8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_4f51cc:
    if (ctx->pc == 0x4F51CCu) {
        ctx->pc = 0x4F51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F51C8u;
        // 0x4f51cc: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F51D0u;
        goto label_4f51d0;
    }
    ctx->pc = 0x4F51C8u;
    {
        const bool branch_taken_0x4f51c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f51c8) {
            ctx->pc = 0x4F51CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F51C8u;
            // 0x4f51cc: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F51B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f51b8;
        }
    }
    ctx->pc = 0x4F51D0u;
label_4f51d0:
    // 0x4f51d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f51d4:
    // 0x4f51d4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4f51d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4f51d8:
    // 0x4f51d8: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4f51d8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4f51dc:
    // 0x4f51dc: 0x3c0a0059  lui         $t2, 0x59
    ctx->pc = 0x4f51dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)89 << 16));
label_4f51e0:
    // 0x4f51e0: 0x24a58a48  addiu       $a1, $a1, -0x75B8
    ctx->pc = 0x4f51e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937160));
label_4f51e4:
    // 0x4f51e4: 0x254a8a78  addiu       $t2, $t2, -0x7588
    ctx->pc = 0x4f51e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294937208));
label_4f51e8:
    // 0x4f51e8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4f51e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4f51ec:
    // 0x4f51ec: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x4f51ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4f51f0:
    // 0x4f51f0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f51f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f51f4:
    // 0x4f51f4: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x4f51f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_4f51f8:
    // 0x4f51f8: 0x25088a50  addiu       $t0, $t0, -0x75B0
    ctx->pc = 0x4f51f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937168));
label_4f51fc:
    // 0x4f51fc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4f51fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4f5200:
    // 0x4f5200: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f5200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f5204:
    // 0x4f5204: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4f5204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4f5208:
    // 0x4f5208: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4f5208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4f520c:
    // 0x4f520c: 0x40f809  jalr        $v0
label_4f5210:
    if (ctx->pc == 0x4F5210u) {
        ctx->pc = 0x4F5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F520Cu;
        // 0x4f5210: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5214u;
        goto label_4f5214;
    }
    ctx->pc = 0x4F520Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F5214u);
        ctx->pc = 0x4F5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F520Cu;
        // 0x4f5210: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F520Cu, 0x4F5214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5214u;
label_4f5214:
    // 0x4f5214: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4f5214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f5218:
    // 0x4f5218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f5218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f521c:
    // 0x4f521c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x4f521cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_4f5220:
    // 0x4f5220: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4f5220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4f5224:
    // 0x4f5224: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x4f5224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_4f5228:
    // 0x4f5228: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_4f522c:
    if (ctx->pc == 0x4F522Cu) {
        ctx->pc = 0x4F522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5228u;
        // 0x4f522c: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5230u;
        goto label_4f5230;
    }
    ctx->pc = 0x4F5228u;
    {
        const bool branch_taken_0x4f5228 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5228u;
        // 0x4f522c: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5228) {
            ctx->pc = 0x4F523Cu;
            goto label_4f523c;
        }
    }
    ctx->pc = 0x4F5230u;
label_4f5230:
    // 0x4f5230: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4f5230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4f5234:
    // 0x4f5234: 0xc13d3a6  jal         func_4F4E98
label_4f5238:
    if (ctx->pc == 0x4F5238u) {
        ctx->pc = 0x4F5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5234u;
        // 0x4f5238: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F523Cu;
        goto label_4f523c;
    }
    ctx->pc = 0x4F5234u;
    SET_GPR_U32(ctx, 31, 0x4F523Cu);
    ctx->pc = 0x4F5238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5234u;
    // 0x4f5238: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4E98u, 0x4F5234u, 0x4F523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F523Cu;
label_4f523c:
    // 0x4f523c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4f523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4f5240:
    // 0x4f5240: 0x2de3023  subu        $a2, $s6, $fp
    ctx->pc = 0x4f5240u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_4f5244:
    // 0x4f5244: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x4f5244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4f5248:
    // 0x4f5248: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x4f5248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4f524c:
    // 0x4f524c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_4f5250:
    if (ctx->pc == 0x4F5250u) {
        ctx->pc = 0x4F5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F524Cu;
        // 0x4f5250: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5254u;
        goto label_4f5254;
    }
    ctx->pc = 0x4F524Cu;
    {
        const bool branch_taken_0x4f524c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F524Cu;
        // 0x4f5250: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f524c) {
            ctx->pc = 0x4F5260u;
            goto label_4f5260;
        }
    }
    ctx->pc = 0x4F5254u;
label_4f5254:
    // 0x4f5254: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4f5254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4f5258:
    // 0x4f5258: 0xc13d3a6  jal         func_4F4E98
label_4f525c:
    if (ctx->pc == 0x4F525Cu) {
        ctx->pc = 0x4F525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5258u;
        // 0x4f525c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5260u;
        goto label_4f5260;
    }
    ctx->pc = 0x4F5258u;
    SET_GPR_U32(ctx, 31, 0x4F5260u);
    ctx->pc = 0x4F525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5258u;
    // 0x4f525c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4E98u, 0x4F5258u, 0x4F5260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5260u;
label_4f5260:
    // 0x4f5260: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_4f5264:
    if (ctx->pc == 0x4F5264u) {
        ctx->pc = 0x4F5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5260u;
        // 0x4f5264: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5268u;
        goto label_4f5268;
    }
    ctx->pc = 0x4F5260u;
    {
        const bool branch_taken_0x4f5260 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5260u;
        // 0x4f5264: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5260) {
            ctx->pc = 0x4F5274u;
            goto label_4f5274;
        }
    }
    ctx->pc = 0x4F5268u;
label_4f5268:
    // 0x4f5268: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x4f5268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_4f526c:
    // 0x4f526c: 0xc13d3a6  jal         func_4F4E98
label_4f5270:
    if (ctx->pc == 0x4F5270u) {
        ctx->pc = 0x4F5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F526Cu;
        // 0x4f5270: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5274u;
        goto label_4f5274;
    }
    ctx->pc = 0x4F526Cu;
    SET_GPR_U32(ctx, 31, 0x4F5274u);
    ctx->pc = 0x4F5270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F526Cu;
    // 0x4f5270: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4E98u, 0x4F526Cu, 0x4F5274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5274u;
label_4f5274:
    // 0x4f5274: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4f5274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4f5278:
    // 0x4f5278: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x4f5278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_4f527c:
    // 0x4f527c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4f527cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4f5280:
    // 0x4f5280: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f5280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4f5284:
    // 0x4f5284: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_4f5288:
    if (ctx->pc == 0x4F5288u) {
        ctx->pc = 0x4F5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5284u;
        // 0x4f5288: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F528Cu;
        goto label_4f528c;
    }
    ctx->pc = 0x4F5284u;
    {
        const bool branch_taken_0x4f5284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5284u;
        // 0x4f5288: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5284) {
            ctx->pc = 0x4F52B8u;
            goto label_4f52b8;
        }
    }
    ctx->pc = 0x4F528Cu;
label_4f528c:
    // 0x4f528c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4f5290:
    if (ctx->pc == 0x4F5290u) {
        ctx->pc = 0x4F5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F528Cu;
        // 0x4f5290: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5294u;
        goto label_4f5294;
    }
    ctx->pc = 0x4F528Cu;
    {
        const bool branch_taken_0x4f528c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F528Cu;
        // 0x4f5290: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f528c) {
            ctx->pc = 0x4F52B8u;
            goto label_4f52b8;
        }
    }
    ctx->pc = 0x4F5294u;
label_4f5294:
    // 0x4f5294: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4f5294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_4f5298:
    // 0x4f5298: 0x24c68a50  addiu       $a2, $a2, -0x75B0
    ctx->pc = 0x4f5298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937168));
label_4f529c:
    // 0x4f529c: 0x8c88b9c0  lw          $t0, -0x4640($a0)
    ctx->pc = 0x4f529cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949312)));
label_4f52a0:
    // 0x4f52a0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f52a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f52a4:
    // 0x4f52a4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f52a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f52a8:
    // 0x4f52a8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f52a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f52ac:
    // 0x4f52ac: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f52acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f52b0:
    // 0x4f52b0: 0x60f809  jalr        $v1
label_4f52b4:
    if (ctx->pc == 0x4F52B4u) {
        ctx->pc = 0x4F52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F52B0u;
        // 0x4f52b4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F52B8u;
        goto label_4f52b8;
    }
    ctx->pc = 0x4F52B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F52B8u);
        ctx->pc = 0x4F52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F52B0u;
        // 0x4f52b4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F52B0u, 0x4F52B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F52B8u;
label_4f52b8:
    // 0x4f52b8: 0x10000010  b           . + 4 + (0x10 << 2)
label_4f52bc:
    if (ctx->pc == 0x4F52BCu) {
        ctx->pc = 0x4F52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F52B8u;
        // 0x4f52bc: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F52C0u;
        goto label_4f52c0;
    }
    ctx->pc = 0x4F52B8u;
    {
        const bool branch_taken_0x4f52b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F52B8u;
        // 0x4f52bc: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f52b8) {
            ctx->pc = 0x4F52FCu;
            goto label_4f52fc;
        }
    }
    ctx->pc = 0x4F52C0u;
label_4f52c0:
    // 0x4f52c0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4f52c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4f52c4:
    // 0x4f52c4: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x4f52c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_4f52c8:
    // 0x4f52c8: 0x2c23023  subu        $a2, $s6, $v0
    ctx->pc = 0x4f52c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_4f52cc:
    // 0x4f52cc: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x4f52ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_4f52d0:
    // 0x4f52d0: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4f52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4f52d4:
    // 0x4f52d4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_4f52d8:
    if (ctx->pc == 0x4F52D8u) {
        ctx->pc = 0x4F52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F52D4u;
        // 0x4f52d8: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F52DCu;
        goto label_4f52dc;
    }
    ctx->pc = 0x4F52D4u;
    {
        const bool branch_taken_0x4f52d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F52D4u;
        // 0x4f52d8: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f52d4) {
            ctx->pc = 0x4F52E4u;
            goto label_4f52e4;
        }
    }
    ctx->pc = 0x4F52DCu;
label_4f52dc:
    // 0x4f52dc: 0xc13d410  jal         func_4F5040
label_4f52e0:
    if (ctx->pc == 0x4F52E0u) {
        ctx->pc = 0x4F52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F52DCu;
        // 0x4f52e0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F52E4u;
        goto label_4f52e4;
    }
    ctx->pc = 0x4F52DCu;
    SET_GPR_U32(ctx, 31, 0x4F52E4u);
    ctx->pc = 0x4F52E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F52DCu;
    // 0x4f52e0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5040u, 0x4F52DCu, 0x4F52E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F52E4u;
label_4f52e4:
    // 0x4f52e4: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_4f52e8:
    if (ctx->pc == 0x4F52E8u) {
        ctx->pc = 0x4F52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F52E4u;
        // 0x4f52e8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F52ECu;
        goto label_4f52ec;
    }
    ctx->pc = 0x4F52E4u;
    {
        const bool branch_taken_0x4f52e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F52E4u;
        // 0x4f52e8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f52e4) {
            ctx->pc = 0x4F52FCu;
            goto label_4f52fc;
        }
    }
    ctx->pc = 0x4F52ECu;
label_4f52ec:
    // 0x4f52ec: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4f52ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4f52f0:
    // 0x4f52f0: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x4f52f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_4f52f4:
    // 0x4f52f4: 0xc13d3a6  jal         func_4F4E98
label_4f52f8:
    if (ctx->pc == 0x4F52F8u) {
        ctx->pc = 0x4F52F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F52F4u;
        // 0x4f52f8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F52FCu;
        goto label_4f52fc;
    }
    ctx->pc = 0x4F52F4u;
    SET_GPR_U32(ctx, 31, 0x4F52FCu);
    ctx->pc = 0x4F52F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F52F4u;
    // 0x4f52f8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4E98u, 0x4F52F4u, 0x4F52FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F52FCu;
label_4f52fc:
    // 0x4f52fc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4f52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4f5300:
    // 0x4f5300: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4f5300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f5304:
    // 0x4f5304: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4f5304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4f5308:
    // 0x4f5308: 0xac77fff0  sw          $s7, -0x10($v1)
    ctx->pc = 0x4f5308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 23));
label_4f530c:
    // 0x4f530c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4f530cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4f5310:
    // 0x4f5310: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4f5310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4f5314:
    // 0x4f5314: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4f5314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f5318:
    // 0x4f5318: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4f5318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f531c:
    // 0x4f531c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4f531cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f5320:
    // 0x4f5320: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4f5320u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f5324:
    // 0x4f5324: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4f5324u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f5328:
    // 0x4f5328: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4f5328u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f532c:
    // 0x4f532c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f532cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f5330:
    // 0x4f5330: 0x3e00008  jr          $ra
label_4f5334:
    if (ctx->pc == 0x4F5334u) {
        ctx->pc = 0x4F5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5330u;
        // 0x4f5334: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5338u;
        goto label_fallthrough_0x4f5330;
    }
    ctx->pc = 0x4F5330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5330u;
        // 0x4f5334: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f5330:
    ctx->pc = 0x4F5338u;
}
