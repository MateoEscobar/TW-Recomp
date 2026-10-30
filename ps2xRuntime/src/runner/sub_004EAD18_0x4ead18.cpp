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

// Function: sub_004EAD18
// Address: 0x4ead18 - 0x4eaeb8
void sub_004EAD18_0x4ead18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EAD18_0x4ead18");
#endif

    switch (ctx->pc) {
        case 0x4ead18u: goto label_4ead18;
        case 0x4ead1cu: goto label_4ead1c;
        case 0x4ead20u: goto label_4ead20;
        case 0x4ead24u: goto label_4ead24;
        case 0x4ead28u: goto label_4ead28;
        case 0x4ead2cu: goto label_4ead2c;
        case 0x4ead30u: goto label_4ead30;
        case 0x4ead34u: goto label_4ead34;
        case 0x4ead38u: goto label_4ead38;
        case 0x4ead3cu: goto label_4ead3c;
        case 0x4ead40u: goto label_4ead40;
        case 0x4ead44u: goto label_4ead44;
        case 0x4ead48u: goto label_4ead48;
        case 0x4ead4cu: goto label_4ead4c;
        case 0x4ead50u: goto label_4ead50;
        case 0x4ead54u: goto label_4ead54;
        case 0x4ead58u: goto label_4ead58;
        case 0x4ead5cu: goto label_4ead5c;
        case 0x4ead60u: goto label_4ead60;
        case 0x4ead64u: goto label_4ead64;
        case 0x4ead68u: goto label_4ead68;
        case 0x4ead6cu: goto label_4ead6c;
        case 0x4ead70u: goto label_4ead70;
        case 0x4ead74u: goto label_4ead74;
        case 0x4ead78u: goto label_4ead78;
        case 0x4ead7cu: goto label_4ead7c;
        case 0x4ead80u: goto label_4ead80;
        case 0x4ead84u: goto label_4ead84;
        case 0x4ead88u: goto label_4ead88;
        case 0x4ead8cu: goto label_4ead8c;
        case 0x4ead90u: goto label_4ead90;
        case 0x4ead94u: goto label_4ead94;
        case 0x4ead98u: goto label_4ead98;
        case 0x4ead9cu: goto label_4ead9c;
        case 0x4eada0u: goto label_4eada0;
        case 0x4eada4u: goto label_4eada4;
        case 0x4eada8u: goto label_4eada8;
        case 0x4eadacu: goto label_4eadac;
        case 0x4eadb0u: goto label_4eadb0;
        case 0x4eadb4u: goto label_4eadb4;
        case 0x4eadb8u: goto label_4eadb8;
        case 0x4eadbcu: goto label_4eadbc;
        case 0x4eadc0u: goto label_4eadc0;
        case 0x4eadc4u: goto label_4eadc4;
        case 0x4eadc8u: goto label_4eadc8;
        case 0x4eadccu: goto label_4eadcc;
        case 0x4eadd0u: goto label_4eadd0;
        case 0x4eadd4u: goto label_4eadd4;
        case 0x4eadd8u: goto label_4eadd8;
        case 0x4eaddcu: goto label_4eaddc;
        case 0x4eade0u: goto label_4eade0;
        case 0x4eade4u: goto label_4eade4;
        case 0x4eade8u: goto label_4eade8;
        case 0x4eadecu: goto label_4eadec;
        case 0x4eadf0u: goto label_4eadf0;
        case 0x4eadf4u: goto label_4eadf4;
        case 0x4eadf8u: goto label_4eadf8;
        case 0x4eadfcu: goto label_4eadfc;
        case 0x4eae00u: goto label_4eae00;
        case 0x4eae04u: goto label_4eae04;
        case 0x4eae08u: goto label_4eae08;
        case 0x4eae0cu: goto label_4eae0c;
        case 0x4eae10u: goto label_4eae10;
        case 0x4eae14u: goto label_4eae14;
        case 0x4eae18u: goto label_4eae18;
        case 0x4eae1cu: goto label_4eae1c;
        case 0x4eae20u: goto label_4eae20;
        case 0x4eae24u: goto label_4eae24;
        case 0x4eae28u: goto label_4eae28;
        case 0x4eae2cu: goto label_4eae2c;
        case 0x4eae30u: goto label_4eae30;
        case 0x4eae34u: goto label_4eae34;
        case 0x4eae38u: goto label_4eae38;
        case 0x4eae3cu: goto label_4eae3c;
        case 0x4eae40u: goto label_4eae40;
        case 0x4eae44u: goto label_4eae44;
        case 0x4eae48u: goto label_4eae48;
        case 0x4eae4cu: goto label_4eae4c;
        case 0x4eae50u: goto label_4eae50;
        case 0x4eae54u: goto label_4eae54;
        case 0x4eae58u: goto label_4eae58;
        case 0x4eae5cu: goto label_4eae5c;
        case 0x4eae60u: goto label_4eae60;
        case 0x4eae64u: goto label_4eae64;
        case 0x4eae68u: goto label_4eae68;
        case 0x4eae6cu: goto label_4eae6c;
        case 0x4eae70u: goto label_4eae70;
        case 0x4eae74u: goto label_4eae74;
        case 0x4eae78u: goto label_4eae78;
        case 0x4eae7cu: goto label_4eae7c;
        case 0x4eae80u: goto label_4eae80;
        case 0x4eae84u: goto label_4eae84;
        case 0x4eae88u: goto label_4eae88;
        case 0x4eae8cu: goto label_4eae8c;
        case 0x4eae90u: goto label_4eae90;
        case 0x4eae94u: goto label_4eae94;
        case 0x4eae98u: goto label_4eae98;
        case 0x4eae9cu: goto label_4eae9c;
        case 0x4eaea0u: goto label_4eaea0;
        case 0x4eaea4u: goto label_4eaea4;
        case 0x4eaea8u: goto label_4eaea8;
        case 0x4eaeacu: goto label_4eaeac;
        case 0x4eaeb0u: goto label_4eaeb0;
        case 0x4eaeb4u: goto label_4eaeb4;
        default: break;
    }

    ctx->pc = 0x4ead18u;

