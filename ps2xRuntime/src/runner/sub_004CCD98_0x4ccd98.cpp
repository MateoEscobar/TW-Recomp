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

// Function: sub_004CCD98
// Address: 0x4ccd98 - 0x4ccf58
void sub_004CCD98_0x4ccd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CCD98_0x4ccd98");
#endif

    switch (ctx->pc) {
        case 0x4ccd98u: goto label_4ccd98;
        case 0x4ccd9cu: goto label_4ccd9c;
        case 0x4ccda0u: goto label_4ccda0;
        case 0x4ccda4u: goto label_4ccda4;
        case 0x4ccda8u: goto label_4ccda8;
        case 0x4ccdacu: goto label_4ccdac;
        case 0x4ccdb0u: goto label_4ccdb0;
        case 0x4ccdb4u: goto label_4ccdb4;
        case 0x4ccdb8u: goto label_4ccdb8;
        case 0x4ccdbcu: goto label_4ccdbc;
        case 0x4ccdc0u: goto label_4ccdc0;
        case 0x4ccdc4u: goto label_4ccdc4;
        case 0x4ccdc8u: goto label_4ccdc8;
        case 0x4ccdccu: goto label_4ccdcc;
        case 0x4ccdd0u: goto label_4ccdd0;
        case 0x4ccdd4u: goto label_4ccdd4;
        case 0x4ccdd8u: goto label_4ccdd8;
        case 0x4ccddcu: goto label_4ccddc;
        case 0x4ccde0u: goto label_4ccde0;
        case 0x4ccde4u: goto label_4ccde4;
        case 0x4ccde8u: goto label_4ccde8;
        case 0x4ccdecu: goto label_4ccdec;
        case 0x4ccdf0u: goto label_4ccdf0;
        case 0x4ccdf4u: goto label_4ccdf4;
        case 0x4ccdf8u: goto label_4ccdf8;
        case 0x4ccdfcu: goto label_4ccdfc;
        case 0x4cce00u: goto label_4cce00;
        case 0x4cce04u: goto label_4cce04;
        case 0x4cce08u: goto label_4cce08;
        case 0x4cce0cu: goto label_4cce0c;
        case 0x4cce10u: goto label_4cce10;
        case 0x4cce14u: goto label_4cce14;
        case 0x4cce18u: goto label_4cce18;
        case 0x4cce1cu: goto label_4cce1c;
        case 0x4cce20u: goto label_4cce20;
        case 0x4cce24u: goto label_4cce24;
        case 0x4cce28u: goto label_4cce28;
        case 0x4cce2cu: goto label_4cce2c;
        case 0x4cce30u: goto label_4cce30;
        case 0x4cce34u: goto label_4cce34;
        case 0x4cce38u: goto label_4cce38;
        case 0x4cce3cu: goto label_4cce3c;
        case 0x4cce40u: goto label_4cce40;
        case 0x4cce44u: goto label_4cce44;
        case 0x4cce48u: goto label_4cce48;
        case 0x4cce4cu: goto label_4cce4c;
        case 0x4cce50u: goto label_4cce50;
        case 0x4cce54u: goto label_4cce54;
        case 0x4cce58u: goto label_4cce58;
        case 0x4cce5cu: goto label_4cce5c;
        case 0x4cce60u: goto label_4cce60;
        case 0x4cce64u: goto label_4cce64;
        case 0x4cce68u: goto label_4cce68;
        case 0x4cce6cu: goto label_4cce6c;
        case 0x4cce70u: goto label_4cce70;
        case 0x4cce74u: goto label_4cce74;
        case 0x4cce78u: goto label_4cce78;
        case 0x4cce7cu: goto label_4cce7c;
        case 0x4cce80u: goto label_4cce80;
        case 0x4cce84u: goto label_4cce84;
        case 0x4cce88u: goto label_4cce88;
        case 0x4cce8cu: goto label_4cce8c;
        case 0x4cce90u: goto label_4cce90;
        case 0x4cce94u: goto label_4cce94;
        case 0x4cce98u: goto label_4cce98;
        case 0x4cce9cu: goto label_4cce9c;
        case 0x4ccea0u: goto label_4ccea0;
        case 0x4ccea4u: goto label_4ccea4;
        case 0x4ccea8u: goto label_4ccea8;
        case 0x4cceacu: goto label_4cceac;
        case 0x4cceb0u: goto label_4cceb0;
        case 0x4cceb4u: goto label_4cceb4;
        case 0x4cceb8u: goto label_4cceb8;
        case 0x4ccebcu: goto label_4ccebc;
        case 0x4ccec0u: goto label_4ccec0;
        case 0x4ccec4u: goto label_4ccec4;
        case 0x4ccec8u: goto label_4ccec8;
        case 0x4cceccu: goto label_4ccecc;
        case 0x4cced0u: goto label_4cced0;
        case 0x4cced4u: goto label_4cced4;
        case 0x4cced8u: goto label_4cced8;
        case 0x4ccedcu: goto label_4ccedc;
        case 0x4ccee0u: goto label_4ccee0;
        case 0x4ccee4u: goto label_4ccee4;
        case 0x4ccee8u: goto label_4ccee8;
        case 0x4cceecu: goto label_4cceec;
        case 0x4ccef0u: goto label_4ccef0;
        case 0x4ccef4u: goto label_4ccef4;
        case 0x4ccef8u: goto label_4ccef8;
        case 0x4ccefcu: goto label_4ccefc;
        case 0x4ccf00u: goto label_4ccf00;
        case 0x4ccf04u: goto label_4ccf04;
        case 0x4ccf08u: goto label_4ccf08;
        case 0x4ccf0cu: goto label_4ccf0c;
        case 0x4ccf10u: goto label_4ccf10;
        case 0x4ccf14u: goto label_4ccf14;
        case 0x4ccf18u: goto label_4ccf18;
        case 0x4ccf1cu: goto label_4ccf1c;
        case 0x4ccf20u: goto label_4ccf20;
        case 0x4ccf24u: goto label_4ccf24;
        case 0x4ccf28u: goto label_4ccf28;
        case 0x4ccf2cu: goto label_4ccf2c;
        case 0x4ccf30u: goto label_4ccf30;
        case 0x4ccf34u: goto label_4ccf34;
        case 0x4ccf38u: goto label_4ccf38;
        case 0x4ccf3cu: goto label_4ccf3c;
        case 0x4ccf40u: goto label_4ccf40;
        case 0x4ccf44u: goto label_4ccf44;
        case 0x4ccf48u: goto label_4ccf48;
        case 0x4ccf4cu: goto label_4ccf4c;
        case 0x4ccf50u: goto label_4ccf50;
        case 0x4ccf54u: goto label_4ccf54;
        default: break;
    }

    ctx->pc = 0x4ccd98u;

