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

// Function: sub_003ECDC8
// Address: 0x3ecdc8 - 0x3ecf78
void sub_003ECDC8_0x3ecdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ECDC8_0x3ecdc8");
#endif

    switch (ctx->pc) {
        case 0x3ecdc8u: goto label_3ecdc8;
        case 0x3ecdccu: goto label_3ecdcc;
        case 0x3ecdd0u: goto label_3ecdd0;
        case 0x3ecdd4u: goto label_3ecdd4;
        case 0x3ecdd8u: goto label_3ecdd8;
        case 0x3ecddcu: goto label_3ecddc;
        case 0x3ecde0u: goto label_3ecde0;
        case 0x3ecde4u: goto label_3ecde4;
        case 0x3ecde8u: goto label_3ecde8;
        case 0x3ecdecu: goto label_3ecdec;
        case 0x3ecdf0u: goto label_3ecdf0;
        case 0x3ecdf4u: goto label_3ecdf4;
        case 0x3ecdf8u: goto label_3ecdf8;
        case 0x3ecdfcu: goto label_3ecdfc;
        case 0x3ece00u: goto label_3ece00;
        case 0x3ece04u: goto label_3ece04;
        case 0x3ece08u: goto label_3ece08;
        case 0x3ece0cu: goto label_3ece0c;
        case 0x3ece10u: goto label_3ece10;
        case 0x3ece14u: goto label_3ece14;
        case 0x3ece18u: goto label_3ece18;
        case 0x3ece1cu: goto label_3ece1c;
        case 0x3ece20u: goto label_3ece20;
        case 0x3ece24u: goto label_3ece24;
        case 0x3ece28u: goto label_3ece28;
        case 0x3ece2cu: goto label_3ece2c;
        case 0x3ece30u: goto label_3ece30;
        case 0x3ece34u: goto label_3ece34;
        case 0x3ece38u: goto label_3ece38;
        case 0x3ece3cu: goto label_3ece3c;
        case 0x3ece40u: goto label_3ece40;
        case 0x3ece44u: goto label_3ece44;
        case 0x3ece48u: goto label_3ece48;
        case 0x3ece4cu: goto label_3ece4c;
        case 0x3ece50u: goto label_3ece50;
        case 0x3ece54u: goto label_3ece54;
        case 0x3ece58u: goto label_3ece58;
        case 0x3ece5cu: goto label_3ece5c;
        case 0x3ece60u: goto label_3ece60;
        case 0x3ece64u: goto label_3ece64;
        case 0x3ece68u: goto label_3ece68;
        case 0x3ece6cu: goto label_3ece6c;
        case 0x3ece70u: goto label_3ece70;
        case 0x3ece74u: goto label_3ece74;
        case 0x3ece78u: goto label_3ece78;
        case 0x3ece7cu: goto label_3ece7c;
        case 0x3ece80u: goto label_3ece80;
        case 0x3ece84u: goto label_3ece84;
        case 0x3ece88u: goto label_3ece88;
        case 0x3ece8cu: goto label_3ece8c;
        case 0x3ece90u: goto label_3ece90;
        case 0x3ece94u: goto label_3ece94;
        case 0x3ece98u: goto label_3ece98;
        case 0x3ece9cu: goto label_3ece9c;
        case 0x3ecea0u: goto label_3ecea0;
        case 0x3ecea4u: goto label_3ecea4;
        case 0x3ecea8u: goto label_3ecea8;
        case 0x3eceacu: goto label_3eceac;
        case 0x3eceb0u: goto label_3eceb0;
        case 0x3eceb4u: goto label_3eceb4;
        case 0x3eceb8u: goto label_3eceb8;
        case 0x3ecebcu: goto label_3ecebc;
        case 0x3ecec0u: goto label_3ecec0;
        case 0x3ecec4u: goto label_3ecec4;
        case 0x3ecec8u: goto label_3ecec8;
        case 0x3ececcu: goto label_3ececc;
        case 0x3eced0u: goto label_3eced0;
        case 0x3eced4u: goto label_3eced4;
        case 0x3eced8u: goto label_3eced8;
        case 0x3ecedcu: goto label_3ecedc;
        case 0x3ecee0u: goto label_3ecee0;
        case 0x3ecee4u: goto label_3ecee4;
        case 0x3ecee8u: goto label_3ecee8;
        case 0x3eceecu: goto label_3eceec;
        case 0x3ecef0u: goto label_3ecef0;
        case 0x3ecef4u: goto label_3ecef4;
        case 0x3ecef8u: goto label_3ecef8;
        case 0x3ecefcu: goto label_3ecefc;
        case 0x3ecf00u: goto label_3ecf00;
        case 0x3ecf04u: goto label_3ecf04;
        case 0x3ecf08u: goto label_3ecf08;
        case 0x3ecf0cu: goto label_3ecf0c;
        case 0x3ecf10u: goto label_3ecf10;
        case 0x3ecf14u: goto label_3ecf14;
        case 0x3ecf18u: goto label_3ecf18;
        case 0x3ecf1cu: goto label_3ecf1c;
        case 0x3ecf20u: goto label_3ecf20;
        case 0x3ecf24u: goto label_3ecf24;
        case 0x3ecf28u: goto label_3ecf28;
        case 0x3ecf2cu: goto label_3ecf2c;
        case 0x3ecf30u: goto label_3ecf30;
        case 0x3ecf34u: goto label_3ecf34;
        case 0x3ecf38u: goto label_3ecf38;
        case 0x3ecf3cu: goto label_3ecf3c;
        case 0x3ecf40u: goto label_3ecf40;
        case 0x3ecf44u: goto label_3ecf44;
        case 0x3ecf48u: goto label_3ecf48;
        case 0x3ecf4cu: goto label_3ecf4c;
        case 0x3ecf50u: goto label_3ecf50;
        case 0x3ecf54u: goto label_3ecf54;
        case 0x3ecf58u: goto label_3ecf58;
        case 0x3ecf5cu: goto label_3ecf5c;
        case 0x3ecf60u: goto label_3ecf60;
        case 0x3ecf64u: goto label_3ecf64;
        case 0x3ecf68u: goto label_3ecf68;
        case 0x3ecf6cu: goto label_3ecf6c;
        case 0x3ecf70u: goto label_3ecf70;
        case 0x3ecf74u: goto label_3ecf74;
        default: break;
    }

    ctx->pc = 0x3ecdc8u;

