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

// Function: sub_002BCCB8
// Address: 0x2bccb8 - 0x2bcf88
void sub_002BCCB8_0x2bccb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCCB8_0x2bccb8");
#endif

    switch (ctx->pc) {
        case 0x2bccb8u: goto label_2bccb8;
        case 0x2bccbcu: goto label_2bccbc;
        case 0x2bccc0u: goto label_2bccc0;
        case 0x2bccc4u: goto label_2bccc4;
        case 0x2bccc8u: goto label_2bccc8;
        case 0x2bccccu: goto label_2bcccc;
        case 0x2bccd0u: goto label_2bccd0;
        case 0x2bccd4u: goto label_2bccd4;
        case 0x2bccd8u: goto label_2bccd8;
        case 0x2bccdcu: goto label_2bccdc;
        case 0x2bcce0u: goto label_2bcce0;
        case 0x2bcce4u: goto label_2bcce4;
        case 0x2bcce8u: goto label_2bcce8;
        case 0x2bccecu: goto label_2bccec;
        case 0x2bccf0u: goto label_2bccf0;
        case 0x2bccf4u: goto label_2bccf4;
        case 0x2bccf8u: goto label_2bccf8;
        case 0x2bccfcu: goto label_2bccfc;
        case 0x2bcd00u: goto label_2bcd00;
        case 0x2bcd04u: goto label_2bcd04;
        case 0x2bcd08u: goto label_2bcd08;
        case 0x2bcd0cu: goto label_2bcd0c;
        case 0x2bcd10u: goto label_2bcd10;
        case 0x2bcd14u: goto label_2bcd14;
        case 0x2bcd18u: goto label_2bcd18;
        case 0x2bcd1cu: goto label_2bcd1c;
        case 0x2bcd20u: goto label_2bcd20;
        case 0x2bcd24u: goto label_2bcd24;
        case 0x2bcd28u: goto label_2bcd28;
        case 0x2bcd2cu: goto label_2bcd2c;
        case 0x2bcd30u: goto label_2bcd30;
        case 0x2bcd34u: goto label_2bcd34;
        case 0x2bcd38u: goto label_2bcd38;
        case 0x2bcd3cu: goto label_2bcd3c;
        case 0x2bcd40u: goto label_2bcd40;
        case 0x2bcd44u: goto label_2bcd44;
        case 0x2bcd48u: goto label_2bcd48;
        case 0x2bcd4cu: goto label_2bcd4c;
        case 0x2bcd50u: goto label_2bcd50;
        case 0x2bcd54u: goto label_2bcd54;
        case 0x2bcd58u: goto label_2bcd58;
        case 0x2bcd5cu: goto label_2bcd5c;
        case 0x2bcd60u: goto label_2bcd60;
        case 0x2bcd64u: goto label_2bcd64;
        case 0x2bcd68u: goto label_2bcd68;
        case 0x2bcd6cu: goto label_2bcd6c;
        case 0x2bcd70u: goto label_2bcd70;
        case 0x2bcd74u: goto label_2bcd74;
        case 0x2bcd78u: goto label_2bcd78;
        case 0x2bcd7cu: goto label_2bcd7c;
        case 0x2bcd80u: goto label_2bcd80;
        case 0x2bcd84u: goto label_2bcd84;
        case 0x2bcd88u: goto label_2bcd88;
        case 0x2bcd8cu: goto label_2bcd8c;
        case 0x2bcd90u: goto label_2bcd90;
        case 0x2bcd94u: goto label_2bcd94;
        case 0x2bcd98u: goto label_2bcd98;
        case 0x2bcd9cu: goto label_2bcd9c;
        case 0x2bcda0u: goto label_2bcda0;
        case 0x2bcda4u: goto label_2bcda4;
        case 0x2bcda8u: goto label_2bcda8;
        case 0x2bcdacu: goto label_2bcdac;
        case 0x2bcdb0u: goto label_2bcdb0;
        case 0x2bcdb4u: goto label_2bcdb4;
        case 0x2bcdb8u: goto label_2bcdb8;
        case 0x2bcdbcu: goto label_2bcdbc;
        case 0x2bcdc0u: goto label_2bcdc0;
        case 0x2bcdc4u: goto label_2bcdc4;
        case 0x2bcdc8u: goto label_2bcdc8;
        case 0x2bcdccu: goto label_2bcdcc;
        case 0x2bcdd0u: goto label_2bcdd0;
        case 0x2bcdd4u: goto label_2bcdd4;
        case 0x2bcdd8u: goto label_2bcdd8;
        case 0x2bcddcu: goto label_2bcddc;
        case 0x2bcde0u: goto label_2bcde0;
        case 0x2bcde4u: goto label_2bcde4;
        case 0x2bcde8u: goto label_2bcde8;
        case 0x2bcdecu: goto label_2bcdec;
        case 0x2bcdf0u: goto label_2bcdf0;
        case 0x2bcdf4u: goto label_2bcdf4;
        case 0x2bcdf8u: goto label_2bcdf8;
        case 0x2bcdfcu: goto label_2bcdfc;
        case 0x2bce00u: goto label_2bce00;
        case 0x2bce04u: goto label_2bce04;
        case 0x2bce08u: goto label_2bce08;
        case 0x2bce0cu: goto label_2bce0c;
        case 0x2bce10u: goto label_2bce10;
        case 0x2bce14u: goto label_2bce14;
        case 0x2bce18u: goto label_2bce18;
        case 0x2bce1cu: goto label_2bce1c;
        case 0x2bce20u: goto label_2bce20;
        case 0x2bce24u: goto label_2bce24;
        case 0x2bce28u: goto label_2bce28;
        case 0x2bce2cu: goto label_2bce2c;
        case 0x2bce30u: goto label_2bce30;
        case 0x2bce34u: goto label_2bce34;
        case 0x2bce38u: goto label_2bce38;
        case 0x2bce3cu: goto label_2bce3c;
        case 0x2bce40u: goto label_2bce40;
        case 0x2bce44u: goto label_2bce44;
        case 0x2bce48u: goto label_2bce48;
        case 0x2bce4cu: goto label_2bce4c;
        case 0x2bce50u: goto label_2bce50;
        case 0x2bce54u: goto label_2bce54;
        case 0x2bce58u: goto label_2bce58;
        case 0x2bce5cu: goto label_2bce5c;
        case 0x2bce60u: goto label_2bce60;
        case 0x2bce64u: goto label_2bce64;
        case 0x2bce68u: goto label_2bce68;
        case 0x2bce6cu: goto label_2bce6c;
        case 0x2bce70u: goto label_2bce70;
        case 0x2bce74u: goto label_2bce74;
        case 0x2bce78u: goto label_2bce78;
        case 0x2bce7cu: goto label_2bce7c;
        case 0x2bce80u: goto label_2bce80;
        case 0x2bce84u: goto label_2bce84;
        case 0x2bce88u: goto label_2bce88;
        case 0x2bce8cu: goto label_2bce8c;
        case 0x2bce90u: goto label_2bce90;
        case 0x2bce94u: goto label_2bce94;
        case 0x2bce98u: goto label_2bce98;
        case 0x2bce9cu: goto label_2bce9c;
        case 0x2bcea0u: goto label_2bcea0;
        case 0x2bcea4u: goto label_2bcea4;
        case 0x2bcea8u: goto label_2bcea8;
        case 0x2bceacu: goto label_2bceac;
        case 0x2bceb0u: goto label_2bceb0;
        case 0x2bceb4u: goto label_2bceb4;
        case 0x2bceb8u: goto label_2bceb8;
        case 0x2bcebcu: goto label_2bcebc;
        case 0x2bcec0u: goto label_2bcec0;
        case 0x2bcec4u: goto label_2bcec4;
        case 0x2bcec8u: goto label_2bcec8;
        case 0x2bceccu: goto label_2bcecc;
        case 0x2bced0u: goto label_2bced0;
        case 0x2bced4u: goto label_2bced4;
        case 0x2bced8u: goto label_2bced8;
        case 0x2bcedcu: goto label_2bcedc;
        case 0x2bcee0u: goto label_2bcee0;
        case 0x2bcee4u: goto label_2bcee4;
        case 0x2bcee8u: goto label_2bcee8;
        case 0x2bceecu: goto label_2bceec;
        case 0x2bcef0u: goto label_2bcef0;
        case 0x2bcef4u: goto label_2bcef4;
        case 0x2bcef8u: goto label_2bcef8;
        case 0x2bcefcu: goto label_2bcefc;
        case 0x2bcf00u: goto label_2bcf00;
        case 0x2bcf04u: goto label_2bcf04;
        case 0x2bcf08u: goto label_2bcf08;
        case 0x2bcf0cu: goto label_2bcf0c;
        case 0x2bcf10u: goto label_2bcf10;
        case 0x2bcf14u: goto label_2bcf14;
        case 0x2bcf18u: goto label_2bcf18;
        case 0x2bcf1cu: goto label_2bcf1c;
        case 0x2bcf20u: goto label_2bcf20;
        case 0x2bcf24u: goto label_2bcf24;
        case 0x2bcf28u: goto label_2bcf28;
        case 0x2bcf2cu: goto label_2bcf2c;
        case 0x2bcf30u: goto label_2bcf30;
        case 0x2bcf34u: goto label_2bcf34;
        case 0x2bcf38u: goto label_2bcf38;
        case 0x2bcf3cu: goto label_2bcf3c;
        case 0x2bcf40u: goto label_2bcf40;
        case 0x2bcf44u: goto label_2bcf44;
        case 0x2bcf48u: goto label_2bcf48;
        case 0x2bcf4cu: goto label_2bcf4c;
        case 0x2bcf50u: goto label_2bcf50;
        case 0x2bcf54u: goto label_2bcf54;
        case 0x2bcf58u: goto label_2bcf58;
        case 0x2bcf5cu: goto label_2bcf5c;
        case 0x2bcf60u: goto label_2bcf60;
        case 0x2bcf64u: goto label_2bcf64;
        case 0x2bcf68u: goto label_2bcf68;
        case 0x2bcf6cu: goto label_2bcf6c;
        case 0x2bcf70u: goto label_2bcf70;
        case 0x2bcf74u: goto label_2bcf74;
        case 0x2bcf78u: goto label_2bcf78;
        case 0x2bcf7cu: goto label_2bcf7c;
        case 0x2bcf80u: goto label_2bcf80;
        case 0x2bcf84u: goto label_2bcf84;
        default: break;
    }

    ctx->pc = 0x2bccb8u;

