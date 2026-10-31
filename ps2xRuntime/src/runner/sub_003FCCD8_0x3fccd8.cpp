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

// Function: sub_003FCCD8
// Address: 0x3fccd8 - 0x3fce60
void sub_003FCCD8_0x3fccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCCD8_0x3fccd8");
#endif

    switch (ctx->pc) {
        case 0x3fccd8u: goto label_3fccd8;
        case 0x3fccdcu: goto label_3fccdc;
        case 0x3fcce0u: goto label_3fcce0;
        case 0x3fcce4u: goto label_3fcce4;
        case 0x3fcce8u: goto label_3fcce8;
        case 0x3fccecu: goto label_3fccec;
        case 0x3fccf0u: goto label_3fccf0;
        case 0x3fccf4u: goto label_3fccf4;
        case 0x3fccf8u: goto label_3fccf8;
        case 0x3fccfcu: goto label_3fccfc;
        case 0x3fcd00u: goto label_3fcd00;
        case 0x3fcd04u: goto label_3fcd04;
        case 0x3fcd08u: goto label_3fcd08;
        case 0x3fcd0cu: goto label_3fcd0c;
        case 0x3fcd10u: goto label_3fcd10;
        case 0x3fcd14u: goto label_3fcd14;
        case 0x3fcd18u: goto label_3fcd18;
        case 0x3fcd1cu: goto label_3fcd1c;
        case 0x3fcd20u: goto label_3fcd20;
        case 0x3fcd24u: goto label_3fcd24;
        case 0x3fcd28u: goto label_3fcd28;
        case 0x3fcd2cu: goto label_3fcd2c;
        case 0x3fcd30u: goto label_3fcd30;
        case 0x3fcd34u: goto label_3fcd34;
        case 0x3fcd38u: goto label_3fcd38;
        case 0x3fcd3cu: goto label_3fcd3c;
        case 0x3fcd40u: goto label_3fcd40;
        case 0x3fcd44u: goto label_3fcd44;
        case 0x3fcd48u: goto label_3fcd48;
        case 0x3fcd4cu: goto label_3fcd4c;
        case 0x3fcd50u: goto label_3fcd50;
        case 0x3fcd54u: goto label_3fcd54;
        case 0x3fcd58u: goto label_3fcd58;
        case 0x3fcd5cu: goto label_3fcd5c;
        case 0x3fcd60u: goto label_3fcd60;
        case 0x3fcd64u: goto label_3fcd64;
        case 0x3fcd68u: goto label_3fcd68;
        case 0x3fcd6cu: goto label_3fcd6c;
        case 0x3fcd70u: goto label_3fcd70;
        case 0x3fcd74u: goto label_3fcd74;
        case 0x3fcd78u: goto label_3fcd78;
        case 0x3fcd7cu: goto label_3fcd7c;
        case 0x3fcd80u: goto label_3fcd80;
        case 0x3fcd84u: goto label_3fcd84;
        case 0x3fcd88u: goto label_3fcd88;
        case 0x3fcd8cu: goto label_3fcd8c;
        case 0x3fcd90u: goto label_3fcd90;
        case 0x3fcd94u: goto label_3fcd94;
        case 0x3fcd98u: goto label_3fcd98;
        case 0x3fcd9cu: goto label_3fcd9c;
        case 0x3fcda0u: goto label_3fcda0;
        case 0x3fcda4u: goto label_3fcda4;
        case 0x3fcda8u: goto label_3fcda8;
        case 0x3fcdacu: goto label_3fcdac;
        case 0x3fcdb0u: goto label_3fcdb0;
        case 0x3fcdb4u: goto label_3fcdb4;
        case 0x3fcdb8u: goto label_3fcdb8;
        case 0x3fcdbcu: goto label_3fcdbc;
        case 0x3fcdc0u: goto label_3fcdc0;
        case 0x3fcdc4u: goto label_3fcdc4;
        case 0x3fcdc8u: goto label_3fcdc8;
        case 0x3fcdccu: goto label_3fcdcc;
        case 0x3fcdd0u: goto label_3fcdd0;
        case 0x3fcdd4u: goto label_3fcdd4;
        case 0x3fcdd8u: goto label_3fcdd8;
        case 0x3fcddcu: goto label_3fcddc;
        case 0x3fcde0u: goto label_3fcde0;
        case 0x3fcde4u: goto label_3fcde4;
        case 0x3fcde8u: goto label_3fcde8;
        case 0x3fcdecu: goto label_3fcdec;
        case 0x3fcdf0u: goto label_3fcdf0;
        case 0x3fcdf4u: goto label_3fcdf4;
        case 0x3fcdf8u: goto label_3fcdf8;
        case 0x3fcdfcu: goto label_3fcdfc;
        case 0x3fce00u: goto label_3fce00;
        case 0x3fce04u: goto label_3fce04;
        case 0x3fce08u: goto label_3fce08;
        case 0x3fce0cu: goto label_3fce0c;
        case 0x3fce10u: goto label_3fce10;
        case 0x3fce14u: goto label_3fce14;
        case 0x3fce18u: goto label_3fce18;
        case 0x3fce1cu: goto label_3fce1c;
        case 0x3fce20u: goto label_3fce20;
        case 0x3fce24u: goto label_3fce24;
        case 0x3fce28u: goto label_3fce28;
        case 0x3fce2cu: goto label_3fce2c;
        case 0x3fce30u: goto label_3fce30;
        case 0x3fce34u: goto label_3fce34;
        case 0x3fce38u: goto label_3fce38;
        case 0x3fce3cu: goto label_3fce3c;
        case 0x3fce40u: goto label_3fce40;
        case 0x3fce44u: goto label_3fce44;
        case 0x3fce48u: goto label_3fce48;
        case 0x3fce4cu: goto label_3fce4c;
        case 0x3fce50u: goto label_3fce50;
        case 0x3fce54u: goto label_3fce54;
        case 0x3fce58u: goto label_3fce58;
        case 0x3fce5cu: goto label_3fce5c;
        default: break;
    }

    ctx->pc = 0x3fccd8u;