label_3ecdc8:
    // 0x3ecdc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ecdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3ecdcc:
    // 0x3ecdcc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3ecdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3ecdd0:
    // 0x3ecdd0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3ecdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3ecdd4:
    // 0x3ecdd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ecdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ecdd8:
    // 0x3ecdd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ecdd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ecddc:
    // 0x3ecddc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ecddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ecde0:
    // 0x3ecde0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ecde0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ecde4:
    // 0x3ecde4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ecde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ecde8:
    // 0x3ecde8: 0x40f809  jalr        $v0
label_3ecdec:
    if (ctx->pc == 0x3ECDECu) {
        ctx->pc = 0x3ECDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECDE8u;
        // 0x3ecdec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECDF0u;
        goto label_3ecdf0;
    }
    ctx->pc = 0x3ECDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ECDF0u);
        ctx->pc = 0x3ECDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECDE8u;
        // 0x3ecdec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECDE8u, 0x3ECDF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ECDF0u;
label_3ecdf0:
    // 0x3ecdf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ecdf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ecdf4:
    // 0x3ecdf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ecdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ecdf8:
    // 0x3ecdf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ecdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ecdfc:
    // 0x3ecdfc: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_3ece00:
    if (ctx->pc == 0x3ECE00u) {
        ctx->pc = 0x3ECE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECDFCu;
        // 0x3ece00: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECE04u;
        goto label_3ece04;
    }
    ctx->pc = 0x3ECDFCu;
    {
        const bool branch_taken_0x3ecdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3ECE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECDFCu;
        // 0x3ece00: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecdfc) {
            ctx->pc = 0x3ECE78u;
            goto label_3ece78;
        }
    }
    ctx->pc = 0x3ECE04u;
