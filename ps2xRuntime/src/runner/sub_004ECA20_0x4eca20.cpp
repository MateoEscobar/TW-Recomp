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

// Function: sub_004ECA20
// Address: 0x4eca20 - 0x4ecbc0
void sub_004ECA20_0x4eca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECA20_0x4eca20");
#endif

    switch (ctx->pc) {
        case 0x4eca20u: goto label_4eca20;
        case 0x4eca24u: goto label_4eca24;
        case 0x4eca28u: goto label_4eca28;
        case 0x4eca2cu: goto label_4eca2c;
        case 0x4eca30u: goto label_4eca30;
        case 0x4eca34u: goto label_4eca34;
        case 0x4eca38u: goto label_4eca38;
        case 0x4eca3cu: goto label_4eca3c;
        case 0x4eca40u: goto label_4eca40;
        case 0x4eca44u: goto label_4eca44;
        case 0x4eca48u: goto label_4eca48;
        case 0x4eca4cu: goto label_4eca4c;
        case 0x4eca50u: goto label_4eca50;
        case 0x4eca54u: goto label_4eca54;
        case 0x4eca58u: goto label_4eca58;
        case 0x4eca5cu: goto label_4eca5c;
        case 0x4eca60u: goto label_4eca60;
        case 0x4eca64u: goto label_4eca64;
        case 0x4eca68u: goto label_4eca68;
        case 0x4eca6cu: goto label_4eca6c;
        case 0x4eca70u: goto label_4eca70;
        case 0x4eca74u: goto label_4eca74;
        case 0x4eca78u: goto label_4eca78;
        case 0x4eca7cu: goto label_4eca7c;
        case 0x4eca80u: goto label_4eca80;
        case 0x4eca84u: goto label_4eca84;
        case 0x4eca88u: goto label_4eca88;
        case 0x4eca8cu: goto label_4eca8c;
        case 0x4eca90u: goto label_4eca90;
        case 0x4eca94u: goto label_4eca94;
        case 0x4eca98u: goto label_4eca98;
        case 0x4eca9cu: goto label_4eca9c;
        case 0x4ecaa0u: goto label_4ecaa0;
        case 0x4ecaa4u: goto label_4ecaa4;
        case 0x4ecaa8u: goto label_4ecaa8;
        case 0x4ecaacu: goto label_4ecaac;
        case 0x4ecab0u: goto label_4ecab0;
        case 0x4ecab4u: goto label_4ecab4;
        case 0x4ecab8u: goto label_4ecab8;
        case 0x4ecabcu: goto label_4ecabc;
        case 0x4ecac0u: goto label_4ecac0;
        case 0x4ecac4u: goto label_4ecac4;
        case 0x4ecac8u: goto label_4ecac8;
        case 0x4ecaccu: goto label_4ecacc;
        case 0x4ecad0u: goto label_4ecad0;
        case 0x4ecad4u: goto label_4ecad4;
        case 0x4ecad8u: goto label_4ecad8;
        case 0x4ecadcu: goto label_4ecadc;
        case 0x4ecae0u: goto label_4ecae0;
        case 0x4ecae4u: goto label_4ecae4;
        case 0x4ecae8u: goto label_4ecae8;
        case 0x4ecaecu: goto label_4ecaec;
        case 0x4ecaf0u: goto label_4ecaf0;
        case 0x4ecaf4u: goto label_4ecaf4;
        case 0x4ecaf8u: goto label_4ecaf8;
        case 0x4ecafcu: goto label_4ecafc;
        case 0x4ecb00u: goto label_4ecb00;
        case 0x4ecb04u: goto label_4ecb04;
        case 0x4ecb08u: goto label_4ecb08;
        case 0x4ecb0cu: goto label_4ecb0c;
        case 0x4ecb10u: goto label_4ecb10;
        case 0x4ecb14u: goto label_4ecb14;
        case 0x4ecb18u: goto label_4ecb18;
        case 0x4ecb1cu: goto label_4ecb1c;
        case 0x4ecb20u: goto label_4ecb20;
        case 0x4ecb24u: goto label_4ecb24;
        case 0x4ecb28u: goto label_4ecb28;
        case 0x4ecb2cu: goto label_4ecb2c;
        case 0x4ecb30u: goto label_4ecb30;
        case 0x4ecb34u: goto label_4ecb34;
        case 0x4ecb38u: goto label_4ecb38;
        case 0x4ecb3cu: goto label_4ecb3c;
        case 0x4ecb40u: goto label_4ecb40;
        case 0x4ecb44u: goto label_4ecb44;
        case 0x4ecb48u: goto label_4ecb48;
        case 0x4ecb4cu: goto label_4ecb4c;
        case 0x4ecb50u: goto label_4ecb50;
        case 0x4ecb54u: goto label_4ecb54;
        case 0x4ecb58u: goto label_4ecb58;
        case 0x4ecb5cu: goto label_4ecb5c;
        case 0x4ecb60u: goto label_4ecb60;
        case 0x4ecb64u: goto label_4ecb64;
        case 0x4ecb68u: goto label_4ecb68;
        case 0x4ecb6cu: goto label_4ecb6c;
        case 0x4ecb70u: goto label_4ecb70;
        case 0x4ecb74u: goto label_4ecb74;
        case 0x4ecb78u: goto label_4ecb78;
        case 0x4ecb7cu: goto label_4ecb7c;
        case 0x4ecb80u: goto label_4ecb80;
        case 0x4ecb84u: goto label_4ecb84;
        case 0x4ecb88u: goto label_4ecb88;
        case 0x4ecb8cu: goto label_4ecb8c;
        case 0x4ecb90u: goto label_4ecb90;
        case 0x4ecb94u: goto label_4ecb94;
        case 0x4ecb98u: goto label_4ecb98;
        case 0x4ecb9cu: goto label_4ecb9c;
        case 0x4ecba0u: goto label_4ecba0;
        case 0x4ecba4u: goto label_4ecba4;
        case 0x4ecba8u: goto label_4ecba8;
        case 0x4ecbacu: goto label_4ecbac;
        case 0x4ecbb0u: goto label_4ecbb0;
        case 0x4ecbb4u: goto label_4ecbb4;
        case 0x4ecbb8u: goto label_4ecbb8;
        case 0x4ecbbcu: goto label_4ecbbc;
        default: break;
    }

    ctx->pc = 0x4eca20u;

