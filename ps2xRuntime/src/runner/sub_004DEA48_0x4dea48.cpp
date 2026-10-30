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

// Function: sub_004DEA48
// Address: 0x4dea48 - 0x4debe8
void sub_004DEA48_0x4dea48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DEA48_0x4dea48");
#endif

    switch (ctx->pc) {
        case 0x4dea48u: goto label_4dea48;
        case 0x4dea4cu: goto label_4dea4c;
        case 0x4dea50u: goto label_4dea50;
        case 0x4dea54u: goto label_4dea54;
        case 0x4dea58u: goto label_4dea58;
        case 0x4dea5cu: goto label_4dea5c;
        case 0x4dea60u: goto label_4dea60;
        case 0x4dea64u: goto label_4dea64;
        case 0x4dea68u: goto label_4dea68;
        case 0x4dea6cu: goto label_4dea6c;
        case 0x4dea70u: goto label_4dea70;
        case 0x4dea74u: goto label_4dea74;
        case 0x4dea78u: goto label_4dea78;
        case 0x4dea7cu: goto label_4dea7c;
        case 0x4dea80u: goto label_4dea80;
        case 0x4dea84u: goto label_4dea84;
        case 0x4dea88u: goto label_4dea88;
        case 0x4dea8cu: goto label_4dea8c;
        case 0x4dea90u: goto label_4dea90;
        case 0x4dea94u: goto label_4dea94;
        case 0x4dea98u: goto label_4dea98;
        case 0x4dea9cu: goto label_4dea9c;
        case 0x4deaa0u: goto label_4deaa0;
        case 0x4deaa4u: goto label_4deaa4;
        case 0x4deaa8u: goto label_4deaa8;
        case 0x4deaacu: goto label_4deaac;
        case 0x4deab0u: goto label_4deab0;
        case 0x4deab4u: goto label_4deab4;
        case 0x4deab8u: goto label_4deab8;
        case 0x4deabcu: goto label_4deabc;
        case 0x4deac0u: goto label_4deac0;
        case 0x4deac4u: goto label_4deac4;
        case 0x4deac8u: goto label_4deac8;
        case 0x4deaccu: goto label_4deacc;
        case 0x4dead0u: goto label_4dead0;
        case 0x4dead4u: goto label_4dead4;
        case 0x4dead8u: goto label_4dead8;
        case 0x4deadcu: goto label_4deadc;
        case 0x4deae0u: goto label_4deae0;
        case 0x4deae4u: goto label_4deae4;
        case 0x4deae8u: goto label_4deae8;
        case 0x4deaecu: goto label_4deaec;
        case 0x4deaf0u: goto label_4deaf0;
        case 0x4deaf4u: goto label_4deaf4;
        case 0x4deaf8u: goto label_4deaf8;
        case 0x4deafcu: goto label_4deafc;
        case 0x4deb00u: goto label_4deb00;
        case 0x4deb04u: goto label_4deb04;
        case 0x4deb08u: goto label_4deb08;
        case 0x4deb0cu: goto label_4deb0c;
        case 0x4deb10u: goto label_4deb10;
        case 0x4deb14u: goto label_4deb14;
        case 0x4deb18u: goto label_4deb18;
        case 0x4deb1cu: goto label_4deb1c;
        case 0x4deb20u: goto label_4deb20;
        case 0x4deb24u: goto label_4deb24;
        case 0x4deb28u: goto label_4deb28;
        case 0x4deb2cu: goto label_4deb2c;
        case 0x4deb30u: goto label_4deb30;
        case 0x4deb34u: goto label_4deb34;
        case 0x4deb38u: goto label_4deb38;
        case 0x4deb3cu: goto label_4deb3c;
        case 0x4deb40u: goto label_4deb40;
        case 0x4deb44u: goto label_4deb44;
        case 0x4deb48u: goto label_4deb48;
        case 0x4deb4cu: goto label_4deb4c;
        case 0x4deb50u: goto label_4deb50;
        case 0x4deb54u: goto label_4deb54;
        case 0x4deb58u: goto label_4deb58;
        case 0x4deb5cu: goto label_4deb5c;
        case 0x4deb60u: goto label_4deb60;
        case 0x4deb64u: goto label_4deb64;
        case 0x4deb68u: goto label_4deb68;
        case 0x4deb6cu: goto label_4deb6c;
        case 0x4deb70u: goto label_4deb70;
        case 0x4deb74u: goto label_4deb74;
        case 0x4deb78u: goto label_4deb78;
        case 0x4deb7cu: goto label_4deb7c;
        case 0x4deb80u: goto label_4deb80;
        case 0x4deb84u: goto label_4deb84;
        case 0x4deb88u: goto label_4deb88;
        case 0x4deb8cu: goto label_4deb8c;
        case 0x4deb90u: goto label_4deb90;
        case 0x4deb94u: goto label_4deb94;
        case 0x4deb98u: goto label_4deb98;
        case 0x4deb9cu: goto label_4deb9c;
        case 0x4deba0u: goto label_4deba0;
        case 0x4deba4u: goto label_4deba4;
        case 0x4deba8u: goto label_4deba8;
        case 0x4debacu: goto label_4debac;
        case 0x4debb0u: goto label_4debb0;
        case 0x4debb4u: goto label_4debb4;
        case 0x4debb8u: goto label_4debb8;
        case 0x4debbcu: goto label_4debbc;
        case 0x4debc0u: goto label_4debc0;
        case 0x4debc4u: goto label_4debc4;
        case 0x4debc8u: goto label_4debc8;
        case 0x4debccu: goto label_4debcc;
        case 0x4debd0u: goto label_4debd0;
        case 0x4debd4u: goto label_4debd4;
        case 0x4debd8u: goto label_4debd8;
        case 0x4debdcu: goto label_4debdc;
        case 0x4debe0u: goto label_4debe0;
        case 0x4debe4u: goto label_4debe4;
        default: break;
    }

    ctx->pc = 0x4dea48u;