label_4ccd98:
    // 0x4ccd98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ccd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4ccd9c:
    // 0x4ccd9c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4ccd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4ccda0:
    // 0x4ccda0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ccda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4ccda4:
    // 0x4ccda4: 0x8c623960  lw          $v0, 0x3960($v1)
    ctx->pc = 0x4ccda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14688)));
label_4ccda8:
    // 0x4ccda8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ccda8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ccdac:
    // 0x4ccdac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ccdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4ccdb0:
    // 0x4ccdb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ccdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4ccdb4:
    // 0x4ccdb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ccdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4ccdb8:
    // 0x4ccdb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ccdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4ccdbc:
    // 0x4ccdbc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ccdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4ccdc0:
    // 0x4ccdc0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ccdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4ccdc4:
    // 0x4ccdc4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4ccdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4ccdc8:
    // 0x4ccdc8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4ccdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_4ccdcc:
    // 0x4ccdcc: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_4ccdd0:
    if (ctx->pc == 0x4CCDD0u) {
        ctx->pc = 0x4CCDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCDCCu;
        // 0x4ccdd0: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCDD4u;
        goto label_4ccdd4;
    }
    ctx->pc = 0x4CCDCCu;
    {
        const bool branch_taken_0x4ccdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCDCCu;
        // 0x4ccdd0: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccdcc) {
            ctx->pc = 0x4CCF20u;
            goto label_4ccf20;
        }
    }
    ctx->pc = 0x4CCDD4u;
label_4ccdd4:
    // 0x4ccdd4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4ccdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4ccdd8:
    // 0x4ccdd8: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_4ccddc:
    if (ctx->pc == 0x4CCDDCu) {
        ctx->pc = 0x4CCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCDD8u;
        // 0x4ccddc: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCDE0u;
        goto label_4ccde0;
    }
    ctx->pc = 0x4CCDD8u;
    {
        const bool branch_taken_0x4ccdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCDD8u;
        // 0x4ccddc: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccdd8) {
            ctx->pc = 0x4CCF20u;
            goto label_4ccf20;
        }
    }
    ctx->pc = 0x4CCDE0u;