label_2bccb8:
    // 0x2bccb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2bccb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2bccbc:
    // 0x2bccbc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2bccbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2bccc0:
    // 0x2bccc0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2bccc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2bccc4:
    // 0x2bccc4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bccc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bccc8:
    // 0x2bccc8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2bccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2bcccc:
    // 0x2bcccc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2bccccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2bccd0:
    // 0x2bccd0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2bccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2bccd4:
    // 0x2bccd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bccd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bccd8:
    // 0x2bccd8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2bccd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_2bccdc:
    // 0x2bccdc: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2bccdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2bcce0:
    // 0x2bcce0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2bcce0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bcce4:
    // 0x2bcce4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2bcce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2bcce8:
    // 0x2bcce8: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2bcce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_2bccec:
    // 0x2bccec: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2bccecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_2bccf0:
    // 0x2bccf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bccf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bccf4:
    // 0x2bccf4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2bccf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2bccf8:
    // 0x2bccf8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2bccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2bccfc:
    // 0x2bccfc: 0xc0e409a  jal         func_390268
label_2bcd00:
    if (ctx->pc == 0x2BCD00u) {
        ctx->pc = 0x2BCD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCFCu;
        // 0x2bcd00: 0x8c560000  lw          $s6, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCD04u;
        goto label_2bcd04;
    }
    ctx->pc = 0x2BCCFCu;
    SET_GPR_U32(ctx, 31, 0x2BCD04u);
    ctx->pc = 0x2BCD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCCFCu;
    // 0x2bcd00: 0x8c560000  lw          $s6, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BCCFCu, 0x2BCD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD04u;