label_4dea48:
    // 0x4dea48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4dea48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4dea4c:
    // 0x4dea4c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4dea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4dea50:
    // 0x4dea50: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4dea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4dea54:
    // 0x4dea54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dea54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dea58:
    // 0x4dea58: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4dea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4dea5c:
    // 0x4dea5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4dea5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dea60:
    // 0x4dea60: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4dea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4dea64:
    // 0x4dea64: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4dea64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4dea68:
    // 0x4dea68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4dea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4dea6c:
    // 0x4dea6c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4dea6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4dea70:
    // 0x4dea70: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4dea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4dea74:
    // 0x4dea74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dea74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dea78:
    // 0x4dea78: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4dea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4dea7c:
    // 0x4dea7c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4dea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4dea80:
    // 0x4dea80: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4dea84:
    if (ctx->pc == 0x4DEA84u) {
        ctx->pc = 0x4DEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEA80u;
        // 0x4dea84: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEA88u;
        goto label_4dea88;
    }
    ctx->pc = 0x4DEA80u;
    {
        const bool branch_taken_0x4dea80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEA80u;
        // 0x4dea84: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dea80) {
            ctx->pc = 0x4DEACCu;
            goto label_4deacc;
        }
    }
    ctx->pc = 0x4DEA88u;
label_4dea88:
    // 0x4dea88: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4dea8c:
    if (ctx->pc == 0x4DEA8Cu) {
        ctx->pc = 0x4DEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEA88u;
        // 0x4dea8c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEA90u;
        goto label_4dea90;
    }
    ctx->pc = 0x4DEA88u;
    {
        const bool branch_taken_0x4dea88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dea88) {
            ctx->pc = 0x4DEA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DEA88u;
            // 0x4dea8c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DEA9Cu;
            goto label_4dea9c;
        }
    }
    ctx->pc = 0x4DEA90u;
label_4dea90:
    // 0x4dea90: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4dea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4dea94:
    // 0x4dea94: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4dea94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4dea98:
    // 0x4dea98: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4dea98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4dea9c:
    // 0x4dea9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4dea9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4deaa0:
    // 0x4deaa0: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4deaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4deaa4:
    // 0x4deaa4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4deaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4deaa8:
    // 0x4deaa8: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4deaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4deaac:
    // 0x4deaac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4deaacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4deab0:
    // 0x4deab0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4deab0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4deab4:
    // 0x4deab4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4deab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4deab8:
    // 0x4deab8: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4deab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4deabc:
    // 0x4deabc: 0xc10c1bb  jal         func_4306EC