label_3ece04:
    // 0x3ece04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ece04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ece08:
    // 0x3ece08: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x3ece08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3ece0c:
    // 0x3ece0c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x3ece0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_3ece10:
    // 0x3ece10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3ece10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ece14:
    // 0x3ece14: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3ece14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3ece18:
    // 0x3ece18: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x3ece18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3ece1c:
    // 0x3ece1c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3ece1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3ece20:
    // 0x3ece20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3ece20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ece24:
    // 0x3ece24: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
label_3ece28:
    if (ctx->pc == 0x3ECE28u) {
        ctx->pc = 0x3ECE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE24u;
        // 0x3ece28: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECE2Cu;
        goto label_3ece2c;
    }
    ctx->pc = 0x3ECE24u;
    {
        const bool branch_taken_0x3ece24 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x3ECE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE24u;
        // 0x3ece28: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece24) {
            ctx->pc = 0x3ECE6Cu;
            goto label_3ece6c;
        }
    }
    ctx->pc = 0x3ECE2Cu;
label_3ece2c:
    // 0x3ece2c: 0x0  nop
    ctx->pc = 0x3ece2cu;
    // NOP
label_3ece30:
    // 0x3ece30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ece30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ece34:
    // 0x3ece34: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3ece34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3ece38:
    // 0x3ece38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ece38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ece3c:
    // 0x3ece3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3ece40:
    if (ctx->pc == 0x3ECE40u) {
        ctx->pc = 0x3ECE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE3Cu;
        // 0x3ece40: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECE44u;
        goto label_3ece44;
    }
    ctx->pc = 0x3ECE3Cu;
    {
        const bool branch_taken_0x3ece3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE3Cu;
        // 0x3ece40: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece3c) {
            ctx->pc = 0x3ECE54u;
            goto label_3ece54;
        }
    }
    ctx->pc = 0x3ECE44u;
label_3ece44:
    // 0x3ece44: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3ece44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3ece48:
    // 0x3ece48: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3ece48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3ece4c:
    // 0x3ece4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ece50:
    if (ctx->pc == 0x3ECE50u) {
        ctx->pc = 0x3ECE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE4Cu;
        // 0x3ece50: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECE54u;
        goto label_3ece54;
    }
    ctx->pc = 0x3ECE4Cu;
    {
        const bool branch_taken_0x3ece4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE4Cu;
        // 0x3ece50: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece4c) {
            ctx->pc = 0x3ECE5Cu;
            goto label_3ece5c;
        }
    }
    ctx->pc = 0x3ECE54u;
label_3ece54:
    // 0x3ece54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3ece54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3ece58:
    // 0x3ece58: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3ece58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3ece5c:
    // 0x3ece5c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3ece5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3ece60:
    // 0x3ece60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ece60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ece64:
    // 0x3ece64: 0x1840fff2  blez        $v0, . + 4 + (-0xE << 2)
label_3ece68:
    if (ctx->pc == 0x3ECE68u) {
        ctx->pc = 0x3ECE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE64u;
        // 0x3ece68: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECE6Cu;
        goto label_3ece6c;
    }
    ctx->pc = 0x3ECE64u;
    {
        const bool branch_taken_0x3ece64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3ECE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE64u;
        // 0x3ece68: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece64) {
            ctx->pc = 0x3ECE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ece30;
        }
    }
    ctx->pc = 0x3ECE6Cu;
label_3ece6c:
    // 0x3ece6c: 0x8ce2b734  lw          $v0, -0x48CC($a3)
    ctx->pc = 0x3ece6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948660)));
label_3ece70:
    // 0x3ece70: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x3ece70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_3ece74:
    // 0x3ece74: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x3ece74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_3ece78:
    // 0x3ece78: 0x8cc4489c  lw          $a0, 0x489C($a2)
    ctx->pc = 0x3ece78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_3ece7c:
    // 0x3ece7c: 0xc1073cc  jal         func_41CF30