label_2bcd04:
    // 0x2bcd04: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2bcd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2bcd08:
    // 0x2bcd08: 0xc0a2fc0  jal         func_28BF00
label_2bcd0c:
    if (ctx->pc == 0x2BCD0Cu) {
        ctx->pc = 0x2BCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD08u;
        // 0x2bcd0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCD10u;
        goto label_2bcd10;
    }
    ctx->pc = 0x2BCD08u;
    SET_GPR_U32(ctx, 31, 0x2BCD10u);
    ctx->pc = 0x2BCD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD08u;
    // 0x2bcd0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2BCD08u, 0x2BCD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD10u;
label_2bcd10:
    // 0x2bcd10: 0x16500006  bne         $s2, $s0, . + 4 + (0x6 << 2)
label_2bcd14:
    if (ctx->pc == 0x2BCD14u) {
        ctx->pc = 0x2BCD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD10u;
        // 0x2bcd14: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCD18u;
        goto label_2bcd18;
    }
    ctx->pc = 0x2BCD10u;
    {
        const bool branch_taken_0x2bcd10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BCD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD10u;
        // 0x2bcd14: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd10) {
            ctx->pc = 0x2BCD2Cu;
            goto label_2bcd2c;
        }
    }
    ctx->pc = 0x2BCD18u;
label_2bcd18:
    // 0x2bcd18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bcd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bcd1c:
    // 0x2bcd1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bcd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcd20:
    // 0x2bcd20: 0x8c440b84  lw          $a0, 0xB84($v0)
    ctx->pc = 0x2bcd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2948)));
label_2bcd24:
    // 0x2bcd24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bcd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2bcd28:
    // 0x2bcd28: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bcd28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bcd2c:
    // 0x2bcd2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bcd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bcd30:
    // 0x2bcd30: 0xc087502  jal         func_21D408
label_2bcd34:
    if (ctx->pc == 0x2BCD34u) {
        ctx->pc = 0x2BCD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD30u;
        // 0x2bcd34: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCD38u;
        goto label_2bcd38;
    }
    ctx->pc = 0x2BCD30u;
    SET_GPR_U32(ctx, 31, 0x2BCD38u);
    ctx->pc = 0x2BCD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD30u;
    // 0x2bcd34: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BCD30u, 0x2BCD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD38u;