label_4deac0:
    if (ctx->pc == 0x4DEAC0u) {
        ctx->pc = 0x4DEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEABCu;
        // 0x4deac0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEAC4u;
        goto label_4deac4;
    }
    ctx->pc = 0x4DEABCu;
    SET_GPR_U32(ctx, 31, 0x4DEAC4u);
    ctx->pc = 0x4DEAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DEABCu;
    // 0x4deac0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DEABCu, 0x4DEAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEAC4u;
label_4deac4:
    // 0x4deac4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4deac8:
    if (ctx->pc == 0x4DEAC8u) {
        ctx->pc = 0x4DEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEAC4u;
        // 0x4deac8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEACCu;
        goto label_4deacc;
    }
    ctx->pc = 0x4DEAC4u;
    {
        const bool branch_taken_0x4deac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEAC4u;
        // 0x4deac8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4deac4) {
            ctx->pc = 0x4DEBBCu;
            goto label_4debbc;
        }
    }
    ctx->pc = 0x4DEACCu;
label_4deacc:
    // 0x4deacc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4deaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4dead0:
    // 0x4dead0: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4dead0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4dead4:
    // 0x4dead4: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4dead4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4dead8:
    // 0x4dead8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4dead8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4deadc:
    // 0x4deadc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4deadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4deae0:
    // 0x4deae0: 0x24961db8  addiu       $s6, $a0, 0x1DB8
    ctx->pc = 0x4deae0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 7608));
label_4deae4:
    // 0x4deae4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4deae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4deae8:
    // 0x4deae8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4deae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4deaec:
    // 0x4deaec: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4deaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4deaf0:
    // 0x4deaf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4deaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4deaf4:
    // 0x4deaf4: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4deaf4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4deaf8:
    // 0x4deaf8: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4deaf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4deafc:
    // 0x4deafc: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4deafcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4deb00:
    // 0x4deb00: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4deb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4deb04:
    // 0x4deb04: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4deb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4deb08:
    // 0x4deb08: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4deb08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4deb0c:
    // 0x4deb0c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4deb0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4deb10:
    // 0x4deb10: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4deb10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4deb14:
    // 0x4deb14: 0x24a51db0  addiu       $a1, $a1, 0x1DB0
    ctx->pc = 0x4deb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7600));
label_4deb18:
    // 0x4deb18: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4deb18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4deb1c:
    // 0x4deb1c: 0x254a1de0  addiu       $t2, $t2, 0x1DE0
    ctx->pc = 0x4deb1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7648));
label_4deb20:
    // 0x4deb20: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4deb20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4deb24:
    // 0x4deb24: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4deb24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4deb28:
    // 0x4deb28: 0x40f809  jalr        $v0
label_4deb2c:
    if (ctx->pc == 0x4DEB2Cu) {
        ctx->pc = 0x4DEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEB28u;
        // 0x4deb2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEB30u;
        goto label_4deb30;
    }
    ctx->pc = 0x4DEB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DEB30u);
        ctx->pc = 0x4DEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEB28u;
        // 0x4deb2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEB28u, 0x4DEB30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DEB30u;
label_4deb30:
    // 0x4deb30: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4deb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4deb34:
    // 0x4deb34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4deb34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4deb38:
    // 0x4deb38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4deb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4deb3c:
    // 0x4deb3c: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4deb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4deb40:
    // 0x4deb40: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4deb40u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4deb44:
    // 0x4deb44: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4deb44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4deb48:
    // 0x4deb48: 0xc10c1bb  jal         func_4306EC
label_4deb4c:
    if (ctx->pc == 0x4DEB4Cu) {
        ctx->pc = 0x4DEB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEB48u;
        // 0x4deb4c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEB50u;
        goto label_4deb50;
    }
    ctx->pc = 0x4DEB48u;
    SET_GPR_U32(ctx, 31, 0x4DEB50u);
    ctx->pc = 0x4DEB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DEB48u;
    // 0x4deb4c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DEB48u, 0x4DEB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEB50u;