label_3fccd8:
    // 0x3fccd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3fccd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3fccdc:
    // 0x3fccdc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3fccdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3fcce0:
    // 0x3fcce0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3fcce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3fcce4:
    // 0x3fcce4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fcce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fcce8:
    // 0x3fcce8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3fcce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3fccec:
    // 0x3fccec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fccecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fccf0:
    // 0x3fccf0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3fccf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3fccf4:
    // 0x3fccf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3fccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3fccf8:
    // 0x3fccf8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3fccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fccfc:
    // 0x3fccfc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fccfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fcd00:
    // 0x3fcd00: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fcd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fcd04:
    // 0x3fcd04: 0x40f809  jalr        $v0
label_3fcd08:
    if (ctx->pc == 0x3FCD08u) {
        ctx->pc = 0x3FCD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD04u;
        // 0x3fcd08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCD0Cu;
        goto label_3fcd0c;
    }
    ctx->pc = 0x3FCD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FCD0Cu);
        ctx->pc = 0x3FCD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD04u;
        // 0x3fcd08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCD04u, 0x3FCD0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FCD0Cu;
label_3fcd0c:
    // 0x3fcd0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3fcd0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fcd10:
    // 0x3fcd10: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3fcd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3fcd14:
    // 0x3fcd14: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_3fcd18:
    if (ctx->pc == 0x3FCD18u) {
        ctx->pc = 0x3FCD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD14u;
        // 0x3fcd18: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCD1Cu;
        goto label_3fcd1c;
    }
    ctx->pc = 0x3FCD14u;
    {
        const bool branch_taken_0x3fcd14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FCD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD14u;
        // 0x3fcd18: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcd14) {
            ctx->pc = 0x3FCD50u;
            goto label_3fcd50;
        }
    }
    ctx->pc = 0x3FCD1Cu;
label_3fcd1c:
    // 0x3fcd1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3fcd20:
    if (ctx->pc == 0x3FCD20u) {
        ctx->pc = 0x3FCD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD1Cu;
        // 0x3fcd20: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCD24u;
        goto label_3fcd24;
    }
    ctx->pc = 0x3FCD1Cu;
    {
        const bool branch_taken_0x3fcd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD1Cu;
        // 0x3fcd20: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcd1c) {
            ctx->pc = 0x3FCD34u;
            goto label_3fcd34;
        }
    }
    ctx->pc = 0x3FCD24u;
label_3fcd24:
    // 0x3fcd24: 0x12020031  beq         $s0, $v0, . + 4 + (0x31 << 2)
label_3fcd28:
    if (ctx->pc == 0x3FCD28u) {
        ctx->pc = 0x3FCD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD24u;
        // 0x3fcd28: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCD2Cu;
        goto label_3fcd2c;
    }
    ctx->pc = 0x3FCD24u;
    {
        const bool branch_taken_0x3fcd24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FCD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD24u;
        // 0x3fcd28: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcd24) {
            ctx->pc = 0x3FCDECu;
            goto label_3fcdec;
        }
    }
    ctx->pc = 0x3FCD2Cu;
label_3fcd2c:
    // 0x3fcd2c: 0x10000047  b           . + 4 + (0x47 << 2)