label_2bcd38:
    // 0x2bcd38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bcd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcd3c:
    // 0x2bcd3c: 0xc0a3792  jal         func_28DE48
label_2bcd40:
    if (ctx->pc == 0x2BCD40u) {
        ctx->pc = 0x2BCD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD3Cu;
        // 0x2bcd40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCD44u;
        goto label_2bcd44;
    }
    ctx->pc = 0x2BCD3Cu;
    SET_GPR_U32(ctx, 31, 0x2BCD44u);
    ctx->pc = 0x2BCD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD3Cu;
    // 0x2bcd40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2BCD3Cu, 0x2BCD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD44u;
label_2bcd44:
    // 0x2bcd44: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_2bcd48:
    if (ctx->pc == 0x2BCD48u) {
        ctx->pc = 0x2BCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD44u;
        // 0x2bcd48: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCD4Cu;
        goto label_2bcd4c;
    }
    ctx->pc = 0x2BCD44u;
    {
        const bool branch_taken_0x2bcd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD44u;
        // 0x2bcd48: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd44) {
            ctx->pc = 0x2BCD5Cu;
            goto label_2bcd5c;
        }
    }
    ctx->pc = 0x2BCD4Cu;
label_2bcd4c:
    // 0x2bcd4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bcd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcd50:
    // 0x2bcd50: 0x8c440b88  lw          $a0, 0xB88($v0)
    ctx->pc = 0x2bcd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2952)));
label_2bcd54:
    // 0x2bcd54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bcd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2bcd58:
    // 0x2bcd58: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bcd58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bcd5c:
    // 0x2bcd5c: 0xc088e38  jal         func_2238E0
label_2bcd60:
    if (ctx->pc == 0x2BCD60u) {
        ctx->pc = 0x2BCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD5Cu;
        // 0x2bcd60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCD64u;
        goto label_2bcd64;
    }
    ctx->pc = 0x2BCD5Cu;
    SET_GPR_U32(ctx, 31, 0x2BCD64u);
    ctx->pc = 0x2BCD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD5Cu;
    // 0x2bcd60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x2BCD5Cu, 0x2BCD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD64u;
label_2bcd64:
    // 0x2bcd64: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_2bcd68:
    if (ctx->pc == 0x2BCD68u) {
        ctx->pc = 0x2BCD6Cu;
        goto label_2bcd6c;
    }
    ctx->pc = 0x2BCD64u;
    {
        const bool branch_taken_0x2bcd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2bcd64) {
            ctx->pc = 0x2BCD7Cu;
            goto label_2bcd7c;
        }
    }
    ctx->pc = 0x2BCD6Cu;
label_2bcd6c:
    // 0x2bcd6c: 0xc08a034  jal         func_2280D0
label_2bcd70:
    if (ctx->pc == 0x2BCD70u) {
        ctx->pc = 0x2BCD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD6Cu;
        // 0x2bcd70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCD74u;
        goto label_2bcd74;
    }
    ctx->pc = 0x2BCD6Cu;
    SET_GPR_U32(ctx, 31, 0x2BCD74u);
    ctx->pc = 0x2BCD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD6Cu;
    // 0x2bcd70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280D0u, 0x2BCD6Cu, 0x2BCD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD74u;
label_2bcd74:
    // 0x2bcd74: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
label_2bcd78:
    if (ctx->pc == 0x2BCD78u) {
        ctx->pc = 0x2BCD7Cu;
        goto label_2bcd7c;
    }
    ctx->pc = 0x2BCD74u;
    {
        const bool branch_taken_0x2bcd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2bcd74) {
            ctx->pc = 0x2BCDA0u;
            goto label_2bcda0;
        }
    }
    ctx->pc = 0x2BCD7Cu;
label_2bcd7c:
    // 0x2bcd7c: 0xc0e409a  jal         func_390268
label_2bcd80:
    if (ctx->pc == 0x2BCD80u) {
        ctx->pc = 0x2BCD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD7Cu;
        // 0x2bcd80: 0x268400c4  addiu       $a0, $s4, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCD84u;
        goto label_2bcd84;
    }
    ctx->pc = 0x2BCD7Cu;
    SET_GPR_U32(ctx, 31, 0x2BCD84u);
    ctx->pc = 0x2BCD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD7Cu;
    // 0x2bcd80: 0x268400c4  addiu       $a0, $s4, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BCD7Cu, 0x2BCD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD84u;
label_2bcd84:
    // 0x2bcd84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bcd88:
    if (ctx->pc == 0x2BCD88u) {
        ctx->pc = 0x2BCD8Cu;
        goto label_2bcd8c;
    }
    ctx->pc = 0x2BCD84u;
    {
        const bool branch_taken_0x2bcd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd84) {
            ctx->pc = 0x2BCDA0u;
            goto label_2bcda0;
        }
    }
    ctx->pc = 0x2BCD8Cu;
