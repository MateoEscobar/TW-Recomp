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

// Function: sub_0022BCE0
// Address: 0x22bce0 - 0x22bdc0
void sub_0022BCE0_0x22bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BCE0_0x22bce0");
#endif

    switch (ctx->pc) {
        case 0x22bce0u: goto label_22bce0;
        case 0x22bce4u: goto label_22bce4;
        case 0x22bce8u: goto label_22bce8;
        case 0x22bcecu: goto label_22bcec;
        case 0x22bcf0u: goto label_22bcf0;
        case 0x22bcf4u: goto label_22bcf4;
        case 0x22bcf8u: goto label_22bcf8;
        case 0x22bcfcu: goto label_22bcfc;
        case 0x22bd00u: goto label_22bd00;
        case 0x22bd04u: goto label_22bd04;
        case 0x22bd08u: goto label_22bd08;
        case 0x22bd0cu: goto label_22bd0c;
        case 0x22bd10u: goto label_22bd10;
        case 0x22bd14u: goto label_22bd14;
        case 0x22bd18u: goto label_22bd18;
        case 0x22bd1cu: goto label_22bd1c;
        case 0x22bd20u: goto label_22bd20;
        case 0x22bd24u: goto label_22bd24;
        case 0x22bd28u: goto label_22bd28;
        case 0x22bd2cu: goto label_22bd2c;
        case 0x22bd30u: goto label_22bd30;
        case 0x22bd34u: goto label_22bd34;
        case 0x22bd38u: goto label_22bd38;
        case 0x22bd3cu: goto label_22bd3c;
        case 0x22bd40u: goto label_22bd40;
        case 0x22bd44u: goto label_22bd44;
        case 0x22bd48u: goto label_22bd48;
        case 0x22bd4cu: goto label_22bd4c;
        case 0x22bd50u: goto label_22bd50;
        case 0x22bd54u: goto label_22bd54;
        case 0x22bd58u: goto label_22bd58;
        case 0x22bd5cu: goto label_22bd5c;
        case 0x22bd60u: goto label_22bd60;
        case 0x22bd64u: goto label_22bd64;
        case 0x22bd68u: goto label_22bd68;
        case 0x22bd6cu: goto label_22bd6c;
        case 0x22bd70u: goto label_22bd70;
        case 0x22bd74u: goto label_22bd74;
        case 0x22bd78u: goto label_22bd78;
        case 0x22bd7cu: goto label_22bd7c;
        case 0x22bd80u: goto label_22bd80;
        case 0x22bd84u: goto label_22bd84;
        case 0x22bd88u: goto label_22bd88;
        case 0x22bd8cu: goto label_22bd8c;
        case 0x22bd90u: goto label_22bd90;
        case 0x22bd94u: goto label_22bd94;
        case 0x22bd98u: goto label_22bd98;
        case 0x22bd9cu: goto label_22bd9c;
        case 0x22bda0u: goto label_22bda0;
        case 0x22bda4u: goto label_22bda4;
        case 0x22bda8u: goto label_22bda8;
        case 0x22bdacu: goto label_22bdac;
        case 0x22bdb0u: goto label_22bdb0;
        case 0x22bdb4u: goto label_22bdb4;
        case 0x22bdb8u: goto label_22bdb8;
        case 0x22bdbcu: goto label_22bdbc;
        default: break;
    }

    ctx->pc = 0x22bce0u;

label_22bce0:
    // 0x22bce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22bce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22bce4:
    // 0x22bce4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22bce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22bce8:
    // 0x22bce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22bce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22bcec:
    // 0x22bcec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22bcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22bcf0:
    // 0x22bcf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22bcf4:
    // 0x22bcf4: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_22bcf8:
    if (ctx->pc == 0x22BCF8u) {
        ctx->pc = 0x22BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCF4u;
        // 0x22bcf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BCFCu;
        goto label_22bcfc;
    }
    ctx->pc = 0x22BCF4u;
    {
        const bool branch_taken_0x22bcf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCF4u;
        // 0x22bcf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bcf4) {
            ctx->pc = 0x22BDA8u;
            goto label_22bda8;
        }
    }
    ctx->pc = 0x22BCFCu;
label_22bcfc:
    // 0x22bcfc: 0xc08997c  jal         func_2265F0
label_22bd00:
    if (ctx->pc == 0x22BD00u) {
        ctx->pc = 0x22BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCFCu;
        // 0x22bd00: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD04u;
        goto label_22bd04;
    }
    ctx->pc = 0x22BCFCu;
    SET_GPR_U32(ctx, 31, 0x22BD04u);
    ctx->pc = 0x22BD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BCFCu;
    // 0x22bd00: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22BCFCu, 0x22BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD04u;
label_22bd04:
    // 0x22bd04: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_22bd08:
    if (ctx->pc == 0x22BD08u) {
        ctx->pc = 0x22BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD04u;
        // 0x22bd08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD0Cu;
        goto label_22bd0c;
    }
    ctx->pc = 0x22BD04u;
    {
        const bool branch_taken_0x22bd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD04u;
        // 0x22bd08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd04) {
            ctx->pc = 0x22BDA8u;
            goto label_22bda8;
        }
    }
    ctx->pc = 0x22BD0Cu;
label_22bd0c:
    // 0x22bd0c: 0xc089988  jal         func_226620
label_22bd10:
    if (ctx->pc == 0x22BD10u) {
        ctx->pc = 0x22BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD0Cu;
        // 0x22bd10: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD14u;
        goto label_22bd14;
    }
    ctx->pc = 0x22BD0Cu;
    SET_GPR_U32(ctx, 31, 0x22BD14u);
    ctx->pc = 0x22BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD0Cu;
    // 0x22bd10: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22BD0Cu, 0x22BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD14u;