label_4eca20:
    // 0x4eca20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4eca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4eca24:
    // 0x4eca24: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4eca24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4eca28:
    // 0x4eca28: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4eca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4eca2c:
    // 0x4eca2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4eca2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eca30:
    // 0x4eca30: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4eca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4eca34:
    // 0x4eca34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4eca34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4eca38:
    // 0x4eca38: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4eca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4eca3c:
    // 0x4eca3c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4eca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4eca40:
    // 0x4eca40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4eca40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4eca44:
    // 0x4eca44: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4eca44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4eca48:
    // 0x4eca48: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4eca48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4eca4c:
    // 0x4eca4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eca50:
    // 0x4eca50: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4eca50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4eca54:
    // 0x4eca54: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4eca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4eca58:
    // 0x4eca58: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4eca5c:
    if (ctx->pc == 0x4ECA5Cu) {
        ctx->pc = 0x4ECA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECA58u;
        // 0x4eca5c: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECA60u;
        goto label_4eca60;
    }
    ctx->pc = 0x4ECA58u;
    {
        const bool branch_taken_0x4eca58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4ECA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECA58u;
        // 0x4eca5c: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eca58) {
            ctx->pc = 0x4ECAA4u;
            goto label_4ecaa4;
        }
    }
    ctx->pc = 0x4ECA60u;
label_4eca60:
    // 0x4eca60: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4eca64:
    if (ctx->pc == 0x4ECA64u) {
        ctx->pc = 0x4ECA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECA60u;
        // 0x4eca64: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECA68u;
        goto label_4eca68;
    }
    ctx->pc = 0x4ECA60u;
    {
        const bool branch_taken_0x4eca60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eca60) {
            ctx->pc = 0x4ECA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECA60u;
            // 0x4eca64: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ECA74u;
            goto label_4eca74;
        }
    }
    ctx->pc = 0x4ECA68u;
label_4eca68:
    // 0x4eca68: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4eca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4eca6c:
    // 0x4eca6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4eca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4eca70:
    // 0x4eca70: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4eca70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4eca74:
    // 0x4eca74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4eca74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4eca78:
    // 0x4eca78: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4eca78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4eca7c:
    // 0x4eca7c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4eca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4eca80:
    // 0x4eca80: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4eca80u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4eca84:
    // 0x4eca84: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4eca84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4eca88:
    // 0x4eca88: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4eca88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4eca8c:
    // 0x4eca8c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4eca8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4eca90:
    // 0x4eca90: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4eca90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4eca94:
    // 0x4eca94: 0xc10c1bb  jal         func_4306EC