label_2bcd8c:
    // 0x2bcd8c: 0x14520004  bne         $v0, $s2, . + 4 + (0x4 << 2)
label_2bcd90:
    if (ctx->pc == 0x2BCD90u) {
        ctx->pc = 0x2BCD94u;
        goto label_2bcd94;
    }
    ctx->pc = 0x2BCD8Cu;
    {
        const bool branch_taken_0x2bcd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2bcd8c) {
            ctx->pc = 0x2BCDA0u;
            goto label_2bcda0;
        }
    }
    ctx->pc = 0x2BCD94u;
label_2bcd94:
    // 0x2bcd94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bcd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcd98:
    // 0x2bcd98: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x2bcd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_2bcd9c:
    // 0x2bcd9c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bcd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bcda0:
    // 0x2bcda0: 0xc088ee6  jal         func_223B98
label_2bcda4:
    if (ctx->pc == 0x2BCDA4u) {
        ctx->pc = 0x2BCDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCDA0u;
        // 0x2bcda4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCDA8u;
        goto label_2bcda8;
    }
    ctx->pc = 0x2BCDA0u;
    SET_GPR_U32(ctx, 31, 0x2BCDA8u);
    ctx->pc = 0x2BCDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCDA0u;
    // 0x2bcda4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2BCDA0u, 0x2BCDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDA8u;
label_2bcda8:
    // 0x2bcda8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2bcdac:
    if (ctx->pc == 0x2BCDACu) {
        ctx->pc = 0x2BCDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCDA8u;
        // 0x2bcdac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCDB0u;
        goto label_2bcdb0;
    }
    ctx->pc = 0x2BCDA8u;
    {
        const bool branch_taken_0x2bcda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcda8) {
            ctx->pc = 0x2BCDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCDA8u;
            // 0x2bcdac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCDD4u;
            goto label_2bcdd4;
        }
    }
    ctx->pc = 0x2BCDB0u;
label_2bcdb0:
    // 0x2bcdb0: 0xc088ef0  jal         func_223BC0
label_2bcdb4:
    if (ctx->pc == 0x2BCDB4u) {
        ctx->pc = 0x2BCDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCDB0u;
        // 0x2bcdb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCDB8u;
        goto label_2bcdb8;
    }
    ctx->pc = 0x2BCDB0u;
    SET_GPR_U32(ctx, 31, 0x2BCDB8u);
    ctx->pc = 0x2BCDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCDB0u;
    // 0x2bcdb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2BCDB0u, 0x2BCDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDB8u;
label_2bcdb8:
    // 0x2bcdb8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2bcdbc:
    if (ctx->pc == 0x2BCDBCu) {
        ctx->pc = 0x2BCDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCDB8u;
        // 0x2bcdbc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCDC0u;
        goto label_2bcdc0;
    }
    ctx->pc = 0x2BCDB8u;
    {
        const bool branch_taken_0x2bcdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcdb8) {
            ctx->pc = 0x2BCDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCDB8u;
            // 0x2bcdbc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCDD4u;
            goto label_2bcdd4;
        }
    }
    ctx->pc = 0x2BCDC0u;
label_2bcdc0:
    // 0x2bcdc0: 0xc089f66  jal         func_227D98
label_2bcdc4:
    if (ctx->pc == 0x2BCDC4u) {
        ctx->pc = 0x2BCDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCDC0u;
        // 0x2bcdc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCDC8u;
        goto label_2bcdc8;
    }
    ctx->pc = 0x2BCDC0u;
    SET_GPR_U32(ctx, 31, 0x2BCDC8u);
    ctx->pc = 0x2BCDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCDC0u;
    // 0x2bcdc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x2BCDC0u, 0x2BCDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDC8u;
label_2bcdc8:
    // 0x2bcdc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2bcdcc:
    if (ctx->pc == 0x2BCDCCu) {
        ctx->pc = 0x2BCDD0u;
        goto label_2bcdd0;
    }
    ctx->pc = 0x2BCDC8u;
    {
        const bool branch_taken_0x2bcdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcdc8) {
            ctx->pc = 0x2BCDDCu;
            goto label_2bcddc;
        }
    }
    ctx->pc = 0x2BCDD0u;
label_2bcdd0:
    // 0x2bcdd0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bcdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcdd4:
    // 0x2bcdd4: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x2bcdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
label_2bcdd8:
    // 0x2bcdd8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bcdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bcddc:
    // 0x2bcddc: 0xc088e98  jal         func_223A60
label_2bcde0:
    if (ctx->pc == 0x2BCDE0u) {
        ctx->pc = 0x2BCDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCDDCu;
        // 0x2bcde0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCDE4u;
        goto label_2bcde4;
    }
    ctx->pc = 0x2BCDDCu;
    SET_GPR_U32(ctx, 31, 0x2BCDE4u);
    ctx->pc = 0x2BCDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCDDCu;
    // 0x2bcde0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x2BCDDCu, 0x2BCDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDE4u;