label_3fcd30:
    if (ctx->pc == 0x3FCD30u) {
        ctx->pc = 0x3FCD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD2Cu;
        // 0x3fcd30: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCD34u;
        goto label_3fcd34;
    }
    ctx->pc = 0x3FCD2Cu;
    {
        const bool branch_taken_0x3fcd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD2Cu;
        // 0x3fcd30: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcd2c) {
            ctx->pc = 0x3FCE4Cu;
            goto label_3fce4c;
        }
    }
    ctx->pc = 0x3FCD34u;
label_3fcd34:
    // 0x3fcd34: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3fcd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3fcd38:
    // 0x3fcd38: 0x1202003c  beq         $s0, $v0, . + 4 + (0x3C << 2)
label_3fcd3c:
    if (ctx->pc == 0x3FCD3Cu) {
        ctx->pc = 0x3FCD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD38u;
        // 0x3fcd3c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCD40u;
        goto label_3fcd40;
    }
    ctx->pc = 0x3FCD38u;
    {
        const bool branch_taken_0x3fcd38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FCD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD38u;
        // 0x3fcd3c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcd38) {
            ctx->pc = 0x3FCE2Cu;
            goto label_3fce2c;
        }
    }
    ctx->pc = 0x3FCD40u;
label_3fcd40:
    // 0x3fcd40: 0x12020022  beq         $s0, $v0, . + 4 + (0x22 << 2)
label_3fcd44:
    if (ctx->pc == 0x3FCD44u) {
        ctx->pc = 0x3FCD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD40u;
        // 0x3fcd44: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCD48u;
        goto label_3fcd48;
    }
    ctx->pc = 0x3FCD40u;
    {
        const bool branch_taken_0x3fcd40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FCD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD40u;
        // 0x3fcd44: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcd40) {
            ctx->pc = 0x3FCDCCu;
            goto label_3fcdcc;
        }
    }
    ctx->pc = 0x3FCD48u;
label_3fcd48:
    // 0x3fcd48: 0x10000040  b           . + 4 + (0x40 << 2)
label_3fcd4c:
    if (ctx->pc == 0x3FCD4Cu) {
        ctx->pc = 0x3FCD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD48u;
        // 0x3fcd4c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCD50u;
        goto label_3fcd50;
    }
    ctx->pc = 0x3FCD48u;
    {
        const bool branch_taken_0x3fcd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD48u;
        // 0x3fcd4c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcd48) {
            ctx->pc = 0x3FCE4Cu;
            goto label_3fce4c;
        }
    }
    ctx->pc = 0x3FCD50u;
label_3fcd50:
    // 0x3fcd50: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x3fcd50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_3fcd54:
    // 0x3fcd54: 0x8e71489c  lw          $s1, 0x489C($s3)
    ctx->pc = 0x3fcd54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_3fcd58:
    // 0x3fcd58: 0xc136ad6  jal         func_4DAB58
label_3fcd5c:
    if (ctx->pc == 0x3FCD5Cu) {
        ctx->pc = 0x3FCD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD58u;
        // 0x3fcd5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCD60u;
        goto label_3fcd60;
    }
    ctx->pc = 0x3FCD58u;
    SET_GPR_U32(ctx, 31, 0x3FCD60u);
    ctx->pc = 0x3FCD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCD58u;
    // 0x3fcd5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x3FCD58u, 0x3FCD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCD60u;
label_3fcd60:
    // 0x3fcd60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fcd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fcd64:
    // 0x3fcd64: 0xc136ad4  jal         func_4DAB50
label_3fcd68:
    if (ctx->pc == 0x3FCD68u) {
        ctx->pc = 0x3FCD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD64u;
        // 0x3fcd68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCD6Cu;
        goto label_3fcd6c;
    }
    ctx->pc = 0x3FCD64u;
    SET_GPR_U32(ctx, 31, 0x3FCD6Cu);
    ctx->pc = 0x3FCD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCD64u;
    // 0x3fcd68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x3FCD64u, 0x3FCD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCD6Cu;
label_3fcd6c:
    // 0x3fcd6c: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x3fcd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_3fcd70:
    // 0x3fcd70: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x3fcd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_3fcd74:
    // 0x3fcd74: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3fcd74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3fcd78:
    // 0x3fcd78: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3fcd78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3fcd7c:
    // 0x3fcd7c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3fcd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3fcd80:
    // 0x3fcd80: 0x5444000d  bnel        $v0, $a0, . + 4 + (0xD << 2)