label_4eca98:
    if (ctx->pc == 0x4ECA98u) {
        ctx->pc = 0x4ECA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECA94u;
        // 0x4eca98: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECA9Cu;
        goto label_4eca9c;
    }
    ctx->pc = 0x4ECA94u;
    SET_GPR_U32(ctx, 31, 0x4ECA9Cu);
    ctx->pc = 0x4ECA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECA94u;
    // 0x4eca98: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4ECA94u, 0x4ECA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECA9Cu;
label_4eca9c:
    // 0x4eca9c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4ecaa0:
    if (ctx->pc == 0x4ECAA0u) {
        ctx->pc = 0x4ECAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECA9Cu;
        // 0x4ecaa0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECAA4u;
        goto label_4ecaa4;
    }
    ctx->pc = 0x4ECA9Cu;
    {
        const bool branch_taken_0x4eca9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECA9Cu;
        // 0x4ecaa0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eca9c) {
            ctx->pc = 0x4ECB94u;
            goto label_4ecb94;
        }
    }
    ctx->pc = 0x4ECAA4u;
label_4ecaa4:
    // 0x4ecaa4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4ecaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4ecaa8:
    // 0x4ecaa8: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4ecaa8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4ecaac:
    // 0x4ecaac: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4ecaacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4ecab0:
    // 0x4ecab0: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x4ecab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_4ecab4:
    // 0x4ecab4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4ecab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ecab8:
    // 0x4ecab8: 0x2496a0e8  addiu       $s6, $a0, -0x5F18
    ctx->pc = 0x4ecab8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942952));
label_4ecabc:
    // 0x4ecabc: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4ecabcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4ecac0:
    // 0x4ecac0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4ecac0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4ecac4:
    // 0x4ecac4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4ecac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4ecac8:
    // 0x4ecac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4ecac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ecacc:
    // 0x4ecacc: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4ecaccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4ecad0:
    // 0x4ecad0: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4ecad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4ecad4:
    // 0x4ecad4: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4ecad4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4ecad8:
    // 0x4ecad8: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4ecad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4ecadc:
    // 0x4ecadc: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4ecadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4ecae0:
    // 0x4ecae0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x4ecae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_4ecae4:
    // 0x4ecae4: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x4ecae4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_4ecae8:
    // 0x4ecae8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4ecae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ecaec:
    // 0x4ecaec: 0x24a5a168  addiu       $a1, $a1, -0x5E98
    ctx->pc = 0x4ecaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943080));
label_4ecaf0:
    // 0x4ecaf0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4ecaf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4ecaf4:
    // 0x4ecaf4: 0x254aa170  addiu       $t2, $t2, -0x5E90
    ctx->pc = 0x4ecaf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943088));
label_4ecaf8:
    // 0x4ecaf8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4ecaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4ecafc:
    // 0x4ecafc: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4ecafcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4ecb00:
    // 0x4ecb00: 0x40f809  jalr        $v0
label_4ecb04:
    if (ctx->pc == 0x4ECB04u) {
        ctx->pc = 0x4ECB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB00u;
        // 0x4ecb04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECB08u;
        goto label_4ecb08;
    }
    ctx->pc = 0x4ECB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4ECB08u);
        ctx->pc = 0x4ECB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB00u;
        // 0x4ecb04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ECB00u, 0x4ECB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4ECB08u;
label_4ecb08:
    // 0x4ecb08: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4ecb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4ecb0c:
    // 0x4ecb0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4ecb0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb10:
    // 0x4ecb10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ecb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb14:
    // 0x4ecb14: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4ecb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4ecb18:
    // 0x4ecb18: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4ecb18u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4ecb1c:
    // 0x4ecb1c: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4ecb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4ecb20:
    // 0x4ecb20: 0xc10c1bb  jal         func_4306EC
label_4ecb24:
    if (ctx->pc == 0x4ECB24u) {
        ctx->pc = 0x4ECB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB20u;
        // 0x4ecb24: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECB28u;
        goto label_4ecb28;
    }
    ctx->pc = 0x4ECB20u;
    SET_GPR_U32(ctx, 31, 0x4ECB28u);
    ctx->pc = 0x4ECB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECB20u;
    // 0x4ecb24: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4ECB20u, 0x4ECB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECB28u;
