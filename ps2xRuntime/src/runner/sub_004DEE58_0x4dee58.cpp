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

// Function: sub_004DEE58
// Address: 0x4dee58 - 0x4df008
void sub_004DEE58_0x4dee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DEE58_0x4dee58");
#endif

    switch (ctx->pc) {
        case 0x4dee58u: goto label_4dee58;
        case 0x4dee5cu: goto label_4dee5c;
        case 0x4dee60u: goto label_4dee60;
        case 0x4dee64u: goto label_4dee64;
        case 0x4dee68u: goto label_4dee68;
        case 0x4dee6cu: goto label_4dee6c;
        case 0x4dee70u: goto label_4dee70;
        case 0x4dee74u: goto label_4dee74;
        case 0x4dee78u: goto label_4dee78;
        case 0x4dee7cu: goto label_4dee7c;
        case 0x4dee80u: goto label_4dee80;
        case 0x4dee84u: goto label_4dee84;
        case 0x4dee88u: goto label_4dee88;
        case 0x4dee8cu: goto label_4dee8c;
        case 0x4dee90u: goto label_4dee90;
        case 0x4dee94u: goto label_4dee94;
        case 0x4dee98u: goto label_4dee98;
        case 0x4dee9cu: goto label_4dee9c;
        case 0x4deea0u: goto label_4deea0;
        case 0x4deea4u: goto label_4deea4;
        case 0x4deea8u: goto label_4deea8;
        case 0x4deeacu: goto label_4deeac;
        case 0x4deeb0u: goto label_4deeb0;
        case 0x4deeb4u: goto label_4deeb4;
        case 0x4deeb8u: goto label_4deeb8;
        case 0x4deebcu: goto label_4deebc;
        case 0x4deec0u: goto label_4deec0;
        case 0x4deec4u: goto label_4deec4;
        case 0x4deec8u: goto label_4deec8;
        case 0x4deeccu: goto label_4deecc;
        case 0x4deed0u: goto label_4deed0;
        case 0x4deed4u: goto label_4deed4;
        case 0x4deed8u: goto label_4deed8;
        case 0x4deedcu: goto label_4deedc;
        case 0x4deee0u: goto label_4deee0;
        case 0x4deee4u: goto label_4deee4;
        case 0x4deee8u: goto label_4deee8;
        case 0x4deeecu: goto label_4deeec;
        case 0x4deef0u: goto label_4deef0;
        case 0x4deef4u: goto label_4deef4;
        case 0x4deef8u: goto label_4deef8;
        case 0x4deefcu: goto label_4deefc;
        case 0x4def00u: goto label_4def00;
        case 0x4def04u: goto label_4def04;
        case 0x4def08u: goto label_4def08;
        case 0x4def0cu: goto label_4def0c;
        case 0x4def10u: goto label_4def10;
        case 0x4def14u: goto label_4def14;
        case 0x4def18u: goto label_4def18;
        case 0x4def1cu: goto label_4def1c;
        case 0x4def20u: goto label_4def20;
        case 0x4def24u: goto label_4def24;
        case 0x4def28u: goto label_4def28;
        case 0x4def2cu: goto label_4def2c;
        case 0x4def30u: goto label_4def30;
        case 0x4def34u: goto label_4def34;
        case 0x4def38u: goto label_4def38;
        case 0x4def3cu: goto label_4def3c;
        case 0x4def40u: goto label_4def40;
        case 0x4def44u: goto label_4def44;
        case 0x4def48u: goto label_4def48;
        case 0x4def4cu: goto label_4def4c;
        case 0x4def50u: goto label_4def50;
        case 0x4def54u: goto label_4def54;
        case 0x4def58u: goto label_4def58;
        case 0x4def5cu: goto label_4def5c;
        case 0x4def60u: goto label_4def60;
        case 0x4def64u: goto label_4def64;
        case 0x4def68u: goto label_4def68;
        case 0x4def6cu: goto label_4def6c;
        case 0x4def70u: goto label_4def70;
        case 0x4def74u: goto label_4def74;
        case 0x4def78u: goto label_4def78;
        case 0x4def7cu: goto label_4def7c;
        case 0x4def80u: goto label_4def80;
        case 0x4def84u: goto label_4def84;
        case 0x4def88u: goto label_4def88;
        case 0x4def8cu: goto label_4def8c;
        case 0x4def90u: goto label_4def90;
        case 0x4def94u: goto label_4def94;
        case 0x4def98u: goto label_4def98;
        case 0x4def9cu: goto label_4def9c;
        case 0x4defa0u: goto label_4defa0;
        case 0x4defa4u: goto label_4defa4;
        case 0x4defa8u: goto label_4defa8;
        case 0x4defacu: goto label_4defac;
        case 0x4defb0u: goto label_4defb0;
        case 0x4defb4u: goto label_4defb4;
        case 0x4defb8u: goto label_4defb8;
        case 0x4defbcu: goto label_4defbc;
        case 0x4defc0u: goto label_4defc0;
        case 0x4defc4u: goto label_4defc4;
        case 0x4defc8u: goto label_4defc8;
        case 0x4defccu: goto label_4defcc;
        case 0x4defd0u: goto label_4defd0;
        case 0x4defd4u: goto label_4defd4;
        case 0x4defd8u: goto label_4defd8;
        case 0x4defdcu: goto label_4defdc;
        case 0x4defe0u: goto label_4defe0;
        case 0x4defe4u: goto label_4defe4;
        case 0x4defe8u: goto label_4defe8;
        case 0x4defecu: goto label_4defec;
        case 0x4deff0u: goto label_4deff0;
        case 0x4deff4u: goto label_4deff4;
        case 0x4deff8u: goto label_4deff8;
        case 0x4deffcu: goto label_4deffc;
        case 0x4df000u: goto label_4df000;
        case 0x4df004u: goto label_4df004;
        default: break;
    }

    ctx->pc = 0x4dee58u;