label_2bcde4:
    // 0x2bcde4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2bcde8:
    if (ctx->pc == 0x2BCDE8u) {
        ctx->pc = 0x2BCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCDE4u;
        // 0x2bcde8: 0x26530090  addiu       $s3, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCDECu;
        goto label_2bcdec;
    }
    ctx->pc = 0x2BCDE4u;
    {
        const bool branch_taken_0x2bcde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCDE4u;
        // 0x2bcde8: 0x26530090  addiu       $s3, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcde4) {
            ctx->pc = 0x2BCDF8u;
            goto label_2bcdf8;
        }
    }
    ctx->pc = 0x2BCDECu;
label_2bcdec:
    // 0x2bcdec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bcdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcdf0:
    // 0x2bcdf0: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2bcdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_2bcdf4:
    // 0x2bcdf4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bcdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bcdf8:
    // 0x2bcdf8: 0x86c50092  lh          $a1, 0x92($s6)
    ctx->pc = 0x2bcdf8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
label_2bcdfc:
    // 0x2bcdfc: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x2bcdfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2bce00:
    // 0x2bce00: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2bce00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2bce04:
    // 0x2bce04: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x2bce04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2bce08:
    // 0x2bce08: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bce08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2bce0c:
    // 0x2bce0c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2bce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2bce10:
    // 0x2bce10: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2bce10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2bce14:
    // 0x2bce14: 0xc0cdb62  jal         func_336D88
label_2bce18:
    if (ctx->pc == 0x2BCE18u) {
        ctx->pc = 0x2BCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE14u;
        // 0x2bce18: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCE1Cu;
        goto label_2bce1c;
    }
    ctx->pc = 0x2BCE14u;
    SET_GPR_U32(ctx, 31, 0x2BCE1Cu);
    ctx->pc = 0x2BCE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCE14u;
    // 0x2bce18: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2BCE14u, 0x2BCE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE1Cu;
label_2bce1c:
    // 0x2bce1c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2bce1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bce20:
    // 0x2bce20: 0x0  nop
    ctx->pc = 0x2bce20u;
    // NOP
label_2bce24:
    // 0x2bce24: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_2bce28:
    if (ctx->pc == 0x2BCE28u) {
        ctx->pc = 0x2BCE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE24u;
        // 0x2bce28: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCE2Cu;
        goto label_2bce2c;
    }
    ctx->pc = 0x2BCE24u;
    {
        const bool branch_taken_0x2bce24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE24u;
        // 0x2bce28: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce24) {
            ctx->pc = 0x2BCEFCu;
            goto label_2bcefc;
        }
    }
    ctx->pc = 0x2BCE2Cu;
label_2bce2c:
    // 0x2bce2c: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x2bce2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_2bce30:
    // 0x2bce30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bce34:
    // 0x2bce34: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bce34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2bce38:
    // 0x2bce38: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bce38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2bce3c:
    // 0x2bce3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bce40:
    // 0x2bce40: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bce40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bce44:
    // 0x2bce44: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x2bce44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2bce48:
    // 0x2bce48: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x2bce48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2bce4c:
    // 0x2bce4c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2bce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2bce50:
    // 0x2bce50: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bce50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2bce54:
    // 0x2bce54: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2bce54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2bce58:
    // 0x2bce58: 0xc0cdb62  jal         func_336D88
label_2bce5c:
    if (ctx->pc == 0x2BCE5Cu) {
        ctx->pc = 0x2BCE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE58u;
        // 0x2bce5c: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCE60u;
        goto label_2bce60;
    }
    ctx->pc = 0x2BCE58u;
    SET_GPR_U32(ctx, 31, 0x2BCE60u);
    ctx->pc = 0x2BCE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCE58u;
    // 0x2bce5c: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2BCE58u, 0x2BCE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE60u;
label_2bce60:
    // 0x2bce60: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2bce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2bce64:
    // 0x2bce64: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bce64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2bce68:
    // 0x2bce68: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2bce68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2bce6c:
    // 0x2bce6c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2bce6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2bce70:
    // 0x2bce70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bce70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bce74:
    // 0x2bce74: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2bce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bce78:
    // 0x2bce78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bce78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2bce7c:
    // 0x2bce7c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2bce7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bce80:
    // 0x2bce80: 0x0  nop
    ctx->pc = 0x2bce80u;
    // NOP
label_2bce84:
    // 0x2bce84: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_2bce88:
    if (ctx->pc == 0x2BCE88u) {
        ctx->pc = 0x2BCE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE84u;
        // 0x2bce88: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCE8Cu;
        goto label_2bce8c;
    }
    ctx->pc = 0x2BCE84u;
    {
        const bool branch_taken_0x2bce84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE84u;
        // 0x2bce88: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce84) {
            ctx->pc = 0x2BCF0Cu;
            goto label_2bcf0c;
        }
    }
    ctx->pc = 0x2BCE8Cu;
