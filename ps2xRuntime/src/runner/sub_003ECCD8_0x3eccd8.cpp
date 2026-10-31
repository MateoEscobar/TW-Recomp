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

// Function: sub_003ECCD8
// Address: 0x3eccd8 - 0x3ecdc8
void sub_003ECCD8_0x3eccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ECCD8_0x3eccd8");
#endif

    switch (ctx->pc) {
        case 0x3eccd8u: goto label_3eccd8;
        case 0x3eccdcu: goto label_3eccdc;
        case 0x3ecce0u: goto label_3ecce0;
        case 0x3ecce4u: goto label_3ecce4;
        case 0x3ecce8u: goto label_3ecce8;
        case 0x3eccecu: goto label_3eccec;
        case 0x3eccf0u: goto label_3eccf0;
        case 0x3eccf4u: goto label_3eccf4;
        case 0x3eccf8u: goto label_3eccf8;
        case 0x3eccfcu: goto label_3eccfc;
        case 0x3ecd00u: goto label_3ecd00;
        case 0x3ecd04u: goto label_3ecd04;
        case 0x3ecd08u: goto label_3ecd08;
        case 0x3ecd0cu: goto label_3ecd0c;
        case 0x3ecd10u: goto label_3ecd10;
        case 0x3ecd14u: goto label_3ecd14;
        case 0x3ecd18u: goto label_3ecd18;
        case 0x3ecd1cu: goto label_3ecd1c;
        case 0x3ecd20u: goto label_3ecd20;
        case 0x3ecd24u: goto label_3ecd24;
        case 0x3ecd28u: goto label_3ecd28;
        case 0x3ecd2cu: goto label_3ecd2c;
        case 0x3ecd30u: goto label_3ecd30;
        case 0x3ecd34u: goto label_3ecd34;
        case 0x3ecd38u: goto label_3ecd38;
        case 0x3ecd3cu: goto label_3ecd3c;
        case 0x3ecd40u: goto label_3ecd40;
        case 0x3ecd44u: goto label_3ecd44;
        case 0x3ecd48u: goto label_3ecd48;
        case 0x3ecd4cu: goto label_3ecd4c;
        case 0x3ecd50u: goto label_3ecd50;
        case 0x3ecd54u: goto label_3ecd54;
        case 0x3ecd58u: goto label_3ecd58;
        case 0x3ecd5cu: goto label_3ecd5c;
        case 0x3ecd60u: goto label_3ecd60;
        case 0x3ecd64u: goto label_3ecd64;
        case 0x3ecd68u: goto label_3ecd68;
        case 0x3ecd6cu: goto label_3ecd6c;
        case 0x3ecd70u: goto label_3ecd70;
        case 0x3ecd74u: goto label_3ecd74;
        case 0x3ecd78u: goto label_3ecd78;
        case 0x3ecd7cu: goto label_3ecd7c;
        case 0x3ecd80u: goto label_3ecd80;
        case 0x3ecd84u: goto label_3ecd84;
        case 0x3ecd88u: goto label_3ecd88;
        case 0x3ecd8cu: goto label_3ecd8c;
        case 0x3ecd90u: goto label_3ecd90;
        case 0x3ecd94u: goto label_3ecd94;
        case 0x3ecd98u: goto label_3ecd98;
        case 0x3ecd9cu: goto label_3ecd9c;
        case 0x3ecda0u: goto label_3ecda0;
        case 0x3ecda4u: goto label_3ecda4;
        case 0x3ecda8u: goto label_3ecda8;
        case 0x3ecdacu: goto label_3ecdac;
        case 0x3ecdb0u: goto label_3ecdb0;
        case 0x3ecdb4u: goto label_3ecdb4;
        case 0x3ecdb8u: goto label_3ecdb8;
        case 0x3ecdbcu: goto label_3ecdbc;
        case 0x3ecdc0u: goto label_3ecdc0;
        case 0x3ecdc4u: goto label_3ecdc4;
        default: break;
    }

    ctx->pc = 0x3eccd8u;

label_3eccd8:
    // 0x3eccd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3eccd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3eccdc:
    // 0x3eccdc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3eccdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3ecce0:
    // 0x3ecce0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ecce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ecce4:
    // 0x3ecce4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ecce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ecce8:
    // 0x3ecce8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3ecce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3eccec:
    // 0x3eccec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eccecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eccf0:
    // 0x3eccf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3eccf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3eccf4:
    // 0x3eccf4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eccf8:
    // 0x3eccf8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eccf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eccfc:
    // 0x3eccfc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ecd00:
    // 0x3ecd00: 0x40f809  jalr        $v0