label_4dee58:
    // 0x4dee58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4dee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4dee5c:
    // 0x4dee5c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4dee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4dee60:
    // 0x4dee60: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4dee60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4dee64:
    // 0x4dee64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dee64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dee68:
    // 0x4dee68: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4dee68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4dee6c:
    // 0x4dee6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4dee6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dee70:
    // 0x4dee70: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4dee70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4dee74:
    // 0x4dee74: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4dee74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4dee78:
    // 0x4dee78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4dee78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4dee7c:
    // 0x4dee7c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4dee7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4dee80:
    // 0x4dee80: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4dee80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4dee84:
    // 0x4dee84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dee88:
    // 0x4dee88: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4dee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4dee8c:
    // 0x4dee8c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4dee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4dee90:
    // 0x4dee90: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4dee94:
    if (ctx->pc == 0x4DEE94u) {
        ctx->pc = 0x4DEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEE90u;
        // 0x4dee94: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEE98u;
        goto label_4dee98;
    }
    ctx->pc = 0x4DEE90u;
    {
        const bool branch_taken_0x4dee90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEE90u;
        // 0x4dee94: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dee90) {
            ctx->pc = 0x4DEEDCu;
            goto label_4deedc;
        }
    }
    ctx->pc = 0x4DEE98u;
label_4dee98:
    // 0x4dee98: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4dee9c:
    if (ctx->pc == 0x4DEE9Cu) {
        ctx->pc = 0x4DEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEE98u;
        // 0x4dee9c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEEA0u;
        goto label_4deea0;
    }
    ctx->pc = 0x4DEE98u;
    {
        const bool branch_taken_0x4dee98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dee98) {
            ctx->pc = 0x4DEE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DEE98u;
            // 0x4dee9c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DEEACu;
            goto label_4deeac;
        }
    }
    ctx->pc = 0x4DEEA0u;
label_4deea0:
    // 0x4deea0: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4deea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4deea4:
    // 0x4deea4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4deea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4deea8:
    // 0x4deea8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4deea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4deeac:
    // 0x4deeac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4deeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4deeb0:
    // 0x4deeb0: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4deeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4deeb4:
    // 0x4deeb4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4deeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4deeb8:
    // 0x4deeb8: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4deeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4deebc:
    // 0x4deebc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4deebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4deec0:
    // 0x4deec0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4deec0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4deec4:
    // 0x4deec4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4deec4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4deec8:
    // 0x4deec8: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4deec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4deecc:
    // 0x4deecc: 0xc10c1bb  jal         func_4306EC