label_22bd14:
    // 0x22bd14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22bd18:
    // 0x22bd18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22bd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22bd1c:
    // 0x22bd1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22bd1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22bd20:
    // 0x22bd20: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22bd24:
    // 0x22bd24: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22bd28:
    // 0x22bd28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22bd2c:
    // 0x22bd2c: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x22bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_22bd30:
    // 0x22bd30: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22bd30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22bd34:
    // 0x22bd34: 0x8c4600e4  lw          $a2, 0xE4($v0)
    ctx->pc = 0x22bd34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22bd38:
    // 0x22bd38: 0xc0f809  jalr        $a2
label_22bd3c:
    if (ctx->pc == 0x22BD3Cu) {
        ctx->pc = 0x22BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD38u;
        // 0x22bd3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD40u;
        goto label_22bd40;
    }
    ctx->pc = 0x22BD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x22BD40u);
        ctx->pc = 0x22BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD38u;
        // 0x22bd3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BD38u, 0x22BD40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BD40u;
label_22bd40:
    // 0x22bd40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22bd44:
    // 0x22bd44: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22bd44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22bd48:
    // 0x22bd48: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22bd4c:
    // 0x22bd4c: 0x40f809  jalr        $v0
label_22bd50:
    if (ctx->pc == 0x22BD50u) {
        ctx->pc = 0x22BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD4Cu;
        // 0x22bd50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD54u;
        goto label_22bd54;
    }
    ctx->pc = 0x22BD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BD54u);
        ctx->pc = 0x22BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD4Cu;
        // 0x22bd50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BD4Cu, 0x22BD54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BD54u;
label_22bd54:
    // 0x22bd54: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_22bd58:
    if (ctx->pc == 0x22BD58u) {
        ctx->pc = 0x22BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD54u;
        // 0x22bd58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD5Cu;
        goto label_22bd5c;
    }
    ctx->pc = 0x22BD54u;
    {
        const bool branch_taken_0x22bd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bd54) {
            ctx->pc = 0x22BD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BD54u;
            // 0x22bd58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BDACu;
            goto label_22bdac;
        }
    }
    ctx->pc = 0x22BD5Cu;
label_22bd5c:
    // 0x22bd5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22bd60:
    // 0x22bd60: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22bd60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22bd64:
    // 0x22bd64: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22bd68:
    // 0x22bd68: 0x40f809  jalr        $v0
label_22bd6c:
    if (ctx->pc == 0x22BD6Cu) {
        ctx->pc = 0x22BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD68u;
        // 0x22bd6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD70u;
        goto label_22bd70;
    }
    ctx->pc = 0x22BD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BD70u);
        ctx->pc = 0x22BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD68u;
        // 0x22bd6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BD68u, 0x22BD70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BD70u;
label_22bd70:
    // 0x22bd70: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22bd70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22bd74:
    // 0x22bd74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22bd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22bd78:
    // 0x22bd78: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22bd78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22bd7c:
    // 0x22bd7c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22bd80:
    // 0x22bd80: 0x40f809  jalr        $v0
label_22bd84:
    if (ctx->pc == 0x22BD84u) {
        ctx->pc = 0x22BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD80u;
        // 0x22bd84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD88u;
        goto label_22bd88;
    }
    ctx->pc = 0x22BD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BD88u);
        ctx->pc = 0x22BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD80u;
        // 0x22bd84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BD80u, 0x22BD88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BD88u;
label_22bd88:
    // 0x22bd88: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22bd8c:
    // 0x22bd8c: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x22bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_22bd90:
    // 0x22bd90: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22bd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22bd94:
    // 0x22bd94: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_22bd98:
    if (ctx->pc == 0x22BD98u) {
        ctx->pc = 0x22BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD94u;
        // 0x22bd98: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD9Cu;
        goto label_22bd9c;
    }
    ctx->pc = 0x22BD94u;
    {
        const bool branch_taken_0x22bd94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD94u;
        // 0x22bd98: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd94) {
            ctx->pc = 0x22BDA8u;
            goto label_22bda8;
        }
    }
    ctx->pc = 0x22BD9Cu;
label_22bd9c:
    // 0x22bd9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22bd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22bda0:
    // 0x22bda0: 0xc08af70  jal         func_22BDC0
label_22bda4:
    if (ctx->pc == 0x22BDA4u) {
        ctx->pc = 0x22BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDA0u;
        // 0x22bda4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BDA8u;
        goto label_22bda8;
    }
    ctx->pc = 0x22BDA0u;
    SET_GPR_U32(ctx, 31, 0x22BDA8u);
    ctx->pc = 0x22BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BDA0u;
    // 0x22bda4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BDC0u, 0x22BDA0u, 0x22BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDA8u;
label_22bda8:
    // 0x22bda8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22bda8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22bdac:
    // 0x22bdac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22bdacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22bdb0:
    // 0x22bdb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22bdb4:
    // 0x22bdb4: 0x3e00008  jr          $ra
label_22bdb8:
    if (ctx->pc == 0x22BDB8u) {
        ctx->pc = 0x22BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDB4u;
        // 0x22bdb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BDBCu;
        goto label_22bdbc;
    }
    ctx->pc = 0x22BDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDB4u;
        // 0x22bdb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BDBCu;
label_22bdbc:
    // 0x22bdbc: 0x0  nop
    ctx->pc = 0x22bdbcu;
    // NOP
    ctx->pc = 0x22bdc0u;
}