label_3ece80:
    if (ctx->pc == 0x3ECE80u) {
        ctx->pc = 0x3ECE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE7Cu;
        // 0x3ece80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECE84u;
        goto label_3ece84;
    }
    ctx->pc = 0x3ECE7Cu;
    SET_GPR_U32(ctx, 31, 0x3ECE84u);
    ctx->pc = 0x3ECE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECE7Cu;
    // 0x3ece80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3ECE7Cu, 0x3ECE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECE84u;
label_3ece84:
    // 0x3ece84: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3ece84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3ece88:
    // 0x3ece88: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3ece8c:
    if (ctx->pc == 0x3ECE8Cu) {
        ctx->pc = 0x3ECE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE88u;
        // 0x3ece8c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECE90u;
        goto label_3ece90;
    }
    ctx->pc = 0x3ECE88u;
    {
        const bool branch_taken_0x3ece88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ece88) {
            ctx->pc = 0x3ECE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECE88u;
            // 0x3ece8c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECEB8u;
            goto label_3eceb8;
        }
    }
    ctx->pc = 0x3ECE90u;
label_3ece90:
    // 0x3ece90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ece90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ece94:
    // 0x3ece94: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
label_3ece98:
    if (ctx->pc == 0x3ECE98u) {
        ctx->pc = 0x3ECE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE94u;
        // 0x3ece98: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECE9Cu;
        goto label_3ece9c;
    }
    ctx->pc = 0x3ECE94u;
    {
        const bool branch_taken_0x3ece94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ece94) {
            ctx->pc = 0x3ECE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECE94u;
            // 0x3ece98: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECF64u;
            goto label_3ecf64;
        }
    }
    ctx->pc = 0x3ECE9Cu;
label_3ece9c:
    // 0x3ece9c: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3ece9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3ecea0:
    // 0x3ecea0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ecea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ecea4:
    // 0x3ecea4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ecea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ecea8:
    // 0x3ecea8: 0xc0fb23e  jal         func_3EC8F8
label_3eceac:
    if (ctx->pc == 0x3ECEACu) {
        ctx->pc = 0x3ECEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEA8u;
        // 0x3eceac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECEB0u;
        goto label_3eceb0;
    }
    ctx->pc = 0x3ECEA8u;
    SET_GPR_U32(ctx, 31, 0x3ECEB0u);
    ctx->pc = 0x3ECEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECEA8u;
    // 0x3eceac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC8F8u, 0x3ECEA8u, 0x3ECEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECEB0u;
label_3eceb0:
    // 0x3eceb0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3eceb4:
    if (ctx->pc == 0x3ECEB4u) {
        ctx->pc = 0x3ECEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEB0u;
        // 0x3eceb4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECEB8u;
        goto label_3eceb8;
    }
    ctx->pc = 0x3ECEB0u;
    {
        const bool branch_taken_0x3eceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEB0u;
        // 0x3eceb4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eceb0) {
            ctx->pc = 0x3ECF64u;
            goto label_3ecf64;
        }
    }
    ctx->pc = 0x3ECEB8u;
label_3eceb8:
    // 0x3eceb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ecebc:
    // 0x3ecebc: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_3ecec0:
    if (ctx->pc == 0x3ECEC0u) {
        ctx->pc = 0x3ECEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEBCu;
        // 0x3ecec0: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECEC4u;
        goto label_3ecec4;
    }
    ctx->pc = 0x3ECEBCu;
    {
        const bool branch_taken_0x3ecebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ECEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEBCu;
        // 0x3ecec0: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecebc) {
            ctx->pc = 0x3ECF1Cu;
            goto label_3ecf1c;
        }
    }
    ctx->pc = 0x3ECEC4u;
label_3ecec4:
    // 0x3ecec4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ecec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ecec8:
    // 0x3ecec8: 0xc047e6c  jal         func_11F9B0