label_3ecd04:
    if (ctx->pc == 0x3ECD04u) {
        ctx->pc = 0x3ECD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD00u;
        // 0x3ecd04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECD08u;
        goto label_3ecd08;
    }
    ctx->pc = 0x3ECD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ECD08u);
        ctx->pc = 0x3ECD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD00u;
        // 0x3ecd04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECD00u, 0x3ECD08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ECD08u;
label_3ecd08:
    // 0x3ecd08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ecd08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ecd0c:
    // 0x3ecd0c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3ecd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3ecd10:
    // 0x3ecd10: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_3ecd14:
    if (ctx->pc == 0x3ECD14u) {
        ctx->pc = 0x3ECD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD10u;
        // 0x3ecd14: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECD18u;
        goto label_3ecd18;
    }
    ctx->pc = 0x3ECD10u;
    {
        const bool branch_taken_0x3ecd10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ECD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD10u;
        // 0x3ecd14: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd10) {
            ctx->pc = 0x3ECD28u;
            goto label_3ecd28;
        }
    }
    ctx->pc = 0x3ECD18u;
label_3ecd18:
    // 0x3ecd18: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
label_3ecd1c:
    if (ctx->pc == 0x3ECD1Cu) {
        ctx->pc = 0x3ECD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD18u;
        // 0x3ecd1c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECD20u;
        goto label_3ecd20;
    }
    ctx->pc = 0x3ECD18u;
    {
        const bool branch_taken_0x3ecd18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ECD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD18u;
        // 0x3ecd1c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd18) {
            ctx->pc = 0x3ECD74u;
            goto label_3ecd74;
        }
    }
    ctx->pc = 0x3ECD20u;
label_3ecd20:
    // 0x3ecd20: 0x10000025  b           . + 4 + (0x25 << 2)
label_3ecd24:
    if (ctx->pc == 0x3ECD24u) {
        ctx->pc = 0x3ECD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD20u;
        // 0x3ecd24: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECD28u;
        goto label_3ecd28;
    }
    ctx->pc = 0x3ECD20u;
    {
        const bool branch_taken_0x3ecd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD20u;
        // 0x3ecd24: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd20) {
            ctx->pc = 0x3ECDB8u;
            goto label_3ecdb8;
        }
    }
    ctx->pc = 0x3ECD28u;
label_3ecd28:
    // 0x3ecd28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ecd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ecd2c:
    // 0x3ecd2c: 0xc0e858c  jal         func_3A1630
label_3ecd30:
    if (ctx->pc == 0x3ECD30u) {
        ctx->pc = 0x3ECD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD2Cu;
        // 0x3ecd30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECD34u;
        goto label_3ecd34;
    }
    ctx->pc = 0x3ECD2Cu;
    SET_GPR_U32(ctx, 31, 0x3ECD34u);
    ctx->pc = 0x3ECD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECD2Cu;
    // 0x3ecd30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3ECD2Cu, 0x3ECD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECD34u;
label_3ecd34:
    // 0x3ecd34: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3ecd34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3ecd38:
    // 0x3ecd38: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3ecd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3ecd3c:
    // 0x3ecd3c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3ecd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3ecd40:
    // 0x3ecd40: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3ecd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3ecd44:
    // 0x3ecd44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ecd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ecd48:
    // 0x3ecd48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ecd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ecd4c:
    // 0x3ecd4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ecd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ecd50:
    // 0x3ecd50: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3ecd50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3ecd54:
    // 0x3ecd54: 0xc0e8cda  jal         func_3A3368
label_3ecd58:
    if (ctx->pc == 0x3ECD58u) {
        ctx->pc = 0x3ECD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD54u;
        // 0x3ecd58: 0xae460000  sw          $a2, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECD5Cu;
        goto label_3ecd5c;
    }
    ctx->pc = 0x3ECD54u;
    SET_GPR_U32(ctx, 31, 0x3ECD5Cu);
    ctx->pc = 0x3ECD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECD54u;
    // 0x3ecd58: 0xae460000  sw          $a2, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3ECD54u, 0x3ECD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECD5Cu;