label_4ead18:
    // 0x4ead18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4ead18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4ead1c:
    // 0x4ead1c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4ead1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4ead20:
    // 0x4ead20: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4ead20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4ead24:
    // 0x4ead24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ead24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ead28:
    // 0x4ead28: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4ead28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4ead2c:
    // 0x4ead2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4ead2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ead30:
    // 0x4ead30: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4ead30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4ead34:
    // 0x4ead34: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4ead34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4ead38:
    // 0x4ead38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4ead38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4ead3c:
    // 0x4ead3c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4ead3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4ead40:
    // 0x4ead40: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4ead40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4ead44:
    // 0x4ead44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ead44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ead48:
    // 0x4ead48: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4ead48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4ead4c:
    // 0x4ead4c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4ead4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4ead50:
    // 0x4ead50: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4ead54:
    if (ctx->pc == 0x4EAD54u) {
        ctx->pc = 0x4EAD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAD50u;
        // 0x4ead54: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAD58u;
        goto label_4ead58;
    }
    ctx->pc = 0x4EAD50u;
    {
        const bool branch_taken_0x4ead50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4EAD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAD50u;
        // 0x4ead54: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ead50) {
            ctx->pc = 0x4EAD9Cu;
            goto label_4ead9c;
        }
    }
    ctx->pc = 0x4EAD58u;
label_4ead58:
    // 0x4ead58: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4ead5c:
    if (ctx->pc == 0x4EAD5Cu) {
        ctx->pc = 0x4EAD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAD58u;
        // 0x4ead5c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAD60u;
        goto label_4ead60;
    }
    ctx->pc = 0x4EAD58u;
    {
        const bool branch_taken_0x4ead58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ead58) {
            ctx->pc = 0x4EAD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EAD58u;
            // 0x4ead5c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EAD6Cu;
            goto label_4ead6c;
        }
    }
    ctx->pc = 0x4EAD60u;
label_4ead60:
    // 0x4ead60: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4ead60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4ead64:
    // 0x4ead64: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4ead64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4ead68:
    // 0x4ead68: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4ead68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4ead6c:
    // 0x4ead6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4ead6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ead70:
    // 0x4ead70: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4ead70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4ead74:
    // 0x4ead74: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4ead74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4ead78:
    // 0x4ead78: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4ead78u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4ead7c:
    // 0x4ead7c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4ead7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4ead80:
    // 0x4ead80: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4ead80u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4ead84:
    // 0x4ead84: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4ead84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4ead88:
    // 0x4ead88: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4ead88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4ead8c:
    // 0x4ead8c: 0xc10c1bb  jal         func_4306EC