label_4ecb28:
    // 0x4ecb28: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4ecb2c:
    if (ctx->pc == 0x4ECB2Cu) {
        ctx->pc = 0x4ECB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB28u;
        // 0x4ecb2c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECB30u;
        goto label_4ecb30;
    }
    ctx->pc = 0x4ECB28u;
    {
        const bool branch_taken_0x4ecb28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ecb28) {
            ctx->pc = 0x4ECB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECB28u;
            // 0x4ecb2c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ECB3Cu;
            goto label_4ecb3c;
        }
    }
    ctx->pc = 0x4ECB30u;
label_4ecb30:
    // 0x4ecb30: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4ecb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4ecb34:
    // 0x4ecb34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ecb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4ecb38:
    // 0x4ecb38: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4ecb38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4ecb3c:
    // 0x4ecb3c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4ecb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4ecb40:
    // 0x4ecb40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ecb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb44:
    // 0x4ecb44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4ecb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb48:
    // 0x4ecb48: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4ecb48u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4ecb4c:
    // 0x4ecb4c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4ecb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4ecb50:
    // 0x4ecb50: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4ecb50u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4ecb54:
    // 0x4ecb54: 0xc10c1bb  jal         func_4306EC
label_4ecb58:
    if (ctx->pc == 0x4ECB58u) {
        ctx->pc = 0x4ECB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB54u;
        // 0x4ecb58: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECB5Cu;
        goto label_4ecb5c;
    }
    ctx->pc = 0x4ECB54u;
    SET_GPR_U32(ctx, 31, 0x4ECB5Cu);
    ctx->pc = 0x4ECB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECB54u;
    // 0x4ecb58: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4ECB54u, 0x4ECB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECB5Cu;
label_4ecb5c:
    // 0x4ecb5c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4ecb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4ecb60:
    // 0x4ecb60: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4ecb64:
    if (ctx->pc == 0x4ECB64u) {
        ctx->pc = 0x4ECB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB60u;
        // 0x4ecb64: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECB68u;
        goto label_4ecb68;
    }
    ctx->pc = 0x4ECB60u;
    {
        const bool branch_taken_0x4ecb60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB60u;
        // 0x4ecb64: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecb60) {
            ctx->pc = 0x4ECB84u;
            goto label_4ecb84;
        }
    }
    ctx->pc = 0x4ECB68u;
label_4ecb68:
    // 0x4ecb68: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4ecb68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb6c:
    // 0x4ecb6c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4ecb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4ecb70:
    // 0x4ecb70: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ecb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ecb74:
    // 0x4ecb74: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ecb74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ecb78:
    // 0x4ecb78: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ecb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ecb7c:
    // 0x4ecb7c: 0x60f809  jalr        $v1
label_4ecb80:
    if (ctx->pc == 0x4ECB80u) {
        ctx->pc = 0x4ECB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB7Cu;
        // 0x4ecb80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECB84u;
        goto label_4ecb84;
    }
    ctx->pc = 0x4ECB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4ECB84u);
        ctx->pc = 0x4ECB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECB7Cu;
        // 0x4ecb80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ECB7Cu, 0x4ECB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4ECB84u;
label_4ecb84:
    // 0x4ecb84: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4ecb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4ecb88:
    // 0x4ecb88: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4ecb88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4ecb8c:
    // 0x4ecb8c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4ecb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4ecb90:
    // 0x4ecb90: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4ecb90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4ecb94:
    // 0x4ecb94: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4ecb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ecb98:
    // 0x4ecb98: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4ecb98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ecb9c:
    // 0x4ecb9c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4ecb9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ecba0:
    // 0x4ecba0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4ecba0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ecba4:
    // 0x4ecba4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4ecba4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ecba8:
    // 0x4ecba8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4ecba8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ecbac:
    // 0x4ecbac: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4ecbacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ecbb0:
    // 0x4ecbb0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4ecbb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ecbb4:
    // 0x4ecbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ecbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ecbb8:
    // 0x4ecbb8: 0x3e00008  jr          $ra
label_4ecbbc:
    if (ctx->pc == 0x4ECBBCu) {
        ctx->pc = 0x4ECBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECBB8u;
        // 0x4ecbbc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECBC0u;
        goto label_fallthrough_0x4ecbb8;
    }
    ctx->pc = 0x4ECBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECBB8u;
        // 0x4ecbbc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ECBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4ecbb8:
    ctx->pc = 0x4ECBC0u;
}