label_3ececc:
    if (ctx->pc == 0x3ECECCu) {
        ctx->pc = 0x3ECECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEC8u;
        // 0x3ececc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECED0u;
        goto label_3eced0;
    }
    ctx->pc = 0x3ECEC8u;
    SET_GPR_U32(ctx, 31, 0x3ECED0u);
    ctx->pc = 0x3ECECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECEC8u;
    // 0x3ececc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3ECEC8u, 0x3ECED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECED0u;
label_3eced0:
    // 0x3eced0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eced4:
    // 0x3eced4: 0x84640210  lh          $a0, 0x210($v1)
    ctx->pc = 0x3eced4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 528)));
label_3eced8:
    // 0x3eced8: 0x8c650214  lw          $a1, 0x214($v1)
    ctx->pc = 0x3eced8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_3ecedc:
    // 0x3ecedc: 0xa0f809  jalr        $a1
label_3ecee0:
    if (ctx->pc == 0x3ECEE0u) {
        ctx->pc = 0x3ECEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEDCu;
        // 0x3ecee0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECEE4u;
        goto label_3ecee4;
    }
    ctx->pc = 0x3ECEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3ECEE4u);
        ctx->pc = 0x3ECEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEDCu;
        // 0x3ecee0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECEDCu, 0x3ECEE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ECEE4u;
label_3ecee4:
    // 0x3ecee4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3ecee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3ecee8:
    // 0x3ecee8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ecee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3eceec:
    // 0x3eceec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3eceecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ecef0:
    // 0x3ecef0: 0xc0e94a0  jal         func_3A5280
label_3ecef4:
    if (ctx->pc == 0x3ECEF4u) {
        ctx->pc = 0x3ECEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEF0u;
        // 0x3ecef4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECEF8u;
        goto label_3ecef8;
    }
    ctx->pc = 0x3ECEF0u;
    SET_GPR_U32(ctx, 31, 0x3ECEF8u);
    ctx->pc = 0x3ECEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECEF0u;
    // 0x3ecef4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3ECEF0u, 0x3ECEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECEF8u;
label_3ecef8:
    // 0x3ecef8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ecef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ecefc:
    // 0x3ecefc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3ecf00:
    if (ctx->pc == 0x3ECF00u) {
        ctx->pc = 0x3ECF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEFCu;
        // 0x3ecf00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECF04u;
        goto label_3ecf04;
    }
    ctx->pc = 0x3ECEFCu;
    {
        const bool branch_taken_0x3ecefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEFCu;
        // 0x3ecf00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecefc) {
            ctx->pc = 0x3ECF60u;
            goto label_3ecf60;
        }
    }
    ctx->pc = 0x3ECF04u;
label_3ecf04:
    // 0x3ecf04: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3ecf04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3ecf08:
    // 0x3ecf08: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ecf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ecf0c:
    // 0x3ecf0c: 0xc0fb23e  jal         func_3EC8F8
label_3ecf10:
    if (ctx->pc == 0x3ECF10u) {
        ctx->pc = 0x3ECF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF0Cu;
        // 0x3ecf10: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECF14u;
        goto label_3ecf14;
    }
    ctx->pc = 0x3ECF0Cu;
    SET_GPR_U32(ctx, 31, 0x3ECF14u);
    ctx->pc = 0x3ECF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECF0Cu;
    // 0x3ecf10: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC8F8u, 0x3ECF0Cu, 0x3ECF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECF14u;
label_3ecf14:
    // 0x3ecf14: 0x10000013  b           . + 4 + (0x13 << 2)
label_3ecf18:
    if (ctx->pc == 0x3ECF18u) {
        ctx->pc = 0x3ECF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF14u;
        // 0x3ecf18: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECF1Cu;
        goto label_3ecf1c;
    }
    ctx->pc = 0x3ECF14u;
    {
        const bool branch_taken_0x3ecf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF14u;
        // 0x3ecf18: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecf14) {
            ctx->pc = 0x3ECF64u;
            goto label_3ecf64;
        }
    }
    ctx->pc = 0x3ECF1Cu;
label_3ecf1c:
    // 0x3ecf1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ecf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ecf20:
    // 0x3ecf20: 0xc047e6c  jal         func_11F9B0