label_4ead90:
    if (ctx->pc == 0x4EAD90u) {
        ctx->pc = 0x4EAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAD8Cu;
        // 0x4ead90: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAD94u;
        goto label_4ead94;
    }
    ctx->pc = 0x4EAD8Cu;
    SET_GPR_U32(ctx, 31, 0x4EAD94u);
    ctx->pc = 0x4EAD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAD8Cu;
    // 0x4ead90: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4EAD8Cu, 0x4EAD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAD94u;
label_4ead94:
    // 0x4ead94: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4ead98:
    if (ctx->pc == 0x4EAD98u) {
        ctx->pc = 0x4EAD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAD94u;
        // 0x4ead98: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAD9Cu;
        goto label_4ead9c;
    }
    ctx->pc = 0x4EAD94u;
    {
        const bool branch_taken_0x4ead94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAD94u;
        // 0x4ead98: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ead94) {
            ctx->pc = 0x4EAE8Cu;
            goto label_4eae8c;
        }
    }
    ctx->pc = 0x4EAD9Cu;
label_4ead9c:
    // 0x4ead9c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4ead9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4eada0:
    // 0x4eada0: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4eada0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4eada4:
    // 0x4eada4: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4eada4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4eada8:
    // 0x4eada8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4eada8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4eadac:
    // 0x4eadac: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4eadacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4eadb0:
    // 0x4eadb0: 0x24967848  addiu       $s6, $a0, 0x7848
    ctx->pc = 0x4eadb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 30792));
label_4eadb4:
    // 0x4eadb4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4eadb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4eadb8:
    // 0x4eadb8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4eadb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4eadbc:
    // 0x4eadbc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4eadbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4eadc0:
    // 0x4eadc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4eadc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4eadc4:
    // 0x4eadc4: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4eadc4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4eadc8:
    // 0x4eadc8: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4eadc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4eadcc:
    // 0x4eadcc: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4eadccu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4eadd0:
    // 0x4eadd0: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4eadd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4eadd4:
    // 0x4eadd4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4eadd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4eadd8:
    // 0x4eadd8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4eadd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4eaddc:
    // 0x4eaddc: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4eaddcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4eade0:
    // 0x4eade0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4eade0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4eade4:
    // 0x4eade4: 0x24a57840  addiu       $a1, $a1, 0x7840
    ctx->pc = 0x4eade4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30784));
label_4eade8:
    // 0x4eade8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4eade8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4eadec:
    // 0x4eadec: 0x254a7870  addiu       $t2, $t2, 0x7870
    ctx->pc = 0x4eadecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30832));
label_4eadf0:
    // 0x4eadf0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4eadf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4eadf4:
    // 0x4eadf4: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4eadf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4eadf8:
    // 0x4eadf8: 0x40f809  jalr        $v0
label_4eadfc:
    if (ctx->pc == 0x4EADFCu) {
        ctx->pc = 0x4EADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EADF8u;
        // 0x4eadfc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAE00u;
        goto label_4eae00;
    }
    ctx->pc = 0x4EADF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EAE00u);
        ctx->pc = 0x4EADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EADF8u;
        // 0x4eadfc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EADF8u, 0x4EAE00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EAE00u;
label_4eae00:
    // 0x4eae00: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4eae00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4eae04:
    // 0x4eae04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4eae04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4eae08:
    // 0x4eae08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4eae08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eae0c:
    // 0x4eae0c: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4eae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4eae10:
    // 0x4eae10: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4eae10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4eae14:
    // 0x4eae14: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4eae14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4eae18:
    // 0x4eae18: 0xc10c1bb  jal         func_4306EC
label_4eae1c:
    if (ctx->pc == 0x4EAE1Cu) {
        ctx->pc = 0x4EAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE18u;
        // 0x4eae1c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAE20u;
        goto label_4eae20;
    }
    ctx->pc = 0x4EAE18u;
    SET_GPR_U32(ctx, 31, 0x4EAE20u);
    ctx->pc = 0x4EAE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAE18u;
    // 0x4eae1c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4EAE18u, 0x4EAE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAE20u;