label_3ecd5c:
    // 0x3ecd5c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3ecd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3ecd60:
    // 0x3ecd60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ecd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ecd64:
    // 0x3ecd64: 0xc0e8cbc  jal         func_3A32F0
label_3ecd68:
    if (ctx->pc == 0x3ECD68u) {
        ctx->pc = 0x3ECD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD64u;
        // 0x3ecd68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECD6Cu;
        goto label_3ecd6c;
    }
    ctx->pc = 0x3ECD64u;
    SET_GPR_U32(ctx, 31, 0x3ECD6Cu);
    ctx->pc = 0x3ECD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECD64u;
    // 0x3ecd68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3ECD64u, 0x3ECD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECD6Cu;
label_3ecd6c:
    // 0x3ecd6c: 0x10000011  b           . + 4 + (0x11 << 2)
label_3ecd70:
    if (ctx->pc == 0x3ECD70u) {
        ctx->pc = 0x3ECD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD6Cu;
        // 0x3ecd70: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECD74u;
        goto label_3ecd74;
    }
    ctx->pc = 0x3ECD6Cu;
    {
        const bool branch_taken_0x3ecd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD6Cu;
        // 0x3ecd70: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd6c) {
            ctx->pc = 0x3ECDB4u;
            goto label_3ecdb4;
        }
    }
    ctx->pc = 0x3ECD74u;
label_3ecd74:
    // 0x3ecd74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ecd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ecd78:
    // 0x3ecd78: 0xc0e858c  jal         func_3A1630
label_3ecd7c:
    if (ctx->pc == 0x3ECD7Cu) {
        ctx->pc = 0x3ECD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD78u;
        // 0x3ecd7c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECD80u;
        goto label_3ecd80;
    }
    ctx->pc = 0x3ECD78u;
    SET_GPR_U32(ctx, 31, 0x3ECD80u);
    ctx->pc = 0x3ECD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECD78u;
    // 0x3ecd7c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3ECD78u, 0x3ECD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECD80u;
label_3ecd80:
    // 0x3ecd80: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3ecd80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3ecd84:
    // 0x3ecd84: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3ecd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3ecd88:
    // 0x3ecd88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ecd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ecd8c:
    // 0x3ecd8c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3ecd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3ecd90:
    // 0x3ecd90: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3ecd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3ecd94:
    // 0x3ecd94: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3ecd94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3ecd98:
    // 0x3ecd98: 0xc0e8cda  jal         func_3A3368
label_3ecd9c:
    if (ctx->pc == 0x3ECD9Cu) {
        ctx->pc = 0x3ECD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD98u;
        // 0x3ecd9c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECDA0u;
        goto label_3ecda0;
    }
    ctx->pc = 0x3ECD98u;
    SET_GPR_U32(ctx, 31, 0x3ECDA0u);
    ctx->pc = 0x3ECD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECD98u;
    // 0x3ecd9c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3ECD98u, 0x3ECDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECDA0u;
label_3ecda0:
    // 0x3ecda0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3ecda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3ecda4:
    // 0x3ecda4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ecda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ecda8:
    // 0x3ecda8: 0xc0e8cbc  jal         func_3A32F0
label_3ecdac:
    if (ctx->pc == 0x3ECDACu) {
        ctx->pc = 0x3ECDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECDA8u;
        // 0x3ecdac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECDB0u;
        goto label_3ecdb0;
    }
    ctx->pc = 0x3ECDA8u;
    SET_GPR_U32(ctx, 31, 0x3ECDB0u);
    ctx->pc = 0x3ECDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECDA8u;
    // 0x3ecdac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3ECDA8u, 0x3ECDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECDB0u;
label_3ecdb0:
    // 0x3ecdb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3ecdb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ecdb4:
    // 0x3ecdb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ecdb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ecdb8:
    // 0x3ecdb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3ecdb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ecdbc:
    // 0x3ecdbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ecdbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ecdc0:
    // 0x3ecdc0: 0x3e00008  jr          $ra
label_3ecdc4:
    if (ctx->pc == 0x3ECDC4u) {
        ctx->pc = 0x3ECDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECDC0u;
        // 0x3ecdc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECDC8u;
        goto label_fallthrough_0x3ecdc0;
    }
    ctx->pc = 0x3ECDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECDC0u;
        // 0x3ecdc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ecdc0:
    ctx->pc = 0x3ECDC8u;
}