label_2bce8c:
    // 0x2bce8c: 0xc087502  jal         func_21D408
label_2bce90:
    if (ctx->pc == 0x2BCE90u) {
        ctx->pc = 0x2BCE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE8Cu;
        // 0x2bce90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCE94u;
        goto label_2bce94;
    }
    ctx->pc = 0x2BCE8Cu;
    SET_GPR_U32(ctx, 31, 0x2BCE94u);
    ctx->pc = 0x2BCE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCE8Cu;
    // 0x2bce90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BCE8Cu, 0x2BCE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE94u;
label_2bce94:
    // 0x2bce94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bce94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bce98:
    // 0x2bce98: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x2bce98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2bce9c:
    // 0x2bce9c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2bcea0:
    if (ctx->pc == 0x2BCEA0u) {
        ctx->pc = 0x2BCEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE9Cu;
        // 0x2bcea0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCEA4u;
        goto label_2bcea4;
    }
    ctx->pc = 0x2BCE9Cu;
    {
        const bool branch_taken_0x2bce9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BCEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE9Cu;
        // 0x2bcea0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce9c) {
            ctx->pc = 0x2BCEB0u;
            goto label_2bceb0;
        }
    }
    ctx->pc = 0x2BCEA4u;
label_2bcea4:
    // 0x2bcea4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2bcea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2bcea8:
    // 0x2bcea8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bceac:
    if (ctx->pc == 0x2BCEACu) {
        ctx->pc = 0x2BCEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEA8u;
        // 0x2bceac: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCEB0u;
        goto label_2bceb0;
    }
    ctx->pc = 0x2BCEA8u;
    {
        const bool branch_taken_0x2bcea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEA8u;
        // 0x2bceac: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcea8) {
            ctx->pc = 0x2BCEB4u;
            goto label_2bceb4;
        }
    }
    ctx->pc = 0x2BCEB0u;
label_2bceb0:
    // 0x2bceb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bceb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bceb4:
    // 0x2bceb4: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_2bceb8:
    if (ctx->pc == 0x2BCEB8u) {
        ctx->pc = 0x2BCEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEB4u;
        // 0x2bceb8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCEBCu;
        goto label_2bcebc;
    }
    ctx->pc = 0x2BCEB4u;
    {
        const bool branch_taken_0x2bceb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEB4u;
        // 0x2bceb8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bceb4) {
            ctx->pc = 0x2BCEFCu;
            goto label_2bcefc;
        }
    }
    ctx->pc = 0x2BCEBCu;
label_2bcebc:
    // 0x2bcebc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2bcebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2bcec0:
    // 0x2bcec0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2bcec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2bcec4:
    // 0x2bcec4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2bcec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2bcec8:
    // 0x2bcec8: 0x40f809  jalr        $v0
label_2bcecc:
    if (ctx->pc == 0x2BCECCu) {
        ctx->pc = 0x2BCECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEC8u;
        // 0x2bcecc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCED0u;
        goto label_2bced0;
    }
    ctx->pc = 0x2BCEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BCED0u);
        ctx->pc = 0x2BCECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEC8u;
        // 0x2bcecc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCEC8u, 0x2BCED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BCED0u;
label_2bced0:
    // 0x2bced0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2bced0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2bced4:
    // 0x2bced4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_2bced8:
    if (ctx->pc == 0x2BCED8u) {
        ctx->pc = 0x2BCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCED4u;
        // 0x2bced8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCEDCu;
        goto label_2bcedc;
    }
    ctx->pc = 0x2BCED4u;
    {
        const bool branch_taken_0x2bced4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCED4u;
        // 0x2bced8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bced4) {
            ctx->pc = 0x2BCEFCu;
            goto label_2bcefc;
        }
    }
    ctx->pc = 0x2BCEDCu;
label_2bcedc:
    // 0x2bcedc: 0xc0e409a  jal         func_390268
label_2bcee0:
    if (ctx->pc == 0x2BCEE0u) {
        ctx->pc = 0x2BCEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEDCu;
        // 0x2bcee0: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCEE4u;
        goto label_2bcee4;
    }
    ctx->pc = 0x2BCEDCu;
    SET_GPR_U32(ctx, 31, 0x2BCEE4u);
    ctx->pc = 0x2BCEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCEDCu;
    // 0x2bcee0: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BCEDCu, 0x2BCEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCEE4u;
label_2bcee4:
    // 0x2bcee4: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
label_2bcee8:
    if (ctx->pc == 0x2BCEE8u) {
        ctx->pc = 0x2BCEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEE4u;
        // 0x2bcee8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCEECu;
        goto label_2bceec;
    }
    ctx->pc = 0x2BCEE4u;
    {
        const bool branch_taken_0x2bcee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2BCEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEE4u;
        // 0x2bcee8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcee4) {
            ctx->pc = 0x2BCEFCu;
            goto label_2bcefc;
        }
    }
    ctx->pc = 0x2BCEECu;