label_4deed0:
    if (ctx->pc == 0x4DEED0u) {
        ctx->pc = 0x4DEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEECCu;
        // 0x4deed0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEED4u;
        goto label_4deed4;
    }
    ctx->pc = 0x4DEECCu;
    SET_GPR_U32(ctx, 31, 0x4DEED4u);
    ctx->pc = 0x4DEED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DEECCu;
    // 0x4deed0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DEECCu, 0x4DEED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEED4u;
label_4deed4:
    // 0x4deed4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4deed8:
    if (ctx->pc == 0x4DEED8u) {
        ctx->pc = 0x4DEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEED4u;
        // 0x4deed8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEEDCu;
        goto label_4deedc;
    }
    ctx->pc = 0x4DEED4u;
    {
        const bool branch_taken_0x4deed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEED4u;
        // 0x4deed8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4deed4) {
            ctx->pc = 0x4DEFCCu;
            goto label_4defcc;
        }
    }
    ctx->pc = 0x4DEEDCu;
label_4deedc:
    // 0x4deedc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4deedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4deee0:
    // 0x4deee0: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4deee0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4deee4:
    // 0x4deee4: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4deee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4deee8:
    // 0x4deee8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4deee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4deeec:
    // 0x4deeec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4deeecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4deef0:
    // 0x4deef0: 0x24962278  addiu       $s6, $a0, 0x2278
    ctx->pc = 0x4deef0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8824));
label_4deef4:
    // 0x4deef4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4deef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4deef8:
    // 0x4deef8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4deef8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4deefc:
    // 0x4deefc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4deefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4def00:
    // 0x4def00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4def00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4def04:
    // 0x4def04: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4def04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4def08:
    // 0x4def08: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4def08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4def0c:
    // 0x4def0c: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4def0cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4def10:
    // 0x4def10: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4def10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4def14:
    // 0x4def14: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4def14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4def18:
    // 0x4def18: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4def18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4def1c:
    // 0x4def1c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4def1cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4def20:
    // 0x4def20: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4def20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4def24:
    // 0x4def24: 0x24a522f0  addiu       $a1, $a1, 0x22F0
    ctx->pc = 0x4def24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8944));
label_4def28:
    // 0x4def28: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4def28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4def2c:
    // 0x4def2c: 0x254a22f8  addiu       $t2, $t2, 0x22F8
    ctx->pc = 0x4def2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8952));
label_4def30:
    // 0x4def30: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4def30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4def34:
    // 0x4def34: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4def34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4def38:
    // 0x4def38: 0x40f809  jalr        $v0
label_4def3c:
    if (ctx->pc == 0x4DEF3Cu) {
        ctx->pc = 0x4DEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEF38u;
        // 0x4def3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEF40u;
        goto label_4def40;
    }
    ctx->pc = 0x4DEF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DEF40u);
        ctx->pc = 0x4DEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEF38u;
        // 0x4def3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEF38u, 0x4DEF40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DEF40u;
label_4def40:
    // 0x4def40: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4def40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4def44:
    // 0x4def44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4def44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4def48:
    // 0x4def48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4def48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4def4c:
    // 0x4def4c: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4def4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4def50:
    // 0x4def50: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4def50u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4def54:
    // 0x4def54: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4def54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4def58:
    // 0x4def58: 0xc10c1bb  jal         func_4306EC
label_4def5c:
    if (ctx->pc == 0x4DEF5Cu) {
        ctx->pc = 0x4DEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEF58u;
        // 0x4def5c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEF60u;
        goto label_4def60;
    }
    ctx->pc = 0x4DEF58u;
    SET_GPR_U32(ctx, 31, 0x4DEF60u);
    ctx->pc = 0x4DEF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DEF58u;
    // 0x4def5c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DEF58u, 0x4DEF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEF60u;