label_4deb50:
    // 0x4deb50: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4deb54:
    if (ctx->pc == 0x4DEB54u) {
        ctx->pc = 0x4DEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEB50u;
        // 0x4deb54: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEB58u;
        goto label_4deb58;
    }
    ctx->pc = 0x4DEB50u;
    {
        const bool branch_taken_0x4deb50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4deb50) {
            ctx->pc = 0x4DEB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DEB50u;
            // 0x4deb54: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DEB64u;
            goto label_4deb64;
        }
    }
    ctx->pc = 0x4DEB58u;
label_4deb58:
    // 0x4deb58: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4deb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4deb5c:
    // 0x4deb5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4deb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4deb60:
    // 0x4deb60: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4deb60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4deb64:
    // 0x4deb64: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4deb64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4deb68:
    // 0x4deb68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4deb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4deb6c:
    // 0x4deb6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4deb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4deb70:
    // 0x4deb70: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4deb70u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4deb74:
    // 0x4deb74: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4deb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4deb78:
    // 0x4deb78: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4deb78u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4deb7c:
    // 0x4deb7c: 0xc10c1bb  jal         func_4306EC
label_4deb80:
    if (ctx->pc == 0x4DEB80u) {
        ctx->pc = 0x4DEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEB7Cu;
        // 0x4deb80: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEB84u;
        goto label_4deb84;
    }
    ctx->pc = 0x4DEB7Cu;
    SET_GPR_U32(ctx, 31, 0x4DEB84u);
    ctx->pc = 0x4DEB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DEB7Cu;
    // 0x4deb80: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DEB7Cu, 0x4DEB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEB84u;
label_4deb84:
    // 0x4deb84: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4deb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4deb88:
    // 0x4deb88: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4deb8c:
    if (ctx->pc == 0x4DEB8Cu) {
        ctx->pc = 0x4DEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEB88u;
        // 0x4deb8c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEB90u;
        goto label_4deb90;
    }
    ctx->pc = 0x4DEB88u;
    {
        const bool branch_taken_0x4deb88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEB88u;
        // 0x4deb8c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4deb88) {
            ctx->pc = 0x4DEBACu;
            goto label_4debac;
        }
    }
    ctx->pc = 0x4DEB90u;
label_4deb90:
    // 0x4deb90: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4deb90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4deb94:
    // 0x4deb94: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4deb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4deb98:
    // 0x4deb98: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4deb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4deb9c:
    // 0x4deb9c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4deb9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4deba0:
    // 0x4deba0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4deba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4deba4:
    // 0x4deba4: 0x60f809  jalr        $v1
label_4deba8:
    if (ctx->pc == 0x4DEBA8u) {
        ctx->pc = 0x4DEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEBA4u;
        // 0x4deba8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEBACu;
        goto label_4debac;
    }
    ctx->pc = 0x4DEBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DEBACu);
        ctx->pc = 0x4DEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEBA4u;
        // 0x4deba8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEBA4u, 0x4DEBACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DEBACu;
label_4debac:
    // 0x4debac: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4debacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4debb0:
    // 0x4debb0: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4debb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4debb4:
    // 0x4debb4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4debb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4debb8:
    // 0x4debb8: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4debb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4debbc:
    // 0x4debbc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4debbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4debc0:
    // 0x4debc0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4debc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4debc4:
    // 0x4debc4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4debc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4debc8:
    // 0x4debc8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4debc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4debcc:
    // 0x4debcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4debccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4debd0:
    // 0x4debd0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4debd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4debd4:
    // 0x4debd4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4debd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4debd8:
    // 0x4debd8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4debd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4debdc:
    // 0x4debdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4debdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4debe0:
    // 0x4debe0: 0x3e00008  jr          $ra
label_4debe4:
    if (ctx->pc == 0x4DEBE4u) {
        ctx->pc = 0x4DEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEBE0u;
        // 0x4debe4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEBE8u;
        goto label_fallthrough_0x4debe0;
    }
    ctx->pc = 0x4DEBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEBE0u;
        // 0x4debe4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4debe0:
    ctx->pc = 0x4DEBE8u;
}