label_2bceec:
    // 0x2bceec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcef0:
    // 0x2bcef0: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2bcef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_2bcef4:
    // 0x2bcef4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2bcef8:
    if (ctx->pc == 0x2BCEF8u) {
        ctx->pc = 0x2BCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEF4u;
        // 0x2bcef8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCEFCu;
        goto label_2bcefc;
    }
    ctx->pc = 0x2BCEF4u;
    {
        const bool branch_taken_0x2bcef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEF4u;
        // 0x2bcef8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcef4) {
            ctx->pc = 0x2BCF08u;
            goto label_2bcf08;
        }
    }
    ctx->pc = 0x2BCEFCu;
label_2bcefc:
    // 0x2bcefc: 0x8c4319e8  lw          $v1, 0x19E8($v0)
    ctx->pc = 0x2bcefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6632)));
label_2bcf00:
    // 0x2bcf00: 0x10000015  b           . + 4 + (0x15 << 2)
label_2bcf04:
    if (ctx->pc == 0x2BCF04u) {
        ctx->pc = 0x2BCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF00u;
        // 0x2bcf04: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF08u;
        goto label_2bcf08;
    }
    ctx->pc = 0x2BCF00u;
    {
        const bool branch_taken_0x2bcf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF00u;
        // 0x2bcf04: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf00) {
            ctx->pc = 0x2BCF58u;
            goto label_2bcf58;
        }
    }
    ctx->pc = 0x2BCF08u;
label_2bcf08:
    // 0x2bcf08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bcf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bcf0c:
    // 0x2bcf0c: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x2bcf0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_2bcf10:
    // 0x2bcf10: 0xc4410b50  lwc1        $f1, 0xB50($v0)
    ctx->pc = 0x2bcf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bcf14:
    // 0x2bcf14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bcf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bcf18:
    // 0x2bcf18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bcf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcf1c:
    // 0x2bcf1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bcf1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2bcf20:
    // 0x2bcf20: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bcf20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2bcf24:
    // 0x2bcf24: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bcf24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2bcf28:
    // 0x2bcf28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bcf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bcf2c:
    // 0x2bcf2c: 0xc087502  jal         func_21D408
label_2bcf30:
    if (ctx->pc == 0x2BCF30u) {
        ctx->pc = 0x2BCF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF2Cu;
        // 0x2bcf30: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF34u;
        goto label_2bcf34;
    }
    ctx->pc = 0x2BCF2Cu;
    SET_GPR_U32(ctx, 31, 0x2BCF34u);
    ctx->pc = 0x2BCF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF2Cu;
    // 0x2bcf30: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BCF2Cu, 0x2BCF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF34u;
label_2bcf34:
    // 0x2bcf34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bcf34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcf38:
    // 0x2bcf38: 0xc136b80  jal         func_4DAE00
label_2bcf3c:
    if (ctx->pc == 0x2BCF3Cu) {
        ctx->pc = 0x2BCF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF38u;
        // 0x2bcf3c: 0x260401a4  addiu       $a0, $s0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF40u;
        goto label_2bcf40;
    }
    ctx->pc = 0x2BCF38u;
    SET_GPR_U32(ctx, 31, 0x2BCF40u);
    ctx->pc = 0x2BCF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF38u;
    // 0x2bcf3c: 0x260401a4  addiu       $a0, $s0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2BCF38u, 0x2BCF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF40u;
label_2bcf40:
    // 0x2bcf40: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x2bcf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_2bcf44:
    // 0x2bcf44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bcf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcf48:
    // 0x2bcf48: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2bcf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2bcf4c:
    // 0x2bcf4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bcf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2bcf50:
    // 0x2bcf50: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2bcf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2bcf54:
    // 0x2bcf54: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2bcf54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_2bcf58:
    // 0x2bcf58: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2bcf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bcf5c:
    // 0x2bcf5c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2bcf5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bcf60:
    // 0x2bcf60: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2bcf60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bcf64:
    // 0x2bcf64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2bcf64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bcf68:
    // 0x2bcf68: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2bcf68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bcf6c:
    // 0x2bcf6c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2bcf6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bcf70:
    // 0x2bcf70: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2bcf70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bcf74:
    // 0x2bcf74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bcf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bcf78:
    // 0x2bcf78: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2bcf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2bcf7c:
    // 0x2bcf7c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2bcf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bcf80:
    // 0x2bcf80: 0x3e00008  jr          $ra
label_2bcf84:
    if (ctx->pc == 0x2BCF84u) {
        ctx->pc = 0x2BCF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF80u;
        // 0x2bcf84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF88u;
        goto label_fallthrough_0x2bcf80;
    }
    ctx->pc = 0x2BCF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF80u;
        // 0x2bcf84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2bcf80:
    ctx->pc = 0x2BCF88u;
}