label_3ecf24:
    if (ctx->pc == 0x3ECF24u) {
        ctx->pc = 0x3ECF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF20u;
        // 0x3ecf24: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECF28u;
        goto label_3ecf28;
    }
    ctx->pc = 0x3ECF20u;
    SET_GPR_U32(ctx, 31, 0x3ECF28u);
    ctx->pc = 0x3ECF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECF20u;
    // 0x3ecf24: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3ECF20u, 0x3ECF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECF28u;
label_3ecf28:
    // 0x3ecf28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ecf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ecf2c:
    // 0x3ecf2c: 0x84640210  lh          $a0, 0x210($v1)
    ctx->pc = 0x3ecf2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 528)));
label_3ecf30:
    // 0x3ecf30: 0x8c650214  lw          $a1, 0x214($v1)
    ctx->pc = 0x3ecf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_3ecf34:
    // 0x3ecf34: 0xa0f809  jalr        $a1
label_3ecf38:
    if (ctx->pc == 0x3ECF38u) {
        ctx->pc = 0x3ECF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF34u;
        // 0x3ecf38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECF3Cu;
        goto label_3ecf3c;
    }
    ctx->pc = 0x3ECF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3ECF3Cu);
        ctx->pc = 0x3ECF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF34u;
        // 0x3ecf38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECF34u, 0x3ECF3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ECF3Cu;
label_3ecf3c:
    // 0x3ecf3c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3ecf3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3ecf40:
    // 0x3ecf40: 0xc0e94a0  jal         func_3A5280
label_3ecf44:
    if (ctx->pc == 0x3ECF44u) {
        ctx->pc = 0x3ECF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF40u;
        // 0x3ecf44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECF48u;
        goto label_3ecf48;
    }
    ctx->pc = 0x3ECF40u;
    SET_GPR_U32(ctx, 31, 0x3ECF48u);
    ctx->pc = 0x3ECF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECF40u;
    // 0x3ecf44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3ECF40u, 0x3ECF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECF48u;
label_3ecf48:
    // 0x3ecf48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ecf4c:
    if (ctx->pc == 0x3ECF4Cu) {
        ctx->pc = 0x3ECF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF48u;
        // 0x3ecf4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECF50u;
        goto label_3ecf50;
    }
    ctx->pc = 0x3ECF48u;
    {
        const bool branch_taken_0x3ecf48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF48u;
        // 0x3ecf4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecf48) {
            ctx->pc = 0x3ECF60u;
            goto label_3ecf60;
        }
    }
    ctx->pc = 0x3ECF50u;
label_3ecf50:
    // 0x3ecf50: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3ecf50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3ecf54:
    // 0x3ecf54: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ecf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ecf58:
    // 0x3ecf58: 0xc0fb23e  jal         func_3EC8F8
label_3ecf5c:
    if (ctx->pc == 0x3ECF5Cu) {
        ctx->pc = 0x3ECF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF58u;
        // 0x3ecf5c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECF60u;
        goto label_3ecf60;
    }
    ctx->pc = 0x3ECF58u;
    SET_GPR_U32(ctx, 31, 0x3ECF60u);
    ctx->pc = 0x3ECF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECF58u;
    // 0x3ecf5c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC8F8u, 0x3ECF58u, 0x3ECF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECF60u;
label_3ecf60:
    // 0x3ecf60: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3ecf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ecf64:
    // 0x3ecf64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ecf64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ecf68:
    // 0x3ecf68: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3ecf68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ecf6c:
    // 0x3ecf6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ecf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ecf70:
    // 0x3ecf70: 0x3e00008  jr          $ra
label_3ecf74:
    if (ctx->pc == 0x3ECF74u) {
        ctx->pc = 0x3ECF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF70u;
        // 0x3ecf74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECF78u;
        goto label_fallthrough_0x3ecf70;
    }
    ctx->pc = 0x3ECF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF70u;
        // 0x3ecf74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ecf70:
    ctx->pc = 0x3ECF78u;
}