label_4def60:
    // 0x4def60: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4def64:
    if (ctx->pc == 0x4DEF64u) {
        ctx->pc = 0x4DEF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEF60u;
        // 0x4def64: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEF68u;
        goto label_4def68;
    }
    ctx->pc = 0x4DEF60u;
    {
        const bool branch_taken_0x4def60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4def60) {
            ctx->pc = 0x4DEF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DEF60u;
            // 0x4def64: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DEF74u;
            goto label_4def74;
        }
    }
    ctx->pc = 0x4DEF68u;
label_4def68:
    // 0x4def68: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4def68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4def6c:
    // 0x4def6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4def6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4def70:
    // 0x4def70: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4def70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4def74:
    // 0x4def74: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4def74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4def78:
    // 0x4def78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4def78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4def7c:
    // 0x4def7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4def7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4def80:
    // 0x4def80: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4def80u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4def84:
    // 0x4def84: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4def84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4def88:
    // 0x4def88: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4def88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4def8c:
    // 0x4def8c: 0xc10c1bb  jal         func_4306EC
label_4def90:
    if (ctx->pc == 0x4DEF90u) {
        ctx->pc = 0x4DEF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEF8Cu;
        // 0x4def90: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEF94u;
        goto label_4def94;
    }
    ctx->pc = 0x4DEF8Cu;
    SET_GPR_U32(ctx, 31, 0x4DEF94u);
    ctx->pc = 0x4DEF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DEF8Cu;
    // 0x4def90: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DEF8Cu, 0x4DEF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEF94u;
label_4def94:
    // 0x4def94: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4def94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4def98:
    // 0x4def98: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4def9c:
    if (ctx->pc == 0x4DEF9Cu) {
        ctx->pc = 0x4DEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEF98u;
        // 0x4def9c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEFA0u;
        goto label_4defa0;
    }
    ctx->pc = 0x4DEF98u;
    {
        const bool branch_taken_0x4def98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEF98u;
        // 0x4def9c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4def98) {
            ctx->pc = 0x4DEFBCu;
            goto label_4defbc;
        }
    }
    ctx->pc = 0x4DEFA0u;
label_4defa0:
    // 0x4defa0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4defa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4defa4:
    // 0x4defa4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4defa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4defa8:
    // 0x4defa8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4defa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4defac:
    // 0x4defac: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4defacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4defb0:
    // 0x4defb0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4defb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4defb4:
    // 0x4defb4: 0x60f809  jalr        $v1
label_4defb8:
    if (ctx->pc == 0x4DEFB8u) {
        ctx->pc = 0x4DEFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEFB4u;
        // 0x4defb8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEFBCu;
        goto label_4defbc;
    }
    ctx->pc = 0x4DEFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DEFBCu);
        ctx->pc = 0x4DEFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEFB4u;
        // 0x4defb8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEFB4u, 0x4DEFBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DEFBCu;
label_4defbc:
    // 0x4defbc: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4defbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4defc0:
    // 0x4defc0: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4defc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4defc4:
    // 0x4defc4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4defc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4defc8:
    // 0x4defc8: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4defc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4defcc:
    // 0x4defcc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4defccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4defd0:
    // 0x4defd0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4defd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4defd4:
    // 0x4defd4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4defd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4defd8:
    // 0x4defd8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4defd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4defdc:
    // 0x4defdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4defdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4defe0:
    // 0x4defe0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4defe0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4defe4:
    // 0x4defe4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4defe4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4defe8:
    // 0x4defe8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4defe8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4defec:
    // 0x4defec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4defecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4deff0:
    // 0x4deff0: 0x3e00008  jr          $ra
label_4deff4:
    if (ctx->pc == 0x4DEFF4u) {
        ctx->pc = 0x4DEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEFF0u;
        // 0x4deff4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEFF8u;
        goto label_4deff8;
    }
    ctx->pc = 0x4DEFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEFF0u;
        // 0x4deff4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DEFF8u;
label_4deff8:
    // 0x4deff8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4deff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4deffc:
    // 0x4deffc: 0x0  nop
    ctx->pc = 0x4deffcu;
    // NOP
label_4df000:
    // 0x4df000: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4df000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4df004:
    // 0x4df004: 0x0  nop
    ctx->pc = 0x4df004u;
    // NOP
    ctx->pc = 0x4df008u;
}