label_3fcd84:
    if (ctx->pc == 0x3FCD84u) {
        ctx->pc = 0x3FCD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD80u;
        // 0x3fcd84: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCD88u;
        goto label_3fcd88;
    }
    ctx->pc = 0x3FCD80u;
    {
        const bool branch_taken_0x3fcd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3fcd80) {
            ctx->pc = 0x3FCD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCD80u;
            // 0x3fcd84: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCDB8u;
            goto label_3fcdb8;
        }
    }
    ctx->pc = 0x3FCD88u;
label_3fcd88:
    // 0x3fcd88: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x3fcd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_3fcd8c:
    // 0x3fcd8c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3fcd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fcd90:
    // 0x3fcd90: 0x8443033a  lh          $v1, 0x33A($v0)
    ctx->pc = 0x3fcd90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 826)));
label_3fcd94:
    // 0x3fcd94: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
label_3fcd98:
    if (ctx->pc == 0x3FCD98u) {
        ctx->pc = 0x3FCD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD94u;
        // 0x3fcd98: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCD9Cu;
        goto label_3fcd9c;
    }
    ctx->pc = 0x3FCD94u;
    {
        const bool branch_taken_0x3fcd94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3fcd94) {
            ctx->pc = 0x3FCD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCD94u;
            // 0x3fcd98: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCDB8u;
            goto label_3fcdb8;
        }
    }
    ctx->pc = 0x3FCD9Cu;
label_3fcd9c:
    // 0x3fcd9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3fcd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3fcda0:
    // 0x3fcda0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3fcda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3fcda4:
    // 0x3fcda4: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3fcda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3fcda8:
    // 0x3fcda8: 0xc0440c6  jal         func_110318
label_3fcdac:
    if (ctx->pc == 0x3FCDACu) {
        ctx->pc = 0x3FCDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDA8u;
        // 0x3fcdac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCDB0u;
        goto label_3fcdb0;
    }
    ctx->pc = 0x3FCDA8u;
    SET_GPR_U32(ctx, 31, 0x3FCDB0u);
    ctx->pc = 0x3FCDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCDA8u;
    // 0x3fcdac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3FCDA8u, 0x3FCDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCDB0u;
label_3fcdb0:
    // 0x3fcdb0: 0x10000024  b           . + 4 + (0x24 << 2)
label_3fcdb4:
    if (ctx->pc == 0x3FCDB4u) {
        ctx->pc = 0x3FCDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDB0u;
        // 0x3fcdb4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCDB8u;
        goto label_3fcdb8;
    }
    ctx->pc = 0x3FCDB0u;
    {
        const bool branch_taken_0x3fcdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDB0u;
        // 0x3fcdb4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcdb0) {
            ctx->pc = 0x3FCE44u;
            goto label_3fce44;
        }
    }
    ctx->pc = 0x3FCDB8u;
label_3fcdb8:
    // 0x3fcdb8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3fcdbc:
    if (ctx->pc == 0x3FCDBCu) {
        ctx->pc = 0x3FCDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDB8u;
        // 0x3fcdbc: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCDC0u;
        goto label_3fcdc0;
    }
    ctx->pc = 0x3FCDB8u;
    {
        const bool branch_taken_0x3fcdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fcdb8) {
            ctx->pc = 0x3FCDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCDB8u;
            // 0x3fcdbc: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCDC0u;
            goto label_3fcdc0;
        }
    }
    ctx->pc = 0x3FCDC0u;
label_3fcdc0:
    // 0x3fcdc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fcdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fcdc4:
    // 0x3fcdc4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3fcdc8:
    if (ctx->pc == 0x3FCDC8u) {
        ctx->pc = 0x3FCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDC4u;
        // 0x3fcdc8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCDCCu;
        goto label_3fcdcc;
    }
    ctx->pc = 0x3FCDC4u;
    {
        const bool branch_taken_0x3fcdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDC4u;
        // 0x3fcdc8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcdc4) {
            ctx->pc = 0x3FCE44u;
            goto label_3fce44;
        }
    }
    ctx->pc = 0x3FCDCCu;
label_3fcdcc:
    // 0x3fcdcc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3fcdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3fcdd0:
    // 0x3fcdd0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3fcdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3fcdd4:
    // 0x3fcdd4: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3fcdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3fcdd8:
    // 0x3fcdd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fcdd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fcddc:
    // 0x3fcddc: 0xc0440c6  jal         func_110318
label_3fcde0:
    if (ctx->pc == 0x3FCDE0u) {
        ctx->pc = 0x3FCDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDDCu;
        // 0x3fcde0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCDE4u;
        goto label_3fcde4;
    }
    ctx->pc = 0x3FCDDCu;
    SET_GPR_U32(ctx, 31, 0x3FCDE4u);
    ctx->pc = 0x3FCDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCDDCu;
    // 0x3fcde0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3FCDDCu, 0x3FCDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCDE4u;