label_4ccde0:
    // 0x4ccde0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4ccde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4ccde4:
    // 0x4ccde4: 0x24734a88  addiu       $s3, $v1, 0x4A88
    ctx->pc = 0x4ccde4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 19080));
label_4ccde8:
    // 0x4ccde8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ccde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ccdec:
    // 0x4ccdec: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4ccdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4ccdf0:
    // 0x4ccdf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4ccdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ccdf4:
    // 0x4ccdf4: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
label_4ccdf8:
    if (ctx->pc == 0x4CCDF8u) {
        ctx->pc = 0x4CCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCDF4u;
        // 0x4ccdf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCDFCu;
        goto label_4ccdfc;
    }
    ctx->pc = 0x4CCDF4u;
    {
        const bool branch_taken_0x4ccdf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCDF4u;
        // 0x4ccdf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccdf4) {
            ctx->pc = 0x4CCF24u;
            goto label_4ccf24;
        }
    }
    ctx->pc = 0x4CCDFCu;
label_4ccdfc:
    // 0x4ccdfc: 0xc110cb0  jal         func_4432C0
label_4cce00:
    if (ctx->pc == 0x4CCE00u) {
        ctx->pc = 0x4CCE04u;
        goto label_4cce04;
    }
    ctx->pc = 0x4CCDFCu;
    SET_GPR_U32(ctx, 31, 0x4CCE04u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CCDFCu, 0x4CCE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCE04u;
label_4cce04:
    // 0x4cce04: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x4cce04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_4cce08:
    // 0x4cce08: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4cce08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4cce0c:
    // 0x4cce0c: 0x24e74748  addiu       $a3, $a3, 0x4748
    ctx->pc = 0x4cce0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18248));
label_4cce10:
    // 0x4cce10: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cce10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cce14:
    // 0x4cce14: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x4cce14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_4cce18:
    // 0x4cce18: 0x24e6001c  addiu       $a2, $a3, 0x1C
    ctx->pc = 0x4cce18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
label_4cce1c:
    // 0x4cce1c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x4cce1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4cce20:
    // 0x4cce20: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4cce20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cce24:
    // 0x4cce24: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4cce24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4cce28:
    // 0x4cce28: 0x24634788  addiu       $v1, $v1, 0x4788
    ctx->pc = 0x4cce28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18312));
label_4cce2c:
    // 0x4cce2c: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x4cce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
label_4cce30:
    // 0x4cce30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4cce30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4cce34:
    // 0x4cce34: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x4cce34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_4cce38:
    // 0x4cce38: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x4cce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_4cce3c:
    // 0x4cce3c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4cce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4cce40:
    // 0x4cce40: 0x2cb10001  sltiu       $s1, $a1, 0x1
    ctx->pc = 0x4cce40u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4cce44:
    // 0x4cce44: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x4cce44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_4cce48:
    // 0x4cce48: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x4cce48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
label_4cce4c:
    // 0x4cce4c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x4cce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4cce50:
    // 0x4cce50: 0xac700018  sw          $s0, 0x18($v1)
    ctx->pc = 0x4cce50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 16));
label_4cce54:
    // 0x4cce54: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x4cce54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_4cce58:
    // 0x4cce58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4cce5c:
    if (ctx->pc == 0x4CCE5Cu) {
        ctx->pc = 0x4CCE60u;
        goto label_4cce60;
    }
    ctx->pc = 0x4CCE58u;
    {
        const bool branch_taken_0x4cce58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cce58) {
            ctx->pc = 0x4CCE68u;
            goto label_4cce68;
        }
    }
    ctx->pc = 0x4CCE60u;
label_4cce60:
    // 0x4cce60: 0xc110cc4  jal         func_443310
label_4cce64:
    if (ctx->pc == 0x4CCE64u) {
        ctx->pc = 0x4CCE68u;
        goto label_4cce68;
    }
    ctx->pc = 0x4CCE60u;
    SET_GPR_U32(ctx, 31, 0x4CCE68u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CCE60u, 0x4CCE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCE68u;
label_4cce68:
    // 0x4cce68: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
label_4cce6c:
    if (ctx->pc == 0x4CCE6Cu) {
        ctx->pc = 0x4CCE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCE68u;
        // 0x4cce6c: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCE70u;
        goto label_4cce70;
    }
    ctx->pc = 0x4CCE68u;
    {
        const bool branch_taken_0x4cce68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCE68u;
        // 0x4cce6c: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cce68) {
            ctx->pc = 0x4CCF18u;
            goto label_4ccf18;
        }
    }
    ctx->pc = 0x4CCE70u;