label_4eae20:
    // 0x4eae20: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4eae24:
    if (ctx->pc == 0x4EAE24u) {
        ctx->pc = 0x4EAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE20u;
        // 0x4eae24: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAE28u;
        goto label_4eae28;
    }
    ctx->pc = 0x4EAE20u;
    {
        const bool branch_taken_0x4eae20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eae20) {
            ctx->pc = 0x4EAE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EAE20u;
            // 0x4eae24: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EAE34u;
            goto label_4eae34;
        }
    }
    ctx->pc = 0x4EAE28u;
label_4eae28:
    // 0x4eae28: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4eae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4eae2c:
    // 0x4eae2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4eae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4eae30:
    // 0x4eae30: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4eae30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4eae34:
    // 0x4eae34: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4eae34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4eae38:
    // 0x4eae38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eae38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eae3c:
    // 0x4eae3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4eae3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4eae40:
    // 0x4eae40: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4eae40u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4eae44:
    // 0x4eae44: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4eae44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4eae48:
    // 0x4eae48: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4eae48u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4eae4c:
    // 0x4eae4c: 0xc10c1bb  jal         func_4306EC
label_4eae50:
    if (ctx->pc == 0x4EAE50u) {
        ctx->pc = 0x4EAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE4Cu;
        // 0x4eae50: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAE54u;
        goto label_4eae54;
    }
    ctx->pc = 0x4EAE4Cu;
    SET_GPR_U32(ctx, 31, 0x4EAE54u);
    ctx->pc = 0x4EAE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAE4Cu;
    // 0x4eae50: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4EAE4Cu, 0x4EAE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAE54u;
label_4eae54:
    // 0x4eae54: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4eae54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4eae58:
    // 0x4eae58: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4eae5c:
    if (ctx->pc == 0x4EAE5Cu) {
        ctx->pc = 0x4EAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE58u;
        // 0x4eae5c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAE60u;
        goto label_4eae60;
    }
    ctx->pc = 0x4EAE58u;
    {
        const bool branch_taken_0x4eae58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE58u;
        // 0x4eae5c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eae58) {
            ctx->pc = 0x4EAE7Cu;
            goto label_4eae7c;
        }
    }
    ctx->pc = 0x4EAE60u;
label_4eae60:
    // 0x4eae60: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4eae60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4eae64:
    // 0x4eae64: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4eae64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4eae68:
    // 0x4eae68: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eae6c:
    // 0x4eae6c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eae6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eae70:
    // 0x4eae70: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eae74:
    // 0x4eae74: 0x60f809  jalr        $v1
label_4eae78:
    if (ctx->pc == 0x4EAE78u) {
        ctx->pc = 0x4EAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE74u;
        // 0x4eae78: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAE7Cu;
        goto label_4eae7c;
    }
    ctx->pc = 0x4EAE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EAE7Cu);
        ctx->pc = 0x4EAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE74u;
        // 0x4eae78: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAE74u, 0x4EAE7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EAE7Cu;
label_4eae7c:
    // 0x4eae7c: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4eae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4eae80:
    // 0x4eae80: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4eae80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4eae84:
    // 0x4eae84: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4eae84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4eae88:
    // 0x4eae88: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4eae88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4eae8c:
    // 0x4eae8c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4eae8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4eae90:
    // 0x4eae90: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4eae90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4eae94:
    // 0x4eae94: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4eae94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4eae98:
    // 0x4eae98: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4eae98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4eae9c:
    // 0x4eae9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4eae9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4eaea0:
    // 0x4eaea0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4eaea0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eaea4:
    // 0x4eaea4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4eaea4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eaea8:
    // 0x4eaea8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4eaea8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eaeac:
    // 0x4eaeac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eaeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eaeb0:
    // 0x4eaeb0: 0x3e00008  jr          $ra
label_4eaeb4:
    if (ctx->pc == 0x4EAEB4u) {
        ctx->pc = 0x4EAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAEB0u;
        // 0x4eaeb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAEB8u;
        goto label_fallthrough_0x4eaeb0;
    }
    ctx->pc = 0x4EAEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAEB0u;
        // 0x4eaeb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4eaeb0:
    ctx->pc = 0x4EAEB8u;
}