label_3fcde4:
    // 0x3fcde4: 0x10000018  b           . + 4 + (0x18 << 2)
label_3fcde8:
    if (ctx->pc == 0x3FCDE8u) {
        ctx->pc = 0x3FCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDE4u;
        // 0x3fcde8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCDECu;
        goto label_3fcdec;
    }
    ctx->pc = 0x3FCDE4u;
    {
        const bool branch_taken_0x3fcde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDE4u;
        // 0x3fcde8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcde4) {
            ctx->pc = 0x3FCE48u;
            goto label_3fce48;
        }
    }
    ctx->pc = 0x3FCDECu;
label_3fcdec:
    // 0x3fcdec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fcdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fcdf0:
    // 0x3fcdf0: 0xc0e90ca  jal         func_3A4328
label_3fcdf4:
    if (ctx->pc == 0x3FCDF4u) {
        ctx->pc = 0x3FCDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDF0u;
        // 0x3fcdf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCDF8u;
        goto label_3fcdf8;
    }
    ctx->pc = 0x3FCDF0u;
    SET_GPR_U32(ctx, 31, 0x3FCDF8u);
    ctx->pc = 0x3FCDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCDF0u;
    // 0x3fcdf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FCDF0u, 0x3FCDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCDF8u;
label_3fcdf8:
    // 0x3fcdf8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x3fcdf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3fcdfc:
    // 0x3fcdfc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3fcdfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fce00:
    // 0x3fce00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fce00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fce04:
    // 0x3fce04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fce04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fce08:
    // 0x3fce08: 0xc0e911e  jal         func_3A4478
label_3fce0c:
    if (ctx->pc == 0x3FCE0Cu) {
        ctx->pc = 0x3FCE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCE08u;
        // 0x3fce0c: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCE10u;
        goto label_3fce10;
    }
    ctx->pc = 0x3FCE08u;
    SET_GPR_U32(ctx, 31, 0x3FCE10u);
    ctx->pc = 0x3FCE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCE08u;
    // 0x3fce0c: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3FCE08u, 0x3FCE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCE10u;
label_3fce10:
    // 0x3fce10: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3fce10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fce14:
    // 0x3fce14: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x3fce14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_3fce18:
    // 0x3fce18: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3fce18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3fce1c:
    // 0x3fce1c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3fce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3fce20:
    // 0x3fce20: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3fce20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3fce24:
    // 0x3fce24: 0x10000007  b           . + 4 + (0x7 << 2)
label_3fce28:
    if (ctx->pc == 0x3FCE28u) {
        ctx->pc = 0x3FCE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCE24u;
        // 0x3fce28: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCE2Cu;
        goto label_3fce2c;
    }
    ctx->pc = 0x3FCE24u;
    {
        const bool branch_taken_0x3fce24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCE24u;
        // 0x3fce28: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fce24) {
            ctx->pc = 0x3FCE44u;
            goto label_3fce44;
        }
    }
    ctx->pc = 0x3FCE2Cu;
label_3fce2c:
    // 0x3fce2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3fce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3fce30:
    // 0x3fce30: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3fce30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3fce34:
    // 0x3fce34: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3fce34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3fce38:
    // 0x3fce38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fce38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fce3c:
    // 0x3fce3c: 0xc0440c6  jal         func_110318
label_3fce40:
    if (ctx->pc == 0x3FCE40u) {
        ctx->pc = 0x3FCE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCE3Cu;
        // 0x3fce40: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCE44u;
        goto label_3fce44;
    }
    ctx->pc = 0x3FCE3Cu;
    SET_GPR_U32(ctx, 31, 0x3FCE44u);
    ctx->pc = 0x3FCE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCE3Cu;
    // 0x3fce40: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3FCE3Cu, 0x3FCE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCE44u;
label_3fce44:
    // 0x3fce44: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3fce44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fce48:
    // 0x3fce48: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3fce48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fce4c:
    // 0x3fce4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3fce4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fce50:
    // 0x3fce50: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3fce50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fce54:
    // 0x3fce54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fce54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3fce58:
    // 0x3fce58: 0x3e00008  jr          $ra
label_3fce5c:
    if (ctx->pc == 0x3FCE5Cu) {
        ctx->pc = 0x3FCE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCE58u;
        // 0x3fce5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCE60u;
        goto label_fallthrough_0x3fce58;
    }
    ctx->pc = 0x3FCE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FCE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCE58u;
        // 0x3fce5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3fce58:
    ctx->pc = 0x3FCE60u;
}