label_4cce70:
    // 0x4cce70: 0x3c1e0071  lui         $fp, 0x71
    ctx->pc = 0x4cce70u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
label_4cce74:
    // 0x4cce74: 0x26514500  addiu       $s1, $s2, 0x4500
    ctx->pc = 0x4cce74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 17664));
label_4cce78:
    // 0x4cce78: 0x3c170053  lui         $s7, 0x53
    ctx->pc = 0x4cce78u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)83 << 16));
label_4cce7c:
    // 0x4cce7c: 0x3c160071  lui         $s6, 0x71
    ctx->pc = 0x4cce7cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)113 << 16));
label_4cce80:
    // 0x4cce80: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x4cce80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4cce84:
    // 0x4cce84: 0x3c140044  lui         $s4, 0x44
    ctx->pc = 0x4cce84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)68 << 16));
label_4cce88:
    // 0x4cce88: 0x3c130044  lui         $s3, 0x44
    ctx->pc = 0x4cce88u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)68 << 16));
label_4cce8c:
    // 0x4cce8c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4cce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4cce90:
    // 0x4cce90: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x4cce90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_4cce94:
    // 0x4cce94: 0x24a54a88  addiu       $a1, $a1, 0x4A88
    ctx->pc = 0x4cce94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19080));
label_4cce98:
    // 0x4cce98: 0x8fc346ac  lw          $v1, 0x46AC($fp)
    ctx->pc = 0x4cce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18092)));
label_4cce9c:
    // 0x4cce9c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4cce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4ccea0:
    // 0x4ccea0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4ccea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4ccea4:
    // 0x4ccea4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_4ccea8:
    if (ctx->pc == 0x4CCEA8u) {
        ctx->pc = 0x4CCEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCEA4u;
        // 0x4ccea8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCEACu;
        goto label_4cceac;
    }
    ctx->pc = 0x4CCEA4u;
    {
        const bool branch_taken_0x4ccea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CCEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCEA4u;
        // 0x4ccea8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccea4) {
            ctx->pc = 0x4CCECCu;
            goto label_4ccecc;
        }
    }
    ctx->pc = 0x4CCEACu;
label_4cceac:
    // 0x4cceac: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cceacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cceb0:
    // 0x4cceb0: 0x8c6246ac  lw          $v0, 0x46AC($v1)
    ctx->pc = 0x4cceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18092)));
label_4cceb4:
    // 0x4cceb4: 0x0  nop
    ctx->pc = 0x4cceb4u;
    // NOP
label_4cceb8:
    // 0x4cceb8: 0x0  nop
    ctx->pc = 0x4cceb8u;
    // NOP
label_4ccebc:
    // 0x4ccebc: 0x0  nop
    ctx->pc = 0x4ccebcu;
    // NOP
label_4ccec0:
    // 0x4ccec0: 0x0  nop
    ctx->pc = 0x4ccec0u;
    // NOP
label_4ccec4:
    // 0x4ccec4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_4ccec8:
    if (ctx->pc == 0x4CCEC8u) {
        ctx->pc = 0x4CCECCu;
        goto label_4ccecc;
    }
    ctx->pc = 0x4CCEC4u;
    {
        const bool branch_taken_0x4ccec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ccec4) {
            ctx->pc = 0x4CCEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cceb0;
        }
    }
    ctx->pc = 0x4CCECCu;
label_4ccecc:
    // 0x4ccecc: 0x8ee23968  lw          $v0, 0x3968($s7)
    ctx->pc = 0x4cceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 14696)));
label_4cced0:
    // 0x4cced0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cced0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cced4:
    // 0x4cced4: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x4cced4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
label_4cced8:
    // 0x4cced8: 0xae250018  sw          $a1, 0x18($s1)
    ctx->pc = 0x4cced8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 5));
label_4ccedc:
    // 0x4ccedc: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x4ccedcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
label_4ccee0:
    // 0x4ccee0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4ccee4:
    if (ctx->pc == 0x4CCEE4u) {
        ctx->pc = 0x4CCEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCEE0u;
        // 0x4ccee4: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCEE8u;
        goto label_4ccee8;
    }
    ctx->pc = 0x4CCEE0u;
    {
        const bool branch_taken_0x4ccee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCEE0u;
        // 0x4ccee4: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccee0) {
            ctx->pc = 0x4CCEF0u;
            goto label_4ccef0;
        }
    }
    ctx->pc = 0x4CCEE8u;
label_4ccee8:
    // 0x4ccee8: 0x10000002  b           . + 4 + (0x2 << 2)
label_4cceec:
    if (ctx->pc == 0x4CCEECu) {
        ctx->pc = 0x4CCEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCEE8u;
        // 0x4cceec: 0x2682fed8  addiu       $v0, $s4, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCEF0u;
        goto label_4ccef0;
    }
    ctx->pc = 0x4CCEE8u;
    {
        const bool branch_taken_0x4ccee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCEE8u;
        // 0x4cceec: 0x2682fed8  addiu       $v0, $s4, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccee8) {
            ctx->pc = 0x4CCEF4u;
            goto label_4ccef4;
        }
    }
    ctx->pc = 0x4CCEF0u;
label_4ccef0:
    // 0x4ccef0: 0x2662fe98  addiu       $v0, $s3, -0x168
    ctx->pc = 0x4ccef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966936));
label_4ccef4:
    // 0x4ccef4: 0x8ec446a0  lw          $a0, 0x46A0($s6)
    ctx->pc = 0x4ccef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18080)));
label_4ccef8:
    // 0x4ccef8: 0x26454500  addiu       $a1, $s2, 0x4500
    ctx->pc = 0x4ccef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 17664));
label_4ccefc:
    // 0x4ccefc: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x4ccefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4ccf00:
    // 0x4ccf00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ccf00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ccf04:
    // 0x4ccf04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ccf04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ccf08:
    // 0x4ccf08: 0x40f809  jalr        $v0
label_4ccf0c:
    if (ctx->pc == 0x4CCF0Cu) {
        ctx->pc = 0x4CCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCF08u;
        // 0x4ccf0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCF10u;
        goto label_4ccf10;
    }
    ctx->pc = 0x4CCF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4CCF10u);
        ctx->pc = 0x4CCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCF08u;
        // 0x4ccf0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CCF08u, 0x4CCF10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CCF10u;
label_4ccf10:
    // 0x4ccf10: 0x5040ffdf  beql        $v0, $zero, . + 4 + (-0x21 << 2)
label_4ccf14:
    if (ctx->pc == 0x4CCF14u) {
        ctx->pc = 0x4CCF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCF10u;
        // 0x4ccf14: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCF18u;
        goto label_4ccf18;
    }
    ctx->pc = 0x4CCF10u;
    {
        const bool branch_taken_0x4ccf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ccf10) {
            ctx->pc = 0x4CCF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CCF10u;
            // 0x4ccf14: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CCE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cce90;
        }
    }
    ctx->pc = 0x4CCF18u;
label_4ccf18:
    // 0x4ccf18: 0x10000002  b           . + 4 + (0x2 << 2)
label_4ccf1c:
    if (ctx->pc == 0x4CCF1Cu) {
        ctx->pc = 0x4CCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCF18u;
        // 0x4ccf1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCF20u;
        goto label_4ccf20;
    }
    ctx->pc = 0x4CCF18u;
    {
        const bool branch_taken_0x4ccf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCF18u;
        // 0x4ccf1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccf18) {
            ctx->pc = 0x4CCF24u;
            goto label_4ccf24;
        }
    }
    ctx->pc = 0x4CCF20u;
label_4ccf20:
    // 0x4ccf20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ccf20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ccf24:
    // 0x4ccf24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ccf24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ccf28:
    // 0x4ccf28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ccf28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4ccf2c:
    // 0x4ccf2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ccf2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ccf30:
    // 0x4ccf30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ccf30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4ccf34:
    // 0x4ccf34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ccf34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ccf38:
    // 0x4ccf38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ccf38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4ccf3c:
    // 0x4ccf3c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ccf3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4ccf40:
    // 0x4ccf40: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ccf40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4ccf44:
    // 0x4ccf44: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4ccf44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ccf48:
    // 0x4ccf48: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4ccf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4ccf4c:
    // 0x4ccf4c: 0x3e00008  jr          $ra
label_4ccf50:
    if (ctx->pc == 0x4CCF50u) {
        ctx->pc = 0x4CCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCF4Cu;
        // 0x4ccf50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCF54u;
        goto label_4ccf54;
    }
    ctx->pc = 0x4CCF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCF4Cu;
        // 0x4ccf50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CCF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CCF54u;
label_4ccf54:
    // 0x4ccf54: 0x0  nop
    ctx->pc = 0x4ccf54u;
    // NOP
    ctx->pc = 0x4ccf58u;
}
